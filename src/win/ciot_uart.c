/**
 * @file ciot_uart.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-12-11
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "ciot_uart.h"
#include "winsock2.h"
#include "windows.h"
#include "mongoose.h"

struct ciot_uart
{
    ciot_uart_base_t base;
    HANDLE handle;
    DCB params;
    COMMTIMEOUTS timeouts;
    DWORD bytes_written;
    DWORD bytes_read;
    char port_name[10];
};

static const char *TAG = "ciot_uart";

static void ciot_uart_process_error(ciot_uart_t self, DWORD error);
static ciot_err_t ciot_uart_process_status(ciot_uart_t self, COMSTAT *status);
static void ciot_uart_flush(ciot_uart_t self);

ciot_uart_t ciot_uart_new(void *handle)
{
    ciot_uart_t self = calloc(1, sizeof(struct ciot_uart));
    ciot_uart_init(self);
    return self;
}

ciot_err_t ciot_uart_start(ciot_uart_t self, ciot_uart_cfg_t *cfg)
{
    CIOT_ERR_NULL_CHECK(self);
    CIOT_ERR_NULL_CHECK(cfg);
    ciot_uart_base_t *base = &self->base;

    base->cfg = *cfg;

    sprintf(self->port_name, "\\\\.\\COM%d", base->cfg.num);

    self->handle = CreateFile(self->port_name, GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_EXISTING, 0, NULL);
    if(self->handle == INVALID_HANDLE_VALUE)
    {
        CIOT_LOGE(TAG, "Unable to open serial port COM%d", base->cfg.num);
        base->status.state = CIOT_UART_STATE_INTERNAL_ERROR;
        base->status.error = CIOT_UART_ERROR_OPEN;
        ciot_iface_send_event_type(&base->iface, CIOT_EVENT_TYPE_STOPPED);
        return CIOT_ERR_FAIL;
    }

    self->params.DCBlength = sizeof(self->params);
    if(!GetCommState(self->handle, &self->params))
    {
        CIOT_LOGE(TAG, "GetCommState failed at COM%d", base->cfg.num);
        base->status.state = CIOT_UART_STATE_INTERNAL_ERROR;
        base->status.error = CIOT_UART_ERROR_OPEN;
        ciot_iface_send_event_type(&base->iface, CIOT_EVENT_TYPE_STOPPED);
        return CIOT_ERR_FAIL;
    }

    self->params.BaudRate = base->cfg.baud_rate;
    self->params.ByteSize = 8;
    self->params.StopBits = ONESTOPBIT;
    self->params.Parity = base->cfg.parity;
    self->params.fDtrControl = base->cfg.dtr;
    if(!SetCommState(self->handle, &self->params))
    {
        CIOT_LOGE(TAG, "SetCommState error at COM%d", base->cfg.num);
        base->status.state = CIOT_UART_STATE_INTERNAL_ERROR;
        base->status.error = CIOT_UART_ERROR_OPEN;
        ciot_iface_send_event_type(&base->iface, CIOT_EVENT_TYPE_STOPPED);
        return CIOT_ERR_FAIL;
    }

    self->timeouts.ReadIntervalTimeout = 50;
    self->timeouts.ReadTotalTimeoutConstant = 50;
    self->timeouts.ReadTotalTimeoutMultiplier = 20;
    self->timeouts.WriteTotalTimeoutConstant = 50;
    self->timeouts.WriteTotalTimeoutMultiplier = 20;
    if(!SetCommTimeouts(self->handle, &self->timeouts))
    {
        CIOT_LOGE(TAG, "SetCommTimeouts error at CO%d", base->cfg.num);
        base->status.state = CIOT_UART_STATE_INTERNAL_ERROR;
        base->status.error = CIOT_UART_ERROR_OPEN;
        ciot_iface_send_event_type(&base->iface, CIOT_EVENT_TYPE_STOPPED);
        return CIOT_ERR_FAIL;
    }

    ciot_uart_flush(self);
    return CIOT_ERR_OK;
}

ciot_err_t ciot_uart_stop(ciot_uart_t self)
{
    CIOT_ERR_NULL_CHECK(self);
    CloseHandle(self->handle);
    self->base.status.state = CIOT_UART_STATE_CLOSED;
    return CIOT_ERR_OK;
}

ciot_err_t ciot_uart_task(ciot_uart_t self)
{
    CIOT_ERR_NULL_CHECK(self);

    if(self->handle != NULL)
    {
        DWORD error;
        COMSTAT status;
        ClearCommError(self->handle, &error, &status);
        ciot_uart_process_error(self, error);
        ciot_uart_process_status(self, &status);
    }

    return CIOT_ERR_OK;
}

ciot_err_t ciot_uart_send_bytes(ciot_uart_t self, uint8_t *bytes, int size)
{
    CIOT_ERR_NULL_CHECK(self);
    CIOT_ERR_NULL_CHECK(bytes);

    ciot_uart_base_t *base = &self->base;

    if(base->status.state == CIOT_UART_STATE_STARTED)
    {
        WriteFile(self->handle, bytes, size, &self->bytes_written, NULL);
        return CIOT_ERR_OK;
    }
    else
    {
        CIOT_LOGE(TAG, "Port COM%d is closed", base->cfg.num);
        return CIOT_ERR_INVALID_STATE;
    }
}

static void ciot_uart_process_error(ciot_uart_t self, DWORD error)
{
    ciot_uart_base_t *base = &self->base;

    if(base->status.state == CIOT_UART_STATE_CLOSED && error == 0)
    {
        ciot_event_t event = { 0 };
        base->status.state = CIOT_UART_STATE_STARTED;
        event.type = CIOT_EVENT_TYPE_STARTED;
        event.which_data = CIOT_EVENT_MSG_TAG;
        event.msg.data.uart.status = base->status;
        ciot_iface_send_event(&base->iface, &event);
        CIOT_LOGI(TAG, "UART_OPEN port:%s", self->port_name);
    }

    if(base->status.state == CIOT_UART_STATE_STARTED && error == CE_FRAME)
    {
        ciot_event_t event = { 0 };
        base->status.state = CIOT_UART_STATE_CLOSED;
        event.type = CIOT_EVENT_TYPE_STOPPED;
        event.which_data = CIOT_EVENT_MSG_TAG;
        event.msg.data.uart.status = base->status;
        ciot_iface_send_event(&base->iface, &event);
        CIOT_LOGI(TAG, "UART_CLOSED port:%s", self->port_name);
    }
}

static ciot_err_t ciot_uart_process_status(ciot_uart_t self, COMSTAT *status)
{
    ciot_uart_base_t *base = &self->base;

    if(base->status.state != CIOT_UART_STATE_STARTED)
    {
        return CIOT_ERR_INVALID_STATE;
    }

    if(status->cbInQue > 0)
    {
        uint8_t bytes[status->cbInQue];
        if(ReadFile(self->handle, &bytes, status->cbInQue, &self->bytes_read, NULL))
        {
            ciot_err_t err = ciot_iface_process_data(&base->iface, bytes, self->bytes_read, CIOT_EVENT_TYPE_REQUEST);
            if(err != CIOT_ERR_OK)
            {
                base->status.error = err;
            }
        }
    }

    return CIOT_ERR_OK;
}

static void ciot_uart_flush(ciot_uart_t self)
{
    DWORD error;
    COMSTAT status;
    ClearCommError(self->handle, &error, &status);
    if(status.cbInQue > 0)
    {
        uint8_t bytes[status.cbInQue];
        ReadFile(self->handle, &bytes, status.cbInQue, &self->bytes_read, NULL);
    }
}

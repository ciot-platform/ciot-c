/**
 * @file ciot_s.c
 * @author your name (you@domain.com)
 * @brief Module to encode/decode serial messages from uart, SPI, I2C, BLE, etc
 * @version 0.1
 * @date 2023-10-09
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ciot_s.h"
#include "ciot_err.h"

#ifdef  CIOT_CONFIG_FEATURE_TIMER
#include "ciot_timer.h"
#endif  //CIOT_CONFIG_FEATURE_TIMER

#define CIOT_S_TIMEOUT 2

struct ciot_s
{
    ciot_s_cfg_t cfg;
    ciot_s_status_t status;
    uint8_t buf[CIOT_S_BUF_SIZE];
    int idx;
    int len;
#if CIOT_CONFIG_FEATURE_TIMER
    uint64_t timer;
#endif
};

ciot_s_t ciot_s_new(ciot_s_cfg_t *cfg)
{
    ciot_s_t s = calloc(1, sizeof(struct ciot_s));
    memcpy(&s->cfg, cfg, sizeof(*cfg));
    return s;
}

ciot_err_t ciot_s_send(ciot_s_t self, uint8_t *data, int size)
{
    CIOT_NULL_CHECK(self);
    CIOT_NULL_CHECK(data);
    CIOT_NULL_CHECK(self->cfg.send_bytes);
    
    if(self->cfg.bridge_mode)
    {
        return self->cfg.send_bytes(self->cfg.iface, data, size);
    }

    uint8_t header[] = { 
        CIOT_S_START_CH, 
        size & 0xFF, 
        (size >> 8) & 0xFF
    };
    uint8_t end = CIOT_S_END_CH;
    self->cfg.send_bytes(self->cfg.iface, header, sizeof(header));
    self->cfg.send_bytes(self->cfg.iface, data, size);
    self->cfg.send_bytes(self->cfg.iface, &end, 1);

    CIOT_LOG_BUFFER_HEX("ciot_s", header, sizeof(header));
    CIOT_LOG_BUFFER_HEX("ciot_s", data, sizeof(size));
    CIOT_LOG_BUFFER_HEX("ciot_s", &end, 1);
    return CIOT_OK;
}

ciot_err_t ciot_s_process_byte(ciot_s_t self, uint8_t byte)
{
#if CIOT_CONFIG_FEATURE_TIMER
    self->timer = ciot_timer_get() + CIOT_S_TIMEOUT;
#endif

    if(self->cfg.bridge_mode)
    {
        if(self->cfg.on_message_cb != NULL)
        {
            self->cfg.on_message_cb(self->cfg.iface, &byte, 1);
        }
        return CIOT_OK;
    }

    if(self->status == CIOT_S_STATUS_TIMEOUT)
    {
        self->idx = 0;
        self->status = CIOT_S_STATUS_WAIT_START_DATA;
    }

    if(self->idx < CIOT_S_BUF_SIZE)
    {
        self->buf[self->idx] = byte;
    }
    else
    {
        self->idx = 0;
        self->status = CIOT_S_STATUS_WAIT_START_DATA;
        return CIOT_ERR_OVERFLOW;
    }

    switch (self->status)
    {
        case CIOT_S_STATUS_WAIT_START_DATA:
            self->idx = 0;
            self->len = 0;
            if(byte == CIOT_S_START_CH)
            {
                self->buf[self->idx] = byte;
                self->status = CIOT_S_STATUS_WAIT_SIZE;
            }
            break;
        case CIOT_S_STATUS_WAIT_SIZE:
            self->len++;
            if (self->len == CIOT_S_LENGHT_SIZE)
            {
                self->len = self->buf[2] << 8 | self->buf[1];
                self->status = CIOT_S_STATUS_READ_DATA;
            }
            break;
        case CIOT_S_STATUS_READ_DATA:
            if(byte == CIOT_S_END_CH && self->idx - CIOT_S_HEADER_SIZE == self->len)
            {
                if(self->cfg.on_message_cb != NULL)
                {
                    self->cfg.on_message_cb(self->cfg.iface, &self->buf[CIOT_S_HEADER_SIZE], self->len);
                }
                self->status = CIOT_S_STATUS_WAIT_START_DATA;
                CIOT_LOG_BUFFER_HEX("ciot_s", self->buf, self->idx);
                return CIOT_OK;
            }
            if(self->idx - CIOT_S_HEADER_SIZE == self->len)
            {
                self->idx = 0;
                self->status = CIOT_S_STATUS_WAIT_START_DATA;
                return CIOT_ERR_PROTOCOL_VIOLATION;
            }
            break;
    default:
        break;
    }

    self->idx++;

    return CIOT_OK;
}

ciot_err_t ciot_s_set_bridge_mode(ciot_s_t self, bool mode)
{
    CIOT_NULL_CHECK(self);
    self->cfg.bridge_mode = mode;
    return CIOT_OK;
}

#if CIOT_CONFIG_FEATURE_TIMER
ciot_err_t ciot_s_check_timeout(ciot_s_t self)
{
    CIOT_NULL_CHECK(self);
    if(self->status != CIOT_S_STATUS_WAIT_START_DATA)
    {
        if(ciot_timer_compare(&self->timer, CIOT_S_TIMEOUT))
        {
            self->status = CIOT_S_STATUS_TIMEOUT;
            return CIOT_ERR_TIMEOUT;
        }
    }
    return CIOT_OK;
}
#endif
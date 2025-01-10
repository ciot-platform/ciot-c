/**
 * @file ciot_gpio_base.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-07
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdlib.h>
#include <string.h>
#include "ciot_gpio.h"
#include "ciot_config.h"
#include "ciot_timer.h"

static const char *TAG = "ciot_gpio";

static ciot_err_t ciot_gpio_process_data(ciot_iface_t *iface, ciot_msg_data_t *data);
static ciot_err_t ciot_gpio_get_data(ciot_iface_t *iface, ciot_msg_data_t *data);
static ciot_err_t ciot_gpio_send_data(ciot_iface_t *iface, uint8_t *data, int size);

ciot_err_t ciot_gpio_init(ciot_gpio_t self, int count)
{
    ciot_gpio_base_t *base = (ciot_gpio_base_t*)self;

    base->iface.ptr = self;
    base->iface.process_data = ciot_gpio_process_data;
    base->iface.get_data = ciot_gpio_get_data;
    base->iface.send_data = ciot_gpio_send_data;
    base->iface.info.type = CIOT_IFACE_TYPE_CUSTOM;

    return CIOT_ERR_OK;
}

ciot_err_t ciot_gpio_task(ciot_gpio_t self)
{
    CIOT_ERR_NULL_CHECK(self);
    ciot_gpio_base_t *base = (ciot_gpio_base_t*)self;

    if(ciot_timer_millis() > base->timer)
    {
        base->timer = ciot_timer_millis() + base->cfg.blink_interval;
        base->blink_signal = !base->blink_signal;

        if(base->blinking)
        {
            base->blinking = false;
            for (size_t i = 0; i < sizeof(base->cfg.pins); i++)
            {
                if(base->cfg.pins[i].mode == CIOT_GPIO_MODE_INPUT ||
                   base->cfg.pins[i].mode == CIOT_GPIO_MODE_DISABLED)
                {
                    continue;
                }

                int num = base->cfg.pins[i].num;
                ciot_gpio_state_t state = base->status.states[i];

                if(state == CIOT_GPIO_STATE_LOW || state == CIOT_GPIO_STATE_HIGH)
                {
                    base->set_state(num, state);
                    base->status.states[i] = state;
                }

                if(state == CIOT_GPIO_STATE_BLINKING)
                {
                    base->set_state(num, base->blink_signal);
                    base->blinking = true;
                }
            }
        }
    }

    if(ciot_timer_millis() < base->cfg.blink_interval)
    {
        base->timer = 0;
    }

    return CIOT_ERR_OK;
}

static ciot_err_t ciot_gpio_process_data(ciot_iface_t *iface, ciot_msg_data_t *data)
{
    CIOT_ERR_TYPE_CHECK(data->which_type, CIOT_MSG_DATA_UART_TAG);

    ciot_gpio_t self = iface->ptr;
    ciot_gpio_data_t *gpio = &data->gpio;

    switch (gpio->which_type)
    {
    case CIOT_GPIO_DATA_STOP_TAG:
        return ciot_gpio_stop(self);
    case CIOT_GPIO_DATA_CONFIG_TAG:
        return ciot_gpio_start(self, &gpio->config);
    case CIOT_GPIO_DATA_REQUEST_TAG:
        return ciot_gpio_process_req(self, &gpio->request);
    default:
        return CIOT_ERR_INVALID_TYPE;
    }

    return CIOT_ERR_NOT_IMPLEMENTED;
}

static ciot_err_t ciot_gpio_get_data(ciot_iface_t *iface, ciot_msg_data_t *data)
{
    CIOT_ERR_TYPE_CHECK(data->which_type, CIOT_MSG_DATA_GET_DATA_TAG);

    ciot_gpio_base_t *self = iface->ptr;
    ciot_data_type_t data_type = data->get_data.type;
    data->which_type = CIOT_MSG_DATA_GPIO_TAG;

    switch (data_type)
    {
    case CIOT_DATA_TYPE_CONFIG:
        data->gpio.which_type = CIOT_GPIO_DATA_CONFIG_TAG;
        data->gpio.config = self->cfg;
        break;
    case CIOT_DATA_TYPE_STATUS:
        data->gpio.which_type = CIOT_GPIO_DATA_STATUS_TAG;
        data->gpio.status = self->status;
        break;
    case CIOT_DATA_TYPE_INFO:
        return CIOT_ERR_NOT_FOUND;
    default:
    }

    return CIOT_ERR_OK;
}

static ciot_err_t ciot_gpio_send_data(ciot_iface_t *iface, uint8_t *data, int size)
{
    return CIOT_ERR_NOT_IMPLEMENTED;
}

ciot_err_t ciot_gpio_process_req(ciot_gpio_t self, ciot_gpio_req_t *req)
{
    CIOT_ERR_NULL_CHECK(self);
    CIOT_ERR_NULL_CHECK(req);
    return CIOT_ERR_NOT_IMPLEMENTED;
}

ciot_err_t ciot_gpio_set_cfg(ciot_gpio_t self, ciot_gpio_cfg_t *cfg)
{
    CIOT_ERR_NULL_CHECK(self);
    CIOT_ERR_NULL_CHECK(cfg);
    ciot_gpio_base_t *base = (ciot_gpio_base_t*)self;
    base->cfg = *cfg;
    return CIOT_ERR_OK;
}

ciot_err_t ciot_gpio_get_cfg(ciot_gpio_t self, ciot_gpio_cfg_t *cfg)
{
    CIOT_ERR_NULL_CHECK(self);
    CIOT_ERR_NULL_CHECK(cfg);
    ciot_gpio_base_t *base = (ciot_gpio_base_t*)self;
    *cfg = base->cfg;
    return CIOT_ERR_OK;
}

ciot_err_t ciot_gpio_get_status(ciot_gpio_t self, ciot_gpio_status_t *status)
{
    CIOT_ERR_NULL_CHECK(self);
    CIOT_ERR_NULL_CHECK(status);
    ciot_gpio_base_t *base = (ciot_gpio_base_t*)self;
    *status = base->status;
    return CIOT_ERR_OK;
}

ciot_err_t ciot_gpio_set_state(ciot_gpio_t self, uint16_t id, ciot_gpio_state_t state)
{
    CIOT_ERR_NULL_CHECK(self);
    ciot_gpio_base_t *base = (ciot_gpio_base_t*)self;
    int num = base->cfg.pins[id].num;

    if(state == CIOT_GPIO_STATE_LOW || state == CIOT_GPIO_STATE_HIGH)
    {
        base->set_state(num, state);
        base->status.states[id] = state;
    }

    if(state == CIOT_GPIO_STATE_BLINK && base->status.states[id] != CIOT_GPIO_STATE_BLINKING)
    {
        base->blinking = true;
        base->set_state(num, !base->get_state(num));
    }

    if(state == CIOT_GPIO_STATE_BLINKING)
    {
        base->blinking = true;
        base->status.states[id] = state;
    }

    return CIOT_ERR_OK;
}

ciot_gpio_state_t ciot_gpio_get_state(ciot_gpio_t self, uint16_t id)
{
    CIOT_ERR_NULL_CHECK(self);
    ciot_gpio_base_t *base = (ciot_gpio_base_t*)self;
    CIOT_ERR_NULL_CHECK(base->get_state);
    int num = base->cfg.pins[id].num;
    return base->get_state(num);
}
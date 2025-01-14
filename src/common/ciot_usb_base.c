/**
 * @file ciot_usb_base.c
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-12-11
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "ciot_usb.h"
#include "ciot_types.h"

static ciot_err_t ciot_usb_process_data(ciot_iface_t *iface, ciot_msg_data_t *data);
static ciot_err_t ciot_usb_get_data(ciot_iface_t *iface, ciot_msg_data_t *data);
static ciot_err_t ciot_usb_send_data(ciot_iface_t *iface, uint8_t *data, int size);

ciot_err_t ciot_usb_init(ciot_usb_t self)
{
    ciot_usb_base_t *base = (ciot_usb_base_t *)self;

    base->iface.ptr = self;
    base->iface.process_data = ciot_usb_process_data;
    base->iface.get_data = ciot_usb_get_data;
    base->iface.send_data = ciot_usb_send_data;
    base->iface.info.type = CIOT_IFACE_TYPE_USB;
    
    return CIOT_ERR_OK;
}

ciot_err_t ciot_usb_process_req(ciot_usb_t self, ciot_usb_req_t *req)
{
    CIOT_ERR_NULL_CHECK(self);
    CIOT_ERR_NULL_CHECK(req);
    return CIOT_ERR_NOT_SUPPORTED;    
}

static ciot_err_t ciot_usb_process_data(ciot_iface_t *iface, ciot_msg_data_t *data)
{
    CIOT_ERR_TYPE_CHECK(data->which_type, CIOT_MSG_DATA_USB_TAG);

    ciot_usb_t self = iface->ptr;
    ciot_usb_data_t *usb = &data->usb;

    switch (usb->which_type)
    {
    case CIOT_USB_DATA_STOP_TAG:
        return ciot_usb_stop(self);
    case CIOT_USB_DATA_CONFIG_TAG:
        return ciot_usb_start(self, &usb->config);
    case CIOT_USB_DATA_REQUEST_TAG:
        return ciot_usb_process_req(self, &usb->request);
    default:
        return CIOT_ERR_INVALID_TYPE;
    }

    return CIOT_ERR_NOT_IMPLEMENTED;
}

static ciot_err_t ciot_usb_get_data(ciot_iface_t *iface, ciot_msg_data_t *data)
{
    CIOT_ERR_TYPE_CHECK(data->which_type, CIOT_MSG_DATA_GET_DATA_TAG);

    ciot_usb_base_t *self = iface->ptr;
    ciot_data_type_t data_type = data->get_data.type;
    data->which_type = CIOT_MSG_DATA_USB_TAG;

    switch (data_type)
    {
    case CIOT_DATA_TYPE_CONFIG:
        data->usb.which_type = CIOT_USB_DATA_CONFIG_TAG;
        data->usb.config = self->cfg;
        break;
    case CIOT_DATA_TYPE_STATUS:
        data->usb.which_type = CIOT_USB_DATA_STATUS_TAG;
        data->usb.status = self->status;
        break;
    default:
        return CIOT_ERR_NOT_FOUND;
    }

    return CIOT_ERR_OK;
}

static ciot_err_t ciot_usb_send_data(ciot_iface_t *iface, uint8_t *data, int size)
{
    CIOT_ERR_NULL_CHECK(iface);
    CIOT_ERR_NULL_CHECK(data);
    ciot_usb_t self = (ciot_usb_t)iface;
    return ciot_usb_send_bytes(self, data, size);
}

ciot_err_t ciot_usb_get_cfg(ciot_usb_t self, ciot_usb_cfg_t *cfg)
{
    CIOT_ERR_NULL_CHECK(self);
    CIOT_ERR_NULL_CHECK(cfg);
    ciot_usb_base_t *base = (ciot_usb_base_t*)self;
    *cfg = base->cfg;
    return CIOT_ERR_OK;
}

ciot_err_t ciot_usb_get_status(ciot_usb_t self, ciot_usb_status_t *status)
{
    CIOT_ERR_NULL_CHECK(self);
    CIOT_ERR_NULL_CHECK(status);
    ciot_usb_base_t *base = (ciot_usb_base_t*)self;
    *status = base->status;
    return CIOT_ERR_OK;
}
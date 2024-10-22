/**
 * @file ciot_ota_base.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-07
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdlib.h>
#include "ciot_ota.h"
#include "ciot_config.h"

// static const char *TAG = "ciot_ota";

static ciot_err_t ciot_iface_process_req(ciot_iface_t *iface, ciot_msg_t *req);
static ciot_err_t ciot_iface_get_data(ciot_iface_t *iface, ciot_msg_t *msg);
static ciot_err_t ciot_iface_send_data(ciot_iface_t *iface, uint8_t *data, int size);

ciot_err_t ciot_ota_init(ciot_ota_t self)
{
    ciot_ota_base_t *base = (ciot_ota_base_t*)self;

    ciot_iface_init(&base->iface);
    ciot__ota_data__init(&base->data);
    ciot__ota_cfg__init(&base->cfg);
    ciot__ota_status__init(&base->status);
    // ciot__ota_info__init(&base->info);

    base->iface.ptr = self;
    base->iface.process_req = ciot_iface_process_req;
    base->iface.get_data = ciot_iface_get_data;
    base->iface.send_data = ciot_iface_send_data;
    base->iface.info.type = CIOT__IFACE_TYPE__IFACE_TYPE_OTA;

    base->cfg.url = base->url;

    return CIOT__ERR__OK;
}

static ciot_err_t ciot_iface_process_req(ciot_iface_t *iface, ciot_msg_t *req)
{
    ciot_ota_t self = iface->ptr;

    switch (req->type)
    {
        case CIOT__MSG_TYPE__MSG_TYPE_START:
            return ciot_ota_start(self, req->data->ota->config);
        case CIOT__MSG_TYPE__MSG_TYPE_STOP:
            return ciot_ota_stop(self);
        case CIOT__MSG_TYPE__MSG_TYPE_REQUEST:
            return ciot_ota_process_req(self, req->data->ota->request);
    default:
        break;
    }
    
    return CIOT__ERR__OK;
}

static ciot_err_t ciot_iface_get_data(ciot_iface_t *iface, ciot_msg_t *msg)
{
    ciot_ota_base_t *self = iface->ptr;

    self->data.config = NULL;
    self->data.status = NULL;
    // self->data.info = NULL;
    self->data.request = NULL;

    switch (msg->type)
    {
    case CIOT__MSG_TYPE__MSG_TYPE_CONFIG:
        self->data.config = &self->cfg;
        break;
    case CIOT__MSG_TYPE__MSG_TYPE_STATUS:
        self->data.status = &self->status;
        break;
    case CIOT__MSG_TYPE__MSG_TYPE_INFO:
        // self->data.info = &self->info;
        break;
    default:
        break;
    }

    self->iface.data.ota = &self->data;
    msg->data = &self->iface.data;

    return CIOT__ERR__OK;
}

static ciot_err_t ciot_iface_send_data(ciot_iface_t *iface, uint8_t *data, int size)
{
    return CIOT__ERR__NOT_IMPLEMENTED;
}

ciot_err_t ciot_ota_process_req(ciot_ota_t self, ciot_ota_req_t *req)
{
    CIOT_ERR_NULL_CHECK(self);
    CIOT_ERR_NULL_CHECK(req);

    switch (req->type)
    {
    case CIOT__OTA_REQ_TYPE__OTA_REQ_TYPE_ROLLBACK:
        return ciot_ota_rollback(self);
    default:
        return CIOT__ERR__INVALID_TYPE;
    }

    return CIOT__ERR__OK;
}

ciot_err_t ciot_ota_get_cfg(ciot_ota_t self, ciot_ota_cfg_t *cfg)
{
    CIOT_ERR_NULL_CHECK(self);
    CIOT_ERR_NULL_CHECK(cfg);
    ciot_ota_base_t *base = (ciot_ota_base_t*)self;
    *cfg = base->cfg;
    return CIOT__ERR__OK;
}

ciot_err_t ciot_ota_get_status(ciot_ota_t self, ciot_ota_status_t *status)
{
    CIOT_ERR_NULL_CHECK(self);
    CIOT_ERR_NULL_CHECK(status);
    ciot_ota_base_t *base = (ciot_ota_base_t*)self;
    *status = base->status;
    return CIOT__ERR__OK;
}

// ciot_err_t ciot_ota_get_info(ciot_ota_t self, ciot_ota_info_t *info)
// {
//     CIOT_ERR_NULL_CHECK(self);
//     CIOT_ERR_NULL_CHECK(info);
//     ciot_ota_base_t *base = (ciot_ota_base_t*)self;
//     *info = base->info;
//     return CIOT__ERR__OK;
// }

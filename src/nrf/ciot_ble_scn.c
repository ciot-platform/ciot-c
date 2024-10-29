/**
 * @file ciot_ble_scn.c
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-06-07
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <stdlib.h>
#if (NRF_SD_BLE_API_VERSION == 2 || NRF_SD_BLE_API_VERSION == 3)
#include "softdevice_handler.h"
#define BLE_GAP_ADV_SET_DATA_SIZE_MAX BLE_GAP_ADV_MAX_SIZE
#else
#include "nrf_sdh.h"
#include "nrf_sdh_soc.h"
#include "nrf_sdh_ble.h"
#include "nrf_pwr_mgmt.h"
#include "nrf_log_default_backends.h"
#endif
#include "ble_gap.h"
#include "ciot_ble_scn.h"
#include "ciot_msg.h"
#include "ciot_err.h"
#include "ciot_config.h"

struct ciot_ble_scn
{
    ciot_ble_scn_base_t base;
    ble_gap_scan_params_t scan_params;
#if NRF_SD_BLE_API_VERSION != 2 && NRF_SD_BLE_API_VERSION != 3
    uint8_t buffer[BLE_GAP_SCAN_BUFFER_MIN];
    ble_data_t scan_buffer;
#endif
};

static void ciot_ble_scn_copy_mac(uint8_t destiny[6], uint8_t source[6], bool reverse);
static void ciot_ble_scn_handle_adv_report(ciot_ble_scn_t self, ciot_ble_scn_adv_t *adv);

// static const char *TAG = "hg_ble_scn";

ciot_ble_scn_t ciot_ble_scn_new(void *handle)
{
    ciot_ble_scn_t self = calloc(1, sizeof(struct ciot_ble_scn));
    ciot_ble_scn_init(self);
    return self;
}

ciot_err_t ciot_ble_scn_start(ciot_ble_scn_t self, ciot_ble_scn_cfg_t *cfg)
{
    CIOT_ERR_NULL_CHECK(self);

    ciot_ble_scn_base_t *base = &self->base;

    if (cfg != NULL)
    {
        base->cfg = *cfg;
    }

    if (base->cfg.active && base->status.state == CIOT__BLE_SCN_STATE__BLE_SCN_STATE_ACTIVE)
    {
        return CIOT__ERR__OK;
    }

    if (!base->cfg.active && base->status.state == CIOT__BLE_SCN_STATE__BLE_SCN_STATE_PASSIVE)
    {
        return CIOT__ERR__OK;
    }

    uint32_t err = sd_ble_gap_scan_stop();

    self->scan_params.interval = base->cfg.interval;
    self->scan_params.window = base->cfg.window;
    self->scan_params.active = base->cfg.active;
    self->scan_params.timeout = base->cfg.timeout;

#if NRF_SD_BLE_API_VERSION == 2 || NRF_SD_BLE_API_VERSION == 3
    error = sd_ble_gap_scan_start(&self->scan_params);
#else
    self->scan_buffer.p_data = self->buffer;
    self->scan_buffer.len = BLE_GAP_SCAN_BUFFER_MIN;
    err = sd_ble_gap_scan_start(&self->scan_params, &self->scan_buffer);
#endif

    if (err == NRF_SUCCESS)
    {
        base->status.state = cfg->active
                                 ? CIOT__BLE_SCN_STATE__BLE_SCN_STATE_ACTIVE
                                 : CIOT__BLE_SCN_STATE__BLE_SCN_STATE_PASSIVE;
        ciot_iface_event_t iface_event = {0};
        iface_event.type = CIOT_IFACE_EVENT_STARTED;
        iface_event.msg = ciot_msg_get(CIOT__MSG_TYPE__MSG_TYPE_STATUS, &base->iface);
        ciot_iface_send_event(&base->iface, &iface_event);
    }

    base->status.err_code = err;

    return err;
}

ciot_err_t ciot_ble_scn_stop(ciot_ble_scn_t self)
{
    CIOT_ERR_NULL_CHECK(self);
    ciot_ble_scn_base_t *base = &self->base;
    int err = sd_ble_gap_scan_stop();
    if (err == NRF_SUCCESS)
    {
        base->status.state = CIOT__BLE_SCN_STATE__BLE_SCN_STATE_IDLE;
        ciot_iface_event_t iface_event = {0};
        iface_event.type = CIOT_IFACE_EVENT_STOPPED;
        iface_event.msg = ciot_msg_get(CIOT__MSG_TYPE__MSG_TYPE_STATUS, &base->iface);
        ciot_iface_send_event(&base->iface, &iface_event);
    }
    return CIOT__ERR__OK;
}

ciot_err_t ciot_ble_scn_task(ciot_ble_scn_t self)
{
    ciot_ble_scn_base_task(self);
    return CIOT__ERR__OK;
}

ciot_err_t ciot_ble_scn_handle_event(ciot_ble_scn_t self, void *event, void *event_args)
{
    CIOT_ERR_NULL_CHECK(self);
    CIOT_ERR_NULL_CHECK(event);

    ciot_ble_scn_base_t *base = &self->base;
    const ble_evt_t *ev = event;
    uint8_t mac[6];

    switch (ev->header.evt_id)
    {
    case BLE_GAP_EVT_ADV_REPORT:
        ciot_ble_scn_copy_mac(mac, (uint8_t *)ev->evt.gap_evt.params.adv_report.peer_addr.addr, true);
        base->recv.info->mac.data = mac;
        base->recv.info->mac.len = sizeof(mac);
        base->recv.info->rssi = ev->evt.gap_evt.params.adv_report.rssi;
#if NRF_SD_BLE_API_VERSION == 2 || NRF_SD_BLE_API_VERSION == 3
        base->recv.adv.data = (ciot_iface_event_data_u *)ev->evt.gap_evt.params.adv_report.data;
        base->recv.adv.len = ev->evt.gap_evt.params.adv_report.dlen;
#else
        base->recv.payload.data = ev->evt.gap_evt.params.adv_report.data.p_data;
        base->recv.payload.len = ev->evt.gap_evt.params.adv_report.data.len;
        base->status.err_code = sd_ble_gap_scan_start(NULL, &self->scan_buffer);
#endif
        if (base->filter.handler == NULL || base->filter.handler(self, &base->recv, base->filter.args))
        {
            ciot_ble_scn_handle_adv_report(self, &base->recv);
        }
        break;
    default:
        break;
    }
    return CIOT__ERR__OK;
}

static void ciot_ble_scn_copy_mac(uint8_t destiny[6], uint8_t source[6], bool reverse)
{
    for (size_t i = 0; i < 6; i++)
    {
        destiny[i] = reverse ? source[5 - i] : source[i];
    }
}

static void ciot_ble_scn_handle_adv_report(ciot_ble_scn_t self, ciot_ble_scn_adv_t *adv)
{
    ciot_ble_scn_base_t *base = &self->base;
#ifdef CIOT_CONFIG_BLE_SCN_ADV_FIFO_SIZE
    ciot_ble_scn_adv_fifo_t *adv_fifo = &base->adv_fifo;
    if(adv_fifo->list[adv_fifo->wp].info->rssi == 0)
    {
        adv_fifo->list[adv_fifo->wp].info->rssi = adv->info->rssi;
        memcpy(adv_fifo->list[adv_fifo->wp].info->mac.data, adv->info->mac.data, adv->info->mac.len);
        adv_fifo->list[adv_fifo->wp].info->mac.len = adv->info->mac.len;
        memcpy(adv_fifo->list[adv_fifo->wp].payload.data, adv->payload.data, adv->payload.len);
        adv_fifo->list[adv_fifo->wp].payload.len = adv->payload.len;
        adv_fifo->wp++;
        base->status.fifo_len++;
        if(base->status.fifo_len > base->status.fifo_max)
        {
            base->status.fifo_max = base->status.fifo_len;
        }
        if(adv_fifo->wp == CIOT_CONFIG_BLE_SCN_ADV_FIFO_SIZE)
        {
            adv_fifo->wp = 0;
        }
    }
    else
    {
        base->status.advs_losted++;
        base->status.err_code = CIOT__ERR__DATA_LOSS;
    }
#else
    ciot_iface_event_t event = {0};
    event.type = CIOT_IFACE_EVENT_DATA;
    event.data = (uint8_t*)adv;
    ciot_iface_send_event(&base->iface, &event);
#endif
}

/**
 * @file ciot_mqtt_client.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-07
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef __CIOT_MQTT_CLIENT__H__
#define __CIOT_MQTT_CLIENT__H__

#ifdef __cplusplus
extern "C" {
#endif

#include "ciot_err.h"
#include "ciot_iface.h"

#include "ciot/proto/v1/mqtt_client.pb-c.h"

#define CIOT_CONFIG_MQTT_CLIENT_ID_SIZE 32
#define CIOT_CONFIG_MQTT_CLIENT_URL_SIZE 64
#define CIOT_CONFIG_MQTT_USER_SIZE 48
#define CIOT_CONFIG_MQTT_PASS_SIZE 48
#define CIOT_CONFIG_MQTT_TOPIC_SIZE 48

typedef struct ciot_mqtt_client *ciot_mqtt_client_t;
typedef Ciot__MqttClientCfg ciot_mqtt_client_cfg_t;
typedef Ciot__MqttClientTopicsCfg ciot_mqtt_client_topics_t;
typedef Ciot__MqttClientReq ciot_mqtt_client_req_t;
typedef Ciot__MqttClientStatus ciot_mqtt_client_status_t;
typedef Ciot__MqttClientReq ciot_mqtt_client_req_t;
typedef Ciot__MqttClientData ciot_mqtt_client_data_t;
typedef Ciot__MqttClientError ciot_mqtt_client_error_t;

typedef struct ciot_mqtt_client_event_data
{
    char *topic;
    uint8_t *data;
} ciot_mqtt_client_event_data_t;

typedef struct ciot_mqtt_client_base
{
    ciot_iface_t iface;
    ciot_mqtt_client_cfg_t cfg;
    ciot_mqtt_client_topics_t topics;
    ciot_mqtt_client_status_t status;
    ciot_mqtt_client_req_t req;
    ciot_mqtt_client_data_t data;
    ciot_mqtt_client_error_t error;
    char client_id[CIOT_CONFIG_MQTT_CLIENT_ID_SIZE];
    char url[CIOT_CONFIG_MQTT_CLIENT_URL_SIZE];
    char user[CIOT_CONFIG_MQTT_USER_SIZE];
    char password[CIOT_CONFIG_MQTT_PASS_SIZE];
    char topic_pub[CIOT_CONFIG_MQTT_TOPIC_SIZE];
    char topic_sub[CIOT_CONFIG_MQTT_TOPIC_SIZE];
    int topic_len;
    uint16_t data_rate_aux;
} ciot_mqtt_client_base_t;

ciot_mqtt_client_t ciot_mqtt_client_new(void *handle);
ciot_err_t ciot_mqtt_client_init(ciot_mqtt_client_t self);
ciot_err_t ciot_mqtt_client_start(ciot_mqtt_client_t self, ciot_mqtt_client_cfg_t *cfg);
ciot_err_t ciot_mqtt_client_stop(ciot_mqtt_client_t self);
ciot_err_t ciot_mqtt_client_process_req(ciot_mqtt_client_t self, ciot_mqtt_client_req_t *req);
ciot_err_t ciot_mqtt_client_get_cfg(ciot_mqtt_client_t self, ciot_mqtt_client_cfg_t *cfg);
ciot_err_t ciot_mqtt_client_get_status(ciot_mqtt_client_t self, ciot_mqtt_client_status_t *status);
ciot_err_t ciot_mqtt_client_update_data_rate(ciot_mqtt_client_t self, int bytes_sended);

ciot_err_t ciot_mqtt_client_sub(ciot_mqtt_client_t self, char *topic, int qos);
ciot_err_t ciot_mqtt_client_pub(ciot_mqtt_client_t self, char *topic, uint8_t *data, int size, int qos);
ciot_err_t ciot_mqtt_client_subtopic_pub(ciot_mqtt_client_t self, char *subtopic, int subtopic_len, uint8_t *data, int size, int qos);
ciot_err_t ciot_mqtt_client_send(ciot_mqtt_client_t self, uint8_t *data, int size);
ciot_err_t ciot_mqtt_client_set_topics(ciot_mqtt_client_t self, char *d2b, char *b2d);
ciot_err_t ciot_mqtt_client_set_subtopic(ciot_mqtt_client_t self, char *subtopic, int len);

#ifdef __cplusplus
}
#endif

#endif  //!__ciot_MQTT_CLIENT__H__

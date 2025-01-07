/* Automatically generated nanopb header */
/* Generated by nanopb-1.0.0-dev */

#ifndef PB_CIOT_CIOT_PROTO_V2_MQTT_CLIENT_PB_H_INCLUDED
#define PB_CIOT_CIOT_PROTO_V2_MQTT_CLIENT_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
/* Enum representing the state of the MQTT client. */
typedef enum ciot_mqtt_client_state {
    CIOT_MQTT_CLIENT_STATE_DISCONNECTED = 0, /* The MQTT client is disconnected. */
    CIOT_MQTT_CLIENT_STATE_CONNECTING = 1, /* The MQTT client is connecting. */
    CIOT_MQTT_CLIENT_STATE_DISCONNECTING = 2, /* The MQTT client is disconnecting. */
    CIOT_MQTT_CLIENT_STATE_CONNECTED = 3, /* The MQTT client is connected. */
    CIOT_MQTT_CLIENT_STATE_ERROR = 4 /* The MQTT client encountered an error. */
} ciot_mqtt_client_state_t;

/* Enum representing different types of MQTT client requests. */
typedef enum ciot_mqtt_client_req_type {
    CIOT_MQTT_CLIENT_REQ_TYPE_UNKOWN = 0, /* Unknown MQTT request type. */
    CIOT_MQTT_CLIENT_REQ_TYPE_PUBLISH = 1, /* MQTT publish request. */
    CIOT_MQTT_CLIENT_REQ_TYPE_SUBSCRIBE = 2 /* MQTT subscribe request. */
} ciot_mqtt_client_req_type_t;

/* Enum representing different MQTT Broker kinds */
typedef enum ciot_mqtt_client_broker_kind {
    CIOT_MQTT_CLIENT_BROKER_KIND_DEFAULT = 0, /* Default used in common mqtt connections */
    CIOT_MQTT_CLIENT_BROKER_KIND_SSL_1_2 = 1, /* SSL v1.2 required */
    CIOT_MQTT_CLIENT_BROKER_KIND_SSL_1_3 = 2, /* SSL v1.3 required */
    CIOT_MQTT_CLIENT_BROKER_KIND_AWS = 3, /* AWS authentication required */
    CIOT_MQTT_CLIENT_BROKER_KIND_AZURE = 4 /* AZURE authentication required */
} ciot_mqtt_client_broker_kind_t;

/* Struct definitions */
/* Message representing error details for the MQTT client. */
typedef struct ciot_mqtt_client_error {
    int32_t tls_last_err; /* TLS last error code. */
    int32_t tls_stack_err; /* TLS stack error code. */
    int32_t tls_cert_verify_flags; /* TLS certificate verification flags. */
    int32_t type; /* Type of the error. */
    int32_t code; /* Error code. */
    int32_t transport_sock; /* Transport socket error. */
} ciot_mqtt_client_error_t;

/* Message representing configuration for MQTT client topics. */
typedef struct ciot_mqtt_client_topics_cfg {
    char pub[48]; /* Topic used to publish data */
    char sub[48]; /* Topic used to receive data. */
} ciot_mqtt_client_topics_cfg_t;

/* Message used to stop MQTT client interface */
typedef struct ciot_mqtt_client_stop {
    char dummy_field;
} ciot_mqtt_client_stop_t;

/* Message representing configuration for the MQTT client. */
typedef struct ciot_mqtt_client_cfg {
    char client_id[32]; /* Client ID for MQTT connection. */
    char url[48]; /* URL for MQTT connection. */
    char user[32]; /* Username for MQTT authentication. */
    char password[32]; /* Password for MQTT authentication. */
    uint32_t qos; /* Quality of Service level for MQTT communication. */
    bool has_topics;
    ciot_mqtt_client_topics_cfg_t topics; /* Topics configuration for MQTT communication. */
    ciot_mqtt_client_broker_kind_t broker_kind; /* MQTT broker kind */
} ciot_mqtt_client_cfg_t;

/* Message representing status information for the MQTT client. */
typedef struct ciot_mqtt_client_status {
    ciot_mqtt_client_state_t state; /* State of the MQTT client. */
    uint32_t conn_count; /* Connection count. */
    uint32_t data_rate; /* Data rate. */
    uint64_t last_msg_time; /* Timestamp of the last message. */
    bool has_error;
    ciot_mqtt_client_error_t error; /* Error details for the MQTT client. */
} ciot_mqtt_client_status_t;

/* Message representing a publish request for the MQTT client. */
typedef struct ciot_mqtt_client_req_publish {
    char topic[48]; /* Topic for publishing. */
    pb_byte_t payload[128]; /* Message payload. */
    int32_t qos; /* Quality of Service level for the publish request. */
} ciot_mqtt_client_req_publish_t;

/* Message representing a subscribe request for the MQTT client. */
typedef struct ciot_mqtt_client_req_subscribe {
    char topic[48]; /* Topic to subscribe to. */
    int32_t qos; /* Quality of Service level for the subscribe request. */
} ciot_mqtt_client_req_subscribe_t;

/* Message representing a request for the MQTT client. */
typedef struct ciot_mqtt_client_req {
    pb_size_t which_type;
    union {
        ciot_mqtt_client_req_publish_t publish; /* Publish request. */
        ciot_mqtt_client_req_subscribe_t subscribe; /* Subscribe request. */
    };
} ciot_mqtt_client_req_t;

/* Message representing data for the MQTT client. */
typedef struct ciot_mqtt_client_data {
    pb_size_t which_type;
    union {
        ciot_mqtt_client_stop_t stop; /* Stop MQTT client. */
        ciot_mqtt_client_cfg_t config; /* Configuration for the MQTT client. */
        ciot_mqtt_client_status_t status; /* Status of the MQTT client. */
        ciot_mqtt_client_req_t request; /* MQTT client request data. */
    };
} ciot_mqtt_client_data_t;


#ifdef __cplusplus
extern "C" {
#endif

/* Helper constants for enums */
#define _CIOT_MQTT_CLIENT_STATE_MIN CIOT_MQTT_CLIENT_STATE_DISCONNECTED
#define _CIOT_MQTT_CLIENT_STATE_MAX CIOT_MQTT_CLIENT_STATE_ERROR
#define _CIOT_MQTT_CLIENT_STATE_ARRAYSIZE ((ciot_mqtt_client_state_t)(CIOT_MQTT_CLIENT_STATE_ERROR+1))
#define CIOT_MQTT_CLIENT_STATE_MQTT_CLIENT_STATE_DISCONNECTED CIOT_MQTT_CLIENT_STATE_DISCONNECTED
#define CIOT_MQTT_CLIENT_STATE_MQTT_CLIENT_STATE_CONNECTING CIOT_MQTT_CLIENT_STATE_CONNECTING
#define CIOT_MQTT_CLIENT_STATE_MQTT_CLIENT_STATE_DISCONNECTING CIOT_MQTT_CLIENT_STATE_DISCONNECTING
#define CIOT_MQTT_CLIENT_STATE_MQTT_CLIENT_STATE_CONNECTED CIOT_MQTT_CLIENT_STATE_CONNECTED
#define CIOT_MQTT_CLIENT_STATE_MQTT_CLIENT_STATE_ERROR CIOT_MQTT_CLIENT_STATE_ERROR

#define _CIOT_MQTT_CLIENT_REQ_TYPE_MIN CIOT_MQTT_CLIENT_REQ_TYPE_UNKOWN
#define _CIOT_MQTT_CLIENT_REQ_TYPE_MAX CIOT_MQTT_CLIENT_REQ_TYPE_SUBSCRIBE
#define _CIOT_MQTT_CLIENT_REQ_TYPE_ARRAYSIZE ((ciot_mqtt_client_req_type_t)(CIOT_MQTT_CLIENT_REQ_TYPE_SUBSCRIBE+1))
#define CIOT_MQTT_CLIENT_REQ_TYPE_MQTT_CLIENT_REQ_TYPE_UNKOWN CIOT_MQTT_CLIENT_REQ_TYPE_UNKOWN
#define CIOT_MQTT_CLIENT_REQ_TYPE_MQTT_CLIENT_REQ_TYPE_PUBLISH CIOT_MQTT_CLIENT_REQ_TYPE_PUBLISH
#define CIOT_MQTT_CLIENT_REQ_TYPE_MQTT_CLIENT_REQ_TYPE_SUBSCRIBE CIOT_MQTT_CLIENT_REQ_TYPE_SUBSCRIBE

#define _CIOT_MQTT_CLIENT_BROKER_KIND_MIN CIOT_MQTT_CLIENT_BROKER_KIND_DEFAULT
#define _CIOT_MQTT_CLIENT_BROKER_KIND_MAX CIOT_MQTT_CLIENT_BROKER_KIND_AZURE
#define _CIOT_MQTT_CLIENT_BROKER_KIND_ARRAYSIZE ((ciot_mqtt_client_broker_kind_t)(CIOT_MQTT_CLIENT_BROKER_KIND_AZURE+1))
#define CIOT_MQTT_CLIENT_BROKER_KIND_MQTT_CLIENT_BROKER_KIND_DEFAULT CIOT_MQTT_CLIENT_BROKER_KIND_DEFAULT
#define CIOT_MQTT_CLIENT_BROKER_KIND_MQTT_CLIENT_BROKER_KIND_SSL_1_2 CIOT_MQTT_CLIENT_BROKER_KIND_SSL_1_2
#define CIOT_MQTT_CLIENT_BROKER_KIND_MQTT_CLIENT_BROKER_KIND_SSL_1_3 CIOT_MQTT_CLIENT_BROKER_KIND_SSL_1_3
#define CIOT_MQTT_CLIENT_BROKER_KIND_MQTT_CLIENT_BROKER_KIND_AWS CIOT_MQTT_CLIENT_BROKER_KIND_AWS
#define CIOT_MQTT_CLIENT_BROKER_KIND_MQTT_CLIENT_BROKER_KIND_AZURE CIOT_MQTT_CLIENT_BROKER_KIND_AZURE




#define ciot_mqtt_client_cfg_t_broker_kind_ENUMTYPE ciot_mqtt_client_broker_kind_t

#define ciot_mqtt_client_status_t_state_ENUMTYPE ciot_mqtt_client_state_t






/* Initializer values for message structs */
#define CIOT_MQTT_CLIENT_ERROR_INIT_DEFAULT      {0, 0, 0, 0, 0, 0}
#define CIOT_MQTT_CLIENT_TOPICS_CFG_INIT_DEFAULT {"", ""}
#define CIOT_MQTT_CLIENT_STOP_INIT_DEFAULT       {0}
#define CIOT_MQTT_CLIENT_CFG_INIT_DEFAULT        {"", "", "", "", 0, false, CIOT_MQTT_CLIENT_TOPICS_CFG_INIT_DEFAULT, _CIOT_MQTT_CLIENT_BROKER_KIND_MIN}
#define CIOT_MQTT_CLIENT_STATUS_INIT_DEFAULT     {_CIOT_MQTT_CLIENT_STATE_MIN, 0, 0, 0, false, CIOT_MQTT_CLIENT_ERROR_INIT_DEFAULT}
#define CIOT_MQTT_CLIENT_REQ_PUBLISH_INIT_DEFAULT {"", {0}, 0}
#define CIOT_MQTT_CLIENT_REQ_SUBSCRIBE_INIT_DEFAULT {"", 0}
#define CIOT_MQTT_CLIENT_REQ_INIT_DEFAULT        {0, {CIOT_MQTT_CLIENT_REQ_PUBLISH_INIT_DEFAULT}}
#define CIOT_MQTT_CLIENT_DATA_INIT_DEFAULT       {0, {CIOT_MQTT_CLIENT_STOP_INIT_DEFAULT}}
#define CIOT_MQTT_CLIENT_ERROR_INIT_ZERO         {0, 0, 0, 0, 0, 0}
#define CIOT_MQTT_CLIENT_TOPICS_CFG_INIT_ZERO    {"", ""}
#define CIOT_MQTT_CLIENT_STOP_INIT_ZERO          {0}
#define CIOT_MQTT_CLIENT_CFG_INIT_ZERO           {"", "", "", "", 0, false, CIOT_MQTT_CLIENT_TOPICS_CFG_INIT_ZERO, _CIOT_MQTT_CLIENT_BROKER_KIND_MIN}
#define CIOT_MQTT_CLIENT_STATUS_INIT_ZERO        {_CIOT_MQTT_CLIENT_STATE_MIN, 0, 0, 0, false, CIOT_MQTT_CLIENT_ERROR_INIT_ZERO}
#define CIOT_MQTT_CLIENT_REQ_PUBLISH_INIT_ZERO   {"", {0}, 0}
#define CIOT_MQTT_CLIENT_REQ_SUBSCRIBE_INIT_ZERO {"", 0}
#define CIOT_MQTT_CLIENT_REQ_INIT_ZERO           {0, {CIOT_MQTT_CLIENT_REQ_PUBLISH_INIT_ZERO}}
#define CIOT_MQTT_CLIENT_DATA_INIT_ZERO          {0, {CIOT_MQTT_CLIENT_STOP_INIT_ZERO}}

/* Field tags (for use in manual encoding/decoding) */
#define CIOT_MQTT_CLIENT_ERROR_TLS_LAST_ERR_TAG  1
#define CIOT_MQTT_CLIENT_ERROR_TLS_STACK_ERR_TAG 2
#define CIOT_MQTT_CLIENT_ERROR_TLS_CERT_VERIFY_FLAGS_TAG 3
#define CIOT_MQTT_CLIENT_ERROR_TYPE_TAG          4
#define CIOT_MQTT_CLIENT_ERROR_CODE_TAG          5
#define CIOT_MQTT_CLIENT_ERROR_TRANSPORT_SOCK_TAG 6
#define CIOT_MQTT_CLIENT_TOPICS_CFG_PUB_TAG      1
#define CIOT_MQTT_CLIENT_TOPICS_CFG_SUB_TAG      2
#define CIOT_MQTT_CLIENT_CFG_CLIENT_ID_TAG       1
#define CIOT_MQTT_CLIENT_CFG_URL_TAG             2
#define CIOT_MQTT_CLIENT_CFG_USER_TAG            3
#define CIOT_MQTT_CLIENT_CFG_PASSWORD_TAG        4
#define CIOT_MQTT_CLIENT_CFG_QOS_TAG             5
#define CIOT_MQTT_CLIENT_CFG_TOPICS_TAG          6
#define CIOT_MQTT_CLIENT_CFG_BROKER_KIND_TAG     7
#define CIOT_MQTT_CLIENT_STATUS_STATE_TAG        1
#define CIOT_MQTT_CLIENT_STATUS_CONN_COUNT_TAG   2
#define CIOT_MQTT_CLIENT_STATUS_DATA_RATE_TAG    3
#define CIOT_MQTT_CLIENT_STATUS_LAST_MSG_TIME_TAG 4
#define CIOT_MQTT_CLIENT_STATUS_ERROR_TAG        5
#define CIOT_MQTT_CLIENT_REQ_PUBLISH_TOPIC_TAG   1
#define CIOT_MQTT_CLIENT_REQ_PUBLISH_PAYLOAD_TAG 2
#define CIOT_MQTT_CLIENT_REQ_PUBLISH_QOS_TAG     3
#define CIOT_MQTT_CLIENT_REQ_SUBSCRIBE_TOPIC_TAG 1
#define CIOT_MQTT_CLIENT_REQ_SUBSCRIBE_QOS_TAG   2
#define CIOT_MQTT_CLIENT_REQ_PUBLISH_TAG         1
#define CIOT_MQTT_CLIENT_REQ_SUBSCRIBE_TAG       2
#define CIOT_MQTT_CLIENT_DATA_STOP_TAG           1
#define CIOT_MQTT_CLIENT_DATA_CONFIG_TAG         2
#define CIOT_MQTT_CLIENT_DATA_STATUS_TAG         3
#define CIOT_MQTT_CLIENT_DATA_REQUEST_TAG        4

/* Struct field encoding specification for nanopb */
#define CIOT_MQTT_CLIENT_ERROR_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, INT32,    tls_last_err,      1) \
X(a, STATIC,   SINGULAR, INT32,    tls_stack_err,     2) \
X(a, STATIC,   SINGULAR, INT32,    tls_cert_verify_flags,   3) \
X(a, STATIC,   SINGULAR, INT32,    type,              4) \
X(a, STATIC,   SINGULAR, INT32,    code,              5) \
X(a, STATIC,   SINGULAR, INT32,    transport_sock,    6)
#define CIOT_MQTT_CLIENT_ERROR_CALLBACK NULL
#define CIOT_MQTT_CLIENT_ERROR_DEFAULT NULL

#define CIOT_MQTT_CLIENT_TOPICS_CFG_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, STRING,   pub,               1) \
X(a, STATIC,   SINGULAR, STRING,   sub,               2)
#define CIOT_MQTT_CLIENT_TOPICS_CFG_CALLBACK NULL
#define CIOT_MQTT_CLIENT_TOPICS_CFG_DEFAULT NULL

#define CIOT_MQTT_CLIENT_STOP_FIELDLIST(X, a) \

#define CIOT_MQTT_CLIENT_STOP_CALLBACK NULL
#define CIOT_MQTT_CLIENT_STOP_DEFAULT NULL

#define CIOT_MQTT_CLIENT_CFG_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, STRING,   client_id,         1) \
X(a, STATIC,   SINGULAR, STRING,   url,               2) \
X(a, STATIC,   SINGULAR, STRING,   user,              3) \
X(a, STATIC,   SINGULAR, STRING,   password,          4) \
X(a, STATIC,   SINGULAR, UINT32,   qos,               5) \
X(a, STATIC,   OPTIONAL, MESSAGE,  topics,            6) \
X(a, STATIC,   SINGULAR, UENUM,    broker_kind,       7)
#define CIOT_MQTT_CLIENT_CFG_CALLBACK NULL
#define CIOT_MQTT_CLIENT_CFG_DEFAULT NULL
#define ciot_mqtt_client_cfg_t_topics_MSGTYPE ciot_mqtt_client_topics_cfg_t

#define CIOT_MQTT_CLIENT_STATUS_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UENUM,    state,             1) \
X(a, STATIC,   SINGULAR, UINT32,   conn_count,        2) \
X(a, STATIC,   SINGULAR, UINT32,   data_rate,         3) \
X(a, STATIC,   SINGULAR, UINT64,   last_msg_time,     4) \
X(a, STATIC,   OPTIONAL, MESSAGE,  error,             5)
#define CIOT_MQTT_CLIENT_STATUS_CALLBACK NULL
#define CIOT_MQTT_CLIENT_STATUS_DEFAULT NULL
#define ciot_mqtt_client_status_t_error_MSGTYPE ciot_mqtt_client_error_t

#define CIOT_MQTT_CLIENT_REQ_PUBLISH_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, STRING,   topic,             1) \
X(a, STATIC,   SINGULAR, FIXED_LENGTH_BYTES, payload,           2) \
X(a, STATIC,   SINGULAR, INT32,    qos,               3)
#define CIOT_MQTT_CLIENT_REQ_PUBLISH_CALLBACK NULL
#define CIOT_MQTT_CLIENT_REQ_PUBLISH_DEFAULT NULL

#define CIOT_MQTT_CLIENT_REQ_SUBSCRIBE_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, STRING,   topic,             1) \
X(a, STATIC,   SINGULAR, INT32,    qos,               2)
#define CIOT_MQTT_CLIENT_REQ_SUBSCRIBE_CALLBACK NULL
#define CIOT_MQTT_CLIENT_REQ_SUBSCRIBE_DEFAULT NULL

#define CIOT_MQTT_CLIENT_REQ_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MESSAGE,  (type,publish,publish),   1) \
X(a, STATIC,   ONEOF,    MESSAGE,  (type,subscribe,subscribe),   2)
#define CIOT_MQTT_CLIENT_REQ_CALLBACK NULL
#define CIOT_MQTT_CLIENT_REQ_DEFAULT NULL
#define ciot_mqtt_client_req_t_type_publish_MSGTYPE ciot_mqtt_client_req_publish_t
#define ciot_mqtt_client_req_t_type_subscribe_MSGTYPE ciot_mqtt_client_req_subscribe_t

#define CIOT_MQTT_CLIENT_DATA_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MESSAGE,  (type,stop,stop),   1) \
X(a, STATIC,   ONEOF,    MESSAGE,  (type,config,config),   2) \
X(a, STATIC,   ONEOF,    MESSAGE,  (type,status,status),   3) \
X(a, STATIC,   ONEOF,    MESSAGE,  (type,request,request),   4)
#define CIOT_MQTT_CLIENT_DATA_CALLBACK NULL
#define CIOT_MQTT_CLIENT_DATA_DEFAULT NULL
#define ciot_mqtt_client_data_t_type_stop_MSGTYPE ciot_mqtt_client_stop_t
#define ciot_mqtt_client_data_t_type_config_MSGTYPE ciot_mqtt_client_cfg_t
#define ciot_mqtt_client_data_t_type_status_MSGTYPE ciot_mqtt_client_status_t
#define ciot_mqtt_client_data_t_type_request_MSGTYPE ciot_mqtt_client_req_t

extern const pb_msgdesc_t ciot_mqtt_client_error_t_msg;
extern const pb_msgdesc_t ciot_mqtt_client_topics_cfg_t_msg;
extern const pb_msgdesc_t ciot_mqtt_client_stop_t_msg;
extern const pb_msgdesc_t ciot_mqtt_client_cfg_t_msg;
extern const pb_msgdesc_t ciot_mqtt_client_status_t_msg;
extern const pb_msgdesc_t ciot_mqtt_client_req_publish_t_msg;
extern const pb_msgdesc_t ciot_mqtt_client_req_subscribe_t_msg;
extern const pb_msgdesc_t ciot_mqtt_client_req_t_msg;
extern const pb_msgdesc_t ciot_mqtt_client_data_t_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define CIOT_MQTT_CLIENT_ERROR_FIELDS &ciot_mqtt_client_error_t_msg
#define CIOT_MQTT_CLIENT_TOPICS_CFG_FIELDS &ciot_mqtt_client_topics_cfg_t_msg
#define CIOT_MQTT_CLIENT_STOP_FIELDS &ciot_mqtt_client_stop_t_msg
#define CIOT_MQTT_CLIENT_CFG_FIELDS &ciot_mqtt_client_cfg_t_msg
#define CIOT_MQTT_CLIENT_STATUS_FIELDS &ciot_mqtt_client_status_t_msg
#define CIOT_MQTT_CLIENT_REQ_PUBLISH_FIELDS &ciot_mqtt_client_req_publish_t_msg
#define CIOT_MQTT_CLIENT_REQ_SUBSCRIBE_FIELDS &ciot_mqtt_client_req_subscribe_t_msg
#define CIOT_MQTT_CLIENT_REQ_FIELDS &ciot_mqtt_client_req_t_msg
#define CIOT_MQTT_CLIENT_DATA_FIELDS &ciot_mqtt_client_data_t_msg

/* Maximum encoded size of messages (where known) */
#define CIOT_CIOT_PROTO_V2_MQTT_CLIENT_PB_H_MAX_SIZE CIOT_MQTT_CLIENT_DATA_SIZE
#define CIOT_MQTT_CLIENT_CFG_SIZE                256
#define CIOT_MQTT_CLIENT_DATA_SIZE               259
#define CIOT_MQTT_CLIENT_ERROR_SIZE              66
#define CIOT_MQTT_CLIENT_REQ_PUBLISH_SIZE        191
#define CIOT_MQTT_CLIENT_REQ_SIZE                194
#define CIOT_MQTT_CLIENT_REQ_SUBSCRIBE_SIZE      60
#define CIOT_MQTT_CLIENT_STATUS_SIZE             93
#define CIOT_MQTT_CLIENT_STOP_SIZE               0
#define CIOT_MQTT_CLIENT_TOPICS_CFG_SIZE         98

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif

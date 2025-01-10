/* Automatically generated nanopb header */
/* Generated by nanopb-1.0.0-dev */

#ifndef PB_CIOT_CIOT_PROTO_V2_HTTP_CLIENT_PB_H_INCLUDED
#define PB_CIOT_CIOT_PROTO_V2_HTTP_CLIENT_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
/* Enum representing the state of the HTTP client. */
typedef enum ciot_http_client_state {
    CIOT_HTTP_CLIENT_STATE_IDLE = 0, /* The HTTP client is idle. */
    CIOT_HTTP_CLIENT_STATE_STARTED = 1, /* The HTTP client has started. */
    CIOT_HTTP_CLIENT_STATE_CONNECTING = 2, /* The HTTP client is connecting. */
    CIOT_HTTP_CLIENT_STATE_CONNECTED = 3, /* The HTTP client is connected. */
    CIOT_HTTP_CLIENT_STATE_DATA_RECEIVED = 4, /* Data has been received by the HTTP client. */
    CIOT_HTTP_CLIENT_STATE_TIMEOUT = 5, /* The HTTP client has timed out. */
    CIOT_HTTP_CLIENT_STATE_ERROR = 6 /* The HTTP client encountered an error. */
} ciot_http_client_state_t;

/* Enum representing different HTTP methods. */
typedef enum ciot_http_client_method {
    CIOT_HTTP_METHOD_GET = 0, /* HTTP GET method. */
    CIOT_HTTP_METHOD_POST = 1, /* HTTP POST method. */
    CIOT_HTTP_METHOD_PUT = 2, /* HTTP PUT method. */
    CIOT_HTTP_METHOD_PATCH = 3, /* HTTP PATCH method. */
    CIOT_HTTP_METHOD_DELETE = 4, /* HTTP DELETE method. */
    CIOT_HTTP_METHOD_HEAD = 5, /* HTTP HEAD method. */
    CIOT_HTTP_METHOD_NOTIFY = 6, /* HTTP NOTIFY method. */
    CIOT_HTTP_METHOD_SUBSCRIBE = 7, /* HTTP SUBSCRIBE method. */
    CIOT_HTTP_METHOD_UNSUBSCRIBE = 8, /* HTTP UNSUBSCRIBE method. */
    CIOT_HTTP_METHOD_OPTIONS = 9, /* HTTP OPTIONS method. */
    CIOT_HTTP_METHOD_COPY = 10, /* HTTP COPY method. */
    CIOT_HTTP_METHOD_MOVE = 11, /* HTTP MOVE method. */
    CIOT_HTTP_METHOD_LOCK = 12, /* HTTP LOCK method. */
    CIOT_HTTP_METHOD_UNLOCK = 13, /* HTTP UNLOCK method. */
    CIOT_HTTP_METHOD_PROPFIND = 14, /* HTTP PROPFIND method. */
    CIOT_HTTP_METHOD_PROPPATCH = 15, /* HTTP PROPPATCH method. */
    CIOT_HTTP_METHOD_MKCOL = 16, /* HTTP MKCOL method. */
    CIOT_HTTP_METHOD_MAX = 17 /* Maximum value for HTTP methods. */
} ciot_http_client_method_t;

/* Enum representing different HTTP transport types. */
typedef enum ciot_http_client_transport_type {
    CIOT_HTTP_TRANSPORT_UNKNOWN = 0, /* Unknown transport type. */
    CIOT_HTTP_TRANSPORT_TCP = 1, /* TCP transport. */
    CIOT_HTTP_TRANSPORT_SSL = 2 /* SSL transport. */
} ciot_http_client_transport_type_t;

/* Struct definitions */
/* Message used to stop HTTP client interface */
typedef struct ciot_http_client_stop {
    char dummy_field;
} ciot_http_client_stop_t;

/* Message representing HTTP client configuration. */
typedef struct ciot_http_client_cfg {
    char url[48]; /* URL for the HTTP request. */
    ciot_http_client_method_t method; /* HTTP method to use. */
    ciot_http_client_transport_type_t transport; /* Transport type for the HTTP request. */
    uint32_t timeout; /* Timeout for the HTTP request. */
} ciot_http_client_cfg_t;

/* Message representing HTTP client status. */
typedef struct ciot_http_client_status {
    ciot_http_client_state_t state; /* State of the HTTP client. */
    int32_t error; /* Error code, if any. */
} ciot_http_client_status_t;

/* Message representing data to be sent by the HTTP client. */
typedef struct ciot_http_client_req_send {
    bool has_config;
    ciot_http_client_cfg_t config; /* Configuration for the HTTP client. */
    pb_byte_t body[128]; /* Body of the HTTP request. */
} ciot_http_client_req_send_t;

/* Message representing setting a header for the HTTP client request. */
typedef struct ciot_http_client_req_set_header {
    char header[16]; /* Header name. */
    char value[16]; /* Header value. */
} ciot_http_client_req_set_header_t;

/* Message representing an HTTP client request. */
typedef struct ciot_http_client_req {
    pb_size_t which_type;
    union {
        ciot_http_client_req_send_t send; /* Data to be sent in the request. */
        ciot_http_client_req_set_header_t set_header; /* Header to be set in the request. */
    };
} ciot_http_client_req_t;

/* Message representing HTTP client data. */
typedef struct ciot_http_client_data {
    pb_size_t which_type;
    union {
        ciot_http_client_stop_t stop; /* Stop HTTP client. */
        ciot_http_client_cfg_t config; /* Configuration for the HTTP client. */
        ciot_http_client_status_t status; /* Status of the HTTP client. */
        ciot_http_client_req_t request; /* HTTP client request. */
    };
} ciot_http_client_data_t;


#ifdef __cplusplus
extern "C" {
#endif

/* Helper constants for enums */
#define _CIOT_HTTP_CLIENT_STATE_MIN CIOT_HTTP_CLIENT_STATE_IDLE
#define _CIOT_HTTP_CLIENT_STATE_MAX CIOT_HTTP_CLIENT_STATE_ERROR
#define _CIOT_HTTP_CLIENT_STATE_ARRAYSIZE ((ciot_http_client_state_t)(CIOT_HTTP_CLIENT_STATE_ERROR+1))
#define CIOT_HTTP_CLIENT_STATE_HTTP_CLIENT_STATE_IDLE CIOT_HTTP_CLIENT_STATE_IDLE
#define CIOT_HTTP_CLIENT_STATE_HTTP_CLIENT_STATE_STARTED CIOT_HTTP_CLIENT_STATE_STARTED
#define CIOT_HTTP_CLIENT_STATE_HTTP_CLIENT_STATE_CONNECTING CIOT_HTTP_CLIENT_STATE_CONNECTING
#define CIOT_HTTP_CLIENT_STATE_HTTP_CLIENT_STATE_CONNECTED CIOT_HTTP_CLIENT_STATE_CONNECTED
#define CIOT_HTTP_CLIENT_STATE_HTTP_CLIENT_STATE_DATA_RECEIVED CIOT_HTTP_CLIENT_STATE_DATA_RECEIVED
#define CIOT_HTTP_CLIENT_STATE_HTTP_CLIENT_STATE_TIMEOUT CIOT_HTTP_CLIENT_STATE_TIMEOUT
#define CIOT_HTTP_CLIENT_STATE_HTTP_CLIENT_STATE_ERROR CIOT_HTTP_CLIENT_STATE_ERROR

#define _CIOT_HTTP_CLIENT_METHOD_MIN CIOT_HTTP_METHOD_GET
#define _CIOT_HTTP_CLIENT_METHOD_MAX CIOT_HTTP_METHOD_MAX
#define _CIOT_HTTP_CLIENT_METHOD_ARRAYSIZE ((ciot_http_client_method_t)(CIOT_HTTP_METHOD_MAX+1))
#define CIOT_HTTP_CLIENT_METHOD_HTTP_METHOD_GET CIOT_HTTP_METHOD_GET
#define CIOT_HTTP_CLIENT_METHOD_HTTP_METHOD_POST CIOT_HTTP_METHOD_POST
#define CIOT_HTTP_CLIENT_METHOD_HTTP_METHOD_PUT CIOT_HTTP_METHOD_PUT
#define CIOT_HTTP_CLIENT_METHOD_HTTP_METHOD_PATCH CIOT_HTTP_METHOD_PATCH
#define CIOT_HTTP_CLIENT_METHOD_HTTP_METHOD_DELETE CIOT_HTTP_METHOD_DELETE
#define CIOT_HTTP_CLIENT_METHOD_HTTP_METHOD_HEAD CIOT_HTTP_METHOD_HEAD
#define CIOT_HTTP_CLIENT_METHOD_HTTP_METHOD_NOTIFY CIOT_HTTP_METHOD_NOTIFY
#define CIOT_HTTP_CLIENT_METHOD_HTTP_METHOD_SUBSCRIBE CIOT_HTTP_METHOD_SUBSCRIBE
#define CIOT_HTTP_CLIENT_METHOD_HTTP_METHOD_UNSUBSCRIBE CIOT_HTTP_METHOD_UNSUBSCRIBE
#define CIOT_HTTP_CLIENT_METHOD_HTTP_METHOD_OPTIONS CIOT_HTTP_METHOD_OPTIONS
#define CIOT_HTTP_CLIENT_METHOD_HTTP_METHOD_COPY CIOT_HTTP_METHOD_COPY
#define CIOT_HTTP_CLIENT_METHOD_HTTP_METHOD_MOVE CIOT_HTTP_METHOD_MOVE
#define CIOT_HTTP_CLIENT_METHOD_HTTP_METHOD_LOCK CIOT_HTTP_METHOD_LOCK
#define CIOT_HTTP_CLIENT_METHOD_HTTP_METHOD_UNLOCK CIOT_HTTP_METHOD_UNLOCK
#define CIOT_HTTP_CLIENT_METHOD_HTTP_METHOD_PROPFIND CIOT_HTTP_METHOD_PROPFIND
#define CIOT_HTTP_CLIENT_METHOD_HTTP_METHOD_PROPPATCH CIOT_HTTP_METHOD_PROPPATCH
#define CIOT_HTTP_CLIENT_METHOD_HTTP_METHOD_MKCOL CIOT_HTTP_METHOD_MKCOL
#define CIOT_HTTP_CLIENT_METHOD_HTTP_METHOD_MAX CIOT_HTTP_METHOD_MAX

#define _CIOT_HTTP_CLIENT_TRANSPORT_TYPE_MIN CIOT_HTTP_TRANSPORT_UNKNOWN
#define _CIOT_HTTP_CLIENT_TRANSPORT_TYPE_MAX CIOT_HTTP_TRANSPORT_SSL
#define _CIOT_HTTP_CLIENT_TRANSPORT_TYPE_ARRAYSIZE ((ciot_http_client_transport_type_t)(CIOT_HTTP_TRANSPORT_SSL+1))
#define CIOT_HTTP_CLIENT_TRANSPORT_TYPE_HTTP_TRANSPORT_UNKNOWN CIOT_HTTP_TRANSPORT_UNKNOWN
#define CIOT_HTTP_CLIENT_TRANSPORT_TYPE_HTTP_TRANSPORT_TCP CIOT_HTTP_TRANSPORT_TCP
#define CIOT_HTTP_CLIENT_TRANSPORT_TYPE_HTTP_TRANSPORT_SSL CIOT_HTTP_TRANSPORT_SSL


#define ciot_http_client_cfg_t_method_ENUMTYPE ciot_http_client_method_t
#define ciot_http_client_cfg_t_transport_ENUMTYPE ciot_http_client_transport_type_t

#define ciot_http_client_status_t_state_ENUMTYPE ciot_http_client_state_t






/* Initializer values for message structs */
#define CIOT_HTTP_CLIENT_STOP_INIT_DEFAULT       {0}
#define CIOT_HTTP_CLIENT_CFG_INIT_DEFAULT        {"", _CIOT_HTTP_CLIENT_METHOD_MIN, _CIOT_HTTP_CLIENT_TRANSPORT_TYPE_MIN, 0}
#define CIOT_HTTP_CLIENT_STATUS_INIT_DEFAULT     {_CIOT_HTTP_CLIENT_STATE_MIN, 0}
#define CIOT_HTTP_CLIENT_REQ_SEND_INIT_DEFAULT   {false, CIOT_HTTP_CLIENT_CFG_INIT_DEFAULT, {0}}
#define CIOT_HTTP_CLIENT_REQ_SET_HEADER_INIT_DEFAULT {"", ""}
#define CIOT_HTTP_CLIENT_REQ_INIT_DEFAULT        {0, {CIOT_HTTP_CLIENT_REQ_SEND_INIT_DEFAULT}}
#define CIOT_HTTP_CLIENT_DATA_INIT_DEFAULT       {0, {CIOT_HTTP_CLIENT_STOP_INIT_DEFAULT}}
#define CIOT_HTTP_CLIENT_STOP_INIT_ZERO          {0}
#define CIOT_HTTP_CLIENT_CFG_INIT_ZERO           {"", _CIOT_HTTP_CLIENT_METHOD_MIN, _CIOT_HTTP_CLIENT_TRANSPORT_TYPE_MIN, 0}
#define CIOT_HTTP_CLIENT_STATUS_INIT_ZERO        {_CIOT_HTTP_CLIENT_STATE_MIN, 0}
#define CIOT_HTTP_CLIENT_REQ_SEND_INIT_ZERO      {false, CIOT_HTTP_CLIENT_CFG_INIT_ZERO, {0}}
#define CIOT_HTTP_CLIENT_REQ_SET_HEADER_INIT_ZERO {"", ""}
#define CIOT_HTTP_CLIENT_REQ_INIT_ZERO           {0, {CIOT_HTTP_CLIENT_REQ_SEND_INIT_ZERO}}
#define CIOT_HTTP_CLIENT_DATA_INIT_ZERO          {0, {CIOT_HTTP_CLIENT_STOP_INIT_ZERO}}

/* Field tags (for use in manual encoding/decoding) */
#define CIOT_HTTP_CLIENT_CFG_URL_TAG             1
#define CIOT_HTTP_CLIENT_CFG_METHOD_TAG          2
#define CIOT_HTTP_CLIENT_CFG_TRANSPORT_TAG       3
#define CIOT_HTTP_CLIENT_CFG_TIMEOUT_TAG         4
#define CIOT_HTTP_CLIENT_STATUS_STATE_TAG        1
#define CIOT_HTTP_CLIENT_STATUS_ERROR_TAG        2
#define CIOT_HTTP_CLIENT_REQ_SEND_CONFIG_TAG     1
#define CIOT_HTTP_CLIENT_REQ_SEND_BODY_TAG       2
#define CIOT_HTTP_CLIENT_REQ_SET_HEADER_HEADER_TAG 1
#define CIOT_HTTP_CLIENT_REQ_SET_HEADER_VALUE_TAG 2
#define CIOT_HTTP_CLIENT_REQ_SEND_TAG            1
#define CIOT_HTTP_CLIENT_REQ_SET_HEADER_TAG      2
#define CIOT_HTTP_CLIENT_DATA_STOP_TAG           1
#define CIOT_HTTP_CLIENT_DATA_CONFIG_TAG         2
#define CIOT_HTTP_CLIENT_DATA_STATUS_TAG         3
#define CIOT_HTTP_CLIENT_DATA_REQUEST_TAG        4

/* Struct field encoding specification for nanopb */
#define CIOT_HTTP_CLIENT_STOP_FIELDLIST(X, a) \

#define CIOT_HTTP_CLIENT_STOP_CALLBACK NULL
#define CIOT_HTTP_CLIENT_STOP_DEFAULT NULL

#define CIOT_HTTP_CLIENT_CFG_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, STRING,   url,               1) \
X(a, STATIC,   SINGULAR, UENUM,    method,            2) \
X(a, STATIC,   SINGULAR, UENUM,    transport,         3) \
X(a, STATIC,   SINGULAR, UINT32,   timeout,           4)
#define CIOT_HTTP_CLIENT_CFG_CALLBACK NULL
#define CIOT_HTTP_CLIENT_CFG_DEFAULT NULL

#define CIOT_HTTP_CLIENT_STATUS_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UENUM,    state,             1) \
X(a, STATIC,   SINGULAR, INT32,    error,             2)
#define CIOT_HTTP_CLIENT_STATUS_CALLBACK NULL
#define CIOT_HTTP_CLIENT_STATUS_DEFAULT NULL

#define CIOT_HTTP_CLIENT_REQ_SEND_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, MESSAGE,  config,            1) \
X(a, STATIC,   SINGULAR, FIXED_LENGTH_BYTES, body,              2)
#define CIOT_HTTP_CLIENT_REQ_SEND_CALLBACK NULL
#define CIOT_HTTP_CLIENT_REQ_SEND_DEFAULT NULL
#define ciot_http_client_req_send_t_config_MSGTYPE ciot_http_client_cfg_t

#define CIOT_HTTP_CLIENT_REQ_SET_HEADER_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, STRING,   header,            1) \
X(a, STATIC,   SINGULAR, STRING,   value,             2)
#define CIOT_HTTP_CLIENT_REQ_SET_HEADER_CALLBACK NULL
#define CIOT_HTTP_CLIENT_REQ_SET_HEADER_DEFAULT NULL

#define CIOT_HTTP_CLIENT_REQ_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MESSAGE,  (type,send,send),   1) \
X(a, STATIC,   ONEOF,    MESSAGE,  (type,set_header,set_header),   2)
#define CIOT_HTTP_CLIENT_REQ_CALLBACK NULL
#define CIOT_HTTP_CLIENT_REQ_DEFAULT NULL
#define ciot_http_client_req_t_type_send_MSGTYPE ciot_http_client_req_send_t
#define ciot_http_client_req_t_type_set_header_MSGTYPE ciot_http_client_req_set_header_t

#define CIOT_HTTP_CLIENT_DATA_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MESSAGE,  (type,stop,stop),   1) \
X(a, STATIC,   ONEOF,    MESSAGE,  (type,config,config),   2) \
X(a, STATIC,   ONEOF,    MESSAGE,  (type,status,status),   3) \
X(a, STATIC,   ONEOF,    MESSAGE,  (type,request,request),   4)
#define CIOT_HTTP_CLIENT_DATA_CALLBACK NULL
#define CIOT_HTTP_CLIENT_DATA_DEFAULT NULL
#define ciot_http_client_data_t_type_stop_MSGTYPE ciot_http_client_stop_t
#define ciot_http_client_data_t_type_config_MSGTYPE ciot_http_client_cfg_t
#define ciot_http_client_data_t_type_status_MSGTYPE ciot_http_client_status_t
#define ciot_http_client_data_t_type_request_MSGTYPE ciot_http_client_req_t

extern const pb_msgdesc_t ciot_http_client_stop_t_msg;
extern const pb_msgdesc_t ciot_http_client_cfg_t_msg;
extern const pb_msgdesc_t ciot_http_client_status_t_msg;
extern const pb_msgdesc_t ciot_http_client_req_send_t_msg;
extern const pb_msgdesc_t ciot_http_client_req_set_header_t_msg;
extern const pb_msgdesc_t ciot_http_client_req_t_msg;
extern const pb_msgdesc_t ciot_http_client_data_t_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define CIOT_HTTP_CLIENT_STOP_FIELDS &ciot_http_client_stop_t_msg
#define CIOT_HTTP_CLIENT_CFG_FIELDS &ciot_http_client_cfg_t_msg
#define CIOT_HTTP_CLIENT_STATUS_FIELDS &ciot_http_client_status_t_msg
#define CIOT_HTTP_CLIENT_REQ_SEND_FIELDS &ciot_http_client_req_send_t_msg
#define CIOT_HTTP_CLIENT_REQ_SET_HEADER_FIELDS &ciot_http_client_req_set_header_t_msg
#define CIOT_HTTP_CLIENT_REQ_FIELDS &ciot_http_client_req_t_msg
#define CIOT_HTTP_CLIENT_DATA_FIELDS &ciot_http_client_data_t_msg

/* Maximum encoded size of messages (where known) */
#define CIOT_CIOT_PROTO_V2_HTTP_CLIENT_PB_H_MAX_SIZE CIOT_HTTP_CLIENT_DATA_SIZE
#define CIOT_HTTP_CLIENT_CFG_SIZE                59
#define CIOT_HTTP_CLIENT_DATA_SIZE               198
#define CIOT_HTTP_CLIENT_REQ_SEND_SIZE           192
#define CIOT_HTTP_CLIENT_REQ_SET_HEADER_SIZE     34
#define CIOT_HTTP_CLIENT_REQ_SIZE                195
#define CIOT_HTTP_CLIENT_STATUS_SIZE             13
#define CIOT_HTTP_CLIENT_STOP_SIZE               0

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
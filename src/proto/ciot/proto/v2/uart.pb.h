/* Automatically generated nanopb header */
/* Generated by nanopb-1.0.0-dev */

#ifndef PB_CIOT_CIOT_PROTO_V2_UART_PB_H_INCLUDED
#define PB_CIOT_CIOT_PROTO_V2_UART_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
/* Enum representing the state of the UART module. */
typedef enum ciot_uart_state {
    CIOT_UART_STATE_CLOSED = 0, /* UART is closed. */
    CIOT_UART_STATE_STARTED = 1, /* UART is started. */
    CIOT_UART_STATE_INTERNAL_ERROR = 2, /* UART encountered an internal error. */
    CIOT_UART_STATE_CIOT_S_ERROR = 3 /* UART encountered a CIOT-S (Custom IoT System) error. */
} ciot_uart_state_t;

/* Enum representing different types of UART requests. */
typedef enum ciot_uart_req_type {
    CIOT_UART_REQ_TYPE_UNKOWN = 0, /* Unknown UART request type. */
    CIOT_UART_REQ_TYPE_SEND_DATA = 1, /* Request to send data via UART. */
    CIOT_UART_REQ_TYPE_SEND_BYTES = 2 /* Request to send bytes via UART. */
} ciot_uart_req_type_t;

/* Enum representing different UART error types. */
typedef enum ciot_uart_error {
    CIOT_UART_ERROR_NONE = 0, /* No UART error. */
    CIOT_UART_ERROR_BREAK = 1, /* UART break error. */
    CIOT_UART_ERROR_BUFFER_FULL = 2, /* UART buffer full error. */
    CIOT_UART_ERROR_FIFO_OVERFLOW = 3, /* UART FIFO overflow error. */
    CIOT_UART_ERROR_FRAME = 4, /* UART frame error. */
    CIOT_UART_ERROR_PARITY = 5, /* UART parity error. */
    CIOT_UART_ERROR_DATA_BREAK = 6, /* UART data break error. */
    CIOT_UART_ERROR_OPEN = 8, /* UART open error. */
    CIOT_UART_ERROR_UNKNOWN = -1 /* Unknown UART event error. */
} ciot_uart_error_t;

/* Struct definitions */
/* Message used to stop uart interface */
typedef struct ciot_uart_stop {
    char dummy_field;
} ciot_uart_stop_t;

/* Message representing configuration for the UART module. */
typedef struct ciot_uart_cfg {
    int32_t baud_rate; /* Baud rate for UART. */
    int32_t num; /* UART number. */
    int32_t rx_pin; /* RX pin number. */
    int32_t tx_pin; /* TX pin number. */
    int32_t rts_pin; /* RTS pin number. */
    int32_t cts_pin; /* CTS pin number. */
    int32_t parity; /* Parity for UART. */
    bool flow_control; /* Flow control for UART. */
    bool dtr; /* DTR (Data Terminal Ready) signal. */
    bool bridge_mode; /* Bridge mode for UART. */
} ciot_uart_cfg_t;

/* Message representing status for the UART module. */
typedef struct ciot_uart_status {
    ciot_uart_state_t state; /* State of the UART module. */
    ciot_uart_error_t error; /* Error encountered by the UART module. */
} ciot_uart_status_t;

typedef PB_BYTES_ARRAY_T(128) ciot_uart_req_send_data_t;
/* Message representing a UART request. */
typedef struct ciot_uart_req {
    pb_size_t which_type;
    union {
        ciot_uart_req_send_data_t send_data;
    };
} ciot_uart_req_t;

/* Message representing data for the UART interface. */
typedef struct ciot_uart_data {
    pb_size_t which_type;
    union {
        ciot_uart_stop_t stop; /* Stop UART interface. */
        ciot_uart_cfg_t config; /* Configuration for the UART interface. */
        ciot_uart_status_t status; /* Status of the UART interface. */
        ciot_uart_req_t request; /* UART request data. */
    };
} ciot_uart_data_t;


#ifdef __cplusplus
extern "C" {
#endif

/* Helper constants for enums */
#define _CIOT_UART_STATE_MIN CIOT_UART_STATE_CLOSED
#define _CIOT_UART_STATE_MAX CIOT_UART_STATE_CIOT_S_ERROR
#define _CIOT_UART_STATE_ARRAYSIZE ((ciot_uart_state_t)(CIOT_UART_STATE_CIOT_S_ERROR+1))
#define CIOT_UART_STATE_UART_STATE_CLOSED CIOT_UART_STATE_CLOSED
#define CIOT_UART_STATE_UART_STATE_STARTED CIOT_UART_STATE_STARTED
#define CIOT_UART_STATE_UART_STATE_INTERNAL_ERROR CIOT_UART_STATE_INTERNAL_ERROR
#define CIOT_UART_STATE_UART_STATE_CIOT_S_ERROR CIOT_UART_STATE_CIOT_S_ERROR

#define _CIOT_UART_REQ_TYPE_MIN CIOT_UART_REQ_TYPE_UNKOWN
#define _CIOT_UART_REQ_TYPE_MAX CIOT_UART_REQ_TYPE_SEND_BYTES
#define _CIOT_UART_REQ_TYPE_ARRAYSIZE ((ciot_uart_req_type_t)(CIOT_UART_REQ_TYPE_SEND_BYTES+1))
#define CIOT_UART_REQ_TYPE_UART_REQ_TYPE_UNKOWN CIOT_UART_REQ_TYPE_UNKOWN
#define CIOT_UART_REQ_TYPE_UART_REQ_TYPE_SEND_DATA CIOT_UART_REQ_TYPE_SEND_DATA
#define CIOT_UART_REQ_TYPE_UART_REQ_TYPE_SEND_BYTES CIOT_UART_REQ_TYPE_SEND_BYTES

#define _CIOT_UART_ERROR_MIN CIOT_UART_ERROR_UNKNOWN
#define _CIOT_UART_ERROR_MAX CIOT_UART_ERROR_OPEN
#define _CIOT_UART_ERROR_ARRAYSIZE ((ciot_uart_error_t)(CIOT_UART_ERROR_OPEN+1))
#define CIOT_UART_ERROR_UART_ERROR_NONE CIOT_UART_ERROR_NONE
#define CIOT_UART_ERROR_UART_ERROR_BREAK CIOT_UART_ERROR_BREAK
#define CIOT_UART_ERROR_UART_ERROR_BUFFER_FULL CIOT_UART_ERROR_BUFFER_FULL
#define CIOT_UART_ERROR_UART_ERROR_FIFO_OVERFLOW CIOT_UART_ERROR_FIFO_OVERFLOW
#define CIOT_UART_ERROR_UART_ERROR_FRAME CIOT_UART_ERROR_FRAME
#define CIOT_UART_ERROR_UART_ERROR_PARITY CIOT_UART_ERROR_PARITY
#define CIOT_UART_ERROR_UART_ERROR_DATA_BREAK CIOT_UART_ERROR_DATA_BREAK
#define CIOT_UART_ERROR_UART_ERROR_OPEN CIOT_UART_ERROR_OPEN
#define CIOT_UART_ERROR_UART_ERROR_UNKNOWN CIOT_UART_ERROR_UNKNOWN



#define ciot_uart_status_t_state_ENUMTYPE ciot_uart_state_t
#define ciot_uart_status_t_error_ENUMTYPE ciot_uart_error_t




/* Initializer values for message structs */
#define CIOT_UART_STOP_INIT_DEFAULT              {0}
#define CIOT_UART_CFG_INIT_DEFAULT               {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#define CIOT_UART_STATUS_INIT_DEFAULT            {_CIOT_UART_STATE_MIN, _CIOT_UART_ERROR_MIN}
#define CIOT_UART_REQ_INIT_DEFAULT               {0, {{0, {0}}}}
#define CIOT_UART_DATA_INIT_DEFAULT              {0, {CIOT_UART_STOP_INIT_DEFAULT}}
#define CIOT_UART_STOP_INIT_ZERO                 {0}
#define CIOT_UART_CFG_INIT_ZERO                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#define CIOT_UART_STATUS_INIT_ZERO               {_CIOT_UART_STATE_MIN, _CIOT_UART_ERROR_MIN}
#define CIOT_UART_REQ_INIT_ZERO                  {0, {{0, {0}}}}
#define CIOT_UART_DATA_INIT_ZERO                 {0, {CIOT_UART_STOP_INIT_ZERO}}

/* Field tags (for use in manual encoding/decoding) */
#define CIOT_UART_CFG_BAUD_RATE_TAG              1
#define CIOT_UART_CFG_NUM_TAG                    2
#define CIOT_UART_CFG_RX_PIN_TAG                 3
#define CIOT_UART_CFG_TX_PIN_TAG                 4
#define CIOT_UART_CFG_RTS_PIN_TAG                5
#define CIOT_UART_CFG_CTS_PIN_TAG                6
#define CIOT_UART_CFG_PARITY_TAG                 7
#define CIOT_UART_CFG_FLOW_CONTROL_TAG           8
#define CIOT_UART_CFG_DTR_TAG                    9
#define CIOT_UART_CFG_BRIDGE_MODE_TAG            10
#define CIOT_UART_STATUS_STATE_TAG               1
#define CIOT_UART_STATUS_ERROR_TAG               2
#define CIOT_UART_REQ_SEND_DATA_TAG              1
#define CIOT_UART_DATA_STOP_TAG                  1
#define CIOT_UART_DATA_CONFIG_TAG                2
#define CIOT_UART_DATA_STATUS_TAG                3
#define CIOT_UART_DATA_REQUEST_TAG               4

/* Struct field encoding specification for nanopb */
#define CIOT_UART_STOP_FIELDLIST(X, a) \

#define CIOT_UART_STOP_CALLBACK NULL
#define CIOT_UART_STOP_DEFAULT NULL

#define CIOT_UART_CFG_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, INT32,    baud_rate,         1) \
X(a, STATIC,   SINGULAR, INT32,    num,               2) \
X(a, STATIC,   SINGULAR, INT32,    rx_pin,            3) \
X(a, STATIC,   SINGULAR, INT32,    tx_pin,            4) \
X(a, STATIC,   SINGULAR, INT32,    rts_pin,           5) \
X(a, STATIC,   SINGULAR, INT32,    cts_pin,           6) \
X(a, STATIC,   SINGULAR, INT32,    parity,            7) \
X(a, STATIC,   SINGULAR, BOOL,     flow_control,      8) \
X(a, STATIC,   SINGULAR, BOOL,     dtr,               9) \
X(a, STATIC,   SINGULAR, BOOL,     bridge_mode,      10)
#define CIOT_UART_CFG_CALLBACK NULL
#define CIOT_UART_CFG_DEFAULT NULL

#define CIOT_UART_STATUS_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UENUM,    state,             1) \
X(a, STATIC,   SINGULAR, ENUM,     error,             2)
#define CIOT_UART_STATUS_CALLBACK NULL
#define CIOT_UART_STATUS_DEFAULT NULL

#define CIOT_UART_REQ_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    BYTES,    (type,send_data,send_data),   1)
#define CIOT_UART_REQ_CALLBACK NULL
#define CIOT_UART_REQ_DEFAULT NULL

#define CIOT_UART_DATA_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MESSAGE,  (type,stop,stop),   1) \
X(a, STATIC,   ONEOF,    MESSAGE,  (type,config,config),   2) \
X(a, STATIC,   ONEOF,    MESSAGE,  (type,status,status),   3) \
X(a, STATIC,   ONEOF,    MESSAGE,  (type,request,request),   4)
#define CIOT_UART_DATA_CALLBACK NULL
#define CIOT_UART_DATA_DEFAULT NULL
#define ciot_uart_data_t_type_stop_MSGTYPE ciot_uart_stop_t
#define ciot_uart_data_t_type_config_MSGTYPE ciot_uart_cfg_t
#define ciot_uart_data_t_type_status_MSGTYPE ciot_uart_status_t
#define ciot_uart_data_t_type_request_MSGTYPE ciot_uart_req_t

extern const pb_msgdesc_t ciot_uart_stop_t_msg;
extern const pb_msgdesc_t ciot_uart_cfg_t_msg;
extern const pb_msgdesc_t ciot_uart_status_t_msg;
extern const pb_msgdesc_t ciot_uart_req_t_msg;
extern const pb_msgdesc_t ciot_uart_data_t_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define CIOT_UART_STOP_FIELDS &ciot_uart_stop_t_msg
#define CIOT_UART_CFG_FIELDS &ciot_uart_cfg_t_msg
#define CIOT_UART_STATUS_FIELDS &ciot_uart_status_t_msg
#define CIOT_UART_REQ_FIELDS &ciot_uart_req_t_msg
#define CIOT_UART_DATA_FIELDS &ciot_uart_data_t_msg

/* Maximum encoded size of messages (where known) */
#define CIOT_CIOT_PROTO_V2_UART_PB_H_MAX_SIZE    CIOT_UART_DATA_SIZE
#define CIOT_UART_CFG_SIZE                       83
#define CIOT_UART_DATA_SIZE                      134
#define CIOT_UART_REQ_SIZE                       131
#define CIOT_UART_STATUS_SIZE                    13
#define CIOT_UART_STOP_SIZE                      0

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
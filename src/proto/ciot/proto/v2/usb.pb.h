/* Automatically generated nanopb header */
/* Generated by nanopb-1.0.0-dev */

#ifndef PB_CIOT_CIOT_PROTO_V2_USB_PB_H_INCLUDED
#define PB_CIOT_CIOT_PROTO_V2_USB_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
/* Enum representing the state of the USB module. */
typedef enum ciot_usb_state {
    CIOT_USB_STATE_STOPPED = 0, /* USB module is stopped. */
    CIOT_USB_STATE_STARTED = 1, /* USB module is started. */
    CIOT_USB_STATE_CIOT_S_ERROR = 3 /* USB module encountered CIOT-S error. */
} ciot_usb_state_t;

/* Struct definitions */
/* Stop USB interface */
typedef struct ciot_usb_stop {
    char dummy_field;
} ciot_usb_stop_t;

/* Message representing configuration for the USB module. */
typedef struct ciot_usb_cfg {
    bool bridge_mode; /* Flag indicating whether bridge mode is enabled. */
} ciot_usb_cfg_t;

/* Message representing status for the USB module. */
typedef struct ciot_usb_status {
    ciot_usb_state_t state; /* State of the USB module. */
} ciot_usb_status_t;

/* Message representing data for a USB request. */
typedef struct ciot_usb_req {
    pb_size_t which_type;
    union {
        pb_byte_t send_data[128]; /* Send data over USB. */
        pb_byte_t send_bytes[128]; /* Send bytes over USB. */
    };
} ciot_usb_req_t;

/* Message representing data for the USB module. */
typedef struct ciot_usb_data {
    pb_size_t which_type;
    union {
        ciot_usb_stop_t stop; /* Stop USB interface */
        ciot_usb_cfg_t config; /* Configuration for the USB module. */
        ciot_usb_status_t status; /* Status of the USB module. */
        ciot_usb_req_t request; /* USB request data. */
    };
} ciot_usb_data_t;


#ifdef __cplusplus
extern "C" {
#endif

/* Helper constants for enums */
#define _CIOT_USB_STATE_MIN CIOT_USB_STATE_STOPPED
#define _CIOT_USB_STATE_MAX CIOT_USB_STATE_CIOT_S_ERROR
#define _CIOT_USB_STATE_ARRAYSIZE ((ciot_usb_state_t)(CIOT_USB_STATE_CIOT_S_ERROR+1))
#define CIOT_USB_STATE_USB_STATE_STOPPED CIOT_USB_STATE_STOPPED
#define CIOT_USB_STATE_USB_STATE_STARTED CIOT_USB_STATE_STARTED
#define CIOT_USB_STATE_USB_STATE_CIOT_S_ERROR CIOT_USB_STATE_CIOT_S_ERROR



#define ciot_usb_status_t_state_ENUMTYPE ciot_usb_state_t




/* Initializer values for message structs */
#define CIOT_USB_STOP_INIT_DEFAULT               {0}
#define CIOT_USB_CFG_INIT_DEFAULT                {0}
#define CIOT_USB_STATUS_INIT_DEFAULT             {_CIOT_USB_STATE_MIN}
#define CIOT_USB_REQ_INIT_DEFAULT                {0, {{0}}}
#define CIOT_USB_DATA_INIT_DEFAULT               {0, {CIOT_USB_STOP_INIT_DEFAULT}}
#define CIOT_USB_STOP_INIT_ZERO                  {0}
#define CIOT_USB_CFG_INIT_ZERO                   {0}
#define CIOT_USB_STATUS_INIT_ZERO                {_CIOT_USB_STATE_MIN}
#define CIOT_USB_REQ_INIT_ZERO                   {0, {{0}}}
#define CIOT_USB_DATA_INIT_ZERO                  {0, {CIOT_USB_STOP_INIT_ZERO}}

/* Field tags (for use in manual encoding/decoding) */
#define CIOT_USB_CFG_BRIDGE_MODE_TAG             1
#define CIOT_USB_STATUS_STATE_TAG                1
#define CIOT_USB_REQ_SEND_DATA_TAG               1
#define CIOT_USB_REQ_SEND_BYTES_TAG              2
#define CIOT_USB_DATA_STOP_TAG                   1
#define CIOT_USB_DATA_CONFIG_TAG                 2
#define CIOT_USB_DATA_STATUS_TAG                 3
#define CIOT_USB_DATA_REQUEST_TAG                4

/* Struct field encoding specification for nanopb */
#define CIOT_USB_STOP_FIELDLIST(X, a) \

#define CIOT_USB_STOP_CALLBACK NULL
#define CIOT_USB_STOP_DEFAULT NULL

#define CIOT_USB_CFG_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BOOL,     bridge_mode,       1)
#define CIOT_USB_CFG_CALLBACK NULL
#define CIOT_USB_CFG_DEFAULT NULL

#define CIOT_USB_STATUS_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UENUM,    state,             1)
#define CIOT_USB_STATUS_CALLBACK NULL
#define CIOT_USB_STATUS_DEFAULT NULL

#define CIOT_USB_REQ_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    FIXED_LENGTH_BYTES, (type,send_data,send_data),   1) \
X(a, STATIC,   ONEOF,    FIXED_LENGTH_BYTES, (type,send_bytes,send_bytes),   2)
#define CIOT_USB_REQ_CALLBACK NULL
#define CIOT_USB_REQ_DEFAULT NULL

#define CIOT_USB_DATA_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MESSAGE,  (type,stop,stop),   1) \
X(a, STATIC,   ONEOF,    MESSAGE,  (type,config,config),   2) \
X(a, STATIC,   ONEOF,    MESSAGE,  (type,status,status),   3) \
X(a, STATIC,   ONEOF,    MESSAGE,  (type,request,request),   4)
#define CIOT_USB_DATA_CALLBACK NULL
#define CIOT_USB_DATA_DEFAULT NULL
#define ciot_usb_data_t_type_stop_MSGTYPE ciot_usb_stop_t
#define ciot_usb_data_t_type_config_MSGTYPE ciot_usb_cfg_t
#define ciot_usb_data_t_type_status_MSGTYPE ciot_usb_status_t
#define ciot_usb_data_t_type_request_MSGTYPE ciot_usb_req_t

extern const pb_msgdesc_t ciot_usb_stop_t_msg;
extern const pb_msgdesc_t ciot_usb_cfg_t_msg;
extern const pb_msgdesc_t ciot_usb_status_t_msg;
extern const pb_msgdesc_t ciot_usb_req_t_msg;
extern const pb_msgdesc_t ciot_usb_data_t_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define CIOT_USB_STOP_FIELDS &ciot_usb_stop_t_msg
#define CIOT_USB_CFG_FIELDS &ciot_usb_cfg_t_msg
#define CIOT_USB_STATUS_FIELDS &ciot_usb_status_t_msg
#define CIOT_USB_REQ_FIELDS &ciot_usb_req_t_msg
#define CIOT_USB_DATA_FIELDS &ciot_usb_data_t_msg

/* Maximum encoded size of messages (where known) */
#define CIOT_CIOT_PROTO_V2_USB_PB_H_MAX_SIZE     CIOT_USB_DATA_SIZE
#define CIOT_USB_CFG_SIZE                        2
#define CIOT_USB_DATA_SIZE                       134
#define CIOT_USB_REQ_SIZE                        131
#define CIOT_USB_STATUS_SIZE                     2
#define CIOT_USB_STOP_SIZE                       0

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
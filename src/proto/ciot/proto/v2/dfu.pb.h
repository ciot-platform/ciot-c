/* Automatically generated nanopb header */
/* Generated by nanopb-1.0.0-dev */

#ifndef PB_CIOT_CIOT_PROTO_V2_DFU_PB_H_INCLUDED
#define PB_CIOT_CIOT_PROTO_V2_DFU_PB_H_INCLUDED
#include <pb.h>
#include "ciot/proto/v2/errors.pb.h"

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
/* Possible dfu states */
typedef enum ciot_dfu_state {
    /* Idle state */
    CIOT_DFU_STATE_IDLE = 0,
    /* Dfu Starting */
    CIOT_DFU_STATE_STARTING = 1,
    /* Dfu Interrface started */
    CIOT_DFU_STATE_STARTED = 2,
    /* Dfu in progress */
    CIOT_DFU_STATE_IN_PROGRESS = 3,
    /* Dfu completed */
    CIOT_DFU_STATE_COMPLETED = 4,
    /* Dfu error */
    CIOT_DFU_STATE_ERROR = 5
} ciot_dfu_state_t;

/* Dfu types */
typedef enum ciot_dfu_type {
    CIOT_DFU_TYPE_UNKNOWN = 0, /* Unknown type */
    CIOT_DFU_TYPE_UART = 1, /* Dfu over uart */
    CIOT_DFU_TYPE_USB = 2, /* Dfu over USB */
    CIOT_DFU_TYPE_BLE = 3 /* Dfu over bluetooth low energy */
} ciot_dfu_type_t;

/* Struct definitions */
/* Dfu stop message */
typedef struct ciot_dfu_stop {
    char dummy_field;
} ciot_dfu_stop_t;

/* Dfu configuration */
typedef struct ciot_dfu_cfg {
    ciot_dfu_type_t type; /* DFU type */
} ciot_dfu_cfg_t;

/* Dfu status */
typedef struct ciot_dfu_status {
    ciot_dfu_state_t state; /* Dfu current state */
    int32_t code; /* Dfu response/status code */
    ciot_err_t error; /* Dfu error code */
    uint32_t image_size; /* Dfu image size */
    uint32_t image_written; /* Dfu image written on client */
} ciot_dfu_status_t;

/* Dfu request */
typedef struct ciot_dfu_req {
    char dummy_field;
} ciot_dfu_req_t;

/* Dfu data */
typedef struct ciot_dfu_data {
    pb_size_t which_type;
    union {
        ciot_dfu_stop_t stop; /* Dfu stop */
        ciot_dfu_cfg_t config; /* Dfu configuration data */
        ciot_dfu_status_t status; /* Dfu status data */
        ciot_dfu_req_t request; /* Dfu request data */
    };
} ciot_dfu_data_t;


#ifdef __cplusplus
extern "C" {
#endif

/* Helper constants for enums */
#define _CIOT_DFU_STATE_MIN CIOT_DFU_STATE_IDLE
#define _CIOT_DFU_STATE_MAX CIOT_DFU_STATE_ERROR
#define _CIOT_DFU_STATE_ARRAYSIZE ((ciot_dfu_state_t)(CIOT_DFU_STATE_ERROR+1))
#define CIOT_DFU_STATE_DFU_STATE_IDLE CIOT_DFU_STATE_IDLE
#define CIOT_DFU_STATE_DFU_STATE_STARTING CIOT_DFU_STATE_STARTING
#define CIOT_DFU_STATE_DFU_STATE_STARTED CIOT_DFU_STATE_STARTED
#define CIOT_DFU_STATE_DFU_STATE_IN_PROGRESS CIOT_DFU_STATE_IN_PROGRESS
#define CIOT_DFU_STATE_DFU_STATE_COMPLETED CIOT_DFU_STATE_COMPLETED
#define CIOT_DFU_STATE_DFU_STATE_ERROR CIOT_DFU_STATE_ERROR

#define _CIOT_DFU_TYPE_MIN CIOT_DFU_TYPE_UNKNOWN
#define _CIOT_DFU_TYPE_MAX CIOT_DFU_TYPE_BLE
#define _CIOT_DFU_TYPE_ARRAYSIZE ((ciot_dfu_type_t)(CIOT_DFU_TYPE_BLE+1))
#define CIOT_DFU_TYPE_DFU_TYPE_UNKNOWN CIOT_DFU_TYPE_UNKNOWN
#define CIOT_DFU_TYPE_DFU_TYPE_UART CIOT_DFU_TYPE_UART
#define CIOT_DFU_TYPE_DFU_TYPE_USB CIOT_DFU_TYPE_USB
#define CIOT_DFU_TYPE_DFU_TYPE_BLE CIOT_DFU_TYPE_BLE


#define ciot_dfu_cfg_t_type_ENUMTYPE ciot_dfu_type_t

#define ciot_dfu_status_t_state_ENUMTYPE ciot_dfu_state_t
#define ciot_dfu_status_t_error_ENUMTYPE ciot_err_t




/* Initializer values for message structs */
#define CIOT_DFU_STOP_INIT_DEFAULT               {0}
#define CIOT_DFU_CFG_INIT_DEFAULT                {_CIOT_DFU_TYPE_MIN}
#define CIOT_DFU_STATUS_INIT_DEFAULT             {_CIOT_DFU_STATE_MIN, 0, _CIOT_ERR_MIN, 0, 0}
#define CIOT_DFU_REQ_INIT_DEFAULT                {0}
#define CIOT_DFU_DATA_INIT_DEFAULT               {0, {CIOT_DFU_STOP_INIT_DEFAULT}}
#define CIOT_DFU_STOP_INIT_ZERO                  {0}
#define CIOT_DFU_CFG_INIT_ZERO                   {_CIOT_DFU_TYPE_MIN}
#define CIOT_DFU_STATUS_INIT_ZERO                {_CIOT_DFU_STATE_MIN, 0, _CIOT_ERR_MIN, 0, 0}
#define CIOT_DFU_REQ_INIT_ZERO                   {0}
#define CIOT_DFU_DATA_INIT_ZERO                  {0, {CIOT_DFU_STOP_INIT_ZERO}}

/* Field tags (for use in manual encoding/decoding) */
#define CIOT_DFU_CFG_TYPE_TAG                    1
#define CIOT_DFU_STATUS_STATE_TAG                1
#define CIOT_DFU_STATUS_CODE_TAG                 2
#define CIOT_DFU_STATUS_ERROR_TAG                3
#define CIOT_DFU_STATUS_IMAGE_SIZE_TAG           4
#define CIOT_DFU_STATUS_IMAGE_WRITTEN_TAG        5
#define CIOT_DFU_DATA_STOP_TAG                   1
#define CIOT_DFU_DATA_CONFIG_TAG                 2
#define CIOT_DFU_DATA_STATUS_TAG                 3
#define CIOT_DFU_DATA_REQUEST_TAG                4

/* Struct field encoding specification for nanopb */
#define CIOT_DFU_STOP_FIELDLIST(X, a) \

#define CIOT_DFU_STOP_CALLBACK NULL
#define CIOT_DFU_STOP_DEFAULT NULL

#define CIOT_DFU_CFG_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UENUM,    type,              1)
#define CIOT_DFU_CFG_CALLBACK NULL
#define CIOT_DFU_CFG_DEFAULT NULL

#define CIOT_DFU_STATUS_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UENUM,    state,             1) \
X(a, STATIC,   SINGULAR, INT32,    code,              2) \
X(a, STATIC,   SINGULAR, UENUM,    error,             3) \
X(a, STATIC,   SINGULAR, UINT32,   image_size,        4) \
X(a, STATIC,   SINGULAR, UINT32,   image_written,     5)
#define CIOT_DFU_STATUS_CALLBACK NULL
#define CIOT_DFU_STATUS_DEFAULT NULL

#define CIOT_DFU_REQ_FIELDLIST(X, a) \

#define CIOT_DFU_REQ_CALLBACK NULL
#define CIOT_DFU_REQ_DEFAULT NULL

#define CIOT_DFU_DATA_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MESSAGE,  (type,stop,stop),   1) \
X(a, STATIC,   ONEOF,    MESSAGE,  (type,config,config),   2) \
X(a, STATIC,   ONEOF,    MESSAGE,  (type,status,status),   3) \
X(a, STATIC,   ONEOF,    MESSAGE,  (type,request,request),   4)
#define CIOT_DFU_DATA_CALLBACK NULL
#define CIOT_DFU_DATA_DEFAULT NULL
#define ciot_dfu_data_t_type_stop_MSGTYPE ciot_dfu_stop_t
#define ciot_dfu_data_t_type_config_MSGTYPE ciot_dfu_cfg_t
#define ciot_dfu_data_t_type_status_MSGTYPE ciot_dfu_status_t
#define ciot_dfu_data_t_type_request_MSGTYPE ciot_dfu_req_t

extern const pb_msgdesc_t ciot_dfu_stop_t_msg;
extern const pb_msgdesc_t ciot_dfu_cfg_t_msg;
extern const pb_msgdesc_t ciot_dfu_status_t_msg;
extern const pb_msgdesc_t ciot_dfu_req_t_msg;
extern const pb_msgdesc_t ciot_dfu_data_t_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define CIOT_DFU_STOP_FIELDS &ciot_dfu_stop_t_msg
#define CIOT_DFU_CFG_FIELDS &ciot_dfu_cfg_t_msg
#define CIOT_DFU_STATUS_FIELDS &ciot_dfu_status_t_msg
#define CIOT_DFU_REQ_FIELDS &ciot_dfu_req_t_msg
#define CIOT_DFU_DATA_FIELDS &ciot_dfu_data_t_msg

/* Maximum encoded size of messages (where known) */
#define CIOT_CIOT_PROTO_V2_DFU_PB_H_MAX_SIZE     CIOT_DFU_DATA_SIZE
#define CIOT_DFU_CFG_SIZE                        2
#define CIOT_DFU_DATA_SIZE                       29
#define CIOT_DFU_REQ_SIZE                        0
#define CIOT_DFU_STATUS_SIZE                     27
#define CIOT_DFU_STOP_SIZE                       0

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif

/* Automatically generated nanopb header */
/* Generated by nanopb-1.0.0-dev */

#ifndef PB_CIOT_CIOT_PROTO_V2_CIOT_PB_H_INCLUDED
#define PB_CIOT_CIOT_PROTO_V2_CIOT_PB_H_INCLUDED
#include <pb.h>
#include "ciot/proto/v2/iface.pb.h"

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
/* Enum representing the state of CIOT. */
typedef enum ciot_state {
    CIOT_STATE_IDLE = 0, /* CIOT core is in an idle state. */
    CIOT_STATE_STARTING = 1, /* CIOT core is starting. */
    CIOT_STATE_STARTED = 2, /* CIOT core is started. */
    CIOT_STATE_BUSY = 3, /* CIOT core is busy. */
    CIOT_STATE_ERROR = -1 /* CIOT core encountered an error. */
} ciot_state_t;

/* Enum representing different serialization types for CIOT. */
typedef enum ciot_serialization_type {
    CIOT_SERIALIZATION_PROTOBUF = 0 /* Protocol Buffers serialization type. */
} ciot_serialization_type_t;

/* Struct definitions */
/* Message representing CIOT information. */
typedef struct ciot_info {
    pb_byte_t version[4]; /* CIOT library version */
    pb_size_t ifaces_count;
    ciot_iface_type_t ifaces[10]; /* CIOT ifaces types list */
} ciot_info_t;

/* Message representing CIOT status. */
typedef struct ciot_status {
    ciot_state_t state; /* State of the CIOT device. */
} ciot_status_t;

/* Message representing a CIOT request. */
typedef struct ciot_req {
    pb_size_t which_type;
    union {
        ciot_iface_info_t save_cfg; /* Save interface configuration */
        ciot_iface_info_t delete_cfg; /* Delete interface configuration */
    };
} ciot_req_t;

/* Message representing CIOT data. */
typedef struct ciot_data {
    pb_size_t which_type;
    union {
        ciot_status_t status; /* Status of the CIOT device. */
        ciot_req_t request; /* CIOT request data. */
        ciot_info_t info; /* Additional information about the CIOT device. */
    };
} ciot_data_t;


#ifdef __cplusplus
extern "C" {
#endif

/* Helper constants for enums */
#define _CIOT_STATE_MIN CIOT_STATE_ERROR
#define _CIOT_STATE_MAX CIOT_STATE_BUSY
#define _CIOT_STATE_ARRAYSIZE ((ciot_state_t)(CIOT_STATE_BUSY+1))
#define CIOT_STATE_STATE_IDLE CIOT_STATE_IDLE
#define CIOT_STATE_STATE_STARTING CIOT_STATE_STARTING
#define CIOT_STATE_STATE_STARTED CIOT_STATE_STARTED
#define CIOT_STATE_STATE_BUSY CIOT_STATE_BUSY
#define CIOT_STATE_STATE_ERROR CIOT_STATE_ERROR

#define _CIOT_SERIALIZATION_TYPE_MIN CIOT_SERIALIZATION_PROTOBUF
#define _CIOT_SERIALIZATION_TYPE_MAX CIOT_SERIALIZATION_PROTOBUF
#define _CIOT_SERIALIZATION_TYPE_ARRAYSIZE ((ciot_serialization_type_t)(CIOT_SERIALIZATION_PROTOBUF+1))
#define CIOT_SERIALIZATION_TYPE_SERIALIZATION_PROTOBUF CIOT_SERIALIZATION_PROTOBUF

#define ciot_info_t_ifaces_ENUMTYPE ciot_iface_type_t

#define ciot_status_t_state_ENUMTYPE ciot_state_t




/* Initializer values for message structs */
#define CIOT_INFO_INIT_DEFAULT                   {{0}, 0, {_CIOT_IFACE_TYPE_MIN, _CIOT_IFACE_TYPE_MIN, _CIOT_IFACE_TYPE_MIN, _CIOT_IFACE_TYPE_MIN, _CIOT_IFACE_TYPE_MIN, _CIOT_IFACE_TYPE_MIN, _CIOT_IFACE_TYPE_MIN, _CIOT_IFACE_TYPE_MIN, _CIOT_IFACE_TYPE_MIN, _CIOT_IFACE_TYPE_MIN}}
#define CIOT_STATUS_INIT_DEFAULT                 {_CIOT_STATE_MIN}
#define CIOT_REQ_INIT_DEFAULT                    {0, {CIOT_IFACE_INFO_INIT_DEFAULT}}
#define CIOT_DATA_INIT_DEFAULT                   {0, {CIOT_STATUS_INIT_DEFAULT}}
#define CIOT_INFO_INIT_ZERO                      {{0}, 0, {_CIOT_IFACE_TYPE_MIN, _CIOT_IFACE_TYPE_MIN, _CIOT_IFACE_TYPE_MIN, _CIOT_IFACE_TYPE_MIN, _CIOT_IFACE_TYPE_MIN, _CIOT_IFACE_TYPE_MIN, _CIOT_IFACE_TYPE_MIN, _CIOT_IFACE_TYPE_MIN, _CIOT_IFACE_TYPE_MIN, _CIOT_IFACE_TYPE_MIN}}
#define CIOT_STATUS_INIT_ZERO                    {_CIOT_STATE_MIN}
#define CIOT_REQ_INIT_ZERO                       {0, {CIOT_IFACE_INFO_INIT_ZERO}}
#define CIOT_DATA_INIT_ZERO                      {0, {CIOT_STATUS_INIT_ZERO}}

/* Field tags (for use in manual encoding/decoding) */
#define CIOT_INFO_VERSION_TAG                    1
#define CIOT_INFO_IFACES_TAG                     2
#define CIOT_STATUS_STATE_TAG                    1
#define CIOT_REQ_SAVE_CFG_TAG                    1
#define CIOT_REQ_DELETE_CFG_TAG                  2
#define CIOT_DATA_STATUS_TAG                     2
#define CIOT_DATA_REQUEST_TAG                    3
#define CIOT_DATA_INFO_TAG                       4

/* Struct field encoding specification for nanopb */
#define CIOT_INFO_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, FIXED_LENGTH_BYTES, version,           1) \
X(a, STATIC,   REPEATED, UENUM,    ifaces,            2)
#define CIOT_INFO_CALLBACK NULL
#define CIOT_INFO_DEFAULT NULL

#define CIOT_STATUS_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, ENUM,     state,             1)
#define CIOT_STATUS_CALLBACK NULL
#define CIOT_STATUS_DEFAULT NULL

#define CIOT_REQ_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MESSAGE,  (type,save_cfg,save_cfg),   1) \
X(a, STATIC,   ONEOF,    MESSAGE,  (type,delete_cfg,delete_cfg),   2)
#define CIOT_REQ_CALLBACK NULL
#define CIOT_REQ_DEFAULT NULL
#define ciot_req_t_type_save_cfg_MSGTYPE ciot_iface_info_t
#define ciot_req_t_type_delete_cfg_MSGTYPE ciot_iface_info_t

#define CIOT_DATA_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MESSAGE,  (type,status,status),   2) \
X(a, STATIC,   ONEOF,    MESSAGE,  (type,request,request),   3) \
X(a, STATIC,   ONEOF,    MESSAGE,  (type,info,info),   4)
#define CIOT_DATA_CALLBACK NULL
#define CIOT_DATA_DEFAULT NULL
#define ciot_data_t_type_status_MSGTYPE ciot_status_t
#define ciot_data_t_type_request_MSGTYPE ciot_req_t
#define ciot_data_t_type_info_MSGTYPE ciot_info_t

extern const pb_msgdesc_t ciot_info_t_msg;
extern const pb_msgdesc_t ciot_status_t_msg;
extern const pb_msgdesc_t ciot_req_t_msg;
extern const pb_msgdesc_t ciot_data_t_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define CIOT_INFO_FIELDS &ciot_info_t_msg
#define CIOT_STATUS_FIELDS &ciot_status_t_msg
#define CIOT_REQ_FIELDS &ciot_req_t_msg
#define CIOT_DATA_FIELDS &ciot_data_t_msg

/* Maximum encoded size of messages (where known) */
#define CIOT_CIOT_PROTO_V2_CIOT_PB_H_MAX_SIZE    CIOT_DATA_SIZE
#define CIOT_DATA_SIZE                           28
#define CIOT_INFO_SIZE                           26
#define CIOT_REQ_SIZE                            10
#define CIOT_STATUS_SIZE                         11

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
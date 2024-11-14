/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: ciot/proto/v1/ble_adv.proto */

#ifndef PROTOBUF_C_ciot_2fproto_2fv1_2fble_5fadv_2eproto__INCLUDED
#define PROTOBUF_C_ciot_2fproto_2fv1_2fble_5fadv_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct Ciot__BleAdvCfg Ciot__BleAdvCfg;
typedef struct Ciot__BleAdvStatus Ciot__BleAdvStatus;
typedef struct Ciot__BleAdvReq Ciot__BleAdvReq;
typedef struct Ciot__BleAdvData Ciot__BleAdvData;


/* --- enums --- */

/*
 * Possible ble scanner states
 */
typedef enum _Ciot__BleAdvState {
  /*
   * Idle state
   */
  CIOT__BLE_ADV_STATE__BLE_ADV_STATE_IDLE = 0,
  CIOT__BLE_ADV_STATE__BLE_ADV_STATE_STARTED = 1,
  CIOT__BLE_ADV_STATE__BLE_ADV_STATE_SENDING = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(CIOT__BLE_ADV_STATE)
} Ciot__BleAdvState;
/*
 * Ble scanner request types
 */
typedef enum _Ciot__BleAdvReqType {
  /*
   * Unknown request type
   */
  CIOT__BLE_ADV_REQ_TYPE__BLE_ADV_REQ_TYPE_UNKOWN = 0
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(CIOT__BLE_ADV_REQ_TYPE)
} Ciot__BleAdvReqType;

/* --- messages --- */

/*
 * Ble scanner configuration
 */
struct  Ciot__BleAdvCfg
{
  ProtobufCMessage base;
  /*
   * Advertising interval
   */
  uint32_t interval;
  /*
   * Advertising duration
   */
  uint32_t duration;
  /*
   * Advertising type
   */
  uint32_t type;
  /*
   * Advertising filter policy
   */
  uint32_t filter_policy;
  /*
   * Advertising tx power
   */
  uint32_t tx_power;
};
#define CIOT__BLE_ADV_CFG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ciot__ble_adv_cfg__descriptor) \
    , 0, 0, 0, 0, 0 }


/*
 * Ble scanner status
 */
struct  Ciot__BleAdvStatus
{
  ProtobufCMessage base;
  /*
   * Current state
   */
  Ciot__BleAdvState state;
  /*
   * Current error code
   */
  int32_t err_code;
};
#define CIOT__BLE_ADV_STATUS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ciot__ble_adv_status__descriptor) \
    , CIOT__BLE_ADV_STATE__BLE_ADV_STATE_IDLE, 0 }


/*
 * Ble scanner request
 */
struct  Ciot__BleAdvReq
{
  ProtobufCMessage base;
  /*
   * Request type
   */
  Ciot__BleAdvReqType type;
};
#define CIOT__BLE_ADV_REQ__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ciot__ble_adv_req__descriptor) \
    , CIOT__BLE_ADV_REQ_TYPE__BLE_ADV_REQ_TYPE_UNKOWN }


/*
 * Ble scanner data
 */
struct  Ciot__BleAdvData
{
  ProtobufCMessage base;
  /*
   * Configuration
   */
  Ciot__BleAdvCfg *config;
  /*
   * Status
   */
  Ciot__BleAdvStatus *status;
  /*
   * Request
   */
  Ciot__BleAdvReq *request;
};
#define CIOT__BLE_ADV_DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ciot__ble_adv_data__descriptor) \
    , NULL, NULL, NULL }


/* Ciot__BleAdvCfg methods */
void   ciot__ble_adv_cfg__init
                     (Ciot__BleAdvCfg         *message);
size_t ciot__ble_adv_cfg__get_packed_size
                     (const Ciot__BleAdvCfg   *message);
size_t ciot__ble_adv_cfg__pack
                     (const Ciot__BleAdvCfg   *message,
                      uint8_t             *out);
size_t ciot__ble_adv_cfg__pack_to_buffer
                     (const Ciot__BleAdvCfg   *message,
                      ProtobufCBuffer     *buffer);
Ciot__BleAdvCfg *
       ciot__ble_adv_cfg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ciot__ble_adv_cfg__free_unpacked
                     (Ciot__BleAdvCfg *message,
                      ProtobufCAllocator *allocator);
/* Ciot__BleAdvStatus methods */
void   ciot__ble_adv_status__init
                     (Ciot__BleAdvStatus         *message);
size_t ciot__ble_adv_status__get_packed_size
                     (const Ciot__BleAdvStatus   *message);
size_t ciot__ble_adv_status__pack
                     (const Ciot__BleAdvStatus   *message,
                      uint8_t             *out);
size_t ciot__ble_adv_status__pack_to_buffer
                     (const Ciot__BleAdvStatus   *message,
                      ProtobufCBuffer     *buffer);
Ciot__BleAdvStatus *
       ciot__ble_adv_status__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ciot__ble_adv_status__free_unpacked
                     (Ciot__BleAdvStatus *message,
                      ProtobufCAllocator *allocator);
/* Ciot__BleAdvReq methods */
void   ciot__ble_adv_req__init
                     (Ciot__BleAdvReq         *message);
size_t ciot__ble_adv_req__get_packed_size
                     (const Ciot__BleAdvReq   *message);
size_t ciot__ble_adv_req__pack
                     (const Ciot__BleAdvReq   *message,
                      uint8_t             *out);
size_t ciot__ble_adv_req__pack_to_buffer
                     (const Ciot__BleAdvReq   *message,
                      ProtobufCBuffer     *buffer);
Ciot__BleAdvReq *
       ciot__ble_adv_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ciot__ble_adv_req__free_unpacked
                     (Ciot__BleAdvReq *message,
                      ProtobufCAllocator *allocator);
/* Ciot__BleAdvData methods */
void   ciot__ble_adv_data__init
                     (Ciot__BleAdvData         *message);
size_t ciot__ble_adv_data__get_packed_size
                     (const Ciot__BleAdvData   *message);
size_t ciot__ble_adv_data__pack
                     (const Ciot__BleAdvData   *message,
                      uint8_t             *out);
size_t ciot__ble_adv_data__pack_to_buffer
                     (const Ciot__BleAdvData   *message,
                      ProtobufCBuffer     *buffer);
Ciot__BleAdvData *
       ciot__ble_adv_data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ciot__ble_adv_data__free_unpacked
                     (Ciot__BleAdvData *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Ciot__BleAdvCfg_Closure)
                 (const Ciot__BleAdvCfg *message,
                  void *closure_data);
typedef void (*Ciot__BleAdvStatus_Closure)
                 (const Ciot__BleAdvStatus *message,
                  void *closure_data);
typedef void (*Ciot__BleAdvReq_Closure)
                 (const Ciot__BleAdvReq *message,
                  void *closure_data);
typedef void (*Ciot__BleAdvData_Closure)
                 (const Ciot__BleAdvData *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    ciot__ble_adv_state__descriptor;
extern const ProtobufCEnumDescriptor    ciot__ble_adv_req_type__descriptor;
extern const ProtobufCMessageDescriptor ciot__ble_adv_cfg__descriptor;
extern const ProtobufCMessageDescriptor ciot__ble_adv_status__descriptor;
extern const ProtobufCMessageDescriptor ciot__ble_adv_req__descriptor;
extern const ProtobufCMessageDescriptor ciot__ble_adv_data__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_ciot_2fproto_2fv1_2fble_5fadv_2eproto__INCLUDED */

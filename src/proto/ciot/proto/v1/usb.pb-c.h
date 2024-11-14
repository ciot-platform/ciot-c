/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: ciot/proto/v1/usb.proto */

#ifndef PROTOBUF_C_ciot_2fproto_2fv1_2fusb_2eproto__INCLUDED
#define PROTOBUF_C_ciot_2fproto_2fv1_2fusb_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct Ciot__UsbCfg Ciot__UsbCfg;
typedef struct Ciot__UsbStatus Ciot__UsbStatus;
typedef struct Ciot__UsbReq Ciot__UsbReq;
typedef struct Ciot__UsbData Ciot__UsbData;


/* --- enums --- */

/*
 * Enum representing the state of the USB module.
 */
typedef enum _Ciot__UsbState {
  /*
   * USB module is stopped.
   */
  CIOT__USB_STATE__USB_STATE_STOPPED = 0,
  /*
   * USB module is started.
   */
  CIOT__USB_STATE__USB_STATE_STARTED = 1,
  /*
   * USB module encountered CIOT-S error.
   */
  CIOT__USB_STATE__USB_STATE_CIOT_S_ERROR = 3
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(CIOT__USB_STATE)
} Ciot__UsbState;
/*
 * Enum representing different types of USB requests.
 */
typedef enum _Ciot__UsbReqType {
  /*
   * Unknown USB request type.
   */
  CIOT__USB_REQ_TYPE__USB_REQ_TYPE_UNKOWN = 0,
  /*
   * Send data over USB.
   */
  CIOT__USB_REQ_TYPE__USB_REQ_TYPE_SEND_DATA = 1,
  /*
   * Send bytes over USB.
   */
  CIOT__USB_REQ_TYPE__USB_REQ_TYPE_SEND_BYTES = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(CIOT__USB_REQ_TYPE)
} Ciot__UsbReqType;

/* --- messages --- */

/*
 * Message representing configuration for the USB module.
 */
struct  Ciot__UsbCfg
{
  ProtobufCMessage base;
  /*
   * Flag indicating whether bridge mode is enabled.
   */
  protobuf_c_boolean bridge_mode;
};
#define CIOT__USB_CFG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ciot__usb_cfg__descriptor) \
    , 0 }


/*
 * Message representing status for the USB module.
 */
struct  Ciot__UsbStatus
{
  ProtobufCMessage base;
  /*
   * State of the USB module.
   */
  Ciot__UsbState state;
};
#define CIOT__USB_STATUS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ciot__usb_status__descriptor) \
    , CIOT__USB_STATE__USB_STATE_STOPPED }


/*
 * Message representing data for a USB request.
 */
struct  Ciot__UsbReq
{
  ProtobufCMessage base;
  /*
   * Type of the USB request.
   */
  Ciot__UsbReqType type;
  /*
   * Data associated with the request.
   */
  ProtobufCBinaryData data;
};
#define CIOT__USB_REQ__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ciot__usb_req__descriptor) \
    , CIOT__USB_REQ_TYPE__USB_REQ_TYPE_UNKOWN, {0,NULL} }


/*
 * Message representing data for the USB module.
 */
struct  Ciot__UsbData
{
  ProtobufCMessage base;
  /*
   * Configuration for the USB module.
   */
  Ciot__UsbCfg *config;
  /*
   * Status of the USB module.
   */
  Ciot__UsbStatus *status;
  /*
   * USB request data.
   */
  Ciot__UsbReq *request;
};
#define CIOT__USB_DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ciot__usb_data__descriptor) \
    , NULL, NULL, NULL }


/* Ciot__UsbCfg methods */
void   ciot__usb_cfg__init
                     (Ciot__UsbCfg         *message);
size_t ciot__usb_cfg__get_packed_size
                     (const Ciot__UsbCfg   *message);
size_t ciot__usb_cfg__pack
                     (const Ciot__UsbCfg   *message,
                      uint8_t             *out);
size_t ciot__usb_cfg__pack_to_buffer
                     (const Ciot__UsbCfg   *message,
                      ProtobufCBuffer     *buffer);
Ciot__UsbCfg *
       ciot__usb_cfg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ciot__usb_cfg__free_unpacked
                     (Ciot__UsbCfg *message,
                      ProtobufCAllocator *allocator);
/* Ciot__UsbStatus methods */
void   ciot__usb_status__init
                     (Ciot__UsbStatus         *message);
size_t ciot__usb_status__get_packed_size
                     (const Ciot__UsbStatus   *message);
size_t ciot__usb_status__pack
                     (const Ciot__UsbStatus   *message,
                      uint8_t             *out);
size_t ciot__usb_status__pack_to_buffer
                     (const Ciot__UsbStatus   *message,
                      ProtobufCBuffer     *buffer);
Ciot__UsbStatus *
       ciot__usb_status__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ciot__usb_status__free_unpacked
                     (Ciot__UsbStatus *message,
                      ProtobufCAllocator *allocator);
/* Ciot__UsbReq methods */
void   ciot__usb_req__init
                     (Ciot__UsbReq         *message);
size_t ciot__usb_req__get_packed_size
                     (const Ciot__UsbReq   *message);
size_t ciot__usb_req__pack
                     (const Ciot__UsbReq   *message,
                      uint8_t             *out);
size_t ciot__usb_req__pack_to_buffer
                     (const Ciot__UsbReq   *message,
                      ProtobufCBuffer     *buffer);
Ciot__UsbReq *
       ciot__usb_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ciot__usb_req__free_unpacked
                     (Ciot__UsbReq *message,
                      ProtobufCAllocator *allocator);
/* Ciot__UsbData methods */
void   ciot__usb_data__init
                     (Ciot__UsbData         *message);
size_t ciot__usb_data__get_packed_size
                     (const Ciot__UsbData   *message);
size_t ciot__usb_data__pack
                     (const Ciot__UsbData   *message,
                      uint8_t             *out);
size_t ciot__usb_data__pack_to_buffer
                     (const Ciot__UsbData   *message,
                      ProtobufCBuffer     *buffer);
Ciot__UsbData *
       ciot__usb_data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ciot__usb_data__free_unpacked
                     (Ciot__UsbData *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Ciot__UsbCfg_Closure)
                 (const Ciot__UsbCfg *message,
                  void *closure_data);
typedef void (*Ciot__UsbStatus_Closure)
                 (const Ciot__UsbStatus *message,
                  void *closure_data);
typedef void (*Ciot__UsbReq_Closure)
                 (const Ciot__UsbReq *message,
                  void *closure_data);
typedef void (*Ciot__UsbData_Closure)
                 (const Ciot__UsbData *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    ciot__usb_state__descriptor;
extern const ProtobufCEnumDescriptor    ciot__usb_req_type__descriptor;
extern const ProtobufCMessageDescriptor ciot__usb_cfg__descriptor;
extern const ProtobufCMessageDescriptor ciot__usb_status__descriptor;
extern const ProtobufCMessageDescriptor ciot__usb_req__descriptor;
extern const ProtobufCMessageDescriptor ciot__usb_data__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_ciot_2fproto_2fv1_2fusb_2eproto__INCLUDED */

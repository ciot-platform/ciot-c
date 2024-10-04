/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: ciot/proto/v1/iface.proto */

#ifndef PROTOBUF_C_ciot_2fproto_2fv1_2fiface_2eproto__INCLUDED
#define PROTOBUF_C_ciot_2fproto_2fv1_2fiface_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Ciot__IfaceInfo Ciot__IfaceInfo;


/* --- enums --- */

/*
 * Enum representing different interface types.
 */
typedef enum _Ciot__IfaceType {
  /*
   * Unknown interface type.
   */
  CIOT__IFACE_TYPE__IFACE_TYPE_UNKNOWN = 0,
  /*
   * Custom interface type.
   */
  CIOT__IFACE_TYPE__IFACE_TYPE_CUSTOM = 1,
  /*
   * CIOT interface type.
   */
  CIOT__IFACE_TYPE__IFACE_TYPE_CIOT = 2,
  /*
   * Storage interface type.
   */
  CIOT__IFACE_TYPE__IFACE_TYPE_STORAGE = 3,
  /*
   * System interface type.
   */
  CIOT__IFACE_TYPE__IFACE_TYPE_SYS = 4,
  /*
   * UART interface type.
   */
  CIOT__IFACE_TYPE__IFACE_TYPE_UART = 5,
  /*
   * USB interface type.
   */
  CIOT__IFACE_TYPE__IFACE_TYPE_USB = 6,
  /*
   * TCP interface type.
   */
  CIOT__IFACE_TYPE__IFACE_TYPE_TCP = 7,
  /*
   * Ethernet interface type.
   */
  CIOT__IFACE_TYPE__IFACE_TYPE_ETH = 8,
  /*
   * WiFi interface type.
   */
  CIOT__IFACE_TYPE__IFACE_TYPE_WIFI = 9,
  /*
   * BLE interface type.
   */
  CIOT__IFACE_TYPE__IFACE_TYPE_BLE = 10,
  /*
   * BLE SCN interface type.
   */
  CIOT__IFACE_TYPE__IFACE_TYPE_BLE_SCN = 11,
  /*
   * BLE ADV interface type.
   */
  CIOT__IFACE_TYPE__IFACE_TYPE_BLE_ADV = 12,
  /*
   * GPIO interface type.
   */
  CIOT__IFACE_TYPE__IFACE_TYPE_GPIO = 13,
  /*
   * NTP interface type.
   */
  CIOT__IFACE_TYPE__IFACE_TYPE_NTP = 14,
  /*
   * OTA interface type.
   */
  CIOT__IFACE_TYPE__IFACE_TYPE_OTA = 15,
  /*
   * DFU interface type.
   */
  CIOT__IFACE_TYPE__IFACE_TYPE_DFU = 16,
  /*
   * HTTP Client interface type.
   */
  CIOT__IFACE_TYPE__IFACE_TYPE_HTTP_CLIENT = 17,
  /*
   * HTTP Server interface type.
   */
  CIOT__IFACE_TYPE__IFACE_TYPE_HTTP_SERVER = 18,
  /*
   * MQTT interface type.
   */
  CIOT__IFACE_TYPE__IFACE_TYPE_MQTT = 19,
  /*
   * Socket interface type.
   */
  CIOT__IFACE_TYPE__IFACE_TYPE_SOCKET = 20,
  /*
   * Bridge interface type.
   */
  CIOT__IFACE_TYPE__IFACE_TYPE_BRIDGE = 21
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(CIOT__IFACE_TYPE)
} Ciot__IfaceType;

/* --- messages --- */

/*
 * Message representing information about an interface.
 */
struct  _Ciot__IfaceInfo
{
  ProtobufCMessage base;
  /*
   * Interface ID.
   */
  uint32_t id;
  /*
   * Interface type.
   */
  Ciot__IfaceType type;
};
#define CIOT__IFACE_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ciot__iface_info__descriptor) \
    , 0, CIOT__IFACE_TYPE__IFACE_TYPE_UNKNOWN }


/* Ciot__IfaceInfo methods */
void   ciot__iface_info__init
                     (Ciot__IfaceInfo         *message);
size_t ciot__iface_info__get_packed_size
                     (const Ciot__IfaceInfo   *message);
size_t ciot__iface_info__pack
                     (const Ciot__IfaceInfo   *message,
                      uint8_t             *out);
size_t ciot__iface_info__pack_to_buffer
                     (const Ciot__IfaceInfo   *message,
                      ProtobufCBuffer     *buffer);
Ciot__IfaceInfo *
       ciot__iface_info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ciot__iface_info__free_unpacked
                     (Ciot__IfaceInfo *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Ciot__IfaceInfo_Closure)
                 (const Ciot__IfaceInfo *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    ciot__iface_type__descriptor;
extern const ProtobufCMessageDescriptor ciot__iface_info__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_ciot_2fproto_2fv1_2fiface_2eproto__INCLUDED */

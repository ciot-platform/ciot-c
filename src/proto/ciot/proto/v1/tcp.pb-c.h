/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: ciot/proto/v1/tcp.proto */

#ifndef PROTOBUF_C_ciot_2fproto_2fv1_2ftcp_2eproto__INCLUDED
#define PROTOBUF_C_ciot_2fproto_2fv1_2ftcp_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Ciot__TcpCfg Ciot__TcpCfg;
typedef struct _Ciot__TcpDhcpStatus Ciot__TcpDhcpStatus;
typedef struct _Ciot__TcpInfo Ciot__TcpInfo;
typedef struct _Ciot__TcpStatus Ciot__TcpStatus;
typedef struct _Ciot__TcpReq Ciot__TcpReq;
typedef struct _Ciot__TcpData Ciot__TcpData;


/* --- enums --- */

/*
 * Enum representing the state of the TCP module.
 */
typedef enum _Ciot__TcpState {
  /*
   * TCP module is stopped.
   */
  CIOT__TCP_STATE__TCP_STATE_STOPPED = 0,
  /*
   * TCP module is started.
   */
  CIOT__TCP_STATE__TCP_STATE_STARTED = 1,
  /*
   * TCP module is disconnecting.
   */
  CIOT__TCP_STATE__TCP_STATE_DISCONNECTING = 2,
  /*
   * TCP module is disconnected.
   */
  CIOT__TCP_STATE__TCP_STATE_DISCONNECTED = 3,
  /*
   * TCP module is connecting.
   */
  CIOT__TCP_STATE__TCP_STATE_CONNECTING = 4,
  /*
   * TCP module is connected.
   */
  CIOT__TCP_STATE__TCP_STATE_CONNECTED = 5,
  /*
   * TCP module encountered an error.
   */
  CIOT__TCP_STATE__TCP_STATE_ERROR = 6
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(CIOT__TCP_STATE)
} Ciot__TcpState;
/*
 * Enum representing the state of the TCP DHCP (Dynamic Host Configuration
 * Protocol).
 */
typedef enum _Ciot__TcpDhcpState {
  /*
   * TCP DHCP is idle.
   */
  CIOT__TCP_DHCP_STATE__TCP_DHCP_STATE_IDLE = 0,
  /*
   * TCP DHCP is started.
   */
  CIOT__TCP_DHCP_STATE__TCP_DHCP_STATE_STARTED = 1,
  /*
   * TCP DHCP is stopped.
   */
  CIOT__TCP_DHCP_STATE__TCP_DHCP_STATE_STOPPED = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(CIOT__TCP_DHCP_STATE)
} Ciot__TcpDhcpState;
/*
 * Enum representing different TCP DHCP configurations.
 */
typedef enum _Ciot__TcpDhcpCfg {
  /*
   * No change in DHCP configuration.
   */
  CIOT__TCP_DHCP_CFG__TCP_DHCP_CFG_NO_CHANGE = 0,
  /*
   * Configure as DHCP client.
   */
  CIOT__TCP_DHCP_CFG__TCP_DHCP_CFG_CLIENT = 1,
  /*
   * Configure as DHCP server.
   */
  CIOT__TCP_DHCP_CFG__TCP_DHCP_CFG_SERVER = 2,
  /*
   * Disable DHCP.
   */
  CIOT__TCP_DHCP_CFG__TCP_DHCP_CFG_DISABLED = 3
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(CIOT__TCP_DHCP_CFG)
} Ciot__TcpDhcpCfg;
/*
 * Enum representing different types of TCP requests.
 */
typedef enum _Ciot__TcpReqType {
  /*
   * Unknown TCP request type.
   */
  CIOT__TCP_REQ_TYPE__TCP_REQ_TYPE_UNKOWN = 0
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(CIOT__TCP_REQ_TYPE)
} Ciot__TcpReqType;

/* --- messages --- */

/*
 * Message representing configuration for the TCP module.
 */
struct  _Ciot__TcpCfg
{
  ProtobufCMessage base;
  /*
   * Disable TCP interface
   */
  protobuf_c_boolean disabled;
  /*
   * DHCP configuration.
   */
  Ciot__TcpDhcpCfg dhcp;
  /*
   * IP address.
   */
  ProtobufCBinaryData ip;
  /*
   * Gateway address.
   */
  ProtobufCBinaryData gateway;
  /*
   * Subnet mask.
   */
  ProtobufCBinaryData mask;
  /*
   * DNS address.
   */
  ProtobufCBinaryData dns;
};
#define CIOT__TCP_CFG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ciot__tcp_cfg__descriptor) \
    , 0, CIOT__TCP_DHCP_CFG__TCP_DHCP_CFG_NO_CHANGE, {0,NULL}, {0,NULL}, {0,NULL}, {0,NULL} }


/*
 * Message representing DHCP status for the TCP module.
 */
struct  _Ciot__TcpDhcpStatus
{
  ProtobufCMessage base;
  /*
   * DHCP client status.
   */
  Ciot__TcpDhcpState client;
  /*
   * DHCP server status.
   */
  Ciot__TcpDhcpState server;
};
#define CIOT__TCP_DHCP_STATUS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ciot__tcp_dhcp_status__descriptor) \
    , CIOT__TCP_DHCP_STATE__TCP_DHCP_STATE_IDLE, CIOT__TCP_DHCP_STATE__TCP_DHCP_STATE_IDLE }


/*
 * Message representing TCP information.
 */
struct  _Ciot__TcpInfo
{
  ProtobufCMessage base;
  /*
   * MAC address.
   */
  ProtobufCBinaryData mac;
  /*
   * IP address.
   */
  ProtobufCBinaryData ip;
};
#define CIOT__TCP_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ciot__tcp_info__descriptor) \
    , {0,NULL}, {0,NULL} }


/*
 * Message representing status for the TCP module.
 */
struct  _Ciot__TcpStatus
{
  ProtobufCMessage base;
  /*
   * State of the TCP module.
   */
  Ciot__TcpState state;
  /*
   * Connection count.
   */
  uint32_t conn_count;
  /*
   * DHCP status.
   */
  Ciot__TcpDhcpStatus *dhcp;
};
#define CIOT__TCP_STATUS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ciot__tcp_status__descriptor) \
    , CIOT__TCP_STATE__TCP_STATE_STOPPED, 0, NULL }


/*
 * Message representing a TCP request.
 */
struct  _Ciot__TcpReq
{
  ProtobufCMessage base;
  /*
   * Type of the TCP request.
   */
  Ciot__TcpReqType type;
};
#define CIOT__TCP_REQ__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ciot__tcp_req__descriptor) \
    , CIOT__TCP_REQ_TYPE__TCP_REQ_TYPE_UNKOWN }


/*
 * Message representing data for the TCP module.
 */
struct  _Ciot__TcpData
{
  ProtobufCMessage base;
  /*
   * Configuration for the TCP module.
   */
  Ciot__TcpCfg *config;
  /*
   * Status of the TCP module.
   */
  Ciot__TcpStatus *status;
  /*
   * TCP request data.
   */
  Ciot__TcpReq *request;
  /*
   * TCP information.
   */
  Ciot__TcpInfo *info;
};
#define CIOT__TCP_DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ciot__tcp_data__descriptor) \
    , NULL, NULL, NULL, NULL }


/* Ciot__TcpCfg methods */
void   ciot__tcp_cfg__init
                     (Ciot__TcpCfg         *message);
size_t ciot__tcp_cfg__get_packed_size
                     (const Ciot__TcpCfg   *message);
size_t ciot__tcp_cfg__pack
                     (const Ciot__TcpCfg   *message,
                      uint8_t             *out);
size_t ciot__tcp_cfg__pack_to_buffer
                     (const Ciot__TcpCfg   *message,
                      ProtobufCBuffer     *buffer);
Ciot__TcpCfg *
       ciot__tcp_cfg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ciot__tcp_cfg__free_unpacked
                     (Ciot__TcpCfg *message,
                      ProtobufCAllocator *allocator);
/* Ciot__TcpDhcpStatus methods */
void   ciot__tcp_dhcp_status__init
                     (Ciot__TcpDhcpStatus         *message);
size_t ciot__tcp_dhcp_status__get_packed_size
                     (const Ciot__TcpDhcpStatus   *message);
size_t ciot__tcp_dhcp_status__pack
                     (const Ciot__TcpDhcpStatus   *message,
                      uint8_t             *out);
size_t ciot__tcp_dhcp_status__pack_to_buffer
                     (const Ciot__TcpDhcpStatus   *message,
                      ProtobufCBuffer     *buffer);
Ciot__TcpDhcpStatus *
       ciot__tcp_dhcp_status__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ciot__tcp_dhcp_status__free_unpacked
                     (Ciot__TcpDhcpStatus *message,
                      ProtobufCAllocator *allocator);
/* Ciot__TcpInfo methods */
void   ciot__tcp_info__init
                     (Ciot__TcpInfo         *message);
size_t ciot__tcp_info__get_packed_size
                     (const Ciot__TcpInfo   *message);
size_t ciot__tcp_info__pack
                     (const Ciot__TcpInfo   *message,
                      uint8_t             *out);
size_t ciot__tcp_info__pack_to_buffer
                     (const Ciot__TcpInfo   *message,
                      ProtobufCBuffer     *buffer);
Ciot__TcpInfo *
       ciot__tcp_info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ciot__tcp_info__free_unpacked
                     (Ciot__TcpInfo *message,
                      ProtobufCAllocator *allocator);
/* Ciot__TcpStatus methods */
void   ciot__tcp_status__init
                     (Ciot__TcpStatus         *message);
size_t ciot__tcp_status__get_packed_size
                     (const Ciot__TcpStatus   *message);
size_t ciot__tcp_status__pack
                     (const Ciot__TcpStatus   *message,
                      uint8_t             *out);
size_t ciot__tcp_status__pack_to_buffer
                     (const Ciot__TcpStatus   *message,
                      ProtobufCBuffer     *buffer);
Ciot__TcpStatus *
       ciot__tcp_status__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ciot__tcp_status__free_unpacked
                     (Ciot__TcpStatus *message,
                      ProtobufCAllocator *allocator);
/* Ciot__TcpReq methods */
void   ciot__tcp_req__init
                     (Ciot__TcpReq         *message);
size_t ciot__tcp_req__get_packed_size
                     (const Ciot__TcpReq   *message);
size_t ciot__tcp_req__pack
                     (const Ciot__TcpReq   *message,
                      uint8_t             *out);
size_t ciot__tcp_req__pack_to_buffer
                     (const Ciot__TcpReq   *message,
                      ProtobufCBuffer     *buffer);
Ciot__TcpReq *
       ciot__tcp_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ciot__tcp_req__free_unpacked
                     (Ciot__TcpReq *message,
                      ProtobufCAllocator *allocator);
/* Ciot__TcpData methods */
void   ciot__tcp_data__init
                     (Ciot__TcpData         *message);
size_t ciot__tcp_data__get_packed_size
                     (const Ciot__TcpData   *message);
size_t ciot__tcp_data__pack
                     (const Ciot__TcpData   *message,
                      uint8_t             *out);
size_t ciot__tcp_data__pack_to_buffer
                     (const Ciot__TcpData   *message,
                      ProtobufCBuffer     *buffer);
Ciot__TcpData *
       ciot__tcp_data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ciot__tcp_data__free_unpacked
                     (Ciot__TcpData *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Ciot__TcpCfg_Closure)
                 (const Ciot__TcpCfg *message,
                  void *closure_data);
typedef void (*Ciot__TcpDhcpStatus_Closure)
                 (const Ciot__TcpDhcpStatus *message,
                  void *closure_data);
typedef void (*Ciot__TcpInfo_Closure)
                 (const Ciot__TcpInfo *message,
                  void *closure_data);
typedef void (*Ciot__TcpStatus_Closure)
                 (const Ciot__TcpStatus *message,
                  void *closure_data);
typedef void (*Ciot__TcpReq_Closure)
                 (const Ciot__TcpReq *message,
                  void *closure_data);
typedef void (*Ciot__TcpData_Closure)
                 (const Ciot__TcpData *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    ciot__tcp_state__descriptor;
extern const ProtobufCEnumDescriptor    ciot__tcp_dhcp_state__descriptor;
extern const ProtobufCEnumDescriptor    ciot__tcp_dhcp_cfg__descriptor;
extern const ProtobufCEnumDescriptor    ciot__tcp_req_type__descriptor;
extern const ProtobufCMessageDescriptor ciot__tcp_cfg__descriptor;
extern const ProtobufCMessageDescriptor ciot__tcp_dhcp_status__descriptor;
extern const ProtobufCMessageDescriptor ciot__tcp_info__descriptor;
extern const ProtobufCMessageDescriptor ciot__tcp_status__descriptor;
extern const ProtobufCMessageDescriptor ciot__tcp_req__descriptor;
extern const ProtobufCMessageDescriptor ciot__tcp_data__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_ciot_2fproto_2fv1_2ftcp_2eproto__INCLUDED */

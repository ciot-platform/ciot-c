/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: ciot/proto/v1/socket.proto */

#ifndef PROTOBUF_C_ciot_2fproto_2fv1_2fsocket_2eproto__INCLUDED
#define PROTOBUF_C_ciot_2fproto_2fv1_2fsocket_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct Ciot__SocketCfg Ciot__SocketCfg;
typedef struct Ciot__SocketStatus Ciot__SocketStatus;
typedef struct Ciot__SocketInfo Ciot__SocketInfo;
typedef struct Ciot__SocketReq Ciot__SocketReq;
typedef struct Ciot__SocketData Ciot__SocketData;


/* --- enums --- */

/*
 * Enum representing the state of the Socket.
 */
typedef enum _Ciot__SocketState {
  /*
   * Socket is closed.
   */
  CIOT__SOCKET_STATE__SOCKET_STATE_CLOSED = 0,
  /*
   * Socket is open.
   */
  CIOT__SOCKET_STATE__SOCKET_STATE_OPEN = 1,
  /*
   * Socket error.
   */
  CIOT__SOCKET_STATE__SOCKET_STATE_ERROR = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(CIOT__SOCKET_STATE)
} Ciot__SocketState;
/*
 * Enum representing different types of Socket requests.
 */
typedef enum _Ciot__SocketReqType {
  /*
   * Unknown request type.
   */
  CIOT__SOCKET_REQ_TYPE__SOCKET_REQ_TYPE_UNKOWN = 0
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(CIOT__SOCKET_REQ_TYPE)
} Ciot__SocketReqType;
/*
 * Enum representing differente types of socket
 */
typedef enum _Ciot__SocketType {
  /*
   * None
   */
  CIOT__SOCKET_TYPE__SOCKET_TYPE_NONE = 0,
  /*
   * TCP Server
   */
  CIOT__SOCKET_TYPE__SOCKET_TYPE_TCP_SERVER = 1,
  /*
   * TCP Client
   */
  CIOT__SOCKET_TYPE__SOCKET_TYPE_TCP_CLIENT = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(CIOT__SOCKET_TYPE)
} Ciot__SocketType;

/* --- messages --- */

/*
 * Message representing Socket configuration.
 */
struct  Ciot__SocketCfg
{
  ProtobufCMessage base;
  /*
   * TCP socket type
   */
  Ciot__SocketType type;
  /*
   * TCP socket address
   */
  char *address;
  /*
   * TCP socket port
   */
  int32_t port;
};
#define CIOT__SOCKET_CFG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ciot__socket_cfg__descriptor) \
    , CIOT__SOCKET_TYPE__SOCKET_TYPE_NONE, (char *)protobuf_c_empty_string, 0 }


/*
 * Message representing Socket status.
 */
struct  Ciot__SocketStatus
{
  ProtobufCMessage base;
  /*
   * State of the Socket.
   */
  Ciot__SocketState state;
  /*
   * Error code, if any.
   */
  int32_t error;
};
#define CIOT__SOCKET_STATUS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ciot__socket_status__descriptor) \
    , CIOT__SOCKET_STATE__SOCKET_STATE_CLOSED, 0 }


struct  Ciot__SocketInfo
{
  ProtobufCMessage base;
};
#define CIOT__SOCKET_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ciot__socket_info__descriptor) \
     }


/*
 * Message representing an Socket request.
 */
struct  Ciot__SocketReq
{
  ProtobufCMessage base;
  /*
   * Type of the Socket request.
   */
  Ciot__SocketReqType type;
};
#define CIOT__SOCKET_REQ__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ciot__socket_req__descriptor) \
    , CIOT__SOCKET_REQ_TYPE__SOCKET_REQ_TYPE_UNKOWN }


/*
 * Message representing Socket data.
 */
struct  Ciot__SocketData
{
  ProtobufCMessage base;
  /*
   * Configuration for the Socket.
   */
  Ciot__SocketCfg *config;
  /*
   * Status of the Socket.
   */
  Ciot__SocketStatus *status;
  /*
   * Socket request.
   */
  Ciot__SocketReq *request;
  /*
   * Info of the Socket.
   */
  Ciot__SocketInfo *info;
};
#define CIOT__SOCKET_DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ciot__socket_data__descriptor) \
    , NULL, NULL, NULL, NULL }


/* Ciot__SocketCfg methods */
void   ciot__socket_cfg__init
                     (Ciot__SocketCfg         *message);
size_t ciot__socket_cfg__get_packed_size
                     (const Ciot__SocketCfg   *message);
size_t ciot__socket_cfg__pack
                     (const Ciot__SocketCfg   *message,
                      uint8_t             *out);
size_t ciot__socket_cfg__pack_to_buffer
                     (const Ciot__SocketCfg   *message,
                      ProtobufCBuffer     *buffer);
Ciot__SocketCfg *
       ciot__socket_cfg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ciot__socket_cfg__free_unpacked
                     (Ciot__SocketCfg *message,
                      ProtobufCAllocator *allocator);
/* Ciot__SocketStatus methods */
void   ciot__socket_status__init
                     (Ciot__SocketStatus         *message);
size_t ciot__socket_status__get_packed_size
                     (const Ciot__SocketStatus   *message);
size_t ciot__socket_status__pack
                     (const Ciot__SocketStatus   *message,
                      uint8_t             *out);
size_t ciot__socket_status__pack_to_buffer
                     (const Ciot__SocketStatus   *message,
                      ProtobufCBuffer     *buffer);
Ciot__SocketStatus *
       ciot__socket_status__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ciot__socket_status__free_unpacked
                     (Ciot__SocketStatus *message,
                      ProtobufCAllocator *allocator);
/* Ciot__SocketInfo methods */
void   ciot__socket_info__init
                     (Ciot__SocketInfo         *message);
size_t ciot__socket_info__get_packed_size
                     (const Ciot__SocketInfo   *message);
size_t ciot__socket_info__pack
                     (const Ciot__SocketInfo   *message,
                      uint8_t             *out);
size_t ciot__socket_info__pack_to_buffer
                     (const Ciot__SocketInfo   *message,
                      ProtobufCBuffer     *buffer);
Ciot__SocketInfo *
       ciot__socket_info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ciot__socket_info__free_unpacked
                     (Ciot__SocketInfo *message,
                      ProtobufCAllocator *allocator);
/* Ciot__SocketReq methods */
void   ciot__socket_req__init
                     (Ciot__SocketReq         *message);
size_t ciot__socket_req__get_packed_size
                     (const Ciot__SocketReq   *message);
size_t ciot__socket_req__pack
                     (const Ciot__SocketReq   *message,
                      uint8_t             *out);
size_t ciot__socket_req__pack_to_buffer
                     (const Ciot__SocketReq   *message,
                      ProtobufCBuffer     *buffer);
Ciot__SocketReq *
       ciot__socket_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ciot__socket_req__free_unpacked
                     (Ciot__SocketReq *message,
                      ProtobufCAllocator *allocator);
/* Ciot__SocketData methods */
void   ciot__socket_data__init
                     (Ciot__SocketData         *message);
size_t ciot__socket_data__get_packed_size
                     (const Ciot__SocketData   *message);
size_t ciot__socket_data__pack
                     (const Ciot__SocketData   *message,
                      uint8_t             *out);
size_t ciot__socket_data__pack_to_buffer
                     (const Ciot__SocketData   *message,
                      ProtobufCBuffer     *buffer);
Ciot__SocketData *
       ciot__socket_data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ciot__socket_data__free_unpacked
                     (Ciot__SocketData *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Ciot__SocketCfg_Closure)
                 (const Ciot__SocketCfg *message,
                  void *closure_data);
typedef void (*Ciot__SocketStatus_Closure)
                 (const Ciot__SocketStatus *message,
                  void *closure_data);
typedef void (*Ciot__SocketInfo_Closure)
                 (const Ciot__SocketInfo *message,
                  void *closure_data);
typedef void (*Ciot__SocketReq_Closure)
                 (const Ciot__SocketReq *message,
                  void *closure_data);
typedef void (*Ciot__SocketData_Closure)
                 (const Ciot__SocketData *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    ciot__socket_state__descriptor;
extern const ProtobufCEnumDescriptor    ciot__socket_req_type__descriptor;
extern const ProtobufCEnumDescriptor    ciot__socket_type__descriptor;
extern const ProtobufCMessageDescriptor ciot__socket_cfg__descriptor;
extern const ProtobufCMessageDescriptor ciot__socket_status__descriptor;
extern const ProtobufCMessageDescriptor ciot__socket_info__descriptor;
extern const ProtobufCMessageDescriptor ciot__socket_req__descriptor;
extern const ProtobufCMessageDescriptor ciot__socket_data__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_ciot_2fproto_2fv1_2fsocket_2eproto__INCLUDED */

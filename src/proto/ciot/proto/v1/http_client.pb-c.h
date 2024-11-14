/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: ciot/proto/v1/http_client.proto */

#ifndef PROTOBUF_C_ciot_2fproto_2fv1_2fhttp_5fclient_2eproto__INCLUDED
#define PROTOBUF_C_ciot_2fproto_2fv1_2fhttp_5fclient_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct Ciot__HttpClientCfg Ciot__HttpClientCfg;
typedef struct Ciot__HttpClientStatus Ciot__HttpClientStatus;
typedef struct Ciot__HttpClientReqSend Ciot__HttpClientReqSend;
typedef struct Ciot__HttpClientReqSetHeader Ciot__HttpClientReqSetHeader;
typedef struct Ciot__HttpClientReq Ciot__HttpClientReq;
typedef struct Ciot__HttpClientData Ciot__HttpClientData;


/* --- enums --- */

/*
 * Enum representing the state of the HTTP client.
 */
typedef enum _Ciot__HttpClientState {
  /*
   * The HTTP client is idle.
   */
  CIOT__HTTP_CLIENT_STATE__HTTP_CLIENT_STATE_IDLE = 0,
  /*
   * The HTTP client has started.
   */
  CIOT__HTTP_CLIENT_STATE__HTTP_CLIENT_STATE_STARTED = 1,
  /*
   * The HTTP client is connecting.
   */
  CIOT__HTTP_CLIENT_STATE__HTTP_CLIENT_STATE_CONNECTING = 2,
  /*
   * The HTTP client is connected.
   */
  CIOT__HTTP_CLIENT_STATE__HTTP_CLIENT_STATE_CONNECTED = 3,
  /*
   * Data has been received by the HTTP client.
   */
  CIOT__HTTP_CLIENT_STATE__HTTP_CLIENT_STATE_DATA_RECEIVED = 4,
  /*
   * The HTTP client has timed out.
   */
  CIOT__HTTP_CLIENT_STATE__HTTP_CLIENT_STATE_TIMEOUT = 5,
  /*
   * The HTTP client encountered an error.
   */
  CIOT__HTTP_CLIENT_STATE__HTTP_CLIENT_STATE_ERROR = 6
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(CIOT__HTTP_CLIENT_STATE)
} Ciot__HttpClientState;
/*
 * Enum representing different types of HTTP client requests.
 */
typedef enum _Ciot__HttpClientReqType {
  /*
   * Unknown request type.
   */
  CIOT__HTTP_CLIENT_REQ_TYPE__HTTP_CLIENT_REQ_TYPE_UNKOWN = 0,
  /*
   * Request to send data.
   */
  CIOT__HTTP_CLIENT_REQ_TYPE__HTTP_CLIENT_REQ_SEND_DATA = 1,
  /*
   * Request to set a header.
   */
  CIOT__HTTP_CLIENT_REQ_TYPE__HTTP_CLIENT_REQ_SET_HEADER = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(CIOT__HTTP_CLIENT_REQ_TYPE)
} Ciot__HttpClientReqType;
/*
 * Enum representing different HTTP methods.
 */
typedef enum _Ciot__HttpClientMethod {
  /*
   * HTTP GET method.
   */
  CIOT__HTTP_CLIENT_METHOD__HTTP_METHOD_GET = 0,
  /*
   * HTTP POST method.
   */
  CIOT__HTTP_CLIENT_METHOD__HTTP_METHOD_POST = 1,
  /*
   * HTTP PUT method.
   */
  CIOT__HTTP_CLIENT_METHOD__HTTP_METHOD_PUT = 2,
  /*
   * HTTP PATCH method.
   */
  CIOT__HTTP_CLIENT_METHOD__HTTP_METHOD_PATCH = 3,
  /*
   * HTTP DELETE method.
   */
  CIOT__HTTP_CLIENT_METHOD__HTTP_METHOD_DELETE = 4,
  /*
   * HTTP HEAD method.
   */
  CIOT__HTTP_CLIENT_METHOD__HTTP_METHOD_HEAD = 5,
  /*
   * HTTP NOTIFY method.
   */
  CIOT__HTTP_CLIENT_METHOD__HTTP_METHOD_NOTIFY = 6,
  /*
   * HTTP SUBSCRIBE method.
   */
  CIOT__HTTP_CLIENT_METHOD__HTTP_METHOD_SUBSCRIBE = 7,
  /*
   * HTTP UNSUBSCRIBE method.
   */
  CIOT__HTTP_CLIENT_METHOD__HTTP_METHOD_UNSUBSCRIBE = 8,
  /*
   * HTTP OPTIONS method.
   */
  CIOT__HTTP_CLIENT_METHOD__HTTP_METHOD_OPTIONS = 9,
  /*
   * HTTP COPY method.
   */
  CIOT__HTTP_CLIENT_METHOD__HTTP_METHOD_COPY = 10,
  /*
   * HTTP MOVE method.
   */
  CIOT__HTTP_CLIENT_METHOD__HTTP_METHOD_MOVE = 11,
  /*
   * HTTP LOCK method.
   */
  CIOT__HTTP_CLIENT_METHOD__HTTP_METHOD_LOCK = 12,
  /*
   * HTTP UNLOCK method.
   */
  CIOT__HTTP_CLIENT_METHOD__HTTP_METHOD_UNLOCK = 13,
  /*
   * HTTP PROPFIND method.
   */
  CIOT__HTTP_CLIENT_METHOD__HTTP_METHOD_PROPFIND = 14,
  /*
   * HTTP PROPPATCH method.
   */
  CIOT__HTTP_CLIENT_METHOD__HTTP_METHOD_PROPPATCH = 15,
  /*
   * HTTP MKCOL method.
   */
  CIOT__HTTP_CLIENT_METHOD__HTTP_METHOD_MKCOL = 16,
  /*
   * Maximum value for HTTP methods.
   */
  CIOT__HTTP_CLIENT_METHOD__HTTP_METHOD_MAX = 17
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(CIOT__HTTP_CLIENT_METHOD)
} Ciot__HttpClientMethod;
/*
 * Enum representing different HTTP transport types.
 */
typedef enum _Ciot__HttpClientTransportType {
  /*
   * Unknown transport type.
   */
  CIOT__HTTP_CLIENT_TRANSPORT_TYPE__HTTP_TRANSPORT_UNKNOWN = 0,
  /*
   * TCP transport.
   */
  CIOT__HTTP_CLIENT_TRANSPORT_TYPE__HTTP_TRANSPORT_TCP = 1,
  /*
   * SSL transport.
   */
  CIOT__HTTP_CLIENT_TRANSPORT_TYPE__HTTP_TRANSPORT_SSL = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(CIOT__HTTP_CLIENT_TRANSPORT_TYPE)
} Ciot__HttpClientTransportType;

/* --- messages --- */

/*
 * Message representing HTTP client configuration.
 */
struct  Ciot__HttpClientCfg
{
  ProtobufCMessage base;
  /*
   * URL for the HTTP request.
   */
  char *url;
  /*
   * HTTP method to use.
   */
  Ciot__HttpClientMethod method;
  /*
   * Transport type for the HTTP request.
   */
  Ciot__HttpClientTransportType transport;
  /*
   * Timeout for the HTTP request.
   */
  uint32_t timeout;
};
#define CIOT__HTTP_CLIENT_CFG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ciot__http_client_cfg__descriptor) \
    , (char *)protobuf_c_empty_string, CIOT__HTTP_CLIENT_METHOD__HTTP_METHOD_GET, CIOT__HTTP_CLIENT_TRANSPORT_TYPE__HTTP_TRANSPORT_UNKNOWN, 0 }


/*
 * Message representing HTTP client status.
 */
struct  Ciot__HttpClientStatus
{
  ProtobufCMessage base;
  /*
   * State of the HTTP client.
   */
  Ciot__HttpClientState state;
  /*
   * Error code, if any.
   */
  int32_t error;
};
#define CIOT__HTTP_CLIENT_STATUS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ciot__http_client_status__descriptor) \
    , CIOT__HTTP_CLIENT_STATE__HTTP_CLIENT_STATE_IDLE, 0 }


/*
 * Message representing data to be sent by the HTTP client.
 */
struct  Ciot__HttpClientReqSend
{
  ProtobufCMessage base;
  /*
   * Configuration for the HTTP client.
   */
  Ciot__HttpClientCfg *config;
  /*
   * Body of the HTTP request.
   */
  ProtobufCBinaryData body;
};
#define CIOT__HTTP_CLIENT_REQ_SEND__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ciot__http_client_req_send__descriptor) \
    , NULL, {0,NULL} }


/*
 * Message representing setting a header for the HTTP client request.
 */
struct  Ciot__HttpClientReqSetHeader
{
  ProtobufCMessage base;
  /*
   * Header name.
   */
  char *header;
  /*
   * Header value.
   */
  char *value;
};
#define CIOT__HTTP_CLIENT_REQ_SET_HEADER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ciot__http_client_req_set_header__descriptor) \
    , (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string }


/*
 * Message representing an HTTP client request.
 */
struct  Ciot__HttpClientReq
{
  ProtobufCMessage base;
  /*
   * Type of the HTTP client request.
   */
  Ciot__HttpClientReqType type;
  /*
   * Data to be sent in the request.
   */
  Ciot__HttpClientReqSend *send;
  /*
   * Header to be set in the request.
   */
  Ciot__HttpClientReqSetHeader *set_header;
};
#define CIOT__HTTP_CLIENT_REQ__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ciot__http_client_req__descriptor) \
    , CIOT__HTTP_CLIENT_REQ_TYPE__HTTP_CLIENT_REQ_TYPE_UNKOWN, NULL, NULL }


/*
 * Message representing HTTP client data.
 */
struct  Ciot__HttpClientData
{
  ProtobufCMessage base;
  /*
   * Configuration for the HTTP client.
   */
  Ciot__HttpClientCfg *config;
  /*
   * Status of the HTTP client.
   */
  Ciot__HttpClientStatus *status;
  /*
   * HTTP client request.
   */
  Ciot__HttpClientReq *request;
};
#define CIOT__HTTP_CLIENT_DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ciot__http_client_data__descriptor) \
    , NULL, NULL, NULL }


/* Ciot__HttpClientCfg methods */
void   ciot__http_client_cfg__init
                     (Ciot__HttpClientCfg         *message);
size_t ciot__http_client_cfg__get_packed_size
                     (const Ciot__HttpClientCfg   *message);
size_t ciot__http_client_cfg__pack
                     (const Ciot__HttpClientCfg   *message,
                      uint8_t             *out);
size_t ciot__http_client_cfg__pack_to_buffer
                     (const Ciot__HttpClientCfg   *message,
                      ProtobufCBuffer     *buffer);
Ciot__HttpClientCfg *
       ciot__http_client_cfg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ciot__http_client_cfg__free_unpacked
                     (Ciot__HttpClientCfg *message,
                      ProtobufCAllocator *allocator);
/* Ciot__HttpClientStatus methods */
void   ciot__http_client_status__init
                     (Ciot__HttpClientStatus         *message);
size_t ciot__http_client_status__get_packed_size
                     (const Ciot__HttpClientStatus   *message);
size_t ciot__http_client_status__pack
                     (const Ciot__HttpClientStatus   *message,
                      uint8_t             *out);
size_t ciot__http_client_status__pack_to_buffer
                     (const Ciot__HttpClientStatus   *message,
                      ProtobufCBuffer     *buffer);
Ciot__HttpClientStatus *
       ciot__http_client_status__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ciot__http_client_status__free_unpacked
                     (Ciot__HttpClientStatus *message,
                      ProtobufCAllocator *allocator);
/* Ciot__HttpClientReqSend methods */
void   ciot__http_client_req_send__init
                     (Ciot__HttpClientReqSend         *message);
size_t ciot__http_client_req_send__get_packed_size
                     (const Ciot__HttpClientReqSend   *message);
size_t ciot__http_client_req_send__pack
                     (const Ciot__HttpClientReqSend   *message,
                      uint8_t             *out);
size_t ciot__http_client_req_send__pack_to_buffer
                     (const Ciot__HttpClientReqSend   *message,
                      ProtobufCBuffer     *buffer);
Ciot__HttpClientReqSend *
       ciot__http_client_req_send__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ciot__http_client_req_send__free_unpacked
                     (Ciot__HttpClientReqSend *message,
                      ProtobufCAllocator *allocator);
/* Ciot__HttpClientReqSetHeader methods */
void   ciot__http_client_req_set_header__init
                     (Ciot__HttpClientReqSetHeader         *message);
size_t ciot__http_client_req_set_header__get_packed_size
                     (const Ciot__HttpClientReqSetHeader   *message);
size_t ciot__http_client_req_set_header__pack
                     (const Ciot__HttpClientReqSetHeader   *message,
                      uint8_t             *out);
size_t ciot__http_client_req_set_header__pack_to_buffer
                     (const Ciot__HttpClientReqSetHeader   *message,
                      ProtobufCBuffer     *buffer);
Ciot__HttpClientReqSetHeader *
       ciot__http_client_req_set_header__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ciot__http_client_req_set_header__free_unpacked
                     (Ciot__HttpClientReqSetHeader *message,
                      ProtobufCAllocator *allocator);
/* Ciot__HttpClientReq methods */
void   ciot__http_client_req__init
                     (Ciot__HttpClientReq         *message);
size_t ciot__http_client_req__get_packed_size
                     (const Ciot__HttpClientReq   *message);
size_t ciot__http_client_req__pack
                     (const Ciot__HttpClientReq   *message,
                      uint8_t             *out);
size_t ciot__http_client_req__pack_to_buffer
                     (const Ciot__HttpClientReq   *message,
                      ProtobufCBuffer     *buffer);
Ciot__HttpClientReq *
       ciot__http_client_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ciot__http_client_req__free_unpacked
                     (Ciot__HttpClientReq *message,
                      ProtobufCAllocator *allocator);
/* Ciot__HttpClientData methods */
void   ciot__http_client_data__init
                     (Ciot__HttpClientData         *message);
size_t ciot__http_client_data__get_packed_size
                     (const Ciot__HttpClientData   *message);
size_t ciot__http_client_data__pack
                     (const Ciot__HttpClientData   *message,
                      uint8_t             *out);
size_t ciot__http_client_data__pack_to_buffer
                     (const Ciot__HttpClientData   *message,
                      ProtobufCBuffer     *buffer);
Ciot__HttpClientData *
       ciot__http_client_data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ciot__http_client_data__free_unpacked
                     (Ciot__HttpClientData *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Ciot__HttpClientCfg_Closure)
                 (const Ciot__HttpClientCfg *message,
                  void *closure_data);
typedef void (*Ciot__HttpClientStatus_Closure)
                 (const Ciot__HttpClientStatus *message,
                  void *closure_data);
typedef void (*Ciot__HttpClientReqSend_Closure)
                 (const Ciot__HttpClientReqSend *message,
                  void *closure_data);
typedef void (*Ciot__HttpClientReqSetHeader_Closure)
                 (const Ciot__HttpClientReqSetHeader *message,
                  void *closure_data);
typedef void (*Ciot__HttpClientReq_Closure)
                 (const Ciot__HttpClientReq *message,
                  void *closure_data);
typedef void (*Ciot__HttpClientData_Closure)
                 (const Ciot__HttpClientData *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    ciot__http_client_state__descriptor;
extern const ProtobufCEnumDescriptor    ciot__http_client_req_type__descriptor;
extern const ProtobufCEnumDescriptor    ciot__http_client_method__descriptor;
extern const ProtobufCEnumDescriptor    ciot__http_client_transport_type__descriptor;
extern const ProtobufCMessageDescriptor ciot__http_client_cfg__descriptor;
extern const ProtobufCMessageDescriptor ciot__http_client_status__descriptor;
extern const ProtobufCMessageDescriptor ciot__http_client_req_send__descriptor;
extern const ProtobufCMessageDescriptor ciot__http_client_req_set_header__descriptor;
extern const ProtobufCMessageDescriptor ciot__http_client_req__descriptor;
extern const ProtobufCMessageDescriptor ciot__http_client_data__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_ciot_2fproto_2fv1_2fhttp_5fclient_2eproto__INCLUDED */

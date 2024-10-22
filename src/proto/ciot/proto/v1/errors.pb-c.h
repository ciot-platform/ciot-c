/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: ciot/proto/v1/errors.proto */

#ifndef PROTOBUF_C_ciot_2fproto_2fv1_2ferrors_2eproto__INCLUDED
#define PROTOBUF_C_ciot_2fproto_2fv1_2ferrors_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif




/* --- enums --- */

/*
 * Error codes
 */
typedef enum _Ciot__Err {
  /*
   * No error
   */
  CIOT__ERR__OK = 0,
  /*
   * Null argunment
   */
  CIOT__ERR__NULL_ARG = 1,
  /*
   * Invalid ID
   */
  CIOT__ERR__INVALID_ID = 2,
  /*
   * Invalid Type
   */
  CIOT__ERR__INVALID_TYPE = 3,
  /*
   * Memory overflow
   */
  CIOT__ERR__OVERFLOW = 4,
  /*
   * Not implemented
   */
  CIOT__ERR__NOT_IMPLEMENTED = 5,
  /*
   * Not supported
   */
  CIOT__ERR__NOT_SUPPORTED = 6,
  /*
   * Busy
   */
  CIOT__ERR__BUSY = 7,
  /*
   * Invalid state
   */
  CIOT__ERR__INVALID_STATE = 8,
  /*
   * Serialization error
   */
  CIOT__ERR__SERIALIZATION = 9,
  /*
   * Deserialization error
   */
  CIOT__ERR__DESERIALIZATION = 10,
  /*
   * Error sending data
   */
  CIOT__ERR__SEND_DATA = 11,
  /*
   * Error on data receive
   */
  CIOT__ERR__RECV_DATA = 12,
  /*
   * Invalid size
   */
  CIOT__ERR__INVALID_SIZE = 13,
  /*
   * Closed
   */
  CIOT__ERR__CLOSED = 14,
  /*
   * Resource not found
   */
  CIOT__ERR__NOT_FOUND = 15,
  /*
   * Validation failed
   */
  CIOT__ERR__VALIDATION_FAILED = 16,
  /*
   * Connection failed
   */
  CIOT__ERR__CONNECTION = 17,
  /*
   * Disconnection failed
   */
  CIOT__ERR__DISCONNECTION = 18,
  /*
   * Unknown exception occours
   */
  CIOT__ERR__EXCEPTION = 19,
  /*
   * Invalid argument detected
   */
  CIOT__ERR__INVALID_ARG = 20,
  /*
   * Insuficient memory
   */
  CIOT__ERR__NO_MEMORY = 21,
  /*
   * Timeout
   */
  CIOT__ERR__TIMEOUT = 22,
  /*
   * Internal error on mongoose framework
   */
  CIOT__ERR__MONGOOSE = 23,
  /*
   * Requested operation is impossible
   */
  CIOT__ERR__IMPOSSIBLE_OP = 24,
  /*
   * Checksum validation error
   */
  CIOT__ERR__CHECKSUM = 25,
  /*
   * Protocol validation error
   */
  CIOT__ERR__PROTOCOL_VIOLATION = 26,
  /*
   * Data loss
   */
  CIOT__ERR__DATA_LOSS = 27,
  /*
   * Invalid message header
   */
  CIOT__ERR__INVALID_HEADER = 28,
  /*
   * Feature disabled
   */
  CIOT__ERR__DISABLED = 29,
  /*
   * Operation failed
   */
  CIOT__ERR__FAIL = 30,
  /*
   * Invalid index
   */
  CIOT__ERR__INVALID_INDEX = 31,
  /*
   * Invalid key size
   */
  CIOT__ERR__INVALID_KEY_SIZE = 32
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(CIOT__ERR)
} Ciot__Err;

/* --- messages --- */

/* --- per-message closures --- */


/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    ciot__err__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_ciot_2fproto_2fv1_2ferrors_2eproto__INCLUDED */

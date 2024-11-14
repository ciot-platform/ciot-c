/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: ciot/proto/v1/errors.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "ciot/proto/v1/errors.pb-c.h"
static const ProtobufCEnumValue ciot__err__enum_values_by_number[38] =
{
  { "OK", "CIOT__ERR__OK", 0 },
  { "NULL_ARG", "CIOT__ERR__NULL_ARG", 1 },
  { "INVALID_ID", "CIOT__ERR__INVALID_ID", 2 },
  { "INVALID_TYPE", "CIOT__ERR__INVALID_TYPE", 3 },
  { "OVERFLOW", "CIOT__ERR__OVERFLOW", 4 },
  { "NOT_IMPLEMENTED", "CIOT__ERR__NOT_IMPLEMENTED", 5 },
  { "NOT_SUPPORTED", "CIOT__ERR__NOT_SUPPORTED", 6 },
  { "BUSY", "CIOT__ERR__BUSY", 7 },
  { "INVALID_STATE", "CIOT__ERR__INVALID_STATE", 8 },
  { "SERIALIZATION", "CIOT__ERR__SERIALIZATION", 9 },
  { "DESERIALIZATION", "CIOT__ERR__DESERIALIZATION", 10 },
  { "SEND_DATA", "CIOT__ERR__SEND_DATA", 11 },
  { "RECV_DATA", "CIOT__ERR__RECV_DATA", 12 },
  { "INVALID_SIZE", "CIOT__ERR__INVALID_SIZE", 13 },
  { "CLOSED", "CIOT__ERR__CLOSED", 14 },
  { "NOT_FOUND", "CIOT__ERR__NOT_FOUND", 15 },
  { "VALIDATION_FAILED", "CIOT__ERR__VALIDATION_FAILED", 16 },
  { "CONNECTION", "CIOT__ERR__CONNECTION", 17 },
  { "DISCONNECTION", "CIOT__ERR__DISCONNECTION", 18 },
  { "EXCEPTION", "CIOT__ERR__EXCEPTION", 19 },
  { "INVALID_ARG", "CIOT__ERR__INVALID_ARG", 20 },
  { "NO_MEMORY", "CIOT__ERR__NO_MEMORY", 21 },
  { "TIMEOUT", "CIOT__ERR__TIMEOUT", 22 },
  { "MONGOOSE", "CIOT__ERR__MONGOOSE", 23 },
  { "IMPOSSIBLE_OP", "CIOT__ERR__IMPOSSIBLE_OP", 24 },
  { "CHECKSUM", "CIOT__ERR__CHECKSUM", 25 },
  { "PROTOCOL_VIOLATION", "CIOT__ERR__PROTOCOL_VIOLATION", 26 },
  { "DATA_LOSS", "CIOT__ERR__DATA_LOSS", 27 },
  { "INVALID_HEADER", "CIOT__ERR__INVALID_HEADER", 28 },
  { "DISABLED", "CIOT__ERR__DISABLED", 29 },
  { "FAIL", "CIOT__ERR__FAIL", 30 },
  { "INVALID_INDEX", "CIOT__ERR__INVALID_INDEX", 31 },
  { "INVALID_KEY_SIZE", "CIOT__ERR__INVALID_KEY_SIZE", 32 },
  { "FIFO_READ", "CIOT__ERR__FIFO_READ", 33 },
  { "FIFO_WRITE", "CIOT__ERR__FIFO_WRITE", 34 },
  { "INVALID_ADDR", "CIOT__ERR__INVALID_ADDR", 35 },
  { "RESOURCES", "CIOT__ERR__RESOURCES", 36 },
  { "UNKNOWN", "CIOT__ERR__UNKNOWN", 37 },
};
static const ProtobufCIntRange ciot__err__value_ranges[] = {
{0, 0},{0, 38}
};
static const ProtobufCEnumValueIndex ciot__err__enum_values_by_name[38] =
{
  { "BUSY", 7 },
  { "CHECKSUM", 25 },
  { "CLOSED", 14 },
  { "CONNECTION", 17 },
  { "DATA_LOSS", 27 },
  { "DESERIALIZATION", 10 },
  { "DISABLED", 29 },
  { "DISCONNECTION", 18 },
  { "EXCEPTION", 19 },
  { "FAIL", 30 },
  { "FIFO_READ", 33 },
  { "FIFO_WRITE", 34 },
  { "IMPOSSIBLE_OP", 24 },
  { "INVALID_ADDR", 35 },
  { "INVALID_ARG", 20 },
  { "INVALID_HEADER", 28 },
  { "INVALID_ID", 2 },
  { "INVALID_INDEX", 31 },
  { "INVALID_KEY_SIZE", 32 },
  { "INVALID_SIZE", 13 },
  { "INVALID_STATE", 8 },
  { "INVALID_TYPE", 3 },
  { "MONGOOSE", 23 },
  { "NOT_FOUND", 15 },
  { "NOT_IMPLEMENTED", 5 },
  { "NOT_SUPPORTED", 6 },
  { "NO_MEMORY", 21 },
  { "NULL_ARG", 1 },
  { "OK", 0 },
  { "OVERFLOW", 4 },
  { "PROTOCOL_VIOLATION", 26 },
  { "RECV_DATA", 12 },
  { "RESOURCES", 36 },
  { "SEND_DATA", 11 },
  { "SERIALIZATION", 9 },
  { "TIMEOUT", 22 },
  { "UNKNOWN", 37 },
  { "VALIDATION_FAILED", 16 },
};
const ProtobufCEnumDescriptor ciot__err__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "Ciot.Err",
  "Err",
  "Ciot__Err",
  "Ciot",
  38,
  ciot__err__enum_values_by_number,
  38,
  ciot__err__enum_values_by_name,
  1,
  ciot__err__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};

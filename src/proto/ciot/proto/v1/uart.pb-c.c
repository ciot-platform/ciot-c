/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: ciot/proto/v1/uart.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "ciot/proto/v1/uart.pb-c.h"
void   ciot__uart_cfg__init
                     (Ciot__UartCfg         *message)
{
  static const Ciot__UartCfg init_value = CIOT__UART_CFG__INIT;
  *message = init_value;
}
size_t ciot__uart_cfg__get_packed_size
                     (const Ciot__UartCfg *message)
{
  assert(message->base.descriptor == &ciot__uart_cfg__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t ciot__uart_cfg__pack
                     (const Ciot__UartCfg *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &ciot__uart_cfg__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t ciot__uart_cfg__pack_to_buffer
                     (const Ciot__UartCfg *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &ciot__uart_cfg__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Ciot__UartCfg *
       ciot__uart_cfg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Ciot__UartCfg *)
     protobuf_c_message_unpack (&ciot__uart_cfg__descriptor,
                                allocator, len, data);
}
void   ciot__uart_cfg__free_unpacked
                     (Ciot__UartCfg *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &ciot__uart_cfg__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   ciot__uart_status__init
                     (Ciot__UartStatus         *message)
{
  static const Ciot__UartStatus init_value = CIOT__UART_STATUS__INIT;
  *message = init_value;
}
size_t ciot__uart_status__get_packed_size
                     (const Ciot__UartStatus *message)
{
  assert(message->base.descriptor == &ciot__uart_status__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t ciot__uart_status__pack
                     (const Ciot__UartStatus *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &ciot__uart_status__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t ciot__uart_status__pack_to_buffer
                     (const Ciot__UartStatus *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &ciot__uart_status__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Ciot__UartStatus *
       ciot__uart_status__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Ciot__UartStatus *)
     protobuf_c_message_unpack (&ciot__uart_status__descriptor,
                                allocator, len, data);
}
void   ciot__uart_status__free_unpacked
                     (Ciot__UartStatus *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &ciot__uart_status__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   ciot__uart_req__init
                     (Ciot__UartReq         *message)
{
  static const Ciot__UartReq init_value = CIOT__UART_REQ__INIT;
  *message = init_value;
}
size_t ciot__uart_req__get_packed_size
                     (const Ciot__UartReq *message)
{
  assert(message->base.descriptor == &ciot__uart_req__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t ciot__uart_req__pack
                     (const Ciot__UartReq *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &ciot__uart_req__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t ciot__uart_req__pack_to_buffer
                     (const Ciot__UartReq *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &ciot__uart_req__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Ciot__UartReq *
       ciot__uart_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Ciot__UartReq *)
     protobuf_c_message_unpack (&ciot__uart_req__descriptor,
                                allocator, len, data);
}
void   ciot__uart_req__free_unpacked
                     (Ciot__UartReq *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &ciot__uart_req__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   ciot__uart_data__init
                     (Ciot__UartData         *message)
{
  static const Ciot__UartData init_value = CIOT__UART_DATA__INIT;
  *message = init_value;
}
size_t ciot__uart_data__get_packed_size
                     (const Ciot__UartData *message)
{
  assert(message->base.descriptor == &ciot__uart_data__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t ciot__uart_data__pack
                     (const Ciot__UartData *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &ciot__uart_data__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t ciot__uart_data__pack_to_buffer
                     (const Ciot__UartData *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &ciot__uart_data__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Ciot__UartData *
       ciot__uart_data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Ciot__UartData *)
     protobuf_c_message_unpack (&ciot__uart_data__descriptor,
                                allocator, len, data);
}
void   ciot__uart_data__free_unpacked
                     (Ciot__UartData *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &ciot__uart_data__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor ciot__uart_cfg__field_descriptors[9] =
{
  {
    "baud_rate",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Ciot__UartCfg, baud_rate),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "num",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Ciot__UartCfg, num),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rx_pin",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Ciot__UartCfg, rx_pin),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rts_pin",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Ciot__UartCfg, rts_pin),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cts_pin",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Ciot__UartCfg, cts_pin),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "parity",
    6,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Ciot__UartCfg, parity),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "flow_control",
    7,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Ciot__UartCfg, flow_control),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "dtr",
    8,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Ciot__UartCfg, dtr),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "bridge_mode",
    9,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Ciot__UartCfg, bridge_mode),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned ciot__uart_cfg__field_indices_by_name[] = {
  0,   /* field[0] = baud_rate */
  8,   /* field[8] = bridge_mode */
  4,   /* field[4] = cts_pin */
  7,   /* field[7] = dtr */
  6,   /* field[6] = flow_control */
  1,   /* field[1] = num */
  5,   /* field[5] = parity */
  3,   /* field[3] = rts_pin */
  2,   /* field[2] = rx_pin */
};
static const ProtobufCIntRange ciot__uart_cfg__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 9 }
};
const ProtobufCMessageDescriptor ciot__uart_cfg__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Ciot.UartCfg",
  "UartCfg",
  "Ciot__UartCfg",
  "Ciot",
  sizeof(Ciot__UartCfg),
  9,
  ciot__uart_cfg__field_descriptors,
  ciot__uart_cfg__field_indices_by_name,
  1,  ciot__uart_cfg__number_ranges,
  (ProtobufCMessageInit) ciot__uart_cfg__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor ciot__uart_status__field_descriptors[2] =
{
  {
    "state",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Ciot__UartStatus, state),
    &ciot__uart_state__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "error",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Ciot__UartStatus, error),
    &ciot__uart_error__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned ciot__uart_status__field_indices_by_name[] = {
  1,   /* field[1] = error */
  0,   /* field[0] = state */
};
static const ProtobufCIntRange ciot__uart_status__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor ciot__uart_status__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Ciot.UartStatus",
  "UartStatus",
  "Ciot__UartStatus",
  "Ciot",
  sizeof(Ciot__UartStatus),
  2,
  ciot__uart_status__field_descriptors,
  ciot__uart_status__field_indices_by_name,
  1,  ciot__uart_status__number_ranges,
  (ProtobufCMessageInit) ciot__uart_status__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor ciot__uart_req__field_descriptors[2] =
{
  {
    "type",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Ciot__UartReq, type),
    &ciot__uart_req_type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "data",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Ciot__UartReq, data),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned ciot__uart_req__field_indices_by_name[] = {
  1,   /* field[1] = data */
  0,   /* field[0] = type */
};
static const ProtobufCIntRange ciot__uart_req__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor ciot__uart_req__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Ciot.UartReq",
  "UartReq",
  "Ciot__UartReq",
  "Ciot",
  sizeof(Ciot__UartReq),
  2,
  ciot__uart_req__field_descriptors,
  ciot__uart_req__field_indices_by_name,
  1,  ciot__uart_req__number_ranges,
  (ProtobufCMessageInit) ciot__uart_req__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor ciot__uart_data__field_descriptors[3] =
{
  {
    "config",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Ciot__UartData, config),
    &ciot__uart_cfg__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "status",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Ciot__UartData, status),
    &ciot__uart_status__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "request",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Ciot__UartData, request),
    &ciot__uart_req__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned ciot__uart_data__field_indices_by_name[] = {
  0,   /* field[0] = config */
  2,   /* field[2] = request */
  1,   /* field[1] = status */
};
static const ProtobufCIntRange ciot__uart_data__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor ciot__uart_data__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Ciot.UartData",
  "UartData",
  "Ciot__UartData",
  "Ciot",
  sizeof(Ciot__UartData),
  3,
  ciot__uart_data__field_descriptors,
  ciot__uart_data__field_indices_by_name,
  1,  ciot__uart_data__number_ranges,
  (ProtobufCMessageInit) ciot__uart_data__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue ciot__uart_state__enum_values_by_number[4] =
{
  { "UART_STATE_CLOSED", "CIOT__UART_STATE__UART_STATE_CLOSED", 0 },
  { "UART_STATE_STARTED", "CIOT__UART_STATE__UART_STATE_STARTED", 1 },
  { "UART_STATE_INTERNAL_ERROR", "CIOT__UART_STATE__UART_STATE_INTERNAL_ERROR", 2 },
  { "UART_STATE_CIOT_S_ERROR", "CIOT__UART_STATE__UART_STATE_CIOT_S_ERROR", 3 },
};
static const ProtobufCIntRange ciot__uart_state__value_ranges[] = {
{0, 0},{0, 4}
};
static const ProtobufCEnumValueIndex ciot__uart_state__enum_values_by_name[4] =
{
  { "UART_STATE_CIOT_S_ERROR", 3 },
  { "UART_STATE_CLOSED", 0 },
  { "UART_STATE_INTERNAL_ERROR", 2 },
  { "UART_STATE_STARTED", 1 },
};
const ProtobufCEnumDescriptor ciot__uart_state__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "Ciot.UartState",
  "UartState",
  "Ciot__UartState",
  "Ciot",
  4,
  ciot__uart_state__enum_values_by_number,
  4,
  ciot__uart_state__enum_values_by_name,
  1,
  ciot__uart_state__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCEnumValue ciot__uart_req_type__enum_values_by_number[4] =
{
  { "UART_REQ_TYPE_UNKOWN", "CIOT__UART_REQ_TYPE__UART_REQ_TYPE_UNKOWN", 0 },
  { "UART_REQ_TYPE_SEND_DATA", "CIOT__UART_REQ_TYPE__UART_REQ_TYPE_SEND_DATA", 1 },
  { "UART_REQ_TYPE_SEND_BYTES", "CIOT__UART_REQ_TYPE__UART_REQ_TYPE_SEND_BYTES", 2 },
  { "UART_REQ_TYPE_ENABLE_BRIDGE_MODE", "CIOT__UART_REQ_TYPE__UART_REQ_TYPE_ENABLE_BRIDGE_MODE", 3 },
};
static const ProtobufCIntRange ciot__uart_req_type__value_ranges[] = {
{0, 0},{0, 4}
};
static const ProtobufCEnumValueIndex ciot__uart_req_type__enum_values_by_name[4] =
{
  { "UART_REQ_TYPE_ENABLE_BRIDGE_MODE", 3 },
  { "UART_REQ_TYPE_SEND_BYTES", 2 },
  { "UART_REQ_TYPE_SEND_DATA", 1 },
  { "UART_REQ_TYPE_UNKOWN", 0 },
};
const ProtobufCEnumDescriptor ciot__uart_req_type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "Ciot.UartReqType",
  "UartReqType",
  "Ciot__UartReqType",
  "Ciot",
  4,
  ciot__uart_req_type__enum_values_by_number,
  4,
  ciot__uart_req_type__enum_values_by_name,
  1,
  ciot__uart_req_type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCEnumValue ciot__uart_error__enum_values_by_number[8] =
{
  { "UART_ERR_NONE", "CIOT__UART_ERROR__UART_ERR_NONE", 0 },
  { "UART_ERR_BREAK", "CIOT__UART_ERROR__UART_ERR_BREAK", 1 },
  { "UART_ERR_BUFFER_FULL", "CIOT__UART_ERROR__UART_ERR_BUFFER_FULL", 2 },
  { "UART_ERR_FIFO_OVERFLOW", "CIOT__UART_ERROR__UART_ERR_FIFO_OVERFLOW", 3 },
  { "UART_ERR_FRAME", "CIOT__UART_ERROR__UART_ERR_FRAME", 4 },
  { "UART_ERR_PARITY", "CIOT__UART_ERROR__UART_ERR_PARITY", 5 },
  { "UART_ERR_DATA_BREAK", "CIOT__UART_ERROR__UART_ERR_DATA_BREAK", 6 },
  { "UART_ERR_UNKNOWN_EVENT", "CIOT__UART_ERROR__UART_ERR_UNKNOWN_EVENT", 7 },
};
static const ProtobufCIntRange ciot__uart_error__value_ranges[] = {
{0, 0},{0, 8}
};
static const ProtobufCEnumValueIndex ciot__uart_error__enum_values_by_name[8] =
{
  { "UART_ERR_BREAK", 1 },
  { "UART_ERR_BUFFER_FULL", 2 },
  { "UART_ERR_DATA_BREAK", 6 },
  { "UART_ERR_FIFO_OVERFLOW", 3 },
  { "UART_ERR_FRAME", 4 },
  { "UART_ERR_NONE", 0 },
  { "UART_ERR_PARITY", 5 },
  { "UART_ERR_UNKNOWN_EVENT", 7 },
};
const ProtobufCEnumDescriptor ciot__uart_error__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "Ciot.UartError",
  "UartError",
  "Ciot__UartError",
  "Ciot",
  8,
  ciot__uart_error__enum_values_by_number,
  8,
  ciot__uart_error__enum_values_by_name,
  1,
  ciot__uart_error__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};

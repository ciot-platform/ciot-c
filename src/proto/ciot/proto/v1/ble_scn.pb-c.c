/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: ciot/proto/v1/ble_scn.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "ciot/proto/v1/ble_scn.pb-c.h"
void   ciot__ble_scn_cfg__init
                     (Ciot__BleScnCfg         *message)
{
  static const Ciot__BleScnCfg init_value = CIOT__BLE_SCN_CFG__INIT;
  *message = init_value;
}
size_t ciot__ble_scn_cfg__get_packed_size
                     (const Ciot__BleScnCfg *message)
{
  assert(message->base.descriptor == &ciot__ble_scn_cfg__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t ciot__ble_scn_cfg__pack
                     (const Ciot__BleScnCfg *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &ciot__ble_scn_cfg__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t ciot__ble_scn_cfg__pack_to_buffer
                     (const Ciot__BleScnCfg *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &ciot__ble_scn_cfg__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Ciot__BleScnCfg *
       ciot__ble_scn_cfg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Ciot__BleScnCfg *)
     protobuf_c_message_unpack (&ciot__ble_scn_cfg__descriptor,
                                allocator, len, data);
}
void   ciot__ble_scn_cfg__free_unpacked
                     (Ciot__BleScnCfg *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &ciot__ble_scn_cfg__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   ciot__ble_scn_adv_info__init
                     (Ciot__BleScnAdvInfo         *message)
{
  static const Ciot__BleScnAdvInfo init_value = CIOT__BLE_SCN_ADV_INFO__INIT;
  *message = init_value;
}
size_t ciot__ble_scn_adv_info__get_packed_size
                     (const Ciot__BleScnAdvInfo *message)
{
  assert(message->base.descriptor == &ciot__ble_scn_adv_info__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t ciot__ble_scn_adv_info__pack
                     (const Ciot__BleScnAdvInfo *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &ciot__ble_scn_adv_info__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t ciot__ble_scn_adv_info__pack_to_buffer
                     (const Ciot__BleScnAdvInfo *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &ciot__ble_scn_adv_info__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Ciot__BleScnAdvInfo *
       ciot__ble_scn_adv_info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Ciot__BleScnAdvInfo *)
     protobuf_c_message_unpack (&ciot__ble_scn_adv_info__descriptor,
                                allocator, len, data);
}
void   ciot__ble_scn_adv_info__free_unpacked
                     (Ciot__BleScnAdvInfo *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &ciot__ble_scn_adv_info__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   ciot__ble_scn_adv__init
                     (Ciot__BleScnAdv         *message)
{
  static const Ciot__BleScnAdv init_value = CIOT__BLE_SCN_ADV__INIT;
  *message = init_value;
}
size_t ciot__ble_scn_adv__get_packed_size
                     (const Ciot__BleScnAdv *message)
{
  assert(message->base.descriptor == &ciot__ble_scn_adv__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t ciot__ble_scn_adv__pack
                     (const Ciot__BleScnAdv *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &ciot__ble_scn_adv__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t ciot__ble_scn_adv__pack_to_buffer
                     (const Ciot__BleScnAdv *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &ciot__ble_scn_adv__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Ciot__BleScnAdv *
       ciot__ble_scn_adv__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Ciot__BleScnAdv *)
     protobuf_c_message_unpack (&ciot__ble_scn_adv__descriptor,
                                allocator, len, data);
}
void   ciot__ble_scn_adv__free_unpacked
                     (Ciot__BleScnAdv *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &ciot__ble_scn_adv__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   ciot__ble_scn_status__init
                     (Ciot__BleScnStatus         *message)
{
  static const Ciot__BleScnStatus init_value = CIOT__BLE_SCN_STATUS__INIT;
  *message = init_value;
}
size_t ciot__ble_scn_status__get_packed_size
                     (const Ciot__BleScnStatus *message)
{
  assert(message->base.descriptor == &ciot__ble_scn_status__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t ciot__ble_scn_status__pack
                     (const Ciot__BleScnStatus *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &ciot__ble_scn_status__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t ciot__ble_scn_status__pack_to_buffer
                     (const Ciot__BleScnStatus *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &ciot__ble_scn_status__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Ciot__BleScnStatus *
       ciot__ble_scn_status__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Ciot__BleScnStatus *)
     protobuf_c_message_unpack (&ciot__ble_scn_status__descriptor,
                                allocator, len, data);
}
void   ciot__ble_scn_status__free_unpacked
                     (Ciot__BleScnStatus *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &ciot__ble_scn_status__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   ciot__ble_scn_req__init
                     (Ciot__BleScnReq         *message)
{
  static const Ciot__BleScnReq init_value = CIOT__BLE_SCN_REQ__INIT;
  *message = init_value;
}
size_t ciot__ble_scn_req__get_packed_size
                     (const Ciot__BleScnReq *message)
{
  assert(message->base.descriptor == &ciot__ble_scn_req__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t ciot__ble_scn_req__pack
                     (const Ciot__BleScnReq *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &ciot__ble_scn_req__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t ciot__ble_scn_req__pack_to_buffer
                     (const Ciot__BleScnReq *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &ciot__ble_scn_req__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Ciot__BleScnReq *
       ciot__ble_scn_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Ciot__BleScnReq *)
     protobuf_c_message_unpack (&ciot__ble_scn_req__descriptor,
                                allocator, len, data);
}
void   ciot__ble_scn_req__free_unpacked
                     (Ciot__BleScnReq *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &ciot__ble_scn_req__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   ciot__ble_scn_data__init
                     (Ciot__BleScnData         *message)
{
  static const Ciot__BleScnData init_value = CIOT__BLE_SCN_DATA__INIT;
  *message = init_value;
}
size_t ciot__ble_scn_data__get_packed_size
                     (const Ciot__BleScnData *message)
{
  assert(message->base.descriptor == &ciot__ble_scn_data__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t ciot__ble_scn_data__pack
                     (const Ciot__BleScnData *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &ciot__ble_scn_data__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t ciot__ble_scn_data__pack_to_buffer
                     (const Ciot__BleScnData *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &ciot__ble_scn_data__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Ciot__BleScnData *
       ciot__ble_scn_data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Ciot__BleScnData *)
     protobuf_c_message_unpack (&ciot__ble_scn_data__descriptor,
                                allocator, len, data);
}
void   ciot__ble_scn_data__free_unpacked
                     (Ciot__BleScnData *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &ciot__ble_scn_data__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor ciot__ble_scn_cfg__field_descriptors[5] =
{
  {
    "interval",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Ciot__BleScnCfg, interval),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "window",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Ciot__BleScnCfg, window),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "timeout",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Ciot__BleScnCfg, timeout),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "active",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Ciot__BleScnCfg, active),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "bridge_mode",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Ciot__BleScnCfg, bridge_mode),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned ciot__ble_scn_cfg__field_indices_by_name[] = {
  3,   /* field[3] = active */
  4,   /* field[4] = bridge_mode */
  0,   /* field[0] = interval */
  2,   /* field[2] = timeout */
  1,   /* field[1] = window */
};
static const ProtobufCIntRange ciot__ble_scn_cfg__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 5 }
};
const ProtobufCMessageDescriptor ciot__ble_scn_cfg__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Ciot.BleScnCfg",
  "BleScnCfg",
  "Ciot__BleScnCfg",
  "Ciot",
  sizeof(Ciot__BleScnCfg),
  5,
  ciot__ble_scn_cfg__field_descriptors,
  ciot__ble_scn_cfg__field_indices_by_name,
  1,  ciot__ble_scn_cfg__number_ranges,
  (ProtobufCMessageInit) ciot__ble_scn_cfg__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor ciot__ble_scn_adv_info__field_descriptors[2] =
{
  {
    "mac",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Ciot__BleScnAdvInfo, mac),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rssi",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Ciot__BleScnAdvInfo, rssi),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned ciot__ble_scn_adv_info__field_indices_by_name[] = {
  0,   /* field[0] = mac */
  1,   /* field[1] = rssi */
};
static const ProtobufCIntRange ciot__ble_scn_adv_info__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor ciot__ble_scn_adv_info__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Ciot.BleScnAdvInfo",
  "BleScnAdvInfo",
  "Ciot__BleScnAdvInfo",
  "Ciot",
  sizeof(Ciot__BleScnAdvInfo),
  2,
  ciot__ble_scn_adv_info__field_descriptors,
  ciot__ble_scn_adv_info__field_indices_by_name,
  1,  ciot__ble_scn_adv_info__number_ranges,
  (ProtobufCMessageInit) ciot__ble_scn_adv_info__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor ciot__ble_scn_adv__field_descriptors[2] =
{
  {
    "info",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Ciot__BleScnAdv, info),
    &ciot__ble_scn_adv_info__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "payload",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Ciot__BleScnAdv, payload),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned ciot__ble_scn_adv__field_indices_by_name[] = {
  0,   /* field[0] = info */
  1,   /* field[1] = payload */
};
static const ProtobufCIntRange ciot__ble_scn_adv__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor ciot__ble_scn_adv__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Ciot.BleScnAdv",
  "BleScnAdv",
  "Ciot__BleScnAdv",
  "Ciot",
  sizeof(Ciot__BleScnAdv),
  2,
  ciot__ble_scn_adv__field_descriptors,
  ciot__ble_scn_adv__field_indices_by_name,
  1,  ciot__ble_scn_adv__number_ranges,
  (ProtobufCMessageInit) ciot__ble_scn_adv__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor ciot__ble_scn_status__field_descriptors[7] =
{
  {
    "state",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Ciot__BleScnStatus, state),
    &ciot__ble_scn_state__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "err_code",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Ciot__BleScnStatus, err_code),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "advs_count",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Ciot__BleScnStatus, advs_count),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "advs_filtered",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Ciot__BleScnStatus, advs_filtered),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "last_event",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Ciot__BleScnStatus, last_event),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "fifo_len",
    6,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Ciot__BleScnStatus, fifo_len),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "fifo_max",
    7,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Ciot__BleScnStatus, fifo_max),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned ciot__ble_scn_status__field_indices_by_name[] = {
  2,   /* field[2] = advs_count */
  3,   /* field[3] = advs_filtered */
  1,   /* field[1] = err_code */
  5,   /* field[5] = fifo_len */
  6,   /* field[6] = fifo_max */
  4,   /* field[4] = last_event */
  0,   /* field[0] = state */
};
static const ProtobufCIntRange ciot__ble_scn_status__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 7 }
};
const ProtobufCMessageDescriptor ciot__ble_scn_status__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Ciot.BleScnStatus",
  "BleScnStatus",
  "Ciot__BleScnStatus",
  "Ciot",
  sizeof(Ciot__BleScnStatus),
  7,
  ciot__ble_scn_status__field_descriptors,
  ciot__ble_scn_status__field_indices_by_name,
  1,  ciot__ble_scn_status__number_ranges,
  (ProtobufCMessageInit) ciot__ble_scn_status__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor ciot__ble_scn_req__field_descriptors[1] =
{
  {
    "type",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Ciot__BleScnReq, type),
    &ciot__ble_scn_req_type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned ciot__ble_scn_req__field_indices_by_name[] = {
  0,   /* field[0] = type */
};
static const ProtobufCIntRange ciot__ble_scn_req__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor ciot__ble_scn_req__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Ciot.BleScnReq",
  "BleScnReq",
  "Ciot__BleScnReq",
  "Ciot",
  sizeof(Ciot__BleScnReq),
  1,
  ciot__ble_scn_req__field_descriptors,
  ciot__ble_scn_req__field_indices_by_name,
  1,  ciot__ble_scn_req__number_ranges,
  (ProtobufCMessageInit) ciot__ble_scn_req__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor ciot__ble_scn_data__field_descriptors[3] =
{
  {
    "config",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Ciot__BleScnData, config),
    &ciot__ble_scn_cfg__descriptor,
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
    offsetof(Ciot__BleScnData, status),
    &ciot__ble_scn_status__descriptor,
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
    offsetof(Ciot__BleScnData, request),
    &ciot__ble_scn_req__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned ciot__ble_scn_data__field_indices_by_name[] = {
  0,   /* field[0] = config */
  2,   /* field[2] = request */
  1,   /* field[1] = status */
};
static const ProtobufCIntRange ciot__ble_scn_data__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor ciot__ble_scn_data__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Ciot.BleScnData",
  "BleScnData",
  "Ciot__BleScnData",
  "Ciot",
  sizeof(Ciot__BleScnData),
  3,
  ciot__ble_scn_data__field_descriptors,
  ciot__ble_scn_data__field_indices_by_name,
  1,  ciot__ble_scn_data__number_ranges,
  (ProtobufCMessageInit) ciot__ble_scn_data__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue ciot__ble_scn_state__enum_values_by_number[3] =
{
  { "BLE_SCN_STATE_IDLE", "CIOT__BLE_SCN_STATE__BLE_SCN_STATE_IDLE", 0 },
  { "BLE_SCN_STATE_PASSIVE", "CIOT__BLE_SCN_STATE__BLE_SCN_STATE_PASSIVE", 1 },
  { "BLE_SCN_STATE_ACTIVE", "CIOT__BLE_SCN_STATE__BLE_SCN_STATE_ACTIVE", 2 },
};
static const ProtobufCIntRange ciot__ble_scn_state__value_ranges[] = {
{0, 0},{0, 3}
};
static const ProtobufCEnumValueIndex ciot__ble_scn_state__enum_values_by_name[3] =
{
  { "BLE_SCN_STATE_ACTIVE", 2 },
  { "BLE_SCN_STATE_IDLE", 0 },
  { "BLE_SCN_STATE_PASSIVE", 1 },
};
const ProtobufCEnumDescriptor ciot__ble_scn_state__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "Ciot.BleScnState",
  "BleScnState",
  "Ciot__BleScnState",
  "Ciot",
  3,
  ciot__ble_scn_state__enum_values_by_number,
  3,
  ciot__ble_scn_state__enum_values_by_name,
  1,
  ciot__ble_scn_state__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCEnumValue ciot__ble_scn_req_type__enum_values_by_number[1] =
{
  { "BLE_SCN_REQ_TYPE_UNKOWN", "CIOT__BLE_SCN_REQ_TYPE__BLE_SCN_REQ_TYPE_UNKOWN", 0 },
};
static const ProtobufCIntRange ciot__ble_scn_req_type__value_ranges[] = {
{0, 0},{0, 1}
};
static const ProtobufCEnumValueIndex ciot__ble_scn_req_type__enum_values_by_name[1] =
{
  { "BLE_SCN_REQ_TYPE_UNKOWN", 0 },
};
const ProtobufCEnumDescriptor ciot__ble_scn_req_type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "Ciot.BleScnReqType",
  "BleScnReqType",
  "Ciot__BleScnReqType",
  "Ciot",
  1,
  ciot__ble_scn_req_type__enum_values_by_number,
  1,
  ciot__ble_scn_req_type__enum_values_by_name,
  1,
  ciot__ble_scn_req_type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};

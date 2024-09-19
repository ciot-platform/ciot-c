# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ciot/proto/v1/ble_adv.proto

from google.protobuf.internal import enum_type_wrapper
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='ciot/proto/v1/ble_adv.proto',
  package='Ciot',
  syntax='proto3',
  serialized_options=None,
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n\x1b\x63iot/proto/v1/ble_adv.proto\x12\x04\x43iot\"f\n\tBleAdvCfg\x12\x10\n\x08interval\x18\x01 \x01(\r\x12\x10\n\x08\x64uration\x18\x02 \x01(\r\x12\x0c\n\x04type\x18\x03 \x01(\r\x12\x15\n\rfilter_policy\x18\x04 \x01(\r\x12\x10\n\x08tx_power\x18\x05 \x01(\r\"B\n\x0c\x42leAdvStatus\x12 \n\x05state\x18\x01 \x01(\x0e\x32\x11.Ciot.BleAdvState\x12\x10\n\x08\x65rr_code\x18\x02 \x01(\x05\".\n\tBleAdvReq\x12!\n\x04type\x18\x01 \x01(\x0e\x32\x13.Ciot.BleAdvReqType\"s\n\nBleAdvData\x12\x1f\n\x06\x63onfig\x18\x01 \x01(\x0b\x32\x0f.Ciot.BleAdvCfg\x12\"\n\x06status\x18\x02 \x01(\x0b\x32\x12.Ciot.BleAdvStatus\x12 \n\x07request\x18\x03 \x01(\x0b\x32\x0f.Ciot.BleAdvReq*[\n\x0b\x42leAdvState\x12\x16\n\x12\x42LE_ADV_STATE_IDLE\x10\x00\x12\x19\n\x15\x42LE_ADV_STATE_STARTED\x10\x01\x12\x19\n\x15\x42LE_ADV_STATE_SENDING\x10\x02*,\n\rBleAdvReqType\x12\x1b\n\x17\x42LE_ADV_REQ_TYPE_UNKOWN\x10\x00\x62\x06proto3'
)

_BLEADVSTATE = _descriptor.EnumDescriptor(
  name='BleAdvState',
  full_name='Ciot.BleAdvState',
  filename=None,
  file=DESCRIPTOR,
  create_key=_descriptor._internal_create_key,
  values=[
    _descriptor.EnumValueDescriptor(
      name='BLE_ADV_STATE_IDLE', index=0, number=0,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='BLE_ADV_STATE_STARTED', index=1, number=1,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='BLE_ADV_STATE_SENDING', index=2, number=2,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=374,
  serialized_end=465,
)
_sym_db.RegisterEnumDescriptor(_BLEADVSTATE)

BleAdvState = enum_type_wrapper.EnumTypeWrapper(_BLEADVSTATE)
_BLEADVREQTYPE = _descriptor.EnumDescriptor(
  name='BleAdvReqType',
  full_name='Ciot.BleAdvReqType',
  filename=None,
  file=DESCRIPTOR,
  create_key=_descriptor._internal_create_key,
  values=[
    _descriptor.EnumValueDescriptor(
      name='BLE_ADV_REQ_TYPE_UNKOWN', index=0, number=0,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=467,
  serialized_end=511,
)
_sym_db.RegisterEnumDescriptor(_BLEADVREQTYPE)

BleAdvReqType = enum_type_wrapper.EnumTypeWrapper(_BLEADVREQTYPE)
BLE_ADV_STATE_IDLE = 0
BLE_ADV_STATE_STARTED = 1
BLE_ADV_STATE_SENDING = 2
BLE_ADV_REQ_TYPE_UNKOWN = 0



_BLEADVCFG = _descriptor.Descriptor(
  name='BleAdvCfg',
  full_name='Ciot.BleAdvCfg',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='interval', full_name='Ciot.BleAdvCfg.interval', index=0,
      number=1, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='duration', full_name='Ciot.BleAdvCfg.duration', index=1,
      number=2, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='type', full_name='Ciot.BleAdvCfg.type', index=2,
      number=3, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='filter_policy', full_name='Ciot.BleAdvCfg.filter_policy', index=3,
      number=4, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='tx_power', full_name='Ciot.BleAdvCfg.tx_power', index=4,
      number=5, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=37,
  serialized_end=139,
)


_BLEADVSTATUS = _descriptor.Descriptor(
  name='BleAdvStatus',
  full_name='Ciot.BleAdvStatus',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='state', full_name='Ciot.BleAdvStatus.state', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='err_code', full_name='Ciot.BleAdvStatus.err_code', index=1,
      number=2, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=141,
  serialized_end=207,
)


_BLEADVREQ = _descriptor.Descriptor(
  name='BleAdvReq',
  full_name='Ciot.BleAdvReq',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='type', full_name='Ciot.BleAdvReq.type', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=209,
  serialized_end=255,
)


_BLEADVDATA = _descriptor.Descriptor(
  name='BleAdvData',
  full_name='Ciot.BleAdvData',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='config', full_name='Ciot.BleAdvData.config', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='status', full_name='Ciot.BleAdvData.status', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='request', full_name='Ciot.BleAdvData.request', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=257,
  serialized_end=372,
)

_BLEADVSTATUS.fields_by_name['state'].enum_type = _BLEADVSTATE
_BLEADVREQ.fields_by_name['type'].enum_type = _BLEADVREQTYPE
_BLEADVDATA.fields_by_name['config'].message_type = _BLEADVCFG
_BLEADVDATA.fields_by_name['status'].message_type = _BLEADVSTATUS
_BLEADVDATA.fields_by_name['request'].message_type = _BLEADVREQ
DESCRIPTOR.message_types_by_name['BleAdvCfg'] = _BLEADVCFG
DESCRIPTOR.message_types_by_name['BleAdvStatus'] = _BLEADVSTATUS
DESCRIPTOR.message_types_by_name['BleAdvReq'] = _BLEADVREQ
DESCRIPTOR.message_types_by_name['BleAdvData'] = _BLEADVDATA
DESCRIPTOR.enum_types_by_name['BleAdvState'] = _BLEADVSTATE
DESCRIPTOR.enum_types_by_name['BleAdvReqType'] = _BLEADVREQTYPE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

BleAdvCfg = _reflection.GeneratedProtocolMessageType('BleAdvCfg', (_message.Message,), {
  'DESCRIPTOR' : _BLEADVCFG,
  '__module__' : 'ciot.proto.v1.ble_adv_pb2'
  # @@protoc_insertion_point(class_scope:Ciot.BleAdvCfg)
  })
_sym_db.RegisterMessage(BleAdvCfg)

BleAdvStatus = _reflection.GeneratedProtocolMessageType('BleAdvStatus', (_message.Message,), {
  'DESCRIPTOR' : _BLEADVSTATUS,
  '__module__' : 'ciot.proto.v1.ble_adv_pb2'
  # @@protoc_insertion_point(class_scope:Ciot.BleAdvStatus)
  })
_sym_db.RegisterMessage(BleAdvStatus)

BleAdvReq = _reflection.GeneratedProtocolMessageType('BleAdvReq', (_message.Message,), {
  'DESCRIPTOR' : _BLEADVREQ,
  '__module__' : 'ciot.proto.v1.ble_adv_pb2'
  # @@protoc_insertion_point(class_scope:Ciot.BleAdvReq)
  })
_sym_db.RegisterMessage(BleAdvReq)

BleAdvData = _reflection.GeneratedProtocolMessageType('BleAdvData', (_message.Message,), {
  'DESCRIPTOR' : _BLEADVDATA,
  '__module__' : 'ciot.proto.v1.ble_adv_pb2'
  # @@protoc_insertion_point(class_scope:Ciot.BleAdvData)
  })
_sym_db.RegisterMessage(BleAdvData)


# @@protoc_insertion_point(module_scope)
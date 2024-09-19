# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ciot/proto/v1/usb.proto

from google.protobuf.internal import enum_type_wrapper
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='ciot/proto/v1/usb.proto',
  package='Ciot',
  syntax='proto3',
  serialized_options=None,
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n\x17\x63iot/proto/v1/usb.proto\x12\x04\x43iot\"\x1d\n\x06UsbCfg\x12\x13\n\x0b\x62ridge_mode\x18\x01 \x01(\x08\"*\n\tUsbStatus\x12\x1d\n\x05state\x18\x01 \x01(\x0e\x32\x0e.Ciot.UsbState\"6\n\x06UsbReq\x12\x1e\n\x04type\x18\x01 \x01(\x0e\x32\x10.Ciot.UsbReqType\x12\x0c\n\x04\x64\x61ta\x18\x02 \x01(\x0c\"g\n\x07UsbData\x12\x1c\n\x06\x63onfig\x18\x01 \x01(\x0b\x32\x0c.Ciot.UsbCfg\x12\x1f\n\x06status\x18\x02 \x01(\x0b\x32\x0f.Ciot.UsbStatus\x12\x1d\n\x07request\x18\x03 \x01(\x0b\x32\x0c.Ciot.UsbReq*T\n\x08UsbState\x12\x15\n\x11USB_STATE_STOPPED\x10\x00\x12\x15\n\x11USB_STATE_STARTED\x10\x01\x12\x1a\n\x16USB_STATE_CIOT_S_ERROR\x10\x03*\x83\x01\n\nUsbReqType\x12\x17\n\x13USB_REQ_TYPE_UNKOWN\x10\x00\x12\x1a\n\x16USB_REQ_TYPE_SEND_DATA\x10\x01\x12\x1b\n\x17USB_REQ_TYPE_SEND_BYTES\x10\x02\x12#\n\x1fUSB_REQ_TYPE_ENABLE_BRIDGE_MODE\x10\x03\x62\x06proto3'
)

_USBSTATE = _descriptor.EnumDescriptor(
  name='UsbState',
  full_name='Ciot.UsbState',
  filename=None,
  file=DESCRIPTOR,
  create_key=_descriptor._internal_create_key,
  values=[
    _descriptor.EnumValueDescriptor(
      name='USB_STATE_STOPPED', index=0, number=0,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='USB_STATE_STARTED', index=1, number=1,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='USB_STATE_CIOT_S_ERROR', index=2, number=3,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=269,
  serialized_end=353,
)
_sym_db.RegisterEnumDescriptor(_USBSTATE)

UsbState = enum_type_wrapper.EnumTypeWrapper(_USBSTATE)
_USBREQTYPE = _descriptor.EnumDescriptor(
  name='UsbReqType',
  full_name='Ciot.UsbReqType',
  filename=None,
  file=DESCRIPTOR,
  create_key=_descriptor._internal_create_key,
  values=[
    _descriptor.EnumValueDescriptor(
      name='USB_REQ_TYPE_UNKOWN', index=0, number=0,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='USB_REQ_TYPE_SEND_DATA', index=1, number=1,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='USB_REQ_TYPE_SEND_BYTES', index=2, number=2,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='USB_REQ_TYPE_ENABLE_BRIDGE_MODE', index=3, number=3,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=356,
  serialized_end=487,
)
_sym_db.RegisterEnumDescriptor(_USBREQTYPE)

UsbReqType = enum_type_wrapper.EnumTypeWrapper(_USBREQTYPE)
USB_STATE_STOPPED = 0
USB_STATE_STARTED = 1
USB_STATE_CIOT_S_ERROR = 3
USB_REQ_TYPE_UNKOWN = 0
USB_REQ_TYPE_SEND_DATA = 1
USB_REQ_TYPE_SEND_BYTES = 2
USB_REQ_TYPE_ENABLE_BRIDGE_MODE = 3



_USBCFG = _descriptor.Descriptor(
  name='UsbCfg',
  full_name='Ciot.UsbCfg',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='bridge_mode', full_name='Ciot.UsbCfg.bridge_mode', index=0,
      number=1, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
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
  serialized_start=33,
  serialized_end=62,
)


_USBSTATUS = _descriptor.Descriptor(
  name='UsbStatus',
  full_name='Ciot.UsbStatus',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='state', full_name='Ciot.UsbStatus.state', index=0,
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
  serialized_start=64,
  serialized_end=106,
)


_USBREQ = _descriptor.Descriptor(
  name='UsbReq',
  full_name='Ciot.UsbReq',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='type', full_name='Ciot.UsbReq.type', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='data', full_name='Ciot.UsbReq.data', index=1,
      number=2, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=b"",
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
  serialized_start=108,
  serialized_end=162,
)


_USBDATA = _descriptor.Descriptor(
  name='UsbData',
  full_name='Ciot.UsbData',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='config', full_name='Ciot.UsbData.config', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='status', full_name='Ciot.UsbData.status', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='request', full_name='Ciot.UsbData.request', index=2,
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
  serialized_start=164,
  serialized_end=267,
)

_USBSTATUS.fields_by_name['state'].enum_type = _USBSTATE
_USBREQ.fields_by_name['type'].enum_type = _USBREQTYPE
_USBDATA.fields_by_name['config'].message_type = _USBCFG
_USBDATA.fields_by_name['status'].message_type = _USBSTATUS
_USBDATA.fields_by_name['request'].message_type = _USBREQ
DESCRIPTOR.message_types_by_name['UsbCfg'] = _USBCFG
DESCRIPTOR.message_types_by_name['UsbStatus'] = _USBSTATUS
DESCRIPTOR.message_types_by_name['UsbReq'] = _USBREQ
DESCRIPTOR.message_types_by_name['UsbData'] = _USBDATA
DESCRIPTOR.enum_types_by_name['UsbState'] = _USBSTATE
DESCRIPTOR.enum_types_by_name['UsbReqType'] = _USBREQTYPE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

UsbCfg = _reflection.GeneratedProtocolMessageType('UsbCfg', (_message.Message,), {
  'DESCRIPTOR' : _USBCFG,
  '__module__' : 'ciot.proto.v1.usb_pb2'
  # @@protoc_insertion_point(class_scope:Ciot.UsbCfg)
  })
_sym_db.RegisterMessage(UsbCfg)

UsbStatus = _reflection.GeneratedProtocolMessageType('UsbStatus', (_message.Message,), {
  'DESCRIPTOR' : _USBSTATUS,
  '__module__' : 'ciot.proto.v1.usb_pb2'
  # @@protoc_insertion_point(class_scope:Ciot.UsbStatus)
  })
_sym_db.RegisterMessage(UsbStatus)

UsbReq = _reflection.GeneratedProtocolMessageType('UsbReq', (_message.Message,), {
  'DESCRIPTOR' : _USBREQ,
  '__module__' : 'ciot.proto.v1.usb_pb2'
  # @@protoc_insertion_point(class_scope:Ciot.UsbReq)
  })
_sym_db.RegisterMessage(UsbReq)

UsbData = _reflection.GeneratedProtocolMessageType('UsbData', (_message.Message,), {
  'DESCRIPTOR' : _USBDATA,
  '__module__' : 'ciot.proto.v1.usb_pb2'
  # @@protoc_insertion_point(class_scope:Ciot.UsbData)
  })
_sym_db.RegisterMessage(UsbData)


# @@protoc_insertion_point(module_scope)
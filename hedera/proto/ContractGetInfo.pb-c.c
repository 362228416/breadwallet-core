/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: ContractGetInfo.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "ContractGetInfo.pb-c.h"
void   proto__contract_get_info_query__init
                     (Proto__ContractGetInfoQuery         *message)
{
  static const Proto__ContractGetInfoQuery init_value = PROTO__CONTRACT_GET_INFO_QUERY__INIT;
  *message = init_value;
}
size_t proto__contract_get_info_query__get_packed_size
                     (const Proto__ContractGetInfoQuery *message)
{
  assert(message->base.descriptor == &proto__contract_get_info_query__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t proto__contract_get_info_query__pack
                     (const Proto__ContractGetInfoQuery *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &proto__contract_get_info_query__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t proto__contract_get_info_query__pack_to_buffer
                     (const Proto__ContractGetInfoQuery *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &proto__contract_get_info_query__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Proto__ContractGetInfoQuery *
       proto__contract_get_info_query__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Proto__ContractGetInfoQuery *)
     protobuf_c_message_unpack (&proto__contract_get_info_query__descriptor,
                                allocator, len, data);
}
void   proto__contract_get_info_query__free_unpacked
                     (Proto__ContractGetInfoQuery *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &proto__contract_get_info_query__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   proto__contract_get_info_response__contract_info__init
                     (Proto__ContractGetInfoResponse__ContractInfo         *message)
{
  static const Proto__ContractGetInfoResponse__ContractInfo init_value = PROTO__CONTRACT_GET_INFO_RESPONSE__CONTRACT_INFO__INIT;
  *message = init_value;
}
void   proto__contract_get_info_response__init
                     (Proto__ContractGetInfoResponse         *message)
{
  static const Proto__ContractGetInfoResponse init_value = PROTO__CONTRACT_GET_INFO_RESPONSE__INIT;
  *message = init_value;
}
size_t proto__contract_get_info_response__get_packed_size
                     (const Proto__ContractGetInfoResponse *message)
{
  assert(message->base.descriptor == &proto__contract_get_info_response__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t proto__contract_get_info_response__pack
                     (const Proto__ContractGetInfoResponse *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &proto__contract_get_info_response__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t proto__contract_get_info_response__pack_to_buffer
                     (const Proto__ContractGetInfoResponse *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &proto__contract_get_info_response__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Proto__ContractGetInfoResponse *
       proto__contract_get_info_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Proto__ContractGetInfoResponse *)
     protobuf_c_message_unpack (&proto__contract_get_info_response__descriptor,
                                allocator, len, data);
}
void   proto__contract_get_info_response__free_unpacked
                     (Proto__ContractGetInfoResponse *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &proto__contract_get_info_response__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor proto__contract_get_info_query__field_descriptors[2] =
{
  {
    "header",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Proto__ContractGetInfoQuery, header),
    &proto__query_header__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "contractID",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Proto__ContractGetInfoQuery, contractid),
    &proto__contract_id__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned proto__contract_get_info_query__field_indices_by_name[] = {
  1,   /* field[1] = contractID */
  0,   /* field[0] = header */
};
static const ProtobufCIntRange proto__contract_get_info_query__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor proto__contract_get_info_query__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "proto.ContractGetInfoQuery",
  "ContractGetInfoQuery",
  "Proto__ContractGetInfoQuery",
  "proto",
  sizeof(Proto__ContractGetInfoQuery),
  2,
  proto__contract_get_info_query__field_descriptors,
  proto__contract_get_info_query__field_indices_by_name,
  1,  proto__contract_get_info_query__number_ranges,
  (ProtobufCMessageInit) proto__contract_get_info_query__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor proto__contract_get_info_response__contract_info__field_descriptors[8] =
{
  {
    "contractID",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Proto__ContractGetInfoResponse__ContractInfo, contractid),
    &proto__contract_id__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "accountID",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Proto__ContractGetInfoResponse__ContractInfo, accountid),
    &proto__account_id__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "contractAccountID",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Proto__ContractGetInfoResponse__ContractInfo, contractaccountid),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "adminKey",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Proto__ContractGetInfoResponse__ContractInfo, adminkey),
    &proto__key__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "expirationTime",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Proto__ContractGetInfoResponse__ContractInfo, expirationtime),
    &proto__timestamp__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "autoRenewPeriod",
    6,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Proto__ContractGetInfoResponse__ContractInfo, autorenewperiod),
    &proto__duration__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "storage",
    7,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(Proto__ContractGetInfoResponse__ContractInfo, storage),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "memo",
    8,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Proto__ContractGetInfoResponse__ContractInfo, memo),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned proto__contract_get_info_response__contract_info__field_indices_by_name[] = {
  1,   /* field[1] = accountID */
  3,   /* field[3] = adminKey */
  5,   /* field[5] = autoRenewPeriod */
  2,   /* field[2] = contractAccountID */
  0,   /* field[0] = contractID */
  4,   /* field[4] = expirationTime */
  7,   /* field[7] = memo */
  6,   /* field[6] = storage */
};
static const ProtobufCIntRange proto__contract_get_info_response__contract_info__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 8 }
};
const ProtobufCMessageDescriptor proto__contract_get_info_response__contract_info__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "proto.ContractGetInfoResponse.ContractInfo",
  "ContractInfo",
  "Proto__ContractGetInfoResponse__ContractInfo",
  "proto",
  sizeof(Proto__ContractGetInfoResponse__ContractInfo),
  8,
  proto__contract_get_info_response__contract_info__field_descriptors,
  proto__contract_get_info_response__contract_info__field_indices_by_name,
  1,  proto__contract_get_info_response__contract_info__number_ranges,
  (ProtobufCMessageInit) proto__contract_get_info_response__contract_info__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor proto__contract_get_info_response__field_descriptors[2] =
{
  {
    "header",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Proto__ContractGetInfoResponse, header),
    &proto__response_header__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "contractInfo",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Proto__ContractGetInfoResponse, contractinfo),
    &proto__contract_get_info_response__contract_info__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned proto__contract_get_info_response__field_indices_by_name[] = {
  1,   /* field[1] = contractInfo */
  0,   /* field[0] = header */
};
static const ProtobufCIntRange proto__contract_get_info_response__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor proto__contract_get_info_response__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "proto.ContractGetInfoResponse",
  "ContractGetInfoResponse",
  "Proto__ContractGetInfoResponse",
  "proto",
  sizeof(Proto__ContractGetInfoResponse),
  2,
  proto__contract_get_info_response__field_descriptors,
  proto__contract_get_info_response__field_indices_by_name,
  1,  proto__contract_get_info_response__number_ranges,
  (ProtobufCMessageInit) proto__contract_get_info_response__init,
  NULL,NULL,NULL    /* reserved[123] */
};
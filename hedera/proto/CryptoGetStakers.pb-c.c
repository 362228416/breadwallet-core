/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: CryptoGetStakers.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "CryptoGetStakers.pb-c.h"
void   proto__crypto_get_stakers_query__init
                     (Proto__CryptoGetStakersQuery         *message)
{
  static const Proto__CryptoGetStakersQuery init_value = PROTO__CRYPTO_GET_STAKERS_QUERY__INIT;
  *message = init_value;
}
size_t proto__crypto_get_stakers_query__get_packed_size
                     (const Proto__CryptoGetStakersQuery *message)
{
  assert(message->base.descriptor == &proto__crypto_get_stakers_query__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t proto__crypto_get_stakers_query__pack
                     (const Proto__CryptoGetStakersQuery *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &proto__crypto_get_stakers_query__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t proto__crypto_get_stakers_query__pack_to_buffer
                     (const Proto__CryptoGetStakersQuery *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &proto__crypto_get_stakers_query__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Proto__CryptoGetStakersQuery *
       proto__crypto_get_stakers_query__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Proto__CryptoGetStakersQuery *)
     protobuf_c_message_unpack (&proto__crypto_get_stakers_query__descriptor,
                                allocator, len, data);
}
void   proto__crypto_get_stakers_query__free_unpacked
                     (Proto__CryptoGetStakersQuery *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &proto__crypto_get_stakers_query__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   proto__proxy_staker__init
                     (Proto__ProxyStaker         *message)
{
  static const Proto__ProxyStaker init_value = PROTO__PROXY_STAKER__INIT;
  *message = init_value;
}
size_t proto__proxy_staker__get_packed_size
                     (const Proto__ProxyStaker *message)
{
  assert(message->base.descriptor == &proto__proxy_staker__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t proto__proxy_staker__pack
                     (const Proto__ProxyStaker *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &proto__proxy_staker__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t proto__proxy_staker__pack_to_buffer
                     (const Proto__ProxyStaker *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &proto__proxy_staker__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Proto__ProxyStaker *
       proto__proxy_staker__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Proto__ProxyStaker *)
     protobuf_c_message_unpack (&proto__proxy_staker__descriptor,
                                allocator, len, data);
}
void   proto__proxy_staker__free_unpacked
                     (Proto__ProxyStaker *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &proto__proxy_staker__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   proto__all_proxy_stakers__init
                     (Proto__AllProxyStakers         *message)
{
  static const Proto__AllProxyStakers init_value = PROTO__ALL_PROXY_STAKERS__INIT;
  *message = init_value;
}
size_t proto__all_proxy_stakers__get_packed_size
                     (const Proto__AllProxyStakers *message)
{
  assert(message->base.descriptor == &proto__all_proxy_stakers__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t proto__all_proxy_stakers__pack
                     (const Proto__AllProxyStakers *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &proto__all_proxy_stakers__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t proto__all_proxy_stakers__pack_to_buffer
                     (const Proto__AllProxyStakers *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &proto__all_proxy_stakers__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Proto__AllProxyStakers *
       proto__all_proxy_stakers__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Proto__AllProxyStakers *)
     protobuf_c_message_unpack (&proto__all_proxy_stakers__descriptor,
                                allocator, len, data);
}
void   proto__all_proxy_stakers__free_unpacked
                     (Proto__AllProxyStakers *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &proto__all_proxy_stakers__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   proto__crypto_get_stakers_response__init
                     (Proto__CryptoGetStakersResponse         *message)
{
  static const Proto__CryptoGetStakersResponse init_value = PROTO__CRYPTO_GET_STAKERS_RESPONSE__INIT;
  *message = init_value;
}
size_t proto__crypto_get_stakers_response__get_packed_size
                     (const Proto__CryptoGetStakersResponse *message)
{
  assert(message->base.descriptor == &proto__crypto_get_stakers_response__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t proto__crypto_get_stakers_response__pack
                     (const Proto__CryptoGetStakersResponse *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &proto__crypto_get_stakers_response__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t proto__crypto_get_stakers_response__pack_to_buffer
                     (const Proto__CryptoGetStakersResponse *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &proto__crypto_get_stakers_response__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Proto__CryptoGetStakersResponse *
       proto__crypto_get_stakers_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Proto__CryptoGetStakersResponse *)
     protobuf_c_message_unpack (&proto__crypto_get_stakers_response__descriptor,
                                allocator, len, data);
}
void   proto__crypto_get_stakers_response__free_unpacked
                     (Proto__CryptoGetStakersResponse *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &proto__crypto_get_stakers_response__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor proto__crypto_get_stakers_query__field_descriptors[2] =
{
  {
    "header",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Proto__CryptoGetStakersQuery, header),
    &proto__query_header__descriptor,
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
    offsetof(Proto__CryptoGetStakersQuery, accountid),
    &proto__account_id__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned proto__crypto_get_stakers_query__field_indices_by_name[] = {
  1,   /* field[1] = accountID */
  0,   /* field[0] = header */
};
static const ProtobufCIntRange proto__crypto_get_stakers_query__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor proto__crypto_get_stakers_query__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "proto.CryptoGetStakersQuery",
  "CryptoGetStakersQuery",
  "Proto__CryptoGetStakersQuery",
  "proto",
  sizeof(Proto__CryptoGetStakersQuery),
  2,
  proto__crypto_get_stakers_query__field_descriptors,
  proto__crypto_get_stakers_query__field_indices_by_name,
  1,  proto__crypto_get_stakers_query__number_ranges,
  (ProtobufCMessageInit) proto__crypto_get_stakers_query__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor proto__proxy_staker__field_descriptors[2] =
{
  {
    "accountID",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Proto__ProxyStaker, accountid),
    &proto__account_id__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "amount",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(Proto__ProxyStaker, amount),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned proto__proxy_staker__field_indices_by_name[] = {
  0,   /* field[0] = accountID */
  1,   /* field[1] = amount */
};
static const ProtobufCIntRange proto__proxy_staker__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor proto__proxy_staker__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "proto.ProxyStaker",
  "ProxyStaker",
  "Proto__ProxyStaker",
  "proto",
  sizeof(Proto__ProxyStaker),
  2,
  proto__proxy_staker__field_descriptors,
  proto__proxy_staker__field_indices_by_name,
  1,  proto__proxy_staker__number_ranges,
  (ProtobufCMessageInit) proto__proxy_staker__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor proto__all_proxy_stakers__field_descriptors[2] =
{
  {
    "accountID",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Proto__AllProxyStakers, accountid),
    &proto__account_id__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "proxyStaker",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Proto__AllProxyStakers, n_proxystaker),
    offsetof(Proto__AllProxyStakers, proxystaker),
    &proto__proxy_staker__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned proto__all_proxy_stakers__field_indices_by_name[] = {
  0,   /* field[0] = accountID */
  1,   /* field[1] = proxyStaker */
};
static const ProtobufCIntRange proto__all_proxy_stakers__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor proto__all_proxy_stakers__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "proto.AllProxyStakers",
  "AllProxyStakers",
  "Proto__AllProxyStakers",
  "proto",
  sizeof(Proto__AllProxyStakers),
  2,
  proto__all_proxy_stakers__field_descriptors,
  proto__all_proxy_stakers__field_indices_by_name,
  1,  proto__all_proxy_stakers__number_ranges,
  (ProtobufCMessageInit) proto__all_proxy_stakers__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor proto__crypto_get_stakers_response__field_descriptors[2] =
{
  {
    "header",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Proto__CryptoGetStakersResponse, header),
    &proto__response_header__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "stakers",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Proto__CryptoGetStakersResponse, stakers),
    &proto__all_proxy_stakers__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned proto__crypto_get_stakers_response__field_indices_by_name[] = {
  0,   /* field[0] = header */
  1,   /* field[1] = stakers */
};
static const ProtobufCIntRange proto__crypto_get_stakers_response__number_ranges[2 + 1] =
{
  { 1, 0 },
  { 3, 1 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor proto__crypto_get_stakers_response__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "proto.CryptoGetStakersResponse",
  "CryptoGetStakersResponse",
  "Proto__CryptoGetStakersResponse",
  "proto",
  sizeof(Proto__CryptoGetStakersResponse),
  2,
  proto__crypto_get_stakers_response__field_descriptors,
  proto__crypto_get_stakers_response__field_indices_by_name,
  2,  proto__crypto_get_stakers_response__number_ranges,
  (ProtobufCMessageInit) proto__crypto_get_stakers_response__init,
  NULL,NULL,NULL    /* reserved[123] */
};
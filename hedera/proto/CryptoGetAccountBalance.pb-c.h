/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: CryptoGetAccountBalance.proto */

#ifndef PROTOBUF_C_CryptoGetAccountBalance_2eproto__INCLUDED
#define PROTOBUF_C_CryptoGetAccountBalance_2eproto__INCLUDED

#include "protobuf-c.h"

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003002 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "BasicTypes.pb-c.h"
#include "QueryHeader.pb-c.h"
#include "ResponseHeader.pb-c.h"

typedef struct _Proto__CryptoGetAccountBalanceQuery Proto__CryptoGetAccountBalanceQuery;
typedef struct _Proto__CryptoGetAccountBalanceResponse Proto__CryptoGetAccountBalanceResponse;


/* --- enums --- */


/* --- messages --- */

/*
 * Get the balance of a cryptocurrency account. This returns only the balance, so it is a smaller and faster reply than CryptoGetInfo, which returns the balance plus additional information. 
 */
struct  _Proto__CryptoGetAccountBalanceQuery
{
  ProtobufCMessage base;
  /*
   * Standard info sent from client to node, including the signed payment, and what kind of response is requested (cost, state proof, both, or neither).
   */
  Proto__QueryHeader *header;
  /*
   * The account ID for which information is requested
   */
  Proto__AccountID *accountid;
};
#define PROTO__CRYPTO_GET_ACCOUNT_BALANCE_QUERY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&proto__crypto_get_account_balance_query__descriptor) \
    , NULL, NULL }


/*
 * Response when the client sends the node CryptoGetAccountBalanceQuery 
 */
struct  _Proto__CryptoGetAccountBalanceResponse
{
  ProtobufCMessage base;
  /*
   *Standard response from node to client, including the requested fields: cost, or state proof, or both, or neither
   */
  Proto__ResponseHeader *header;
  /*
   * The account ID that is being described (this is useful with state proofs, for proving to a third party)
   */
  Proto__AccountID *accountid;
  /*
   * The current balance, in tinybars
   */
  uint64_t balance;
};
#define PROTO__CRYPTO_GET_ACCOUNT_BALANCE_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&proto__crypto_get_account_balance_response__descriptor) \
    , NULL, NULL, 0 }


/* Proto__CryptoGetAccountBalanceQuery methods */
void   proto__crypto_get_account_balance_query__init
                     (Proto__CryptoGetAccountBalanceQuery         *message);
size_t proto__crypto_get_account_balance_query__get_packed_size
                     (const Proto__CryptoGetAccountBalanceQuery   *message);
size_t proto__crypto_get_account_balance_query__pack
                     (const Proto__CryptoGetAccountBalanceQuery   *message,
                      uint8_t             *out);
size_t proto__crypto_get_account_balance_query__pack_to_buffer
                     (const Proto__CryptoGetAccountBalanceQuery   *message,
                      ProtobufCBuffer     *buffer);
Proto__CryptoGetAccountBalanceQuery *
       proto__crypto_get_account_balance_query__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   proto__crypto_get_account_balance_query__free_unpacked
                     (Proto__CryptoGetAccountBalanceQuery *message,
                      ProtobufCAllocator *allocator);
/* Proto__CryptoGetAccountBalanceResponse methods */
void   proto__crypto_get_account_balance_response__init
                     (Proto__CryptoGetAccountBalanceResponse         *message);
size_t proto__crypto_get_account_balance_response__get_packed_size
                     (const Proto__CryptoGetAccountBalanceResponse   *message);
size_t proto__crypto_get_account_balance_response__pack
                     (const Proto__CryptoGetAccountBalanceResponse   *message,
                      uint8_t             *out);
size_t proto__crypto_get_account_balance_response__pack_to_buffer
                     (const Proto__CryptoGetAccountBalanceResponse   *message,
                      ProtobufCBuffer     *buffer);
Proto__CryptoGetAccountBalanceResponse *
       proto__crypto_get_account_balance_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   proto__crypto_get_account_balance_response__free_unpacked
                     (Proto__CryptoGetAccountBalanceResponse *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Proto__CryptoGetAccountBalanceQuery_Closure)
                 (const Proto__CryptoGetAccountBalanceQuery *message,
                  void *closure_data);
typedef void (*Proto__CryptoGetAccountBalanceResponse_Closure)
                 (const Proto__CryptoGetAccountBalanceResponse *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor proto__crypto_get_account_balance_query__descriptor;
extern const ProtobufCMessageDescriptor proto__crypto_get_account_balance_response__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_CryptoGetAccountBalance_2eproto__INCLUDED */
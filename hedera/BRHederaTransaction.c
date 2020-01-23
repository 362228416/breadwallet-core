/**
*/

#include "BRHederaTransaction.h"
#include "BRHederaCrypto.h"
#include "BRHederaSerialize.h"
#include "vendor/ed25519/ed25519.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct BRHederaTransactionRecord {
    BRHederaAddress source;
    BRHederaAddress target;
    BRHederaUnitTinyBar amount;
    char * transactionId;
    BRHederaUnitTinyBar fee;
    uint8_t * serializedBytes;
    size_t serializedSize;
    BRHederaTransactionHash hash;
};

extern BRHederaTransaction hederaTransactionCreateNew (BRHederaAddress source,
                                                       BRHederaAddress target,
                                                       BRHederaUnitTinyBar amount)
{
    BRHederaTransaction transaction = calloc (1, sizeof(struct BRHederaTransactionRecord));
    transaction->source = hederaAddressClone (source);
    transaction->target = hederaAddressClone (target);
    transaction->amount = amount;
    return transaction;
}

extern BRHederaTransaction hederaTransactionCreate (BRHederaAddress source,
                                                    BRHederaAddress target,
                                                    BRHederaUnitTinyBar amount,
                                                    const char * txID,
                                                    BRHederaTransactionHash hash)
{
    // This is an existing transaction - it must have a transaction ID
    assert(source);
    assert(target);
    BRHederaTransaction transaction = calloc (1, sizeof(struct BRHederaTransactionRecord));
    transaction->source = hederaAddressClone (source);
    transaction->target = hederaAddressClone (target);
    transaction->amount = amount;

    // Parse the transactionID
    if (txID && strlen(txID) > 1) {
        transaction->transactionId = (char*) calloc(1, strlen(txID) + 1);
        strcpy(transaction->transactionId, txID);
    }
    transaction->hash = hash;

    return transaction;
}

extern void hederaTransactionFree (BRHederaTransaction transaction)
{
    assert (transaction);
    if (transaction->serializedBytes) free (transaction->serializedBytes);
    if (transaction->transactionId) free (transaction->transactionId);
    if (transaction->source) hederaAddressFree (transaction->source);
    if (transaction->target) hederaAddressFree (transaction->target);
    free (transaction);
}

uint8_t * hederaSerializeNodeAccountId(BRHederaAddress nodeAddress, size_t * sizeOfBuffer)
{
    assert(sizeOfBuffer);

    // The Hedera account IDs are made up of 3 int64_t numbers
    *sizeOfBuffer = sizeof(int64_t) * 3;
    uint8_t * buffer = calloc(1, *sizeOfBuffer);

    // Get the account id values convert to network order
    int64_t shard = htonl(hederaAddressGetShard(nodeAddress));
    int64_t realm = htonl(hederaAddressGetRealm(nodeAddress));
    int64_t account = htonl(hederaAddressGetAccount(nodeAddress));

    // Copy the values to the buffer
    memcpy(buffer, &shard, sizeof(int64_t));
    memcpy(buffer + sizeof(int64_t), &realm, sizeof(int64_t));
    memcpy(buffer + (2 * sizeof(int64_t)), &account, sizeof(int64_t));

    return buffer;
}

extern size_t
hederaTransactionSignTransaction (BRHederaTransaction transaction,
                                  BRKey publicKey,
                                  BRHederaAddress nodeAddress,
                                  BRHederaTimeStamp timeStamp,
                                  BRHederaUnitTinyBar fee,
                                  UInt512 seed)
{
    assert (transaction);
    assert (nodeAddress);

    // If previously signed - delete and resign
    if (transaction->serializedBytes) {
        free (transaction->serializedBytes);
        transaction->serializedSize = 0;
    }

    transaction->fee = fee;

    // Generate the private key from the seed
    BRKey key = hederaKeyCreate (seed);
    unsigned char privateKey[64] = {0};
    unsigned char temp[32] = {0}; // Use the public key that is sent in instead
    ed25519_create_keypair (temp, privateKey, key.secret.u8);

    // First we need to serialize the body since it is the thing we sign
    size_t bodySize;
    uint8_t * body = hederaTransactionBodyPack (transaction->source,
                                                transaction->target,
                                                nodeAddress,
                                                transaction->amount,
                                                timeStamp,
                                                fee,
                                                NULL,
                                                &bodySize);

    // Create signature from the body bytes
    unsigned char signature[64];
    memset (signature, 0x00, 64);
    ed25519_sign(signature, body, bodySize, publicKey.pubKey, privateKey);

    // Serialize the full transaction including signature and public key
    uint8_t * serializedBytes = hederaTransactionPack (signature, 64,
                                                       publicKey.pubKey, 32,
                                                       body, bodySize,
                                                       &transaction->serializedSize);

    // We are now done with the body - it was copied to the serialized bytes so we
    // must clean up it now.
    free (body);

    // Due to how the Hedera API works the "node account id" of the server we will submit to
    // is included in the signing data so we MUST get the server to use the correct node.
    // The BDB server implementation requires that we add in the node account id along with
    // the serialized bytes.
    size_t nodeAccountIdSize = 0;
    uint8_t * nodeAccountId = hederaSerializeNodeAccountId (nodeAddress, &nodeAccountIdSize);

    // The buffer has to hold the nodeAccountId and the serialized bytes
    transaction->serializedBytes = calloc(1, transaction->serializedSize + nodeAccountIdSize);

    // First copy the nodeAccountId,
    memcpy(transaction->serializedBytes, nodeAccountId, nodeAccountIdSize);

    // Now copy the serialized transaction bytes after the node account id
    memcpy(transaction->serializedBytes + nodeAccountIdSize, serializedBytes, transaction->serializedSize);

    // Cleanup temporary buffers
    free (nodeAccountId);
    free (serializedBytes);

    transaction->serializedSize += nodeAccountIdSize; // This will be our new size of serialized bytes
    return transaction->serializedSize;
}

extern uint8_t * hederaTransactionSerialize (BRHederaTransaction transaction, size_t *size)
{
    if (transaction->serializedBytes) {
        *size = transaction->serializedSize;
        return transaction->serializedBytes;
    } else {
        *size = 0;
        return NULL;
    }
}

extern BRHederaTransactionHash hederaTransactionGetHash(BRHederaTransaction transaction)
{
    assert(transaction);
    return transaction->hash;
}

extern char * hederaTransactionGetTransactionId(BRHederaTransaction transaction)
{
    assert(transaction);
    if (transaction->transactionId) {
        return strdup(transaction->transactionId);
    }
    return NULL;
}

extern BRHederaUnitTinyBar hederaTransactionGetFee(BRHederaTransaction transaction)
{
    assert(transaction);
    return transaction->fee;
}

extern BRHederaUnitTinyBar hederaTransactionGetAmount(BRHederaTransaction transaction)
{
    assert(transaction);
    return transaction->amount;
}

extern BRHederaAddress hederaTransactionGetSource(BRHederaTransaction transaction)
{
    assert(transaction);
    return hederaAddressClone (transaction->source);
}

extern BRHederaAddress hederaTransactionGetTarget(BRHederaTransaction transaction)
{
    assert(transaction);
    return hederaAddressClone (transaction->target);
}

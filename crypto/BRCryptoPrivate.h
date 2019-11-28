//
//  BRCryptoPrivate.h
//  BRCore
//
//  Created by Ed Gamble on 3/20/19.
//  Copyright © 2019 breadwallet. All rights reserved.
//
//  See the LICENSE file at the project root for license information.
//  See the CONTRIBUTORS file at the project root for a list of contributors.

#ifndef BRCryptoPrivate_h
#define BRCryptoPrivate_h

/// A 'private header' - to define interfaces that are implementation dependent and that require
/// including implementation specific headers.

#include <inttypes.h>

#include "BRCryptoHash.h"
#include "BRCryptoAccount.h"
#include "BRCryptoAmount.h"
#include "BRCryptoAddress.h"
#include "BRCryptoFeeBasis.h"
#include "BRCryptoNetwork.h"
#include "BRCryptoPayment.h"
#include "BRCryptoTransfer.h"
#include "BRCryptoWallet.h"
#include "BRCryptoWalletManager.h"

///
#include "support/BRBIP32Sequence.h"
#include "bitcoin/BRChainParams.h"
#include "bitcoin/BRTransaction.h"
#include "bitcoin/BRWallet.h"
#include "bitcoin/BRWalletManager.h"
#include "bcash/BRBCashParams.h"
#include "ethereum/BREthereum.h"
#include "generic/BRGeneric.h"
#include "generic/BRGenericWalletManager.h"

#ifdef __cplusplus
extern "C" {
#endif

    /// MARK: - Hash

    private_extern BRCryptoHash
    cryptoHashCreateAsBTC (UInt256 btc);

    private_extern BRCryptoHash
    cryptoHashCreateAsETH (BREthereumHash eth);

    private_extern BRCryptoHash
    cryptoHashCreateAsGEN (BRGenericHash gen);

    /// MARK: - Key

    private_extern BRCryptoKey
    cryptoKeyCreateFromKey (BRKey *key);

    private_extern BRKey *
    cryptoKeyGetCore (BRCryptoKey key);

    /// MARK: - Currency

    /// MARK: - Unit

    private_extern BRArrayOf(BRCryptoUnit)
    cryptoUnitTakeAll (BRArrayOf(BRCryptoUnit) units);

    private_extern BRArrayOf(BRCryptoUnit)
    cryptoUnitGiveAll (BRArrayOf(BRCryptoUnit) units);

    /// MARK: - Amount

    private_extern BRCryptoAmount
    cryptoAmountCreate (BRCryptoUnit unit,
                        BRCryptoBoolean isNegative,
                        UInt256 value);

    private_extern BRCryptoAmount
    cryptoAmountCreateInternal (BRCryptoUnit unit,
                                BRCryptoBoolean isNegative,
                                UInt256 value,
                                int takeUnit);

    private_extern UInt256
    cryptoAmountGetValue (BRCryptoAmount amount);

    /// MARK: - Address

    private_extern BRCryptoAddress
    cryptoAddressCreateAsBTC (BRAddress btc,
                              BRCryptoBoolean isBTC);  // TRUE if BTC; FALSE if BCH

    private_extern BRCryptoAddress
    cryptoAddressCreateAsETH (BREthereumAddress eth);

    private_extern BRCryptoAddress
    cryptoAddressCreateAsGEN (BRGenericWalletManager gwm,
                              BRGenericAddress aid);

    private_extern BRCryptoBlockChainType
    cryptoAddressGetType (BRCryptoAddress address);

    private_extern BRAddress
    cryptoAddressAsBTC (BRCryptoAddress address,
                        BRCryptoBoolean *isBitcoinAddr);

    private_extern BREthereumAddress
    cryptoAddressAsETH (BRCryptoAddress address);

    private_extern BRGenericAddress
    cryptoAddressAsGEN (BRCryptoAddress address);


    /// MARK: - Account

    private_extern BREthereumAccount
    cryptoAccountAsETH (BRCryptoAccount account);

    private_extern BRGenericAccount
    cryptoAccountAsGEN (BRCryptoAccount account,
                        const char *type);

    private_extern const char *
    cryptoAccountAddressAsETH (BRCryptoAccount account);

    private_extern BRMasterPubKey
    cryptoAccountAsBTC (BRCryptoAccount account);

    /// MARK: FeeBasis

    private_extern uint64_t
    cryptoFeeBasisAsBTC (BRCryptoFeeBasis feeBasis);

    private_extern BREthereumFeeBasis
    cryptoFeeBasisAsETH (BRCryptoFeeBasis feeBasis);

    private_extern BRGenericFeeBasis
    cryptoFeeBasisAsGEN (BRCryptoFeeBasis feeBasis);

    private_extern BRCryptoFeeBasis
    cryptoFeeBasisCreateAsBTC (BRCryptoUnit unit,
                               uint32_t feePerKB,
                               uint32_t sizeInByte);

    private_extern BRCryptoFeeBasis
    cryptoFeeBasisCreateAsETH (BRCryptoUnit unit,
                               BREthereumGas gas,
                               BREthereumGasPrice gasPrice);

    private_extern BRCryptoFeeBasis
    cryptoFeeBasisCreateAsGEN (BRCryptoUnit unit,
                               BRGenericWalletManager gwm,
                               OwnershipGiven BRGenericFeeBasis bid);

    /// MARK: Transfer

    private_extern void
    cryptoTransferSetState (BRCryptoTransfer transfer,
                            BRCryptoTransferState state);

    private_extern BRCryptoTransfer
    cryptoTransferCreateAsBTC (BRCryptoUnit unit,
                               BRCryptoUnit unitForFee,
                               BRWallet *wid,
                               OwnershipKept BRTransaction *tid,
                               BRCryptoBoolean isBTC); // TRUE if BTC; FALSE if BCH

    private_extern BRCryptoTransfer
    cryptoTransferCreateAsETH (BRCryptoUnit unit,
                               BRCryptoUnit unitForFee,
                               BREthereumEWM ewm,
                               BREthereumTransfer tid,
                               BRCryptoFeeBasis feeBasisEstimated);

    extern BRCryptoTransfer
    cryptoTransferCreateAsGEN (BRCryptoUnit unit,
                               BRCryptoUnit unitForFee,
                               BRGenericWalletManager gwm,
                               BRGenericTransfer tid);

    private_extern void
    cryptoTransferSetConfirmedFeeBasis (BRCryptoTransfer transfer,
                                        BRCryptoFeeBasis feeBasisConfirmed);

    private_extern BRTransaction *
    cryptoTransferAsBTC (BRCryptoTransfer transfer);

    private_extern BREthereumTransfer
    cryptoTransferAsETH (BRCryptoTransfer transfer);

    private_extern BRGenericTransfer
    cryptoTransferAsGEN (BRCryptoTransfer transfer);

    private_extern BRCryptoBoolean
    cryptoTransferHasBTC (BRCryptoTransfer transfer,
                          BRTransaction *btc);

    private_extern BRCryptoBoolean
    cryptoTransferHasETH (BRCryptoTransfer transfer,
                          BREthereumTransfer eth);

    private_extern BRCryptoBoolean
    cryptoTransferHasGEN (BRCryptoTransfer transfer,
                          BRGenericTransfer gen);

    private_extern void
    cryptoTransferExtractBlobAsBTC (BRCryptoTransfer transfer,
                                    uint8_t **bytes,
                                    size_t   *bytesCount,
                                    uint32_t *blockHeight,
                                    uint32_t *timestamp);

    /// MARK: - Network Fee

    private_extern uint64_t
    cryptoNetworkFeeAsBTC (BRCryptoNetworkFee networkFee);

    private_extern BREthereumGasPrice
    cryptoNetworkFeeAsETH (BRCryptoNetworkFee networkFee);

    private_extern uint64_t
    cryptoNetworkFeeAsGEN( BRCryptoNetworkFee networkFee);

    /// MARK: - Network

    private_extern void
    cryptoNetworkSetHeight (BRCryptoNetwork network,
                            BRCryptoBlockChainHeight height);

    private_extern void
    cryptoNetworkSetConfirmationsUntilFinal (BRCryptoNetwork network,
                                             uint32_t confirmationsUntilFinal);

    private_extern BREthereumNetwork
    cryptoNetworkAsETH (BRCryptoNetwork network);

    private_extern const BRChainParams *
    cryptoNetworkAsBTC (BRCryptoNetwork network);

    private_extern void *
    cryptoNetworkAsGEN (BRCryptoNetwork network);

    private_extern BRCryptoNetwork
    cryptoNetworkCreateAsBTC (const char *uids,
                              const char *name,
                              uint8_t forkId,
                              const BRChainParams *params);

    private_extern BRCryptoNetwork
    cryptoNetworkCreateAsETH (const char *uids,
                              const char *name,
                              uint32_t chainId,
                              BREthereumNetwork net);

    private_extern BRCryptoNetwork
    cryptoNetworkCreateAsGEN (const char *uids,
                              const char *name,
                              uint8_t isMainnet);

    private_extern BRCryptoBlockChainType
    cryptoNetworkGetBlockChainType (BRCryptoNetwork network);

    private_extern BRCryptoCurrency
    cryptoNetworkGetCurrencyforTokenETH (BRCryptoNetwork network,
                                         BREthereumToken token);

    /// MARK: - Payment

    private_extern BRArrayOf(BRTxOutput)
    cryptoPaymentProtocolRequestGetOutputsAsBTC (BRCryptoPaymentProtocolRequest request);

    /// MARK: - Status

    private_extern BRCryptoStatus
    cryptoStatusFromETH (BREthereumStatus status);

    private_extern BREthereumStatus
    cryptoStatusAsETH (BRCryptoStatus status);


    /// MARK: - Wallet

    private_extern BRCryptoBlockChainType
    cryptoWalletGetType (BRCryptoWallet wallet);

    private_extern void
    cryptoWalletSetState (BRCryptoWallet wallet,
                          BRCryptoWalletState state);

    private_extern BRWallet *
    cryptoWalletAsBTC (BRCryptoWallet wallet);

    private_extern BREthereumWallet
    cryptoWalletAsETH (BRCryptoWallet wallet);

    private_extern BRGenericWallet
    cryptoWalletAsGEN (BRCryptoWallet wallet);

    private_extern BRCryptoWallet
    cryptoWalletCreateAsBTC (BRCryptoUnit unit,
                             BRCryptoUnit unitForFee,
                             BRWalletManager bwm,
                             BRWallet *wid);

    private_extern BRCryptoWallet
    cryptoWalletCreateAsETH (BRCryptoUnit unit,
                             BRCryptoUnit unitForFee,
                             BREthereumEWM ewm,
                             BREthereumWallet wid);

    private_extern BRCryptoWallet
    cryptoWalletCreateAsGEN (BRCryptoUnit unit,
                             BRCryptoUnit unitForFee,
                             BRGenericWalletManager gwm,
                             BRGenericWallet wid);

    private_extern BRCryptoTransfer
    cryptoWalletFindTransferAsBTC (BRCryptoWallet wallet,
                                   BRTransaction *btc);

    private_extern BRCryptoTransfer
    cryptoWalletFindTransferAsETH (BRCryptoWallet wallet,
                                   BREthereumTransfer eth);

    private_extern BRCryptoTransfer
    cryptoWalletFindTransferAsGEN (BRCryptoWallet wallet,
                                   BRGenericTransfer gen);

    /// MARK: - WalletManager

    private_extern BRWalletManagerClient
    cryptoWalletManagerClientCreateBTCClient (OwnershipKept BRCryptoWalletManager cwm);

    private_extern BREthereumClient
    cryptoWalletManagerClientCreateETHClient (OwnershipKept BRCryptoWalletManager cwm);

    private_extern BRGenericClient
    cryptoWalletManagerClientCreateGENClient (OwnershipKept BRCryptoWalletManager cwm);


    private_extern BRCryptoWalletManagerState
    cryptoWalletManagerStateInit(BRCryptoWalletManagerStateType type);

    private_extern BRCryptoWalletManagerState
    cryptoWalletManagerStateDisconnectedInit(BRDisconnectReason reason);

    private_extern void
    cryptoWalletManagerSetState (BRCryptoWalletManager cwm,
                                 BRCryptoWalletManagerState state);

    private_extern void
    cryptoWalletManagerStop (BRCryptoWalletManager cwm);

    private_extern BRWalletManager
    cryptoWalletManagerAsBTC (BRCryptoWalletManager manager);

    private_extern BREthereumEWM
    cryptoWalletManagerAsETH (BRCryptoWalletManager manager);

    private_extern BRCryptoBoolean
    cryptoWalletManagerHasBTC (BRCryptoWalletManager manager,
                               BRWalletManager bwm);

    private_extern BRCryptoBoolean
    cryptoWalletManagerHasETH (BRCryptoWalletManager manager,
                               BREthereumEWM ewm);

    private_extern BRCryptoBoolean
    cryptoWalletManagerHasGEN (BRCryptoWalletManager manager,
                               BRGenericWalletManager gwm);

    private_extern BRCryptoWallet
    cryptoWalletManagerFindWalletAsBTC (BRCryptoWalletManager manager,
                                        BRWallet *btc);

    private_extern BRCryptoWallet
    cryptoWalletManagerFindWalletAsETH (BRCryptoWalletManager manager,
                                        BREthereumWallet eth);

    private_extern BRCryptoWallet
    cryptoWalletManagerFindWalletAsGEN (BRCryptoWalletManager cwm,
                                        BRGenericWallet gen);

    extern void
    cryptoWalletManagerHandleTransferGEN (BRCryptoWalletManager cwm,
                                          BRGenericTransfer transferGeneric);

    /// MARK: - WalletSweeper

    private_extern BRWalletSweeper
    cryptoWalletSweeperAsBTC (BRCryptoWalletSweeper sweeper);

#ifdef __cplusplus
}
#endif


#endif /* BRCryptoPrivate_h */

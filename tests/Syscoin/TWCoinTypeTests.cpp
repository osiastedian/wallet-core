// Copyright © 2017-2021 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.
//
// This is a GENERATED FILE, changes made here MAY BE LOST.
// Generated one-time (codegen/bin/cointests)
//

#include "../interface/TWTestUtilities.h"
#include <TrustWalletCore/TWCoinTypeConfiguration.h>
#include <gtest/gtest.h>


TEST(TWSyscoinCoinType, TWCoinType) {
    auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(TWCoinTypeSyscoin));
    auto txId = WRAPS(TWStringCreateWithUTF8Bytes("2219d15f7da08a7a7e5fb63d6059eb93a4ac442c2ee7747db0807d9594d0e638"));
    auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(TWCoinTypeSyscoin, txId.get()));
    auto accId = WRAPS(TWStringCreateWithUTF8Bytes("sys1qfqz5a3wegq4kwpg6kulletev3fnednvqyr93d9"));
    auto accUrl = WRAPS(TWCoinTypeConfigurationGetAccountURL(TWCoinTypeSyscoin, accId.get()));
    auto id = WRAPS(TWCoinTypeConfigurationGetID(TWCoinTypeSyscoin));
    auto name = WRAPS(TWCoinTypeConfigurationGetName(TWCoinTypeSyscoin));

    ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(TWCoinTypeSyscoin), 8);
    ASSERT_EQ(TWBlockchainBitcoin, TWCoinTypeBlockchain(TWCoinTypeSyscoin));
    ASSERT_EQ(0x32, TWCoinTypeP2shPrefix(TWCoinTypeSyscoin));
    ASSERT_EQ(0x0, TWCoinTypeStaticPrefix(TWCoinTypeSyscoin));
    assertStringsEqual(symbol, "SYS");
    assertStringsEqual(txUrl, "https://chainz.cryptoid.info/sys/tx.dws?2219d15f7da08a7a7e5fb63d6059eb93a4ac442c2ee7747db0807d9594d0e638");
    assertStringsEqual(accUrl, "https://chainz.cryptoid.info/sys/address.dws?sys1qfqz5a3wegq4kwpg6kulletev3fnednvqyr93d9");
    assertStringsEqual(id, "syscoin");
    assertStringsEqual(name, "Syscoin");
}

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


TEST(TWSysNEVMCoinType, TWCoinType) {
    auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(TWCoinTypeSysNEVM));
    auto txId = WRAPS(TWStringCreateWithUTF8Bytes("0xec584319108fad9d5960b42f3ae9f593f78a3ff83e5b13f1b1436aac39b45ef6"));
    auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(TWCoinTypeSysNEVM, txId.get()));
    auto accId = WRAPS(TWStringCreateWithUTF8Bytes("0xd087fc159c508208b528e1a1f4dc720072cb34ae"));
    auto accUrl = WRAPS(TWCoinTypeConfigurationGetAccountURL(TWCoinTypeSysNEVM, accId.get()));
    auto id = WRAPS(TWCoinTypeConfigurationGetID(TWCoinTypeSysNEVM));
    auto name = WRAPS(TWCoinTypeConfigurationGetName(TWCoinTypeSysNEVM));

    ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(TWCoinTypeSysNEVM), 18);
    ASSERT_EQ(TWBlockchainEthereum, TWCoinTypeBlockchain(TWCoinTypeSysNEVM));
    ASSERT_EQ(0x0, TWCoinTypeP2shPrefix(TWCoinTypeSysNEVM));
    ASSERT_EQ(0x0, TWCoinTypeStaticPrefix(TWCoinTypeSysNEVM));
    assertStringsEqual(symbol, "SYS");
    assertStringsEqual(txUrl, "https://explorer.syscoin.org//tx/0xec584319108fad9d5960b42f3ae9f593f78a3ff83e5b13f1b1436aac39b45ef6");
    assertStringsEqual(accUrl, "https://explorer.syscoin.org//address/0xd087fc159c508208b528e1a1f4dc720072cb34ae");
    assertStringsEqual(id, "sysnevm");
    assertStringsEqual(name, "SysNEVM");
}

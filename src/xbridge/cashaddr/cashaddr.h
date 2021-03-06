// Copyright (c) 2017 Pieter Wuille
// Copyright (c) 2017-2018 The Bitcoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

// https://github.com/Bitcoin-ABC/bitcoin-abc/blob/f40d38e63e1c8a39a9d4a143ec53999e2f174dce/src/cashaddr.h#L6
#ifndef BLOCKNET_XBRIDGE_CASHADDR_CASHADDR_H
#define BLOCKNET_XBRIDGE_CASHADDR_CASHADDR_H

// Cashaddr is an address format inspired by bech32.

#include <cstdint>
#include <string>
#include <vector>

namespace cashaddr {

/**
 * Encode a cashaddr string. Returns the empty string in case of failure.
 */
std::string Encode(const std::string &prefix,
                   const std::vector<uint8_t> &values);

/**
 * Decode a cashaddr string. Returns (prefix, data). Empty prefix means failure.
 */
std::pair<std::string, std::vector<uint8_t>>
Decode(const std::string &str, const std::string &default_prefix);

} // namespace cashaddr

#endif // BLOCKNET_XBRIDGE_CASHADDR_CASHADDR_H

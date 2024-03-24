// Copyright (c) 2021 The Globe Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef GLOBE_NODE_CACHES_H
#define GLOBE_NODE_CACHES_H

#include <cstddef>
#include <cstdint>

class ArgsManager;

namespace node {
struct CacheSizes {
    int64_t block_tree_db;
    int64_t coins_db;
    int64_t coins;
    int64_t tx_index;
    int64_t filter_index;

    // Globe
    bool compression;
    int max_open_files;
};
CacheSizes CalculateCacheSizes(const ArgsManager& args, size_t n_indexes = 0);
} // namespace node

#endif // GLOBE_NODE_CACHES_H

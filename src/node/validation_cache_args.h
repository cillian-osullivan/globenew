// Copyright (c) 2022 The Globe Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef GLOBE_NODE_VALIDATION_CACHE_ARGS_H
#define GLOBE_NODE_VALIDATION_CACHE_ARGS_H

class ArgsManager;
namespace kernel {
struct ValidationCacheSizes;
};

namespace node {
void ApplyArgsManOptions(const ArgsManager& argsman, kernel::ValidationCacheSizes& cache_sizes);
} // namespace node

#endif // GLOBE_NODE_VALIDATION_CACHE_ARGS_H

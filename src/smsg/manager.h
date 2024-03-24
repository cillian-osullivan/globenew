// Copyright (c) 2022 The Globe Core developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef GLOBE_SMSG_MANAGER_H
#define GLOBE_SMSG_MANAGER_H

#include <sync.h>
#include <smsg/types.h>

#include <utility>

class CTransaction;
class CBlockIndex;
class CBlock;
class uint256;

extern RecursiveMutex cs_main;

class SmsgManager
{
public:
    static std::unique_ptr<SmsgManager> make();
    virtual ~SmsgManager() { }

    virtual int StoreFundingTx(smsg::ChainSyncCache &cache, const CTransaction &tx, const CBlockIndex *pindex) EXCLUSIVE_LOCKS_REQUIRED(cs_main) = 0;
    virtual int SetBestBlock(smsg::ChainSyncCache &cache, const uint256 &block_hash, int height, int64_t time) = 0;
    virtual int WriteCache(smsg::ChainSyncCache &cache) = 0;
    virtual bool ScanBlock(const CBlock &block) = 0;
    virtual int ReadBestBlock(uint256 &block_hash, int &height) = 0;
    virtual bool TrackFundingTxns() = 0;
    virtual bool IsEnabled() = 0;
};

#endif // GLOBE_SMSG_MANAGER_H

#!/usr/bin/env bash
#
# Copyright (c) 2019-2021 The Bitcoin Core developers
# Distributed under the MIT software license, see the accompanying
# file COPYING or http://www.opensource.org/licenses/mit-license.php.

export LC_ALL=C.UTF-8

export CONTAINER_NAME=ci_native_tsan
export DOCKER_NAME_TAG=ubuntu:22.04
export PACKAGES="clang-13 llvm-13 libc++abi-13-dev libc++-13-dev python3-zmq"
export DEP_OPTS="CC=clang-13 CXX='clang++-13 -stdlib=libc++' PROTOBUF=1 "
export TEST_RUNNER_EXTRA="--exclude feature_block"  # Low memory on Travis machines, exclude feature_block.
export GOAL="install"
export GLOBE_CONFIG="--enable-zmq CPPFLAGS='-DARENA_DEBUG -DDEBUG_LOCKORDER -DDEBUG_LOCKCONTENTION' CXXFLAGS='-g' --with-sanitizers=thread CC=clang-13 CXX='clang++-13 -stdlib=libc++'"

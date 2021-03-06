/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <folly/dynamic.h>
#include <ABI39_0_0jsi/ABI39_0_0jsi.h>

namespace ABI39_0_0facebook {
namespace jsi {

ABI39_0_0facebook::jsi::Value valueFromDynamic(
    ABI39_0_0facebook::jsi::Runtime& runtime,
    const folly::dynamic& dyn);

folly::dynamic dynamicFromValue(
    ABI39_0_0facebook::jsi::Runtime& runtime,
    const ABI39_0_0facebook::jsi::Value& value);

} // namespace jsi
} // namespace ABI39_0_0facebook

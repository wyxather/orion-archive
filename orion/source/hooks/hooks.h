#pragma once

namespace orion::hooks {

    enum class CallConv { StdCall, ThisCall, FastCall, VectorCall };

    auto calc_vmt_length(void* vmt_address) noexcept -> std::size_t;
    auto calc_vmt_length(void** class_address) noexcept -> std::size_t;

    using Type = class MinHook;

}  // namespace orion::hooks

#include "minhook.h"

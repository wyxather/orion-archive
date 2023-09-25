#pragma once

namespace orion::Hooks {
    enum class CallingConv { STDCALL, THISCALL, FASTCALL, VECTORCALL };

    auto calc_vmt_length(void* vmt_address) noexcept -> std::size_t;
    auto calc_vmt_length(void** class_address) noexcept -> std::size_t;

    using Type = class MinHook;
}  // namespace orion::Hooks

#include "MinHook.h"

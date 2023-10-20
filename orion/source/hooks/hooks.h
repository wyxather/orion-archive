#pragma once

#include "source/hooks/ret_spoof.h"
#include "source/hooks/ret_spoof_64.h"

namespace orion::hooks
{

enum class CallConv
{
    StdCall,
    ThisCall,
    FastCall,
    VectorCall
};

auto calc_vmt_length(const void* const vmt_ptr) noexcept -> std::size_t;

auto calc_vmt_length(const void* const* const class_ptr) noexcept -> std::size_t;

using Type = class MinHook;

} // namespace orion::hooks

#include "source/hooks/minhook.h"

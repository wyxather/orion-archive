#include "source/hooks/minhook.h"

#include "dependencies/minhook/include/MinHook.h"

using orion::hooks::MinHook;

MinHook::MinHook(const std::size_t size, const void* const gadget) noexcept
    : gadget{gadget}, base{nullptr}, originals{std::make_unique<decltype(originals)::element_type[]>(size)}
{
}

MinHook::MinHook(const void* const vmt_ptr, const void* const gadget) noexcept
    : gadget{gadget}, base{vmt_ptr},
      originals{std::make_unique<decltype(originals)::element_type[]>(hooks::calc_vmt_length(vmt_ptr))}
{
}

MinHook::MinHook(const void* const* const class_ptr, const void* const gadget) noexcept
    : gadget{gadget}, base{*class_ptr},
      originals{std::make_unique<decltype(originals)::element_type[]>(hooks::calc_vmt_length(class_ptr))}
{
}

auto MinHook::initialize() noexcept -> void
{
    MH_Initialize();
}

auto MinHook::uninitialize() noexcept -> void
{
    MH_Uninitialize();
}

auto MinHook::enable() noexcept -> void
{
    MH_EnableHook(MH_ALL_HOOKS);
}

auto MinHook::disable() noexcept -> void
{
    MH_DisableHook(MH_ALL_HOOKS);
}

auto MinHook::hook_at(const std::size_t index, void* const target, void* const function) const noexcept -> void
{
    MH_CreateHook(target, function, &(originals[index]));
}

auto MinHook::hook_at(const std::size_t index, void* const function) const noexcept -> void
{
    return hook_at(index, reinterpret_cast<void* const*>(base)[index], function);
}

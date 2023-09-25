#include "MinHook.h"

#include "Dependencies/MinHook/include/MinHook.h"

orion::Hooks::MinHook::MinHook(const std::size_t size) noexcept :
    base {nullptr},
    count {size},
    originals {
        std::make_unique<decltype(MinHook::originals)::element_type[]>(size)} {}

orion::Hooks::MinHook::MinHook(void* const vmt_address) noexcept :
    base {vmt_address},
    count {Hooks::calc_vmt_length(vmt_address)},
    originals {
        std::make_unique<decltype(MinHook::originals)::element_type[]>(count)} {
}

orion::Hooks::MinHook::MinHook(void** const class_address) noexcept :
    base {*class_address},
    count {Hooks::calc_vmt_length(class_address)},
    originals {
        std::make_unique<decltype(MinHook::originals)::element_type[]>(count)} {
}

auto orion::Hooks::MinHook::hook_at(
    const std::size_t index,
    void* const function
) const noexcept -> void {
    return MinHook::hook_at(
        index,
        reinterpret_cast<void**>(MinHook::base)[index],
        function
    );
}

auto orion::Hooks::MinHook::hook_at(
    const std::size_t index,
    void* const target,
    void* const function
) const noexcept -> void {
    if (MinHook::base != nullptr && index < MinHook::count) {
        MH_CreateHook(target, function, &(MinHook::originals[index]));
    }
}

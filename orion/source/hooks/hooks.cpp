#include "Hooks.h"

auto orion::Hooks::calc_vmt_length(void* const vmt_address) noexcept
    -> std::size_t {
    std::size_t length = 0;
    if (vmt_address == nullptr) {
        return length;
    }

    constexpr auto MEMORY_PROTECTION_FLAGS = PAGE_EXECUTE | PAGE_EXECUTE_READ
        | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY;
    for (MEMORY_BASIC_INFORMATION memory_basic_info;
         IMPORT(VirtualQuery)(
             static_cast<void**>(vmt_address)[length],
             &memory_basic_info,
             sizeof(memory_basic_info)
         ) >= NULL
         && (memory_basic_info.Protect & MEMORY_PROTECTION_FLAGS) != NULL;
         ++length)
        ;

    return length;
}

auto orion::Hooks::calc_vmt_length(void** const class_address) noexcept
    -> std::size_t {
    if (class_address == nullptr) {
        return 0;
    }
    return calc_vmt_length(*class_address);
}

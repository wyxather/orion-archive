#include "hooks.h"

#include "source/orion.h"

auto orion::hooks::calc_vmt_length(void* const vmt_ptr) noexcept
    -> std::size_t {
    std::size_t length = 0;
    constexpr auto MEMORY_PROTECTION_FLAGS = PAGE_EXECUTE | PAGE_EXECUTE_READ
        | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY;
    MEMORY_BASIC_INFORMATION memory_basic_info;
    do {
        if (orion.get_kernel32().virtual_query(
                static_cast<void**>(vmt_ptr)[length],
                &memory_basic_info,
                sizeof(memory_basic_info)
            ) < NULL
            || (memory_basic_info.Protect & MEMORY_PROTECTION_FLAGS) == NULL) {
            break;
        }
        ++length;
    } while (true);
    return length;
}

auto orion::hooks::calc_vmt_length(void** const class_ptr) noexcept
    -> std::size_t {
    return calc_vmt_length(*class_ptr);
}

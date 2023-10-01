#include "source/orion.h"

using orion::utilities::Memory;

auto Memory::get_module_bytes(const HMODULE module_handle) noexcept
    -> std::span<const std::uint8_t> {
    const auto& kernel32 = orion.get_kernel32();
    MODULEINFO module_info;
    kernel32.get_module_information(
        kernel32.get_current_process(),
        module_handle,
        &module_info,
        sizeof(module_info)
    );
    return std::span<const std::uint8_t>(
        static_cast<std::uint8_t*>(module_info.lpBaseOfDll),
        module_info.SizeOfImage
    );
}

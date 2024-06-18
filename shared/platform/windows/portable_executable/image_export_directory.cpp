#include "image_export_directory.h"

#include <bit>

auto ImageExportDirectory::get_names(const std::byte *const dll_base
) const noexcept -> const DWORD * {
    return std::bit_cast<const DWORD *>(dll_base + AddressOfNames);
}

auto ImageExportDirectory::get_name_ordinals(const std::byte *const dll_base
) const noexcept -> const WORD * {
    return std::bit_cast<const WORD *>(dll_base + AddressOfNameOrdinals);
}

auto ImageExportDirectory::get_functions(const std::byte *const dll_base
) const noexcept -> const DWORD * {
    return std::bit_cast<const DWORD *>(dll_base + AddressOfFunctions);
}

auto ImageExportDirectory::get_function_rva(const std::byte *const dll_base, const WORD name_ordinal)
    const noexcept -> DWORD {
    return get_functions(dll_base)[name_ordinal];
}

auto ImageExportDirectory::get_name(const std::byte *const dll_base, const DWORD name_index) const noexcept -> const
    char * {
    return std::bit_cast<const char *>(dll_base + get_names(dll_base)[name_index]);
}

auto ImageExportDirectory::get_function_rva(const std::byte *const dll_base, const DWORD name_index)
    const noexcept -> DWORD {
    return get_function_rva(dll_base, get_name_ordinals(dll_base)[name_index]);
}

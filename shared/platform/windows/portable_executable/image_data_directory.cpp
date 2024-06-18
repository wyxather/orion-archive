#include "image_data_directory.h"

#include <utility>

auto ImageDataDirectory::validate() const noexcept -> Result<const ImageDataDirectory *, Error> {
    if ( std::cmp_less_equal(VirtualAddress, 0) ) {
        return Err("Image data directory has an invalid virtual address.");
    }
    if ( std::cmp_less_equal(Size, 0) ) {
        return Err("Image data directory has an invalid size.");
    }
    return this;
}

auto ImageDataDirectory::is_forwarded_export(const DWORD function_rva) const noexcept -> bool {
    return std::cmp_greater_equal(function_rva, VirtualAddress)
        && std::cmp_less_equal(function_rva, VirtualAddress + Size);
}

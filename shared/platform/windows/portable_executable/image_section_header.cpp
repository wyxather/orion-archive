#include "image_section_header.h"

#include <cstring>
#include <utility>

#include "intrinsics.h"

auto ImageSectionHeader::is_executable() const noexcept -> bool {
    return std::cmp_not_equal(Characteristics & IMAGE_SCN_MEM_EXECUTE, 0);
}

auto ImageSectionHeader::is_readable() const noexcept -> bool {
    return std::cmp_not_equal(Characteristics & IMAGE_SCN_MEM_READ, 0);
}

auto ImageSectionHeader::is_code_section() const noexcept -> bool {
    return is_executable() && std::cmp_equal(intrinsics::memcmp(Name, ".text", 5), 0);
}

auto ImageSectionHeader::is_vmt_section() const noexcept -> bool {
    return is_readable() && std::cmp_equal(intrinsics::memcmp(Name, ".rdata", 6), 0);
}

auto ImageSectionHeader::is_data_section() const noexcept -> bool {
    return is_readable() && std::cmp_equal(intrinsics::memcmp(Name, ".data", 5), 0);
}

auto ImageSectionHeader::as_span(const std::byte *const dll_base
) const noexcept -> std::span<const std::byte> {
    return {
        dll_base + VirtualAddress,
        Misc.VirtualSize,
    };
}

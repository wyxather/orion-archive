#include "source/utility/module/image_section_header.h"

#include "source/utility/memory.h"
#include "source/utility/pointer.h"
#include "source/utility/xorstr.h"

using orion::utility::Memory;
using orion::utility::Pointer;
using orion::utility::XorStr;
using orion::utility::module::ImageSectionHeader;

auto ImageSectionHeader::is_vmt_section() const noexcept -> bool {
    if ( (Characteristics & IMAGE_SCN_MEM_READ) == 0 ) {
        return bool { false };
    }
    return bool { Memory::memcmp(Name, XorStr<".rdata">::access().data(), 6) == 0 };
}

auto ImageSectionHeader::is_code_section() const noexcept -> bool {
    if ( (Characteristics & IMAGE_SCN_MEM_EXECUTE) == 0 ) {
        return bool { false };
    }
    return bool { Memory::memcmp(Name, XorStr<".text">::access().data(), 5) == 0 };
}

auto ImageSectionHeader::is_data_section() const noexcept -> bool {
    if ( (Characteristics & IMAGE_SCN_MEM_READ) == 0 ) {
        return bool { false };
    }
    return bool { Memory::memcmp(Name, XorStr<".data">::access().data(), 5) == 0 };
}

auto ImageSectionHeader::get_section_address(const std::uintptr_t dll_base
) const noexcept -> std::uintptr_t {
    return std::uintptr_t { dll_base + VirtualAddress };
}

auto ImageSectionHeader::get_section_bytes(const std::uintptr_t dll_base
) const noexcept -> std::span<const std::uint8_t> {
    return std::span {
        Pointer { get_section_address(dll_base) }.as<const std::uint8_t>(),
        Misc.VirtualSize,
    };
}

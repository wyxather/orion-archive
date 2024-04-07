#include "source/utility/module/ldr_data_table_entry.h"

#include "source/utility/module/image_data_directory.h"
#include "source/utility/module/image_directory_entry.h"
#include "source/utility/module/image_dos_header.h"
#include "source/utility/module/image_nt_headers.h"
#include "source/utility/module/image_optional_header.h"
#include "source/utility/module/image_section_header.h"
#include "source/utility/pointer.h"
#include "source/utility/reference.h"

using orion::utility::Pointer;
using orion::utility::Reference;
using orion::utility::module::ImageDirectoryEntry;
using orion::utility::module::LdrDataTableEntry;

auto LdrDataTableEntry::get_list_entry() const noexcept -> const ListEntry & {
    return Reference { Reserved1[0] }.as<ListEntry>();
}

auto LdrDataTableEntry::get_dll_base() const noexcept -> std::uintptr_t {
    return Pointer { DllBase }.value<std::uintptr_t>();
}

auto LdrDataTableEntry::get_image_dos_header() const noexcept -> const ImageDosHeader & {
    return Pointer { DllBase }.as_ref<ImageDosHeader>();
}

auto LdrDataTableEntry::get_image_nt_headers() const noexcept -> const ImageNtHeaders & {
    return get_image_dos_header().get_image_nt_headers(get_dll_base());
}

auto LdrDataTableEntry::get_image_section_headers() const noexcept -> std::span<const ImageSectionHeader> {
    return get_image_nt_headers().get_image_section_headers();
}

auto LdrDataTableEntry::get_image_optional_header() const noexcept -> const ImageOptionalHeader & {
    return get_image_nt_headers().get_optional_header();
}

auto LdrDataTableEntry::get_image_data_directory(const ImageDirectoryEntry image_directory_entry
) const noexcept -> const ImageDataDirectory & {
    return get_image_optional_header().get_image_data_directory(image_directory_entry);
}

auto LdrDataTableEntry::get_image_export_directory() const noexcept -> const ImageExportDirectory & {
    return get_image_export_directory(get_image_data_directory(ImageDirectoryEntry::Export));
}

auto LdrDataTableEntry::get_image_export_directory(const ImageDataDirectory &image_data_directory
) const noexcept -> const ImageExportDirectory & {
    return Pointer { get_dll_base() + image_data_directory.get_virtual_address() }
        .as_ref<ImageExportDirectory>();
}

auto LdrDataTableEntry::get_name() const noexcept -> const UNICODE_STRING & {
    return Reference { Reserved4[0] }.as<UNICODE_STRING>();
}

auto LdrDataTableEntry::get_short_name() const noexcept -> std::wstring_view {
    const auto &name = get_name();
    const auto view = std::wstring_view { name.Buffer, (std::size_t)(name.Length) / 2 };
    return view.substr(0, view.find_last_of(L'.'));
}

auto LdrDataTableEntry::get_full_name() const noexcept -> const UNICODE_STRING & {
    return FullDllName;
}

auto LdrDataTableEntry::get_vmt_section() const noexcept -> std::span<const std::uint8_t> {
    for ( const auto &image_section_header : get_image_section_headers() ) {
        if ( image_section_header.is_vmt_section() ) {
            return image_section_header.get_section_bytes(get_dll_base());
        }
    }
    return std::span<const std::uint8_t> {};
}

auto LdrDataTableEntry::get_code_section() const noexcept -> std::span<const std::uint8_t> {
    for ( const auto &image_section_header : get_image_section_headers() ) {
        if ( image_section_header.is_code_section() ) {
            return image_section_header.get_section_bytes(get_dll_base());
        }
    }
    return std::span<const std::uint8_t>();
}

auto LdrDataTableEntry::get_data_section() const noexcept -> std::span<const std::uint8_t> {
    for ( const auto &image_section_header : get_image_section_headers() ) {
        if ( image_section_header.is_data_section() ) {
            return image_section_header.get_section_bytes(get_dll_base());
        }
    }
    return std::span<const std::uint8_t>();
}

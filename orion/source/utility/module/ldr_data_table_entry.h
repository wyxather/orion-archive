#pragma once

#include <cstdint>
#include <span>
#include <string_view>

#include "source/utility/windows.h"

namespace orion::utility::module {

    enum class ImageDirectoryEntry;

    class ImageDataDirectory;
    class ImageDosHeader;
    class ImageExportDirectory;
    class ImageNtHeaders;
    class ImageOptionalHeader;
    class ImageSectionHeader;
    class ListEntry;

    class LdrDataTableEntry : private LDR_DATA_TABLE_ENTRY {
    private:
        LdrDataTableEntry() = delete;

    public:
        LdrDataTableEntry(LdrDataTableEntry &&) = delete;
        LdrDataTableEntry &operator=(LdrDataTableEntry &&) = delete;

        LdrDataTableEntry(const LdrDataTableEntry &) = delete;
        LdrDataTableEntry &operator=(const LdrDataTableEntry &) = delete;

        [[nodiscard]] auto get_list_entry() const noexcept -> const ListEntry &;

        [[nodiscard]] auto get_dll_base() const noexcept -> std::uintptr_t;

        [[nodiscard]] auto get_image_dos_header() const noexcept -> const ImageDosHeader &;
        [[nodiscard]] auto get_image_nt_headers() const noexcept -> const ImageNtHeaders &;
        [[nodiscard]] auto get_image_section_headers() const noexcept -> std::span<const ImageSectionHeader>;
        [[nodiscard]] auto get_image_optional_header() const noexcept -> const ImageOptionalHeader &;

        [[nodiscard]] auto get_image_data_directory(ImageDirectoryEntry image_directory_entry
        ) const noexcept -> const ImageDataDirectory &;
        [[nodiscard]] auto get_image_export_directory() const noexcept -> const ImageExportDirectory &;
        [[nodiscard]] auto get_image_export_directory(const ImageDataDirectory &image_data_directory
        ) const noexcept -> const ImageExportDirectory &;

        [[nodiscard]] auto get_name() const noexcept -> const UNICODE_STRING &;
        [[nodiscard]] auto get_short_name() const noexcept -> std::wstring_view;
        [[nodiscard]] auto get_full_name() const noexcept -> const UNICODE_STRING &;

        [[nodiscard]] auto get_vmt_section() const noexcept -> std::span<const std::uint8_t>;
        [[nodiscard]] auto get_code_section() const noexcept -> std::span<const std::uint8_t>;
        [[nodiscard]] auto get_data_section() const noexcept -> std::span<const std::uint8_t>;
    };

}  // namespace orion::utility::module

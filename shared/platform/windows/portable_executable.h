#pragma once

#include <cstddef>
#include <span>
#include <string_view>

#include "process_environment_block/loader_data.h"
#include "process_environment_block/loader_data/table_entry.h"
#include "utility/error.h"
#include "utility/result.h"

enum class ImageDirectoryEntry;

class ImageDataDirectory;

class ImageDosHeader;

class ImageExportDirectory;

class ImageNtHeaders;

class ImageOptionalHeader;

class ImageSectionHeader;

class PortableExecutable final : private TableEntry {
private:
    ~PortableExecutable() = delete;

    class Iterator final : public TableEntryIterator {
    public:
        using TableEntryIterator::TableEntryIterator;

        [[nodiscard]] auto operator*() const noexcept -> const PortableExecutable &;
    };

    class Enumerator final : private LoaderData {
    public:
        ~Enumerator() = delete;

        [[nodiscard]] auto begin() const noexcept -> Iterator;

        [[nodiscard]] auto end() const noexcept -> Iterator;
    };

    [[nodiscard]] auto get_dll_base() const noexcept -> std::byte *;

    [[nodiscard]] auto get_dos_header() const noexcept -> Result<const ImageDosHeader *, Error>;

    [[nodiscard]] auto get_nt_headers() const noexcept -> Result<const ImageNtHeaders *, Error>;

    [[nodiscard]] auto get_optional_header() const noexcept -> Result<const ImageOptionalHeader *, Error>;

    [[nodiscard]] auto get_section_headers() const noexcept
        -> Result<std::span<const ImageSectionHeader>, Error>;

    [[nodiscard]] auto get_data_directory(ImageDirectoryEntry image_directory_entry
    ) const noexcept -> Result<const ImageDataDirectory *, Error>;

    [[nodiscard]] auto get_export_directory(const ImageDataDirectory &data_directory
    ) const noexcept -> const ImageExportDirectory &;

    [[nodiscard]] auto get_non_forwarded_export(const char *name
    ) const noexcept -> Result<std::byte *, Error>;

    [[nodiscard]] auto has_same_name_case_insensitive(std::string_view name
    ) const noexcept -> bool;

    [[nodiscard]] static auto resolve_forwarded_export(std::string_view forwarded_export
    ) noexcept -> Result<std::byte *, Error>;

public:
    [[nodiscard]] auto get_name() const noexcept -> UNICODE_STRING;

    [[nodiscard]] auto get_short_name() const noexcept -> std::wstring_view;

    [[nodiscard]] auto get_code_section() const noexcept -> Result<std::span<const std::byte>, Error>;

    [[nodiscard]] auto get_vmt_section() const noexcept -> Result<std::span<const std::byte>, Error>;

    [[nodiscard]] auto get_data_section() const noexcept -> Result<std::span<const std::byte>, Error>;

    [[nodiscard]] auto get_export(const char *name
    ) const noexcept -> Result<std::byte *, Error>;

    [[nodiscard]] static auto find(std::string_view name
    ) noexcept -> Result<const PortableExecutable *, Error>;

    [[nodiscard]] static auto enumerator() noexcept -> Result<const Enumerator *, Error>;
};

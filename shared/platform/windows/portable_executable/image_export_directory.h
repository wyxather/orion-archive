#pragma once

#include <cstddef>

class ImageExportDirectory final : public IMAGE_EXPORT_DIRECTORY {
private:
    ImageExportDirectory() = delete;

    ImageExportDirectory(ImageExportDirectory &&) = delete;

    ImageExportDirectory(const ImageExportDirectory &) = delete;

    ~ImageExportDirectory() = delete;

    ImageExportDirectory &operator=(ImageExportDirectory &&) = delete;

    ImageExportDirectory &operator=(const ImageExportDirectory &) = delete;

    [[nodiscard]] auto get_names(const std::byte *dll_base) const noexcept -> const DWORD *;

    [[nodiscard]] auto get_name_ordinals(const std::byte *dll_base
    ) const noexcept -> const WORD *;

    [[nodiscard]] auto get_functions(const std::byte *dll_base) const noexcept -> const DWORD *;

    [[nodiscard]] auto get_function_rva(const std::byte *dll_base, WORD name_ordinal) const noexcept -> DWORD;

public:
    [[nodiscard]] auto get_name(const std::byte *dll_base, DWORD name_index) const noexcept -> const
        char *;

    [[nodiscard]] auto get_function_rva(const std::byte *dll_base, DWORD name_index) const noexcept -> DWORD;
};

#pragma once

#include <cstdint>

#include "source/utility/windows.h"

namespace orion::utility::module {

    class ImageExportDirectory final : private IMAGE_EXPORT_DIRECTORY {
    private:
        ImageExportDirectory() = delete;

    public:
        ImageExportDirectory(ImageExportDirectory &&) = delete;
        ImageExportDirectory &operator=(ImageExportDirectory &&) = delete;

        ImageExportDirectory(const ImageExportDirectory &) = delete;
        ImageExportDirectory &operator=(const ImageExportDirectory &) = delete;

        [[nodiscard]] auto get_number_of_names() const noexcept -> std::uint32_t;
        [[nodiscard]] auto get_export_name(std::uintptr_t dll_base, std::uint32_t export_index) const noexcept -> const
            char *;
        [[nodiscard]] auto get_export_function(std::uintptr_t dll_base, std::uint32_t export_index)
            const noexcept -> std::uintptr_t;
        [[nodiscard]] auto is_export_forwarded(
            std::uint32_t image_data_directory_size,
            std::uintptr_t export_address
        ) const noexcept -> bool;
    };

}  // namespace orion::utility::module

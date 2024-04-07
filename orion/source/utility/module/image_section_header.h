#pragma once

#include <cstdint>
#include <span>

#include "source/utility/windows.h"

namespace orion::utility::module {

    class ImageSectionHeader final : private IMAGE_SECTION_HEADER {
    private:
        ImageSectionHeader() = delete;

    public:
        ImageSectionHeader(ImageSectionHeader &&) = delete;
        ImageSectionHeader &operator=(ImageSectionHeader &&) = delete;

        ImageSectionHeader(const ImageSectionHeader &) = delete;
        ImageSectionHeader &operator=(const ImageSectionHeader &) = delete;

        [[nodiscard]] auto is_vmt_section() const noexcept -> bool;
        [[nodiscard]] auto is_code_section() const noexcept -> bool;
        [[nodiscard]] auto is_data_section() const noexcept -> bool;
        [[nodiscard]] auto get_section_address(std::uintptr_t dll_base
        ) const noexcept -> std::uintptr_t;
        [[nodiscard]] auto get_section_bytes(std::uintptr_t dll_base
        ) const noexcept -> std::span<const std::uint8_t>;
    };

}  // namespace orion::utility::module

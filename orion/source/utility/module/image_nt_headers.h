#pragma once

#include <span>

#include "source/utility/windows.h"

namespace orion::utility::module {

    class ImageOptionalHeader;
    class ImageSectionHeader;

    class ImageNtHeaders final : private IMAGE_NT_HEADERS {
    private:
        ImageNtHeaders() = delete;

    public:
        ImageNtHeaders(ImageNtHeaders &&) = delete;
        ImageNtHeaders &operator=(ImageNtHeaders &&) = delete;

        ImageNtHeaders(const ImageNtHeaders &) = delete;
        ImageNtHeaders &operator=(const ImageNtHeaders &) = delete;

        [[nodiscard]] auto get_optional_header() const noexcept -> const ImageOptionalHeader &;
        [[nodiscard]] auto get_image_section_headers() const noexcept -> std::span<const ImageSectionHeader>;
    };

}  // namespace orion::utility::module

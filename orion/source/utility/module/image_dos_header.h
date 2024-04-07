#pragma once

#include <cstdint>

#include "source/utility/windows.h"

namespace orion::utility::module {

    class ImageNtHeaders;

    class ImageDosHeader final : private IMAGE_DOS_HEADER {
    private:
        ImageDosHeader() = delete;

    public:
        ImageDosHeader(ImageDosHeader &&) = delete;
        ImageDosHeader &operator=(ImageDosHeader &&) = delete;

        ImageDosHeader(const ImageDosHeader &) = delete;
        ImageDosHeader &operator=(const ImageDosHeader &) = delete;

        [[nodiscard]] auto get_image_nt_headers(std::uintptr_t dll_base
        ) const noexcept -> const ImageNtHeaders &;
    };

}  // namespace orion::utility::module

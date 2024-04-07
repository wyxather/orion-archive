#pragma once

#include <cstdint>

#include "source/utility/windows.h"

namespace orion::utility::module {

    class ImageDataDirectory final : private IMAGE_DATA_DIRECTORY {
    private:
        ImageDataDirectory() = delete;

    public:
        ImageDataDirectory(ImageDataDirectory &&) = delete;
        ImageDataDirectory &operator=(ImageDataDirectory &&) = delete;

        ImageDataDirectory(const ImageDataDirectory &) = delete;
        ImageDataDirectory &operator=(const ImageDataDirectory &) = delete;

        [[nodiscard]] auto is_valid() const noexcept -> bool;
        [[nodiscard]] auto get_size() const noexcept -> std::uint32_t;
        [[nodiscard]] auto get_virtual_address() const noexcept -> std::uint32_t;
    };

}  // namespace orion::utility::module

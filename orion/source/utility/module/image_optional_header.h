#pragma once

#include "source/utility/windows.h"

namespace orion::utility::module {

    enum class ImageDirectoryEntry;

    class ImageDataDirectory;

    class ImageOptionalHeader final : private IMAGE_OPTIONAL_HEADER {
    private:
        ImageOptionalHeader() = delete;

    public:
        ImageOptionalHeader(ImageOptionalHeader &&) = delete;
        ImageOptionalHeader &operator=(ImageOptionalHeader &&) = delete;

        ImageOptionalHeader(const ImageOptionalHeader &) = delete;
        ImageOptionalHeader &operator=(const ImageOptionalHeader &) = delete;

        [[nodiscard]] auto get_image_data_directory(ImageDirectoryEntry image_directory_entry
        ) const noexcept -> const ImageDataDirectory &;
    };

}  // namespace orion::utility::module

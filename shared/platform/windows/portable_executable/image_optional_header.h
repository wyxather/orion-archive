#pragma once

#include "utility/error.h"
#include "utility/result.h"

enum class ImageDirectoryEntry;

class ImageDataDirectory;

class ImageOptionalHeader final : private IMAGE_OPTIONAL_HEADER {
private:
    ImageOptionalHeader() = delete;

    ImageOptionalHeader(ImageOptionalHeader &&) = delete;

    ImageOptionalHeader(const ImageOptionalHeader &) = delete;

    ~ImageOptionalHeader() = delete;

    ImageOptionalHeader &operator=(ImageOptionalHeader &&) = delete;

    ImageOptionalHeader &operator=(const ImageOptionalHeader &) = delete;

public:
    [[nodiscard]] auto validate() const noexcept -> Result<const ImageOptionalHeader *, Error>;

    [[nodiscard]] auto get_data_directory(ImageDirectoryEntry image_directory_entry
    ) const noexcept -> Result<const ImageDataDirectory *, Error>;
};

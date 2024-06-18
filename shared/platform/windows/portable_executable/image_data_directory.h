#pragma once

#include "utility/error.h"
#include "utility/result.h"

class ImageDataDirectory final : public IMAGE_DATA_DIRECTORY {
private:
    ImageDataDirectory() = delete;

    ImageDataDirectory(ImageDataDirectory &&) = delete;

    ImageDataDirectory(const ImageDataDirectory &) = delete;

    ~ImageDataDirectory() = delete;

    ImageDataDirectory &operator=(ImageDataDirectory &&) = delete;

    ImageDataDirectory &operator=(const ImageDataDirectory &) = delete;

public:
    [[nodiscard]] auto validate() const noexcept -> Result<const ImageDataDirectory *, Error>;

    [[nodiscard]] auto is_forwarded_export(DWORD function_rva) const noexcept -> bool;
};

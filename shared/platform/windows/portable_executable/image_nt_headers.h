#pragma once

#include <span>

#include "utility/error.h"
#include "utility/result.h"

class ImageOptionalHeader;

class ImageSectionHeader;

class ImageNtHeaders final : private IMAGE_NT_HEADERS {
private:
    ImageNtHeaders() = delete;

    ImageNtHeaders(ImageNtHeaders &&) = delete;

    ImageNtHeaders(const ImageNtHeaders &) = delete;

    ~ImageNtHeaders() = delete;

    ImageNtHeaders &operator=(ImageNtHeaders &&) = delete;

    ImageNtHeaders &operator=(const ImageNtHeaders &) = delete;

public:
    [[nodiscard]] auto validate() const noexcept -> Result<const ImageNtHeaders *, Error>;

    [[nodiscard]] auto get_optional_header() const noexcept -> Result<const ImageOptionalHeader *, Error>;

    [[nodiscard]] auto get_section_headers() const noexcept -> std::span<const ImageSectionHeader>;
};

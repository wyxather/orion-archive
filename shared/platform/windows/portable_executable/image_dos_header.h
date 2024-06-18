#pragma once

#include "utility/error.h"
#include "utility/result.h"

class ImageNtHeaders;

class ImageDosHeader final : private IMAGE_DOS_HEADER {
private:
    ImageDosHeader() = delete;

    ImageDosHeader(ImageDosHeader &&) = delete;

    ImageDosHeader(const ImageDosHeader &) = delete;

    ~ImageDosHeader() = delete;

    ImageDosHeader &operator=(ImageDosHeader &&) = delete;

    ImageDosHeader &operator=(const ImageDosHeader &) = delete;

public:
    [[nodiscard]] auto validate() const noexcept -> Result<const ImageDosHeader *, Error>;

    [[nodiscard]] auto get_nt_headers() const noexcept -> Result<const ImageNtHeaders *, Error>;
};

#pragma once

#include <cstddef>
#include <span>

class ImageSectionHeader final : private IMAGE_SECTION_HEADER {
private:
    ImageSectionHeader() = delete;

    ImageSectionHeader(ImageSectionHeader &&) = delete;

    ImageSectionHeader(const ImageSectionHeader &) = delete;

    ~ImageSectionHeader() = delete;

    ImageSectionHeader &operator=(ImageSectionHeader &&) = delete;

    ImageSectionHeader &operator=(const ImageSectionHeader &) = delete;

    [[nodiscard]] auto is_executable() const noexcept -> bool;

    [[nodiscard]] auto is_readable() const noexcept -> bool;

public:
    [[nodiscard]] auto is_code_section() const noexcept -> bool;

    [[nodiscard]] auto is_vmt_section() const noexcept -> bool;

    [[nodiscard]] auto is_data_section() const noexcept -> bool;

    [[nodiscard]] auto as_span(const std::byte *dll_base
    ) const noexcept -> std::span<const std::byte>;
};

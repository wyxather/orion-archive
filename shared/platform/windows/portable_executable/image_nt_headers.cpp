#include "image_nt_headers.h"

#include <bit>
#include <cstddef>
#include <type_traits>
#include <utility>

#include "image_optional_header.h"
#include "image_section_header.h"

auto ImageNtHeaders::validate() const noexcept -> Result<const ImageNtHeaders *, Error> {
    if ( std::cmp_not_equal(Signature, IMAGE_NT_SIGNATURE) ) {
        return Err("Image nt headers has an invalid signature.");
    }
    return this;
}

auto ImageNtHeaders::get_optional_header() const noexcept -> Result<const ImageOptionalHeader *, Error> {
    const auto &optional_header =
        *std::bit_cast<const ImageOptionalHeader *>(std::addressof(OptionalHeader));
    return optional_header.validate();
}

auto ImageNtHeaders::get_section_headers() const noexcept -> std::span<const ImageSectionHeader> {
    return {
        std::bit_cast<const ImageSectionHeader *>(
            std::bit_cast<const std::byte *>(std::addressof(OptionalHeader))
            + FileHeader.SizeOfOptionalHeader
        ),
        FileHeader.NumberOfSections,
    };
}

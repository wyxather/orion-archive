#include "image_dos_header.h"

#include <bit>
#include <cstddef>
#include <utility>

#include "image_nt_headers.h"

auto ImageDosHeader::validate() const noexcept -> Result<const ImageDosHeader *, Error> {
    if ( std::cmp_not_equal(e_magic, IMAGE_DOS_SIGNATURE) ) {
        return Err("Image dos header has an invalid e_magic.");
    }
    return this;
}

auto ImageDosHeader::get_nt_headers() const noexcept -> Result<const ImageNtHeaders *, Error> {
    const auto &nt_headers =
        *std::bit_cast<const ImageNtHeaders *>(std::bit_cast<const std::byte *>(this) + e_lfanew);
    return nt_headers.validate();
}

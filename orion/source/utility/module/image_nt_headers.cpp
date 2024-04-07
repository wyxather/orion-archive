#include "source/utility/module/image_nt_headers.h"

#include "source/utility/module/image_section_header.h"
#include "source/utility/pointer.h"
#include "source/utility/reference.h"

using orion::utility::Pointer;
using orion::utility::Reference;
using orion::utility::module::ImageNtHeaders;

auto ImageNtHeaders::get_optional_header() const noexcept -> const ImageOptionalHeader & {
    return Reference { OptionalHeader }.as<ImageOptionalHeader>();
}

auto ImageNtHeaders::get_image_section_headers() const noexcept -> std::span<const ImageSectionHeader> {
    return std::span {
        Pointer { Reference { OptionalHeader }.address<std::uintptr_t>()
                  + FileHeader.SizeOfOptionalHeader }
            .as<const ImageSectionHeader>(),
        FileHeader.NumberOfSections,
    };
}

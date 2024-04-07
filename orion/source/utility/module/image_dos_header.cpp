#include "source/utility/module/image_dos_header.h"

#include "source/utility/pointer.h"

using orion::utility::Pointer;
using orion::utility::module::ImageDosHeader;

auto ImageDosHeader::get_image_nt_headers(const std::uintptr_t dll_base
) const noexcept -> const ImageNtHeaders & {
    return Pointer { dll_base + e_lfanew }.as_ref<ImageNtHeaders>();
}

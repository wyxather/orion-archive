#include "source/utility/module/image_optional_header.h"

#include "source/utility/reference.h"

using orion::utility::Reference;
using orion::utility::module::ImageOptionalHeader;

auto ImageOptionalHeader::get_image_data_directory(const ImageDirectoryEntry image_directory_entry
) const noexcept -> const ImageDataDirectory & {
    return Reference { DataDirectory[static_cast<int>(image_directory_entry)] }.as<ImageDataDirectory>();
}

#include "source/utility/module/image_data_directory.h"

using orion::utility::module::ImageDataDirectory;

auto ImageDataDirectory::is_valid() const noexcept -> bool {
    return bool { (Size > 0) && (VirtualAddress > 0) };
}

auto ImageDataDirectory::get_size() const noexcept -> std::uint32_t {
    return std::uint32_t { Size };
}

auto ImageDataDirectory::get_virtual_address() const noexcept -> std::uint32_t {
    return std::uint32_t { VirtualAddress };
}

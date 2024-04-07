#include "source/utility/module/image_export_directory.h"

#include "source/utility/pointer.h"

using orion::utility::Pointer;
using orion::utility::module::ImageExportDirectory;

auto ImageExportDirectory::get_number_of_names() const noexcept -> std::uint32_t {
    return std::uint32_t { NumberOfNames };
}

auto ImageExportDirectory::get_export_name(
    const std::uintptr_t dll_base,
    const std::uint32_t export_index
) const noexcept -> const char * {
    const auto names = Pointer { dll_base + AddressOfNames }.as<const std::uint32_t>();
    return Pointer { dll_base + names[export_index] }.as<const char>();
}

auto ImageExportDirectory::get_export_function(
    const std::uintptr_t dll_base,
    const std::uint32_t export_index
) const noexcept -> std::uintptr_t {
    const auto functions =
        Pointer { dll_base + AddressOfFunctions }.as<const std::uint32_t>();
    const auto name_ordinals =
        Pointer { dll_base + AddressOfNameOrdinals }.as<const std::uint16_t>();
    return std::uintptr_t { dll_base + functions[name_ordinals[export_index]] };
}

auto ImageExportDirectory::is_export_forwarded(
    const std::uint32_t image_data_directory_size,
    const std::uintptr_t export_address
) const noexcept -> bool {
    const auto address = Pointer { this }.value<std::uintptr_t>();
    return bool { (export_address >= address)
                  && (export_address <= (address + image_data_directory_size)) };
}

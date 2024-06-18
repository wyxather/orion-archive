#include "image_optional_header.h"

#include <bit>
#include <type_traits>
#include <utility>

#include "image_data_directory.h"

auto ImageOptionalHeader::validate() const noexcept -> Result<const ImageOptionalHeader *, Error> {
    if ( std::cmp_not_equal(Magic, IMAGE_NT_OPTIONAL_HDR_MAGIC) ) {
        return Err("Image optional headers has an invalid magic.");
    }
    return this;
}

auto ImageOptionalHeader::get_data_directory(const ImageDirectoryEntry directory_entry
) const noexcept -> Result<const ImageDataDirectory *, Error> {
    const auto underlying_directory_entry = std::to_underlying(directory_entry);
    if ( std::cmp_greater_equal(underlying_directory_entry, NumberOfRvaAndSizes) ) {
        return Err("Trying get an out of range data directory.");
    }
    const auto &data_directory = *std::bit_cast<const ImageDataDirectory *>(
        std::addressof(DataDirectory[underlying_directory_entry])
    );
    return data_directory.validate();
}

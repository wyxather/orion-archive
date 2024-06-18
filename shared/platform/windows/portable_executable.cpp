#include "portable_executable.h"

#include <algorithm>
#include <concepts>
#include <ranges>
#include <type_traits>
#include <utility>

#include "intrinsics.h"
#include "portable_executable/image_data_directory.h"
#include "portable_executable/image_directory_entry.h"
#include "portable_executable/image_dos_header.h"
#include "portable_executable/image_export_directory.h"
#include "portable_executable/image_nt_headers.h"
#include "portable_executable/image_optional_header.h"
#include "portable_executable/image_section_header.h"
#include "process_environment_block.h"

[[nodiscard]] static constexpr auto tolower(const std::integral auto ch) noexcept -> int {
    if ( ch >= 'A' && ch <= 'Z' ) {
        return 'a' + (ch - 'A');
    }
    return ch;
}

auto PortableExecutable::Iterator::operator*() const noexcept -> const PortableExecutable & {
    return *static_cast<const PortableExecutable *>(
        std::addressof(TableEntryIterator::operator*())
    );
}

auto PortableExecutable::Enumerator::begin() const noexcept -> Iterator {
    return Iterator { *LoaderData::begin() };
}

auto PortableExecutable::Enumerator::end() const noexcept -> Iterator {
    return Iterator { *LoaderData::end() };
}

auto PortableExecutable::get_dll_base() const noexcept -> std::byte * {
    return static_cast<std::byte *>(DllBase);
}

auto PortableExecutable::get_dos_header() const noexcept -> Result<const ImageDosHeader *, Error> {
    const auto &dos_header = *static_cast<const ImageDosHeader *>(DllBase);
    return dos_header.validate();
}

auto PortableExecutable::get_nt_headers() const noexcept -> Result<const ImageNtHeaders *, Error> {
    return get_dos_header().and_then([](const ImageDosHeader *const dos_header) noexcept {
        return dos_header->get_nt_headers();
    });
}

auto PortableExecutable::get_optional_header() const noexcept -> Result<const ImageOptionalHeader *, Error> {
    return get_nt_headers().and_then([](const ImageNtHeaders *const nt_headers) noexcept {
        return nt_headers->get_optional_header();
    });
}

auto PortableExecutable::get_section_headers() const noexcept
    -> Result<std::span<const ImageSectionHeader>, Error> {
    return get_nt_headers().and_then([](const ImageNtHeaders *const nt_headers) noexcept {
        return nt_headers->get_section_headers();
    });
}

auto PortableExecutable::get_data_directory(const ImageDirectoryEntry directory_entry
) const noexcept -> Result<const ImageDataDirectory *, Error> {
    return get_optional_header().and_then(
        [directory_entry](const ImageOptionalHeader *const optional_header) noexcept {
            return optional_header->get_data_directory(directory_entry);
        }
    );
}

auto PortableExecutable::get_export_directory(const ImageDataDirectory &data_directory
) const noexcept -> const ImageExportDirectory & {
    return *std::bit_cast<const ImageExportDirectory *>(
        get_dll_base() + data_directory.VirtualAddress
    );
}

auto PortableExecutable::get_non_forwarded_export(const char *const name
) const noexcept -> Result<std::byte *, Error> {
    return get_data_directory(ImageDirectoryEntry::Export)
        .and_then(
            [this, name](const ImageDataDirectory *const data_directory
            ) noexcept -> Result<std::byte *, Error> {
                const auto &export_directory = get_export_directory(*data_directory);
                for ( auto export_name_index = DWORD {};
                      std::cmp_less(export_name_index, export_directory.NumberOfNames);
                      ++export_name_index ) {
                    const auto function_rva =
                        export_directory.get_function_rva(get_dll_base(), export_name_index);
                    if ( data_directory->is_forwarded_export(function_rva) ) {
                        continue;
                    }
                    if ( const auto export_name =
                             export_directory.get_name(get_dll_base(), export_name_index);
                         std::cmp_not_equal(intrinsics::strcmp(export_name, name), 0) ) {
                        continue;
                    }
                    return get_dll_base() + function_rva;
                }
                return Err("Non forwarded export not found.");
            }
        );
}

auto PortableExecutable::has_same_name_case_insensitive(const std::string_view name
) const noexcept -> bool {
    const auto short_name = get_short_name();
    if ( std::cmp_not_equal(name.size(), short_name.size()) ) {
        return false;
    }
    return std::ranges::all_of(name | std::views::enumerate, [short_name](const auto &tuple) constexpr noexcept {
        return std::cmp_equal(tolower(std::get<1>(tuple)), tolower(short_name[std::get<0>(tuple)]));
    });
}

auto PortableExecutable::resolve_forwarded_export(const std::string_view forwarded_export
) noexcept -> Result<std::byte *, Error> {
    const auto pe_name = std::string_view {
        forwarded_export.cbegin(),
        forwarded_export.cbegin() + forwarded_export.find_last_of('.'),
    };
    const auto export_name = std::string_view {
        forwarded_export.cbegin() + pe_name.size() + 1,
        forwarded_export.cend(),
    };
    return find(pe_name)
        .and_then([export_name](const PortableExecutable *const pe) noexcept {
            return pe->get_export(export_name.data());
        })
        .or_else([export_name](Error) noexcept -> Result<std::byte *, Error> {
            return enumerator().and_then(
                [export_name](const Enumerator *const enumerator
                ) noexcept -> Result<std::byte *, Error> {
                    for ( const auto &pe : *enumerator ) {
                        const auto non_forwarded_export =
                            pe.get_non_forwarded_export(export_name.data());
                        if ( non_forwarded_export.is_ok() ) {
                            return non_forwarded_export.unwrap();
                        }
                    }
                    return Err("Failed to resolve forwarded export.");
                }
            );
        });
}

auto PortableExecutable::get_name() const noexcept -> UNICODE_STRING {
    return *std::bit_cast<const UNICODE_STRING *>(std::addressof(Reserved4[0]));
}

auto PortableExecutable::get_short_name() const noexcept -> std::wstring_view {
    const auto name = get_name();
    const auto view = std::wstring_view {
        name.Buffer,
        static_cast<std::size_t>(name.Length) / 2,
    };
    if ( const auto dot = view.find_last_of(L'.');
         std::cmp_not_equal(dot, std::wstring_view::npos) ) {
        return std::wstring_view { view.cbegin(), view.cbegin() + dot };
    }
    return view;
}

auto PortableExecutable::get_code_section() const noexcept -> Result<std::span<const std::byte>, Error> {
    return get_section_headers().and_then(
        [this](const std::span<const ImageSectionHeader> section_headers
        ) constexpr noexcept -> Result<std::span<const std::byte>, Error> {
            for ( const auto &section_header : section_headers ) {
                if ( section_header.is_code_section() ) {
                    return section_header.as_span(get_dll_base());
                }
            }
            return Err("Portable executable's code section not found.");
        }
    );
}

auto PortableExecutable::get_vmt_section() const noexcept -> Result<std::span<const std::byte>, Error> {
    return get_section_headers().and_then(
        [this](const std::span<const ImageSectionHeader> section_headers
        ) constexpr noexcept -> Result<std::span<const std::byte>, Error> {
            for ( const auto &section_header : section_headers ) {
                if ( section_header.is_vmt_section() ) {
                    return section_header.as_span(get_dll_base());
                }
            }
            return Err("Portable executable's vmt section not found.");
        }
    );
}

auto PortableExecutable::get_data_section() const noexcept -> Result<std::span<const std::byte>, Error> {
    return get_section_headers().and_then(
        [this](const std::span<const ImageSectionHeader> section_headers
        ) constexpr noexcept -> Result<std::span<const std::byte>, Error> {
            for ( const auto &section_header : section_headers ) {
                if ( section_header.is_data_section() ) {
                    return section_header.as_span(get_dll_base());
                }
            }
            return Err("Portable executable's data section not found.");
        }
    );
}

auto PortableExecutable::get_export(const char *const name
) const noexcept -> Result<std::byte *, Error> {
    return get_data_directory(ImageDirectoryEntry::Export)
        .and_then(
            [this, name](const ImageDataDirectory *const data_directory
            ) noexcept -> Result<std::byte *, Error> {
                const auto &export_directory = get_export_directory(*data_directory);
                for ( auto export_name_index = DWORD {};
                      std::cmp_less(export_name_index, export_directory.NumberOfNames);
                      ++export_name_index ) {
                    if ( const auto export_name =
                             export_directory.get_name(get_dll_base(), export_name_index);
                         std::cmp_not_equal(intrinsics::strcmp(export_name, name), 0) ) {
                        continue;
                    }
                    const auto function_rva =
                        export_directory.get_function_rva(get_dll_base(), export_name_index);
                    const auto export_address = get_dll_base() + function_rva;
                    if ( data_directory->is_forwarded_export(function_rva) ) {
                        return resolve_forwarded_export(std::string_view {
                            std::bit_cast<const char *>(export_address),
                        });
                    }
                    return export_address;
                }
                return Err("Portable executable's export not found.");
            }
        );
}

auto PortableExecutable::find(const std::string_view name
) noexcept -> Result<const PortableExecutable *, Error> {
    return enumerator().and_then(
        [name](const Enumerator *const enumerator
        ) noexcept -> Result<const PortableExecutable *, Error> {
            for ( const auto &pe : *enumerator ) {
                if ( pe.has_same_name_case_insensitive(name) ) {
                    return std::addressof(pe);
                }
            }
            return Err("Portable executable not found.");
        }
    );
}

auto PortableExecutable::enumerator() noexcept -> Result<const Enumerator *, Error> {
    return ProcessEnvironmentBlock::get()
        .and_then([](const ProcessEnvironmentBlock *const pe) noexcept {
            return pe->get_loader_data();
        })
        .and_then([](const LoaderData *const loader_data) constexpr noexcept {
            return std::bit_cast<const Enumerator *>(loader_data);
        });
}

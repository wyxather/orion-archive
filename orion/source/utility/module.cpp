#include "source/utility/module.h"

#include <cctype>
#include <ranges>

#include "source/utility/module/image_data_directory.h"
#include "source/utility/module/image_directory_entry.h"
#include "source/utility/module/image_export_directory.h"
#include "source/utility/module/peb.h"
#include "source/utility/pointer.h"
#include "source/utility/reference.h"
#include "source/utility/string.h"

using orion::utility::Module;
using orion::utility::Pointer;
using orion::utility::Reference;
using orion::utility::String;
using orion::utility::module::ImageDirectoryEntry;
using orion::utility::module::Peb;

auto Module::Iterator::operator*() const noexcept -> const Module & {
    return Pointer { ldr_data_table_entry_ptr }.as_ref<Module>();
}

auto Module::Iterator::operator->() const noexcept -> const Module * {
    return Pointer { ldr_data_table_entry_ptr }.as<Module>();
}

auto Module::Enumerator::begin() const noexcept -> Iterator {
    return Iterator { *PebLdrData::begin() };
}

auto Module::Enumerator::end() const noexcept -> Iterator {
    return Iterator { *PebLdrData::end() };
}

auto Module::get_short_name() const noexcept -> std::wstring_view {
    const auto &name = get_name();
    const auto view = std::wstring_view { name.Buffer, (std::size_t)(name.Length) / 2 };
    return view.substr(0, view.find_last_of(L'.'));
}

auto Module::get_non_forwarded_export_function(const char *const function_name
) const noexcept -> std::uintptr_t {
    auto export_address = std::uintptr_t {};
    const auto &image_data_directory =
        get_image_data_directory(ImageDirectoryEntry::Export);
    if ( !image_data_directory.is_valid() ) {
        return export_address;
    }
    const auto &image_export_directory = get_image_export_directory(image_data_directory);
    for ( auto export_index = std::uint32_t {};
          export_index < image_export_directory.get_number_of_names();
          ++export_index ) {
        const auto export_function =
            image_export_directory.get_export_function(get_dll_base(), export_index);
        if ( image_export_directory.is_export_forwarded(image_data_directory.get_size(), export_function) ) {
            continue;
        }
        if ( String<char>::strcmp(image_export_directory.get_export_name(get_dll_base(), export_index), function_name)
             != 0 ) {
            continue;
        }
        export_address = export_function;
        break;
    }
    return export_address;
}

auto Module::resolve_forwarded_export(const std::string_view export_address
) noexcept -> std::uintptr_t {
    const auto module_name = export_address.substr(0, export_address.find_last_of('.'));
    const auto function_name = export_address.substr(module_name.size() + 1);
    if ( const auto module = find_module(module_name); module != nullptr ) {
        return module->get_export_function(function_name.data());
    }
    for ( const auto &module : Module::enumerate() ) {
        const auto export_function =
            module.get_non_forwarded_export_function(function_name.data());
        if ( export_function != 0 ) {
            return export_function;
        }
    }
    return std::uintptr_t {};
}

auto Module::has_same_name_case_insensitive(const std::string_view other_module_name
) const noexcept -> bool {
    for ( const auto [a, b] : std::ranges::views::zip(get_short_name(), other_module_name) ) {
        if ( std::tolower(a) != std::tolower(b) ) {
            return false;
        }
    }
    return true;
}

auto Module::get_export_function(const char *const function_name) const noexcept -> std::uintptr_t {
    auto export_address = std::uintptr_t {};
    const auto &image_data_directory =
        get_image_data_directory(ImageDirectoryEntry::Export);
    if ( !image_data_directory.is_valid() ) {
        return export_address;
    }
    const auto &image_export_directory = get_image_export_directory(image_data_directory);
    for ( auto export_index = std::uint32_t {};
          export_index < image_export_directory.get_number_of_names();
          ++export_index ) {
        if ( String<char>::strcmp(image_export_directory.get_export_name(get_dll_base(), export_index), function_name)
             != 0 ) {
            continue;
        }
        export_address =
            image_export_directory.get_export_function(get_dll_base(), export_index);
        if ( image_export_directory.is_export_forwarded(image_data_directory.get_size(), export_address) ) {
            export_address = resolve_forwarded_export(std::string_view {
                Pointer { export_address }.as<const char>(),
            });
        }
        break;
    }
    return export_address;
}

auto Module::find_module(const std::string_view module_name) noexcept -> const Module * {
    for ( const auto &module : Module::enumerate() ) {
        if ( module.has_same_name_case_insensitive(module_name) ) {
            return Reference { module }.as_ptr();
        }
    }
    return nullptr;
}

auto Module::find_export_function(const char *const function_name) noexcept -> std::uintptr_t {
    for ( const auto &module : enumerate() ) {
        const auto export_address = module.get_export_function(function_name);
        if ( export_address != 0 ) {
            return export_address;
        }
    }
    return std::uintptr_t {};
}

auto Module::enumerate() noexcept -> const Enumerator & {
    return Reference { Peb::get().get_ldr_data() }.as<Enumerator>();
}

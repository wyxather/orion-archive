#pragma once

#include <cstdint>
#include <string_view>

#include "source/utility/module/ldr_data_table_entry.h"
#include "source/utility/module/ldr_data_table_entry_iterator.h"
#include "source/utility/module/peb_ldr_data.h"

namespace orion::utility {

    class Module final : public module::LdrDataTableEntry {
    public:
        using LdrDataTableEntry::LdrDataTableEntry;

    private:
        class Iterator final : public module::LdrDataTableEntryIterator {
        public:
            using LdrDataTableEntryIterator::LdrDataTableEntryIterator;

            [[nodiscard]] auto operator*() const noexcept -> const Module &;
            [[nodiscard]] auto operator->() const noexcept -> const Module *;
        };

        class Enumerator final : public module::PebLdrData {
        public:
            using PebLdrData::PebLdrData;

            [[nodiscard]] auto begin() const noexcept -> Iterator;
            [[nodiscard]] auto end() const noexcept -> Iterator;
        };

        [[nodiscard]] auto get_short_name() const noexcept -> std::wstring_view;

        [[nodiscard]] auto get_non_forwarded_export_function(const char *function_name
        ) const noexcept -> std::uintptr_t;

        [[nodiscard]] static auto resolve_forwarded_export(std::string_view export_address
        ) noexcept -> std::uintptr_t;

    public:
        [[nodiscard]] auto has_same_name_case_insensitive(std::string_view other_module_name
        ) const noexcept -> bool;

        [[nodiscard]] auto get_export_function(const char *function_name
        ) const noexcept -> std::uintptr_t;

        [[nodiscard]] static auto find_module(std::string_view module_name
        ) noexcept -> const Module *;
        [[nodiscard]] static auto find_export_function(const char *function_name
        ) noexcept -> std::uintptr_t;

        [[nodiscard]] static auto enumerate() noexcept -> const Enumerator &;
    };

}  // namespace orion::utility

#pragma once

namespace orion::utility::module {

    class LdrDataTableEntry;

    class LdrDataTableEntryIterator {
    protected:
        const LdrDataTableEntry *ldr_data_table_entry_ptr;

    public:
        explicit LdrDataTableEntryIterator(const LdrDataTableEntry &ldr_data_table_entry) noexcept;

        LdrDataTableEntryIterator(LdrDataTableEntryIterator &&) = delete;
        LdrDataTableEntryIterator &operator=(LdrDataTableEntryIterator &) = delete;

        LdrDataTableEntryIterator(const LdrDataTableEntryIterator &) = delete;
        LdrDataTableEntryIterator &operator=(const LdrDataTableEntryIterator &) = delete;

        auto operator++() noexcept -> void;

        [[nodiscard]] auto operator!=(const LdrDataTableEntryIterator &other
        ) const noexcept -> bool;

        [[nodiscard]] auto operator*() const noexcept -> const LdrDataTableEntry &;

        [[nodiscard]] auto operator->() const noexcept -> const LdrDataTableEntry *;
    };

}  // namespace orion::utility::module

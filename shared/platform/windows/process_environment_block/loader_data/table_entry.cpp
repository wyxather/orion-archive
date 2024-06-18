#include "table_entry.h"

#include <bit>
#include <type_traits>

#include "list_entry.h"

auto TableEntry::get_list_entry() const noexcept -> const ListEntry & {
    return *std::bit_cast<const ListEntry *>(std::addressof(Reserved1[0]));
}

TableEntryIterator::TableEntryIterator(const TableEntry &table_entry) noexcept
    : table_entry_ptr { std::addressof(table_entry) } {}

auto TableEntryIterator::operator++() noexcept -> void {
    table_entry_ptr = std::bit_cast<const TableEntry *>(
        std::addressof(table_entry_ptr->get_list_entry().next())
    );
}

auto TableEntryIterator::operator!=(const TableEntryIterator &other) const noexcept -> bool {
    return table_entry_ptr != other.table_entry_ptr;
}

auto TableEntryIterator::operator*() const noexcept -> const TableEntry & {
    return *table_entry_ptr;
}

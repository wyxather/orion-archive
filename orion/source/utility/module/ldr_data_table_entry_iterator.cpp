#include "source/utility/module/ldr_data_table_entry_iterator.h"

#include "source/utility/module/ldr_data_table_entry.h"
#include "source/utility/module/list_entry.h"
#include "source/utility/reference.h"

using orion::utility::Reference;
using orion::utility::module::LdrDataTableEntryIterator;

LdrDataTableEntryIterator::LdrDataTableEntryIterator(const LdrDataTableEntry &ldr_data_table_entry) noexcept
    : ldr_data_table_entry_ptr { &ldr_data_table_entry } {}

auto LdrDataTableEntryIterator::operator++() noexcept -> void {
    ldr_data_table_entry_ptr =
        Reference { ldr_data_table_entry_ptr->get_list_entry().next() }.as_ptr<LdrDataTableEntry>();
}

auto LdrDataTableEntryIterator::operator!=(const LdrDataTableEntryIterator &other
) const noexcept -> bool {
    return bool { ldr_data_table_entry_ptr != other.ldr_data_table_entry_ptr };
}

auto LdrDataTableEntryIterator::operator*() const noexcept -> const LdrDataTableEntry & {
    return *ldr_data_table_entry_ptr;
}

auto LdrDataTableEntryIterator::operator->() const noexcept -> const LdrDataTableEntry * {
    return ldr_data_table_entry_ptr;
}

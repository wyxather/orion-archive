#include "loader_data.h"

#include <bit>
#include <type_traits>

#include "loader_data/list_entry.h"
#include "loader_data/table_entry.h"

auto LoaderData::get_list_entry() const noexcept -> const ListEntry & {
    return *std::bit_cast<const ListEntry *>(std::addressof(Reserved2[1]));
}

auto LoaderData::begin() const noexcept -> TableEntryIterator {
    return TableEntryIterator {
        *std::bit_cast<const TableEntry *>(std::addressof(get_list_entry().next())),
    };
}

auto LoaderData::end() const noexcept -> TableEntryIterator {
    return TableEntryIterator {
        *std::bit_cast<const TableEntry *>(std::addressof(get_list_entry().prev())),
    };
}

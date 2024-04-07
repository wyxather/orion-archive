#include "source/utility/module/peb_ldr_data.h"

#include "source/utility/module/ldr_data_table_entry_iterator.h"
#include "source/utility/module/list_entry.h"
#include "source/utility/reference.h"

using orion::utility::Reference;
using orion::utility::module::PebLdrData;

auto PebLdrData::get_list_entry() const noexcept -> const ListEntry & {
    return Reference { Reserved2[1] }.as<ListEntry>();
}

auto PebLdrData::begin() const noexcept -> LdrDataTableEntryIterator {
    return LdrDataTableEntryIterator {
        Reference { get_list_entry().next() }.as<LdrDataTableEntry>()
    };
}

auto PebLdrData::end() const noexcept -> LdrDataTableEntryIterator {
    return LdrDataTableEntryIterator {
        Reference { get_list_entry().prev() }.as<LdrDataTableEntry>()
    };
}

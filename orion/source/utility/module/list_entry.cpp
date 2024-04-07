#include "source/utility/module/list_entry.h"

#include "source/utility/pointer.h"

using orion::utility::Pointer;
using orion::utility::module::ListEntry;

auto ListEntry::next() const noexcept -> const ListEntry & {
    return Pointer { Flink }.as_ref<ListEntry>();
}

auto ListEntry::prev() const noexcept -> const ListEntry & {
    return Pointer { Blink }.as_ref<ListEntry>();
}

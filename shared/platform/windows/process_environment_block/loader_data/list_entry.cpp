#include "list_entry.h"

auto ListEntry::next() const noexcept -> const ListEntry & {
    return *static_cast<const ListEntry *>(Flink);
}

auto ListEntry::prev() const noexcept -> const ListEntry & {
    return *static_cast<const ListEntry *>(Blink);
}

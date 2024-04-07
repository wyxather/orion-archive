#pragma once

#include "source/utility/windows.h"

namespace orion::utility::module {

    class LdrDataTableEntryIterator;
    class ListEntry;

    class PebLdrData : private PEB_LDR_DATA {
    private:
        PebLdrData() = delete;

    public:
        PebLdrData(PebLdrData &&) = delete;
        PebLdrData &operator=(PebLdrData &&) = delete;

        PebLdrData(const PebLdrData &) = delete;
        PebLdrData &operator=(const PebLdrData &) = delete;

    private:
        [[nodiscard]] auto get_list_entry() const noexcept -> const ListEntry &;

    public:
        [[nodiscard]] auto begin() const noexcept -> LdrDataTableEntryIterator;
        [[nodiscard]] auto end() const noexcept -> LdrDataTableEntryIterator;
    };

}  // namespace orion::utility::module

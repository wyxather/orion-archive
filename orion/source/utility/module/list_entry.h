#pragma once

#include "source/utility/windows.h"

namespace orion::utility::module {

    class ListEntry final : private LIST_ENTRY {
    private:
        ListEntry() = delete;

    public:
        ListEntry(ListEntry &&) = delete;
        ListEntry &operator=(ListEntry &&) = delete;

        ListEntry(const ListEntry &) = delete;
        ListEntry &operator=(const ListEntry &) = delete;

        [[nodiscard]] auto next() const noexcept -> const ListEntry &;
        [[nodiscard]] auto prev() const noexcept -> const ListEntry &;
    };

}  // namespace orion::utility::module

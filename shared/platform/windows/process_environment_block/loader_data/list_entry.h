#pragma once

class ListEntry final : private LIST_ENTRY {
private:
    ListEntry() = delete;

    ListEntry(ListEntry &&) = delete;

    ListEntry(const ListEntry &) = delete;

    ~ListEntry() = delete;

    ListEntry &operator=(ListEntry &&) = delete;

    ListEntry &operator=(const ListEntry &) = delete;

public:
    [[nodiscard]] auto next() const noexcept -> const ListEntry &;

    [[nodiscard]] auto prev() const noexcept -> const ListEntry &;
};

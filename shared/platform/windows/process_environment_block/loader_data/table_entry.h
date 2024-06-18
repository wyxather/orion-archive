#pragma once

class ListEntry;

class TableEntry : protected LDR_DATA_TABLE_ENTRY {
private:
    TableEntry() = delete;

    TableEntry(TableEntry &&) = delete;

    TableEntry(const TableEntry &) = delete;

    ~TableEntry() = delete;

    TableEntry &operator=(TableEntry &&) = delete;

    TableEntry &operator=(const TableEntry &) = delete;

public:
    [[nodiscard]] auto get_list_entry() const noexcept -> const ListEntry &;
};

class TableEntryIterator {
private:
    const TableEntry *table_entry_ptr;

public:
    explicit TableEntryIterator(const TableEntry &table_entry) noexcept;

    TableEntryIterator(TableEntryIterator &&) = delete;

    TableEntryIterator(const TableEntryIterator &) = delete;

    constexpr ~TableEntryIterator() noexcept = default;

    TableEntryIterator &operator=(TableEntryIterator &&) = delete;

    TableEntryIterator &operator=(const TableEntryIterator &) = delete;

    auto operator++() noexcept -> void;

    [[nodiscard]] auto operator!=(const TableEntryIterator &other) const noexcept -> bool;

    [[nodiscard]] auto operator*() const noexcept -> const TableEntry &;
};

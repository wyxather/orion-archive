#pragma once

class ListEntry;

class TableEntryIterator;

class LoaderData : private PEB_LDR_DATA {
private:
    LoaderData() = delete;

    LoaderData(LoaderData &&) = delete;

    LoaderData(const LoaderData &) = delete;

    ~LoaderData() = delete;

    LoaderData &operator=(LoaderData &&) = delete;

    LoaderData &operator=(const LoaderData &) = delete;

    [[nodiscard]] auto get_list_entry() const noexcept -> const ListEntry &;

protected:
    [[nodiscard]] auto begin() const noexcept -> TableEntryIterator;

    [[nodiscard]] auto end() const noexcept -> TableEntryIterator;
};

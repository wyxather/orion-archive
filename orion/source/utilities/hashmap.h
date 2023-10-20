#pragma once

namespace orion::utilities
{

template <typename Data, typename Key = std::uint32_t> class HashMap
{
    std::vector<std::pair<Key, Data>> data;

    template <typename... Args> constexpr auto emplace(Key key, Args&&... args) noexcept -> void
    {
        data.emplace_back(std::piecewise_construct, std::forward_as_tuple(key),
                          std::forward_as_tuple(std::forward<Args>(args)...));
        std::ranges::sort(data, {}, &decltype(data)::value_type::first);
    }

  public:
    NON_COPYABLE(HashMap);

    constexpr explicit HashMap() noexcept = default;

    constexpr explicit HashMap(const std::size_t size) noexcept
    {
        data.reserve(size);
    }

    constexpr HashMap(HashMap&&) noexcept = default;
    constexpr HashMap& operator=(HashMap&&) noexcept = default;

    NODISCARD constexpr auto find(Key key) noexcept -> Data*
    {
        if (const auto it = std::ranges::lower_bound(data, key, {}, &decltype(data)::value_type::first);
            it != data.cend() && it->first == key)
            return &it->second;
        return nullptr;
    }

    NODISCARD constexpr auto find(Key key) const noexcept -> const Data*
    {
        if (const auto it = std::ranges::lower_bound(data, key, {}, &decltype(data)::value_type::first);
            it != data.cend() && it->first == key)
        {
            return &it->second;
        }
        return nullptr;
    }

    template <typename... Args> constexpr auto insert(Key key, Args&&... args) noexcept -> void
    {
        if (find(key) != nullptr)
        {
            return;
        }
        data.emplace_back(std::piecewise_construct, std::forward_as_tuple(key),
                          std::forward_as_tuple(std::forward<Args>(args)...));
        std::ranges::sort(data, {}, &decltype(data)::value_type::first);
    }

    NODISCARD constexpr auto operator[](Key key) noexcept -> Data&
    {
        if (const auto value = find(key))
        {
            return *value;
        }
        emplace(key);
        return *find(key);
    }

    NODISCARD constexpr auto size() const noexcept
    {
        return data.size();
    }

    NODISCARD constexpr auto begin() noexcept
    {
        return data.begin();
    }

    NODISCARD constexpr auto begin() const noexcept
    {
        return data.cbegin();
    }

    NODISCARD constexpr auto end() noexcept
    {
        return data.end();
    }

    NODISCARD constexpr auto end() const noexcept
    {
        return data.cend();
    }
};

} // namespace orion::utilities

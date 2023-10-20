#pragma once

namespace orion::utilities
{

template <stb::fixed_string str> class String final
{
  public:
    NON_COPYABLE(String)
    NON_MOVEABLE(String)

  private:
    static inline auto value = xorarr(stb::consteval_value<str>::value);

  public:
    constexpr explicit String() noexcept
    {
        value.crypt();
    }

    constexpr ~String() noexcept
    {
        value.crypt();
    }

    NODISCARD static consteval auto size() noexcept
    {
        using size_type = decltype(value)::size_type;
        return static_cast<size_type>(value.size());
    }

    NODISCARD constexpr auto c_str() const noexcept
    {
        using const_pointer = decltype(value)::const_pointer;
        return static_cast<const_pointer>(value.get());
    }

    NODISCARD constexpr explicit(false) operator const char*() const noexcept
    {
        using const_pointer = decltype(value)::const_pointer;
        return static_cast<const_pointer>(value.get());
    }
};

} // namespace orion::utilities

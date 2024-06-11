#pragma once

#include <array>
#include <ranges>

template<typename T, std::size_t N>
class String final : public std::array<T, N> {
public:
    consteval explicit(false) String(const T (&str)[N]) noexcept
        : std::array<T, N> {} {
        std::ranges::copy(str, std::array<T, N>::data());
    }

    consteval String(String &&) noexcept = default;

    consteval String(const String &) noexcept = default;

    constexpr ~String() noexcept = default;

    consteval String &operator=(String &&) noexcept = default;

    consteval String &operator=(const String &) noexcept = default;
};

template<std::size_t N>
String(const char (&)[N]) -> String<char, N>;

template<std::size_t N>
String(const wchar_t (&)[N]) -> String<wchar_t, N>;

#pragma once

#include <array>
#include <ranges>
#include <utility>

#include "string.h"

template<String Filepath>
class Path final {
private:
    [[nodiscard]] static consteval auto extract_filename() noexcept {
        constexpr auto backslash =
            std::ranges::find_if(Filepath | std::views::reverse, [](const auto c) {
                return c == '\\';
            });
        constexpr auto dot =
            std::ranges::find_if(Filepath | std::views::reverse, [](const auto c) {
                return c == '.';
            });
        constexpr auto backslash_index =
            std::distance(Filepath.cbegin(), backslash.base());
        constexpr auto dot_index = std::distance(Filepath.cbegin(), dot.base());
        constexpr auto size = dot_index - backslash_index - 1;
        auto result = std::array<typename decltype(Filepath)::value_type, size> {};
        std::copy(
            Filepath.cbegin() + backslash_index,
            Filepath.cbegin() + backslash_index + size,
            result.begin()
        );
        return result;
    }

public:
    Path() = delete;

    Path(Path &&) = delete;

    Path(const Path &) = delete;

    ~Path() = delete;

    Path &operator=(Path &&) = delete;

    Path &operator=(const Path &) = delete;

    static constexpr auto filename = extract_filename();
};

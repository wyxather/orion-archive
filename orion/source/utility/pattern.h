#pragma once

#include <array>
#include <bit>
#include <concepts>
#include <cstddef>
#include <cstdint>
#include <ranges>
#include <span>

#include "source/utility/string.h"

namespace orion::utility {

    template<String str, std::uint8_t masked>
    class Pattern final {
    private:
        template<std::integral T, std::size_t N, std::integral U>
        [[nodiscard]] static consteval auto find_first_of_start(
            const std::array<T, N> &data,
            const std::size_t start,
            const U ch
        ) noexcept -> std::size_t {
            auto idx = start;
            while ( idx < N && data[idx] != static_cast<T>(ch) ) {
                ++idx;
            }
            return idx;
        }

        template<std::integral T, std::size_t N, std::integral U>
        [[nodiscard]] static consteval auto find_first_not_of_start(
            const std::array<T, N> &data,
            const std::size_t start,
            const U ch
        ) noexcept -> std::size_t {
            auto idx = start;
            while ( idx < N && data[idx] == static_cast<T>(ch) ) {
                ++idx;
            }
            return idx;
        }

        template<std::integral T, std::size_t N, std::integral U>
        [[nodiscard]] static consteval auto find_last_not_of_start(
            const std::array<T, N> &data,
            const std::size_t start,
            const U ch
        ) noexcept -> std::size_t {
            auto idx = start;
            while ( idx >= 0 && data[idx] == static_cast<T>(ch) ) {
                --idx;
            }
            return idx;
        }

        template<std::integral T, std::size_t N, std::integral U>
        [[nodiscard]] static consteval auto find_last_not_of(
            const std::array<T, N> &data,
            const U ch
        ) noexcept -> std::size_t {
            auto idx = data.size() - 2;
            while ( idx >= 0 && data[idx] == static_cast<T>(ch) ) {
                --idx;
            }
            return idx;
        }

        template<std::integral T>
        [[nodiscard]] static consteval auto char_to_hex(const T ch) noexcept -> int {
            if ( ch >= '0' && ch <= '9' ) {
                return int { ch - '0' };
            }
            if ( ch >= 'A' && ch <= 'F' ) {
                return int { ch - 'A' + 10 };
            }
            return int { ch - 'a' + 10 };
        }

        template<std::integral T, T F = 16>
        [[nodiscard]] static consteval auto concat_hex(const T lhs, const T rhs) noexcept -> T {
            return T { F * lhs + rhs };
        }

        template<std::integral T>
        [[nodiscard]] static constexpr auto is_same(
            const std::span<T> pattern,
            const std::span<T> bytes
        ) noexcept -> bool {
            for ( const auto [a, b] : std::ranges::views::zip(pattern, bytes) ) {
                if ( a == static_cast<T>(masked) ) [[unlikely]] {
                    continue;
                }
                if ( a == b ) {
                    continue;
                }
                return bool { false };
            }
            return bool { true };
        }

        template<typename Type = std::uint8_t, Type delimiter = ' ', Type mask = '?'>
        class Builder final {
        private:
            Builder() = delete;

            Builder(Builder &&) = delete;
            Builder &operator=(Builder &&) = delete;

            Builder(const Builder &) = delete;
            Builder &operator=(const Builder &) = delete;

            class Parser final {
            private:
                Parser() = delete;

                Parser(Parser &&) = delete;
                Parser &operator=(Parser &&) = delete;

                Parser(const Parser &) = delete;
                Parser &operator=(const Parser &) = delete;

            public:
                class Result final {
                private:
                    const std::size_t delimiter_count;
                    const std::size_t start;
                    const std::size_t next;
                    const std::size_t end;

                public:
                    consteval explicit Result(
                        const std::size_t delimiter_count,
                        const std::size_t start,
                        const std::size_t next,
                        const std::size_t end
                    ) noexcept
                        : delimiter_count { delimiter_count }
                        , start { start }
                        , next { next }
                        , end { end } {};

                    Result(Result &&) = delete;
                    Result &operator=(Result &&) = delete;

                    Result(const Result &) = delete;
                    Result &operator=(const Result &) = delete;

                    [[nodiscard]] consteval auto get_delimiter_count() const noexcept -> auto {
                        return delimiter_count;
                    }

                    [[nodiscard]] consteval auto get_start() const noexcept -> auto {
                        return start;
                    }

                    [[nodiscard]] consteval auto get_next() const noexcept -> auto {
                        return next;
                    }

                    [[nodiscard]] consteval auto get_end() const noexcept -> auto {
                        return end;
                    }
                };

                [[nodiscard]] static consteval auto parse() noexcept -> Result {
                    constexpr auto start = find_first_not_of_start(str, 0, delimiter);
                    constexpr auto next = find_first_of_start(str, start, delimiter);
                    constexpr auto end = find_last_not_of(str, delimiter);
                    auto count = std::size_t { 1 };
                    auto previous_delimiter = false;
                    for ( auto i = next; i < end; ++i ) {
                        if ( str[i] == delimiter ) {
                            if ( !previous_delimiter ) {
                                ++count;
                            }
                            previous_delimiter = true;
                        } else {
                            previous_delimiter = false;
                        }
                    }
                    return Result { count, start, next, end };
                }
            };

        public:
            [[nodiscard]] static consteval auto build() noexcept {
                constexpr auto data = Parser::parse();
                constexpr auto count = data.get_delimiter_count();
                constexpr auto start = data.get_start();
                constexpr auto next = data.get_next();
                constexpr auto end = data.get_end();

                auto result = std::array<Type, count> {};
                auto skips = std::array<std::size_t, count> {};
                auto skipped = std::size_t {};
                auto traversed = start;

                auto previous_skip = false;
                for ( auto i = start; i < end; ++i ) {
                    if ( str[i] == delimiter ) {
                        if ( !previous_skip ) {
                            skips[skipped] = traversed;
                            ++skipped;
                        }
                        previous_skip = true;
                    } else {
                        previous_skip = false;
                    }
                    ++traversed;
                }

                auto one_char = (str[start + 1] == delimiter);
                if ( str[start] == mask ) {
                    result[0] = static_cast<Type>(masked);
                } else if ( one_char ) {
                    result[0] = static_cast<Type>(char_to_hex(str[start]));
                } else {
                    result[0] = static_cast<Type>(
                        concat_hex(char_to_hex(str[start]), char_to_hex(str[start + 1]))
                    );
                }

                auto conversions = std::size_t { 1 };
                for ( auto i = next; i < end; ++i ) {
                    for ( const auto entry : skips ) {
                        if ( entry != i ) {
                            continue;
                        }
                        if ( entry >= end ) {
                            continue;
                        }
                        const auto idx = find_first_not_of_start(str, i + 1, delimiter);
                        one_char = (str[idx + 1] == delimiter);
                        if ( str[idx] == mask ) {
                            result[conversions] = static_cast<Type>(masked);
                        } else if ( one_char ) {
                            result[conversions] =
                                static_cast<Type>(char_to_hex(str[idx]));
                        } else {
                            result[conversions] = static_cast<Type>(
                                concat_hex(char_to_hex(str[idx]), char_to_hex(str[idx + 1]))
                            );
                        }
                        conversions += 1;
                    }
                }

                return result;
            }
        };

    public:
        static constexpr auto value = Builder<>::build();

        consteval Pattern() noexcept = default;

        Pattern(Pattern &&) = delete;
        Pattern &operator=(Pattern &&) = delete;

        Pattern(const Pattern &) = delete;
        Pattern &operator=(const Pattern &) = delete;

        template<std::integral T>
        [[nodiscard]] static constexpr auto find(
            const std::span<T> pattern,
            const std::span<T> bytes
        ) noexcept -> T * {
            constexpr auto idx_first_non_wildcard_char =
                find_first_not_of_start(value, 0, masked);
            constexpr auto idx_last_non_wildcard_char =
                find_last_not_of_start(value, value.size() - 1, masked);
            constexpr auto first_non_wildcard_char = value[idx_first_non_wildcard_char];
            constexpr auto last_non_wildcard_char = value[idx_last_non_wildcard_char];
            constexpr auto byte_span_per_iteration = value.size() - 1 + sizeof(__m128i);

            const auto pattern_without_leading_trailing_wildcards_without_first_last_char =
                pattern.subspan(
                    idx_first_non_wildcard_char + 1,
                    idx_last_non_wildcard_char - idx_first_non_wildcard_char - 1
                );

            const auto first_char_mask =
                _mm_set1_epi8(static_cast<char>(first_non_wildcard_char));
            const auto last_char_mask =
                _mm_set1_epi8(static_cast<char>(last_non_wildcard_char));

            auto index = std::size_t {};
            for ( ; (bytes.size() - index) >= byte_span_per_iteration; index +=
                  sizeof(__m128i) ) {
                const auto possible_first_chars = _mm_loadu_si128(
                    (const __m128i *)(&bytes[index + idx_first_non_wildcard_char])
                );
                const auto possible_last_chars = _mm_loadu_si128(
                    (const __m128i *)(&bytes[index + idx_last_non_wildcard_char])
                );

                const auto first_char_match_pos =
                    _mm_cmpeq_epi8(first_char_mask, possible_first_chars);
                const auto last_char_match_pos =
                    _mm_cmpeq_epi8(last_char_mask, possible_last_chars);

                for ( auto mask = static_cast<std::uint16_t>(_mm_movemask_epi8(
                          _mm_and_si128(first_char_match_pos, last_char_match_pos)
                      ));
                      mask != 0;
                      mask = mask & (mask - 1) ) {
                    if ( const auto bit_pos = std::countr_zero(mask); is_same(
                             pattern_without_leading_trailing_wildcards_without_first_last_char,
                             bytes.subspan(
                                 index + bit_pos + idx_first_non_wildcard_char + 1,
                                 pattern_without_leading_trailing_wildcards_without_first_last_char
                                     .size()
                             )
                         ) ) {
                        return &bytes[index + bit_pos];
                    }
                }
            }

            for ( ; index + (idx_last_non_wildcard_char - idx_first_non_wildcard_char)
                  < bytes.size();
                  ++index ) {
                if ( bytes[index] != first_non_wildcard_char ) {
                    continue;
                }
                if ( bytes[index + (idx_last_non_wildcard_char - idx_first_non_wildcard_char)]
                     != last_non_wildcard_char ) {
                    continue;
                }
                if constexpr ( (idx_last_non_wildcard_char - idx_first_non_wildcard_char) > 0 ) {
                    if ( is_same(
                             pattern_without_leading_trailing_wildcards_without_first_last_char,
                             bytes.subspan(
                                 index + 1,
                                 pattern_without_leading_trailing_wildcards_without_first_last_char
                                     .size()
                             )
                         ) ) {
                        return &bytes[index];
                    }
                } else {
                    if ( is_same(
                             pattern_without_leading_trailing_wildcards_without_first_last_char,
                             bytes.subspan(
                                 index,
                                 pattern_without_leading_trailing_wildcards_without_first_last_char
                                     .size()
                             )
                         ) ) {
                        return &bytes[index];
                    }
                }
            }

            return nullptr;
        }
    };

}  // namespace orion::utility

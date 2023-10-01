#pragma once

namespace orion::utilities {

    class Memory final {
    public:
        NON_CONSTRUCTIBLE(Memory);

        /// <summary>
        /// Requires Kernel32.
        /// </summary>
        /// <param name="module_handle"></param>
        /// <returns></returns>
        static auto get_module_bytes(const HMODULE module_handle) noexcept
            -> std::span<const std::uint8_t>;

    private:
        static constexpr auto PATTERN_MASKED = '\0';
        using PatternType = std::uint8_t;
        using PatternBuilder = stb::basic_hex_string_array_conversion<
            ' ',
            '?',
            PatternType,
            PATTERN_MASKED>;

    public:
        template<stb::fixed_string str>
        class Pattern final {
        public:
            NON_COPYABLE(Pattern)
            NON_MOVEABLE(Pattern)

        private:
            NODISCARD static constexpr auto compare(
                const std::span<const std::uint8_t>& bytes,
                const std::span<const PatternType>& pattern
            ) noexcept -> bool {
                for (std::size_t index = 0; index < bytes.size(); ++index) {
                    if (bytes[index] != pattern[index]
                        && pattern[index] != PATTERN_MASKED) {
                        return false;
                    }
                }
                return true;
            }

            static inline auto value = xorarr(
                stb::consteval_value<PatternBuilder::build<str>::value>::value
            );

        public:
            constexpr explicit Pattern() noexcept {
                value.crypt();
            }

            constexpr ~Pattern() noexcept {
                value.crypt();
            }

            NODISCARD static consteval auto size() noexcept {
                using size_type = decltype(value)::size_type;
                return static_cast<size_type>(value.size());
            }

            NODISCARD constexpr auto data() const noexcept {
                using const_pointer = decltype(value)::const_pointer;
                return static_cast<const_pointer>(value.get());
            }

            NODISCARD constexpr auto
            find(const std::span<const std::uint8_t>& bytes) const noexcept
                -> const PatternType* {
                const std::span<const PatternType> pattern(data(), size() + 1);

                const auto index_of_last_pattern_char = pattern.size() - 1;
                const auto pattern_without_first_and_last_char =
                    pattern.subspan(
                        1,
                        pattern.size() > 2 ? pattern.size() - 2 : 0
                    );
                const auto byte_span_per_iteration =
                    index_of_last_pattern_char + sizeof(__m128i);

                const auto first_char_mask =
                    _mm_set1_epi8(static_cast<char>(pattern.front()));
                const auto last_char_mask =
                    _mm_set1_epi8(static_cast<char>(pattern.back()));

                std::size_t index = 0;

                for (; byte_span_per_iteration <= bytes.size() - index;
                     index += sizeof(__m128i)) {
                    const auto possible_first_chars = _mm_loadu_si128(
                        reinterpret_cast<const __m128i*>(&bytes[index])
                    );
                    const auto possible_last_chars =
                        _mm_loadu_si128(reinterpret_cast<const __m128i*>(
                            &bytes[index + index_of_last_pattern_char]
                        ));

                    const auto first_char_match_pos =
                        _mm_cmpeq_epi8(first_char_mask, possible_first_chars);
                    const auto last_char_match_pos =
                        _mm_cmpeq_epi8(last_char_mask, possible_last_chars);

                    auto mask = static_cast<std::uint16_t>(_mm_movemask_epi8(
                        _mm_and_si128(first_char_match_pos, last_char_match_pos)
                    ));
                    while (mask != 0) {
                        const auto bit_pos = std::countr_zero(mask);
                        if (const auto match = compare(
                                bytes.subspan(
                                    index + bit_pos + 1,
                                    pattern_without_first_and_last_char.size()
                                ),
                                pattern_without_first_and_last_char
                            );
                            match) {
                            return &bytes[index + bit_pos];
                        }
                        mask = mask & (mask - 1);
                    }
                }
                return nullptr;
            }
        };
    };

}  // namespace orion::utilities

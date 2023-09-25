#pragma once

#ifndef JM_XORSTR_DISABLE_AVX_INTRINSICS
    #define JM_XORSTR_DISABLE_AVX_INTRINSICS
#endif

#include "Dependencies/xorstr.hpp"

#ifndef xorarr
    #define xorarr(arr) \
        ::jm::xor_string( \
            []() { return arr.data(); }, \
            std::integral_constant<std::size_t, arr.size()> {}, \
            std::make_index_sequence<::jm::detail::_buffer_size<sizeof(arr)>( \
            )> {} \
        )
#endif

namespace orion::utils {
    template<stb::fixed_string _Str>
    class String final {
    public:
        constexpr String() noexcept {
            String::data.crypt();
        }

        constexpr ~String() noexcept {
            String::data.crypt();
        }

        String(String&&) = delete;
        String& operator=(String&&) = delete;

        String(const String&) = delete;
        String& operator=(const String&) = delete;

        [[nodiscard]] static constexpr auto size() noexcept {
            return static_cast<decltype(String::data)::size_type>(
                String::data.size()
            );
        }

        [[nodiscard]] static constexpr auto c_str() noexcept {
            return static_cast<decltype(String::data)::const_pointer>(
                String::data.get()
            );
        }

        [[nodiscard]] constexpr operator const char*() const noexcept {
            return static_cast<decltype(String::data)::const_pointer>(
                String::data.get()
            );
        }

    private:
        static inline auto data = xorarr(stb::consteval_value<_Str>::value);
    };
}  // namespace orion::utils

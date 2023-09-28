#pragma once

#pragma push_macro("JM_XORSTR_DISABLE_AVX_INTRINSICS")
#ifndef JM_XORSTR_DISABLE_AVX_INTRINSICS
    #define JM_XORSTR_DISABLE_AVX_INTRINSICS
#endif
#include "dependencies/xorstr.hpp"
#pragma pop_macro("JM_XORSTR_DISABLE_AVX_INTRINSICS")

#ifndef xorarr
    #define xorarr(arr) \
        ::jm::xor_string( \
            []() { return arr.data(); }, \
            std::integral_constant<std::size_t, arr.size()> {}, \
            std::make_index_sequence<::jm::detail::_buffer_size<sizeof(arr)>( \
            )> {} \
        )
#endif

namespace orion::utilities {

    template<stb::fixed_string str>
    class String final {
    public:
        NON_COPYABLE(String)
        NON_MOVEABLE(String)

    private:
        static inline auto data = xorarr(stb::consteval_value<str>::value);

    public:
        constexpr explicit String() noexcept {
            data.crypt();
        }

        constexpr ~String() noexcept {
            data.crypt();
        }

        NODISCARD static consteval auto size() noexcept {
            using size_type = decltype(data)::size_type;
            return static_cast<size_type>(data.size());
        }

        NODISCARD constexpr auto c_str() const noexcept {
            using const_pointer = decltype(data)::const_pointer;
            return static_cast<const_pointer>(data.get());
        }

        NODISCARD constexpr explicit(false) operator const
            char*() const noexcept {
            using const_pointer = decltype(data)::const_pointer;
            return static_cast<const_pointer>(data.get());
        }
    };

}  // namespace orion::utilities

#pragma once

#include "source/framework.h"

#ifndef NON_MOVEABLE
    #define NON_MOVEABLE(c) \
        c(c&&) = delete; \
        c& operator=(c&&) = delete;
#endif

#ifndef NON_COPYABLE
    #define NON_COPYABLE(c) \
        c(const c&) = delete; \
        c& operator=(const c&) = delete;
#endif

#ifndef NON_CONSTRUCTIBLE
    #define NON_CONSTRUCTIBLE(c) \
        c() = delete; \
        ~c() = delete; \
        NON_COPYABLE(c) \
        NON_MOVEABLE(c)
#endif

#ifndef NODISCARD
    #define NODISCARD _NODISCARD
#endif

#ifdef __cplusplus

    #include <d3d11.h>
    #include <d3d9.h>
    #include <wrl/client.h>

    #include <filesystem>
    #include <numbers>
    #include <span>

    #include "dependencies/stb.hh"

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
                std::make_index_sequence< \
                    ::jm::detail::_buffer_size<sizeof(arr)>()> {} \
            )
    #endif

    #include "source/hooks/hooks.h"
    #include "source/utilities/fnv1a.h"
    #include "source/utilities/hashmap.h"
    #include "source/utilities/imgui.h"
    #include "source/utilities/math.h"
    #include "source/utilities/memory.h"
    #include "source/utilities/string.h"
    #include "source/utilities/virtual_method.h"

#endif  // __cplusplus

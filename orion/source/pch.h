#ifndef PCH_H
#define PCH_H

#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

#include <Psapi.h>

#include <initguid.h>
#ifdef __cplusplus
#include <wrl/client.h>
#endif

#include <d3d11.h>
#include <d3d9.h>
#include <dinput.h>

#ifdef __cplusplus
#include <numbers>
#include <source_location>
#endif

#ifdef __cplusplus
#define IMGUI_DEFINE_MATH_OPERATORS
#define IMGUI_DISABLE_OBSOLETE_FUNCTIONS
#ifdef NDEBUG
#define IMGUI_DISABLE_DEMO_WINDOWS
#define IMGUI_DISABLE_DEBUG_TOOLS
#endif
#define IMGUI_DISABLE_WIN32_DEFAULT_CLIPBOARD_FUNCTIONS
#define IMGUI_DISABLE_WIN32_DEFAULT_IME_FUNCTIONS
#define IMGUI_DISABLE_WIN32_FUNCTIONS
#define IMGUI_DISABLE_FILE_FUNCTIONS
#define IM_STRV_CLASS_EXTRA                                                                                            \
    constexpr explicit ImStrv( const char* const str, const std::size_t size ) noexcept                                \
    {                                                                                                                  \
        Begin = str;                                                                                                   \
        End   = str + size;                                                                                            \
    }
#define IMGUI_IMPL_WIN32_DISABLE_GAMEPAD
#include "dependencies/imgui/imgui.h"
#include "dependencies/imgui/imgui_internal.h"
#endif

#ifdef __cplusplus
#define JSON_NO_IO
#define JSON_NOEXCEPTION
#include "dependencies/json.hpp"
#endif

#ifdef __cplusplus
#define LAZY_IMPORTER_CASE_INSENSITIVE
#include "dependencies/lazy_importer.hpp"
#define LI_MOD_( name )  ::li::detail::lazy_module<LAZY_IMPORTER_KHASH( name )>
#define LI_MOD( name )   LI_MOD_( name )
#define LI_FUNC_( name ) ::li::detail::lazy_function<LAZY_IMPORTER_KHASH( #name ), decltype( &name )>
#define LI_FUNC( name )  LI_FUNC_( name )
#endif

#include "dependencies/minhook/include/MinHook.h"

#ifdef __cplusplus
#define STB_OMIT_TESTS
#include "dependencies/stb.hh"
#endif

#ifdef __cplusplus
#define JM_XORSTR_DISABLE_AVX_INTRINSICS
#include "dependencies/xorstr.hpp"
#define xorarr( arr )                                                                                                  \
    ::jm::xor_string(                                                                                                  \
        []()                                                                                                           \
        {                                                                                                              \
            return arr.data();                                                                                         \
        },                                                                                                             \
        std::integral_constant<std::size_t, arr.size()> {},                                                            \
        std::make_index_sequence<::jm::detail::_buffer_size<sizeof( arr )>()> {} )
#define xorarr_( arr ) xorarr( arr ).crypt_get()
#endif

#ifdef __cplusplus
#include "source/utilities/math.h"
#include "source/utilities/memory.h"
#include "source/utilities/ret_spoof.h"

#include "source/utilities/minhook.h"
#include "source/utilities/option.h"
#include "source/utilities/string.h"
#endif

#endif

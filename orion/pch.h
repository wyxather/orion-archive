#ifndef PCH_H
#define PCH_H

#ifdef __cplusplus
    #define NOMINMAX
    #define IMGUI_DEFINE_MATH_OPERATORS
    #define IM_STRV_CLASS_EXTRA \
        constexpr explicit ImStrv(const char *const str, const int size) noexcept { \
            Begin = str; \
            End = str + size; \
        } \
        template<typename XorArr> \
        constexpr explicit ImStrv(const XorArr &xor_arr) noexcept { \
            Begin = xor_arr.data(); \
            End = Begin + (xor_arr.size() - 1); \
        }
    #define IMGUI_DISABLE_OBSOLETE_FUNCTIONS
    #define IMGUI_DISABLE_WIN32_DEFAULT_CLIPBOARD_FUNCTIONS
    #define IMGUI_DISABLE_WIN32_DEFAULT_IME_FUNCTIONS
    #define IMGUI_DISABLE_WIN32_FUNCTIONS
    #define IMGUI_DISABLE_FILE_FUNCTIONS
    #define IMGUI_DISABLE_DEFAULT_ALLOCATORS
    #define IMGUI_IMPL_WIN32_DISABLE_GAMEPAD
    #ifdef NDEBUG
        #define IMGUI_DISABLE_DEMO_WINDOWS
        #define IMGUI_DISABLE_DEBUG_TOOLS
    #endif
    #include "dependency/imgui/imgui.h"
    #include "dependency/imgui/imgui_internal.h"
#endif

#include "dependency/minhook/include/MinHook.h"

#endif  //PCH_H

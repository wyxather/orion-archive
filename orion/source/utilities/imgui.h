#pragma once

#ifndef IMGUI_USER_CONFIG
    #define IMGUI_USER_CONFIG "source/utilities/imgui.h"
#endif

#ifndef IMGUI_DISABLE_OBSOLETE_FUNCTIONS
    #define IMGUI_DISABLE_OBSOLETE_FUNCTIONS
#endif

#ifndef IMGUI_DISABLE_OBSOLETE_KEYIO
    #define IMGUI_DISABLE_OBSOLETE_KEYIO
#endif

#ifdef NDEBUG
    #ifndef IMGUI_DISABLE_DEMO_WINDOWS
        #define IMGUI_DISABLE_DEMO_WINDOWS
    #endif

    #ifndef IMGUI_DISABLE_DEBUG_TOOLS
        #define IMGUI_DISABLE_DEBUG_TOOLS
    #endif
#endif

#ifndef IMGUI_DISABLE_WIN32_DEFAULT_IME_FUNCTIONS
    #define IMGUI_DISABLE_WIN32_DEFAULT_IME_FUNCTIONS
#endif

#ifndef IMGUI_DISABLE_FILE_FUNCTIONS
    #define IMGUI_DISABLE_FILE_FUNCTIONS
#endif

#ifndef IMGUI_IMPL_WIN32_DISABLE_GAMEPAD
    #define IMGUI_IMPL_WIN32_DISABLE_GAMEPAD
#endif

#ifndef IMGUI_DEFINE_MATH_OPERATORS
    #define IMGUI_DEFINE_MATH_OPERATORS
#endif

#include "dependencies/imgui/imgui.h"
#include "dependencies/imgui/imgui_internal.h"

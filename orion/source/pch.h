#pragma once

#include "framework.h"

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

    #include <filesystem>
    #include <numbers>
    #include <span>

    #pragma warning(push)
    #pragma warning(disable : 28020)
    #include "dependencies/stb.hh"
    #pragma warning(pop)

    #include "modules/modules.h"
    #include "utilities/fnv1a.hpp"
    #include "utilities/imgui.hpp"
    #include "utilities/string.hpp"

#endif  // __cplusplus

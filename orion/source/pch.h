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

    #include "dependencies/stb.hh"
    #include "source/modules/modules.h"
    #include "source/utilities/fnv1a.h"
    #include "source/utilities/imgui.hpp"
    #include "source/utilities/string.h"
    #include "source/utilities/virtual_method.h"

#endif  // __cplusplus

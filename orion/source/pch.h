#pragma once

#include "framework.h"

#ifdef __cplusplus

    #include <filesystem>
    #include <numbers>
    #include <span>

    #pragma warning(push)
    #pragma warning(disable : 28020)
    #include "dependencies/stb.hh"
    #pragma warning(pop)

    #include "modules/modules.h"
    #include "utils/fnv1a.hpp"
    #include "utils/imgui.hpp"
    #include "utils/string.hpp"

#endif  // __cplusplus

#define NON_MOVEABLE(c) \
    c(c&&) = delete; \
    c& operator=(c&&) = delete;

#define NON_COPYABLE(c) \
    c(const c&) = delete; \
    c& operator=(const c&) = delete;

#define NON_CONSTRUCTIBLE(c) \
    c() = delete; \
    ~c() = delete; \
    NON_COPYABLE(c) \
    NON_MOVEABLE(c)

#define NODISCARD [[nodiscard]]

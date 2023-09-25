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

    #include "utils/fnv1a.hpp"
    #include "utils/imgui.hpp"
    #include "utils/lazy_import.hpp"
    #include "utils/string.hpp"

#endif  // __cplusplus

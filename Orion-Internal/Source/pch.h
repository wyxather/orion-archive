#ifndef PCH_H
#define PCH_H

#include <Windows.h>

#ifdef __cplusplus

// Utilities
#include <functional>
#include <optional>
#include <memory>
// Strings
#include <string>
// Containers
#include <vector>
// Algorithms
#include <algorithm>
//Numerics
#include <cmath>
#include <numbers>
// Filesystem
#include <filesystem>

#include <ShlObj.h>

#include "../Dependencies/lazy_importer.hpp"
#include "../Dependencies/xorstr.hpp"
#include "../Dependencies/stb.hh"
#include "../Dependencies/ImGui/imgui.h"
#define IMGUI_DEFINE_MATH_OPERATORS
#include "../Dependencies/ImGui/imgui_internal.h"
#pragma endregion

#include "Utility.h"
#include "SDK.h"

#endif
#endif
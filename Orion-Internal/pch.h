#ifndef PCH_H
#define PCH_H

#include "framework.h"

#ifdef __cplusplus
#include <optional>
#include <memory>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <filesystem>

#include <ShlObj.h>

#include "Dependencies/lazy_importer.hpp"
#include "Dependencies/xorstr.hpp"
#include "Dependencies/stb.hh"
#include "Dependencies/ImGui/imgui.h"
#define IMGUI_DEFINE_MATH_OPERATORS
#include "Dependencies/ImGui/imgui_internal.h"

#include "Utility.h"
#endif

#endif
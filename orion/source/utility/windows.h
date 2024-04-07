#pragma once

#pragma push_macro("NOMINMAX")
#pragma push_macro("WIN32_LEAN_MEAN")

#define NOMINMAX
#define WIN32_LEAN_MEAN

#include <Windows.h>
#include <sdkddkver.h>
#include <winnt.h>
#include <winternl.h>

#pragma pop_macro("NOMINMAX")
#pragma pop_macro("WIN32_LEAN_MEAN")

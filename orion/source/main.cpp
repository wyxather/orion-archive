#include "source/context.h"
#include "source/utility/module.h"
#include "source/utility/windows.h"
#include "source/utility/xorstr.h"

using orion::context;
using orion::utility::Module;
using orion::utility::XorStr;

static constexpr auto ntdll = XorStr<"ntdll"> {};
static constexpr auto kernel32 = XorStr<"kernel32"> {};
static constexpr auto user32 = XorStr<"user32"> {};

EXTERN_C BOOL WINAPI _CRT_INIT(HMODULE, DWORD, LPVOID);

BOOL APIENTRY DllEntryPoint(const HMODULE module_handle, const DWORD reason_for_call, const LPVOID reserved) {
    const auto crt_init = _CRT_INIT(module_handle, reason_for_call, reserved);
    if ( (reason_for_call == DLL_PROCESS_ATTACH) && (crt_init == TRUE) ) {
        context.handle.emplace(module_handle);
        context.ntdll.emplace(*Module::find_module(std::string_view {
            decltype(ntdll)::access().data(),
            decltype(ntdll)::size(),
        }));
        context.kernel32.emplace(*Module::find_module(std::string_view {
            decltype(kernel32)::access().data(),
            decltype(kernel32)::size(),
        }));
        context.user32.emplace(*Module::find_module(std::string_view {
            decltype(user32)::access().data(),
            decltype(user32)::size(),
        }));
        context.console.emplace(*context.ntdll, *context.kernel32, *context.user32);
        context.platform.emplace(*context.ntdll, *context.kernel32, *context.user32);
        context.renderer.emplace(*context.ntdll, *context.kernel32, *context.user32);
        context.input.emplace(*context.handle, *context.user32);
        context.platform->hook();
    }
    return crt_init;
}

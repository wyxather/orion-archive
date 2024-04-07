#include "source/utility/module/peb.h"

#include <intrin.h>

#include "source/utility/pointer.h"

using orion::utility::Pointer;
using orion::utility::module::Peb;

auto Peb::is_being_debugged() const noexcept -> bool {
    return BeingDebugged;
}

auto Peb::get_ldr_data() const noexcept -> const PebLdrData & {
    return Pointer { Ldr }.as_ref<PebLdrData>();
}

auto Peb::get() noexcept -> const Peb & {
    constexpr auto nt_current_peb = []() noexcept {
#ifdef _M_X64
        return __readgsqword(0x60);
#elif _M_IX86
        return __readfsdword(0x30);
#endif
    };
    return Pointer { nt_current_peb() }.as_ref<Peb>();
}

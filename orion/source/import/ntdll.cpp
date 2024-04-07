#include "source/import/ntdll.h"

#include "source/utility/module.h"
#include "source/utility/pointer.h"
#include "source/utility/xorpat.h"
#include "source/utility/xorstr.h"

#define macro_to_string(func) #func
#define resolve_macro(func) macro_to_string(func)

using orion::import::Ntdll;
using orion::utility::Pointer;
using orion::utility::XorPat;
using orion::utility::XorStr;

static constexpr auto jmp_rbx = XorPat<"FF 23", 0> {};

Ntdll::Ntdll(const utility::Module &ntdll) noexcept {
    gadget_address =
        Pointer { decltype(jmp_rbx)::find(ntdll.get_code_section()) }.value<std::uintptr_t>();
}

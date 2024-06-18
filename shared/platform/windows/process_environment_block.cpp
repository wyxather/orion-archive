#include "process_environment_block.h"

#include <bit>
#include <utility>

auto ProcessEnvironmentBlock::is_being_debugged() const noexcept -> bool {
    return std::cmp_not_equal(BeingDebugged, 0);
}

auto ProcessEnvironmentBlock::get_loader_data() const noexcept -> Result<const LoaderData *, Error> {
    if ( Ldr == nullptr ) {
        return Err("Failed to get loader data");
    }
    return std::bit_cast<const LoaderData *>(Ldr);
}

auto ProcessEnvironmentBlock::get() noexcept -> Result<const ProcessEnvironmentBlock *, Error> {
    constexpr auto nt_current_peb = []() noexcept {
#ifdef _M_X64
        return __readgsqword(0x60);
#elif _M_IX86
        return __readfsdword(0x30);
#endif
    };
    const auto peb = nt_current_peb();
    if ( std::cmp_equal(peb, 0) ) {
        return Err("Failed to get process environment block.");
    }
    return std::bit_cast<const ProcessEnvironmentBlock *>(peb);
}

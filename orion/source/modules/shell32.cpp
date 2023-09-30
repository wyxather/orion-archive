#include "source/modules/modules.h"
#include "source/orion.h"

using orion::modules::Shell32;
using orion::utilities::String;

Shell32::Shell32() noexcept {
    constexpr char SHELL32[] = "shell32.dll";
    const auto shell32 = LI_MOD(SHELL32)::safe<decltype(handle)>();
    if (shell32 != nullptr) {
        initialize(shell32);
    } else {
        handle = orion.get_kernel32().load_library_a(String<SHELL32>());
        initialize(handle);
    }
}

Shell32::~Shell32() noexcept {
    if (handle != nullptr) {
        orion.get_kernel32().free_library(handle);
        handle = nullptr;
    }
    sh_get_known_folder_path = nullptr;
}

auto Shell32::initialize(const HMODULE handle) noexcept -> void {
    sh_get_known_folder_path = LI_FUNC(SHGetKnownFolderPath)::in(handle);
}

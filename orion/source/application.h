#pragma once

#include "source/utility/windows.h"

namespace orion {

    class Application final {
    private:
        Application() = delete;

        [[noreturn]] static auto WINAPI unload(LPVOID) noexcept -> void;

    public:
        Application(Application &&) = delete;
        Application &operator=(Application &&) = delete;

        Application(const Application &) = delete;
        Application &operator=(const Application &) = delete;

        static auto setup() noexcept -> void;
        static auto exit(bool should_unload) noexcept -> void;
    };

}  // namespace orion

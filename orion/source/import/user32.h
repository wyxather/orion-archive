#pragma once

#include <cstdint>

#include "source/utility/retspoof.h"
#include "source/utility/windows.h"

namespace orion {

    namespace utility {

        class Module;

    }

    namespace import {

        class User32 final {
        public:
            std::uintptr_t gadget_address;
            utility::RetSpoof<decltype(&GetWindowLongPtr)> get_window_long_ptr;
            utility::RetSpoof<decltype(&SetWindowLongPtr)> set_window_long_ptr;

            explicit User32(const utility::Module &user32) noexcept;

            User32(User32 &&) = delete;
            User32 &operator=(User32 &&) = delete;

            User32(const User32 &) = delete;
            User32 &operator=(const User32 &) = delete;
        };

    }  // namespace import

}  // namespace orion

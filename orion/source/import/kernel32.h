#pragma once

#include <cstdint>

#include "source/utility/retspoof.h"
#include "source/utility/windows.h"

namespace orion {

    namespace utility {

        class Module;

    }

    namespace import {

        class Kernel32 final {
        public:
            std::uintptr_t gadget_address;

            explicit Kernel32(const utility::Module &kernel32) noexcept;

            Kernel32(Kernel32 &&) = delete;
            Kernel32 &operator=(Kernel32 &&) = delete;

            Kernel32(const Kernel32 &) = delete;
            Kernel32 &operator=(const Kernel32 &) = delete;
        };

    }  // namespace import

}  // namespace orion

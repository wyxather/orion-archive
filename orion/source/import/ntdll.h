#pragma once

#include <cstdint>
#include <cstdio>

#include "source/utility/retspoof.h"
#include "source/utility/windows.h"

namespace orion {

    namespace utility {

        class Module;

    }

    namespace import {

        class Ntdll final {
        public:
            std::uintptr_t gadget_address;
            utility::RetSpoof<decltype(&_snprintf)> snprintf;
            utility::RetSpoof<decltype(&_snwprintf)> snwprintf;

            explicit Ntdll(const utility::Module &ntdll) noexcept;

            Ntdll(Ntdll &&) = delete;
            Ntdll &operator=(Ntdll &&) = delete;

            Ntdll(const Ntdll &) = delete;
            Ntdll &operator=(const Ntdll &) = delete;
        };

    }  // namespace import

}  // namespace orion

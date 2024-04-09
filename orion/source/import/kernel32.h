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
            utility::RetSpoof<decltype(&GetProcessHeap)> get_process_heap;
            utility::RetSpoof<decltype(&HeapFree)> heap_free;
            utility::RetSpoof<decltype(&AllocConsole)> alloc_console;
            utility::RetSpoof<decltype(&FreeConsole)> free_console;
            utility::RetSpoof<decltype(&SetConsoleCtrlHandler)> set_console_ctrl_handler;
            utility::RetSpoof<decltype(&GetStdHandle)> get_std_handle;
            utility::RetSpoof<decltype(&GetConsoleWindow)> get_console_window;
            utility::RetSpoof<decltype(&SetConsoleTextAttribute)> set_console_text_attribute;
            utility::RetSpoof<decltype(&WriteConsoleA)> write_console_a;
            utility::RetSpoof<decltype(&WriteConsoleW)> write_console_w;
            utility::RetSpoof<decltype(&GetLocalTime)> get_local_time;
            utility::RetSpoof<decltype(&GetTimeFormatA)> get_time_format_a;
            utility::RetSpoof<decltype(&GetTimeFormatW)> get_time_format_w;
            utility::RetSpoof<decltype(&GetDateFormatA)> get_date_format_a;
            utility::RetSpoof<decltype(&GetDateFormatW)> get_date_format_w;

            explicit Kernel32(const utility::Module &kernel32) noexcept;

            Kernel32(Kernel32 &&) = delete;
            Kernel32 &operator=(Kernel32 &&) = delete;

            Kernel32(const Kernel32 &) = delete;
            Kernel32 &operator=(const Kernel32 &) = delete;
        };

    }  // namespace import

}  // namespace orion

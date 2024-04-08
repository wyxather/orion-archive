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
            utility::RetSpoof<decltype(&EnumWindows)> enum_windows;
            utility::RetSpoof<decltype(&GetWindowThreadProcessId)> get_window_thread_process_id;
            utility::RetSpoof<decltype(&IsWindowVisible)> is_window_visible;
            utility::RetSpoof<decltype(&GetClassNameA)> get_class_name_a;
            utility::RetSpoof<decltype(&GetWindowTextLengthA)> get_window_text_length_a;
            utility::RetSpoof<decltype(&GetWindowTextA)> get_window_text_a;
            utility::RetSpoof<decltype(&MessageBoxA)> message_box_a;
            utility::RetSpoof<decltype(&CallWindowProc)> call_window_proc;

            explicit User32(const utility::Module &user32) noexcept;

            User32(User32 &&) = delete;
            User32 &operator=(User32 &&) = delete;

            User32(const User32 &) = delete;
            User32 &operator=(const User32 &) = delete;
        };

    }  // namespace import

}  // namespace orion

#pragma once

#include <array>
#include <vector>

#include "source/utility/windows.h"

namespace orion {

    namespace import {

        class Ntdll;
        class Kernel32;
        class User32;

    }  // namespace import

    namespace core {

        class Platform final {
        private:
            HWND window_handle = nullptr;
            WNDPROC original_window_proc = nullptr;

        public:
            explicit Platform(
                const import::Ntdll &ntdll,
                const import::Kernel32 &kernel32,
                const import::User32 &user32
            ) noexcept;

            Platform(Platform &&) = delete;
            Platform &operator=(Platform &&) = delete;

            Platform(const Platform &) = delete;
            Platform &operator=(const Platform &) = delete;

            auto hook() noexcept -> void;
            auto unhook() const noexcept -> void;

            [[nodiscard]] auto get_window_handle() const noexcept -> HWND;

            static auto new_frame() noexcept -> void;

        private:
            static auto CALLBACK enum_windows_proc(HWND window, Platform &platform) noexcept -> BOOL;

            [[nodiscard]] static auto get_window_thread_process_id(HWND window) noexcept -> DWORD;
            [[nodiscard]] static auto is_equal_to_current_process_id(DWORD process_id
            ) noexcept -> bool;
            [[nodiscard]] static auto is_window_visible(HWND window) noexcept -> bool;
            [[nodiscard]] static auto get_window_class_name(HWND window
            ) noexcept -> std::array<CHAR, 257>;
            [[nodiscard]] static auto is_console_window(const char *window_class_name
            ) noexcept -> bool;
            [[nodiscard]] static auto get_window_text_length(HWND window) noexcept -> int;
            [[nodiscard]] static auto get_window_text(HWND window, int window_text_length) noexcept
                -> std::vector<CHAR>;
            [[nodiscard]] static auto get_user_input(
                const char *window_class_name,
                const char *window_text
            ) noexcept -> int;

            static auto CALLBACK
            window_proc(HWND window, UINT message, WPARAM w_param, LPARAM l_param) noexcept -> LRESULT;

            [[nodiscard]] static auto is_being_debugged() noexcept -> bool;
        };

    }  // namespace core

}  // namespace orion

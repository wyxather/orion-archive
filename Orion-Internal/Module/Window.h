#pragma once

namespace Orion
{
    namespace Module
    {
        class Window
        {
        public:
            Window() noexcept;
            ~Window() noexcept;

            Window(Window&&) = delete;
            Window(const Window&) = delete;
            Window& operator=(Window&&) = delete;
            Window& operator=(const Window&) = delete;

            void hook() noexcept;
            void unhook() noexcept;

        private:
            static BOOL CALLBACK enumerate(HWND handle, Window* window) noexcept;
            static LRESULT CALLBACK proc(HWND handle, UINT message, WPARAM wParam, LPARAM lParam) noexcept;

            DWORD m_id = {};
            HWND m_handle = {};
            union {
                WNDPROC asWndProc;
                LONG_PTR asLongPtr;
            } m_proc = {};
        };
    }
}
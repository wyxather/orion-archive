#pragma once

namespace Orion
{
    class Application;

    namespace Module
    {
        class Hooks;

        class Input
        {
            const Application& m_app;
            Hooks& m_hooks;

        public:
            enum class Type
            {
                NONE,
                DINPUT8
            };

            Input(const Application& app) noexcept;
            ~Input() noexcept;

            Input(Input&&) = delete;
            Input(const Input&) = delete;
            Input& operator=(Input&&) = delete;
            Input& operator=(const Input&) = delete;

            [[nodiscard]] constexpr auto getType() const noexcept { return m_type; }

            void hook() noexcept;
            void unhook() noexcept;

        private:
            Type m_type = {};
            HMODULE m_handle = {};
        };
    }
}
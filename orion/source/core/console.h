#pragma once

namespace orion::core {

    class Console final {
    public:
        NON_COPYABLE(Console)
        NON_MOVEABLE(Console)

        explicit Console() noexcept;

        ~Console() noexcept;

        auto set_text_output_color(const WORD color) const noexcept -> void;

    private:
        static auto WINAPI ctrl_handler(const DWORD ctrl_type) noexcept -> BOOL;

        FILE* stream = nullptr;
        HANDLE std_output_handle = nullptr;
    };

}  // namespace orion::core

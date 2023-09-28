#pragma once

namespace orion::core {

    class Console final {
    public:
        NON_COPYABLE(Console)
        NON_MOVEABLE(Console)

        enum class Color {
            BLACK,
            BLUE,
            GREEN,
            CYAN,
            RED,
            MAGENTA,
            BROWN,
            LIGHTGRAY,
            DARKGRAY,
            LIGHTBLUE,
            LIGHTGREEN,
            LIGHTCYAN,
            LIGHTRED,
            LIGHTMAGENTA,
            YELLOW,
            WHITE
        };

        explicit Console() noexcept;

        ~Console() noexcept;

    private:
        auto update_time() noexcept -> void;

        FILE* stream = nullptr;
        HANDLE std_output_handle = nullptr;
        tm time = {};

    public:
        auto set_color(Color color) const noexcept -> void;

        template<
            stb::fixed_string _Format,
            Color _Color = Color::LIGHTGREEN,
            typename... _Args>
        constexpr auto log(_Args&&... _Arg) noexcept -> void {
            set_color(_Color);
            Console::update_time();
            std::printf(
                utils::String<"[%2d:%2d:%2d] ">(),
                Console::time.tm_hour,
                Console::time.tm_min,
                Console::time.tm_sec
            );
            std::printf(utils::String<_Format>(), std::forward<_Args>(_Arg)...);
            std::puts(utils::String<"">());
        }
    };

}  // namespace orion::core

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
        class Allocator final {
            const BOOL status = IMPORT(AllocConsole)();

        public:
            NON_COPYABLE(Allocator)
            NON_MOVEABLE(Allocator)

            constexpr Allocator() noexcept = default;

            constexpr ~Allocator() noexcept {
                if (*this)
                    IMPORT(FreeConsole)();
            }

            [[nodiscard]] constexpr explicit operator bool() const noexcept {
                return Allocator::status != 0;
            }
        };

        class Enumerator final {
            [[nodiscard]] static auto match(HWND handle) noexcept -> bool;
            [[nodiscard]] static auto CALLBACK
            enumerate(HWND handle, Enumerator& enumerator) noexcept -> BOOL;

        public:
            NON_COPYABLE(Enumerator)
            NON_MOVEABLE(Enumerator)

            Enumerator() noexcept {
                IMPORT(EnumWindows)
                (WNDENUMPROC(&Console::Enumerator::enumerate), LPARAM(this));
            }

            [[nodiscard]] constexpr explicit operator bool() const noexcept {
                return Enumerator::handle != nullptr;
            }

            HWND handle = nullptr;
        };

        auto update_time() noexcept -> void;

        const Allocator allocator;
        std::optional<const Enumerator> enumerator;
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

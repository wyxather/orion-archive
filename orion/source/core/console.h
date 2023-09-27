#pragma once

namespace orion::core {
    class Console final {
    public:
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

#ifdef NDEBUG
        constexpr Console() noexcept = default;
#else
        Console() noexcept;
#endif

        Console(Console&&) = delete;
        Console& operator=(Console&&) = delete;

        Console(const Console&) = delete;
        Console& operator=(const Console&) = delete;

#ifndef NDEBUG
    private:
        class Allocator final {
            const BOOL status = IMPORT(AllocConsole)();

        public:
            constexpr Allocator() noexcept = default;

            constexpr ~Allocator() noexcept {
                if (*this)
                    IMPORT(FreeConsole)();
            }

            Allocator(Allocator&&) = delete;
            Allocator& operator=(Allocator&&) = delete;

            Allocator(const Allocator&) = delete;
            Allocator& operator=(const Allocator&) = delete;

            [[nodiscard]] constexpr explicit operator bool() const noexcept {
                return Allocator::status != 0;
            }
        };

        class Enumerator final {
            [[nodiscard]] static auto match(HWND handle) noexcept -> bool;
            [[nodiscard]] static auto CALLBACK
            enumerate(HWND handle, Enumerator& enumerator) noexcept -> BOOL;

        public:
            Enumerator() noexcept {
                IMPORT(EnumWindows)
                (WNDENUMPROC(&Console::Enumerator::enumerate), LPARAM(this));
            }

            Enumerator(Enumerator&&) = delete;
            Enumerator& operator=(Enumerator&&) = delete;

            Enumerator(const Enumerator&) = delete;
            Enumerator& operator=(const Enumerator&) = delete;

            [[nodiscard]] constexpr explicit operator bool() const noexcept {
                return Enumerator::handle != nullptr;
            }

            HWND handle = nullptr;
        };

        struct Stream final {
            Stream() noexcept {
                freopen_s(
                    &stream,
                    utils::String<"CONOUT$">(),
                    utils::String<"w">(),
                    stdout
                );
            }

            constexpr ~Stream() noexcept {
                if (*this)
                    std::fclose(Stream::stream);
            }

            Stream(Stream&&) = delete;
            Stream& operator=(Stream&&) = delete;

            Stream(const Stream&) = delete;
            Stream& operator=(const Stream&) = delete;

            [[nodiscard]] constexpr explicit operator bool() const noexcept {
                return Stream::stream != nullptr;
            }

        private:
            FILE* stream = nullptr;
        };

        class Output final {
            const HANDLE output = IMPORT(GetStdHandle)(STD_OUTPUT_HANDLE);

        public:
            constexpr Output() noexcept = default;

            Output(Output&&) = delete;
            Output& operator=(Output&&) = delete;

            Output(const Output&) = delete;
            Output& operator=(const Output&) = delete;

            constexpr auto set_color(Color color) const noexcept -> void {
                IMPORT(SetConsoleTextAttribute)
                    .cached()(Output::output, static_cast<WORD>(color));
            }
        };

        auto update_time() noexcept -> void;

        const Allocator allocator;
        std::optional<const Enumerator> enumerator;
        std::optional<const Stream> stream;
        std::optional<const Output> output;
        tm time = {};
#endif
    public:
        template<
            stb::fixed_string _Format,
            Color _Color = Color::LIGHTGREEN,
            typename... _Args>
        constexpr auto log(_Args&&... _Arg) const noexcept -> void {
#ifndef NDEBUG
            if (Console::output.has_value() == true) {
                Console::output->set_color(_Color);
                Console::update_time();
                std::printf(
                    utils::String<"[%2d:%2d:%2d] ">(),
                    Console::time.tm_hour,
                    Console::time.tm_min,
                    Console::time.tm_sec
                );
                std::printf(
                    utils::String<_Format>(),
                    std::forward<_Args>(_Arg)...
                );
                std::puts(utils::String<"">());
            }
#endif
        }
    };

}  // namespace orion::core

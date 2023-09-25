#pragma once

namespace orion {
    class Platform final {
        class Enumerator final {
            struct Data final {
                constexpr explicit Data(
                    Enumerator& enumerator,
                    const std::optional<const std::uint32_t>& window_class,
                    const std::optional<const std::uint32_t>& window_text
                ) noexcept :
                    enumerator(enumerator),
                    window_class(window_class),
                    window_text(window_text) {}

                Data(Data&&) = delete;
                Data& operator=(Data&&) = delete;

                Data(const Data&) = delete;
                Data& operator=(const Data&) = delete;

                Enumerator& enumerator;
                const std::optional<const std::uint32_t>& window_class;
                const std::optional<const std::uint32_t>& window_text;
            };

            [[nodiscard]] static auto match(HWND handle) noexcept -> bool;
            [[nodiscard]] static auto CALLBACK
            enumerate(HWND handle, Data& data) noexcept -> BOOL;

        public:
            explicit Enumerator(
                const std::optional<const std::uint32_t>& window_class,
                const std::optional<const std::uint32_t>& window_text
            ) noexcept {
                Data data(*this, window_class, window_text);
                IMPORT(EnumWindows)
                (WNDENUMPROC(&Enumerator::enumerate), LPARAM(&data));
            }

            Enumerator(Enumerator&&) = delete;
            Enumerator& operator=(Enumerator&&) = delete;

            Enumerator(const Enumerator&) = delete;
            Enumerator& operator=(const Enumerator&) = delete;

            HWND handle = nullptr;
        };

        const Enumerator enumerator;
        WNDPROC original = nullptr;

    public:
        explicit Platform(
            const std::optional<const std::uint32_t>& window_class,
            const std::optional<const std::uint32_t>& window_text
        ) noexcept :
            enumerator {window_class, window_text} {}

        ~Platform() noexcept;

        Platform(Platform&&) = delete;
        Platform& operator=(Platform&&) = delete;

        Platform(const Platform&) = delete;
        Platform& operator=(const Platform&) = delete;

        [[nodiscard]] constexpr auto&& get_handle() const noexcept {
            return Platform::enumerator.handle;
        }

        [[nodiscard]] constexpr auto&& get_original() const noexcept {
            return Platform::original;
        }

        auto hook() noexcept -> void;
        auto unhook() const noexcept -> void;

        auto new_frame() const noexcept -> void;
    };
}  // namespace orion

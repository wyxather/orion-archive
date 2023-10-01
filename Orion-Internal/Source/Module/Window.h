#pragma once

class Window
{
public:
    enum class Type
    {
        AUTO,
        CLASSNAME,
        WINDOWTEXT,
        BOTH
    };

    explicit Window(Type type = Type::AUTO, std::uint32_t className = Orion::Fnv<"">::value, std::uint32_t windowText = Orion::Fnv<"">::value) noexcept;
    ~Window() noexcept;

    Window(Window&&) = delete;
    Window(const Window&) = delete;
    Window& operator=(Window&&) = delete;
    Window& operator=(const Window&) = delete;

    [[nodiscard]] constexpr auto getHandle() const noexcept { return handle; }

    auto hook() noexcept -> void;
    auto unhook() noexcept -> void;

private:
    static auto __stdcall enumerate(HWND handle, Window* window) noexcept -> BOOL;
    static auto __stdcall proc(HWND handle, UINT message, WPARAM wParam, LPARAM lParam) noexcept -> LRESULT;

    Type type;
    std::array<std::uint32_t, 2> hash = {};
    HWND handle;
    union {
        WNDPROC asWndProc;
        LONG_PTR asLongPtr;
    } originalProc;
};

inline std::optional<Window> window;
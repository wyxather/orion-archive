#pragma once

namespace orion::core
{

class Platform final
{
  public:
    NON_COPYABLE(Platform)
    NON_MOVEABLE(Platform)

    explicit Platform(const std::optional<const std::uint32_t> window_class,
                      const std::optional<const std::uint32_t> window_text) noexcept;

    ~Platform() noexcept;

    auto hook() noexcept -> void;
    auto unhook() noexcept -> void;

    auto imgui_new_frame() const noexcept -> void;

  private:
    class Window final
    {
      public:
        NON_COPYABLE(Window)
        NON_MOVEABLE(Window)

        Platform& platform;
        const DWORD process_id;
        const std::optional<const std::uint32_t> class_name;
        const std::optional<const std::uint32_t> text;

        constexpr explicit Window(Platform& platform, const DWORD process_id,
                                  const std::optional<const std::uint32_t> window_class,
                                  const std::optional<const std::uint32_t> window_text) noexcept
            : platform{platform}, process_id{process_id}, class_name{window_class}, text{window_text}

        {
        }

        static auto CALLBACK enumerate(const HWND window_handle, Window& window) noexcept -> BOOL;

        NODISCARD auto has_same_process_id(const HWND window_handle) const noexcept -> bool;

        NODISCARD static auto get_class_name(const HWND window_handle) noexcept -> std::array<CHAR, 257>;

        NODISCARD static auto get_window_text(const HWND window_handle) noexcept -> std::vector<CHAR>;

        static auto CALLBACK procedure(const HWND window_handle, const UINT message, const WPARAM w_param,
                                       const LPARAM l_param) noexcept -> LRESULT;
    };

    HWND window_handle = nullptr;
    WNDPROC original_window_procedure = nullptr;

  public:
    NODISCARD constexpr auto get_window_handle() const noexcept
    {
        static_assert(sizeof(window_handle) <= sizeof(void*));
        return window_handle;
    }
};

} // namespace orion::core

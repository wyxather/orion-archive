#pragma once

namespace orion::modules {

    class User32 final {
    public:
        NON_COPYABLE(User32)
        NON_MOVEABLE(User32)

        explicit User32() noexcept;

        ~User32() noexcept;

        decltype(&CallWindowProc) call_window_proc = nullptr;
        decltype(&CreateWindowEx) create_window_ex = nullptr;
        decltype(&DestroyWindow) destroy_window = nullptr;
        decltype(&EnumWindows) enum_windows = nullptr;
        decltype(&GetClassNameA) get_class_name_a = nullptr;
        decltype(&GetCursorPos) get_cursor_pos = nullptr;
        decltype(&GetWindowLongPtr) get_window_long_ptr = nullptr;
        decltype(&GetWindowTextA) get_window_text_a = nullptr;
        decltype(&GetWindowTextLengthA) get_window_text_length_a = nullptr;
        decltype(&GetWindowThreadProcessId) get_window_thread_process_id =
            nullptr;
        decltype(&IsWindowVisible) is_window_visible = nullptr;
        decltype(&MessageBoxA) message_box_a = nullptr;
        decltype(&PostMessage) post_message = nullptr;
        decltype(&RegisterClassEx) register_class_ex = nullptr;
        decltype(&SetWindowLongPtr) set_window_long_ptr = nullptr;
        decltype(&UnregisterClass) unregister_class = nullptr;

    private:
        auto initialize(const HMODULE handle) noexcept -> void;

        HMODULE handle = nullptr;
    };

}  // namespace orion::modules

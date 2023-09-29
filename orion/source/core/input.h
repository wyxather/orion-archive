#pragma once

namespace orion::core {

    class Input final {
    public:
        NON_COPYABLE(Input)
        NON_MOVEABLE(Input)

        enum class Type { DirectInput8 };
        enum class Enumerate { Auto, Manual };

        explicit Input(Type type) noexcept;
        explicit Input(Enumerate enumerate) noexcept;

        auto hook() noexcept -> void;
        auto unhook() noexcept -> void;

    private:
        HMODULE handle = nullptr;
        std::optional<const Type> type;
        std::optional<hooks::Type> hooks;

        class DirectInput8 final {
        public:
            NON_CONSTRUCTIBLE(DirectInput8)

            static auto STDMETHODCALLTYPE get_device_state(
                void* const device,
                const DWORD size,
                const LPVOID data
            ) noexcept -> HRESULT;

            static auto STDMETHODCALLTYPE get_device_data(
                void* const device,
                const DWORD size,
                void* const data,
                const LPDWORD count,
                const DWORD flags
            ) noexcept -> HRESULT;
        };
    };

}  // namespace orion::core

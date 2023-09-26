#pragma once

#include "Hooks/MinHook.h"

namespace orion {
    class Input final {
    public:
        enum class Type { DINPUT8 };

        enum class Enumerate { AUTO, MANUAL };

        explicit Input(Type type) noexcept;
        explicit Input(Enumerate enumerate) noexcept;

        Input(Input&&) = delete;
        Input& operator=(Input&&) = delete;

        Input(const Input&) = delete;
        Input& operator=(const Input&) = delete;

        [[nodiscard]] constexpr auto&& get_hooks() const noexcept {
            return Input::hooks.value();
        }

        auto hook() noexcept -> void;

        constexpr auto unhook() const noexcept -> void {
            if (Input::hooks.has_value())
                Input::hooks->restore();
        }

    private:
        HMODULE handle = nullptr;
        std::optional<const Type> type;
        std::optional<Hooks::Type> hooks;
    };
}  // namespace orion

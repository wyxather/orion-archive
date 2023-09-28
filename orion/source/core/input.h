#pragma once

#include "hooks/minhook.h"

namespace orion::core {

    class Input final {
    public:
        NON_COPYABLE(Input)
        NON_MOVEABLE(Input)

        enum class Type { DINPUT8 };
        enum class Enumerate { AUTO, MANUAL };

        explicit Input(Type type) noexcept;
        explicit Input(Enumerate enumerate) noexcept;

        auto hook() noexcept -> void;

        constexpr auto unhook() const noexcept -> void {
            if (hooks.has_value()) {
                hooks->restore();
            }
        }

        NODISCARD constexpr auto get_hooks() const noexcept -> const auto& {
            return hooks.value();
        }

    private:
        HMODULE handle = nullptr;
        std::optional<const Type> type;
        std::optional<Hooks::Type> hooks;
    };

}  // namespace orion::core

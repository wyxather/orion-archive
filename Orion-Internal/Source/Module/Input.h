#pragma once

#include "Hooks.h"

class Input
{
public:
    enum class Type
    {
        NONE,
        DINPUT8,
        AUTO
    };

    Input(Type type = Type::AUTO) noexcept;
    ~Input() noexcept;

    Input(Input&&) = delete;
    Input(const Input&) = delete;
    Input& operator=(Input&&) = delete;
    Input& operator=(const Input&) = delete;

    [[nodiscard]] constexpr auto&& getType() const noexcept { return type; }
    [[nodiscard]] constexpr auto&& getHook() const noexcept { return input; }

    auto hook() noexcept -> void;
    auto unhook() noexcept -> void;

private:
    Type type;
    HMODULE handle;
    HookType input;
};

inline std::optional<Input> input;
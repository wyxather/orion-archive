#pragma once

class Input
{
public:
    enum class Type
    {
        NONE,
        DINPUT8
    };

    Input(Type type = Type::NONE) noexcept;
    ~Input() noexcept;

    Input(Input&&) = delete;
    Input(const Input&) = delete;
    Input& operator=(Input&&) = delete;
    Input& operator=(const Input&) = delete;

    [[nodiscard]] constexpr auto getType() const noexcept { return type; }

    auto hook() noexcept -> void;
    auto unhook() noexcept -> void;

private:
    Type type;
    HMODULE handle;
};

inline std::optional<Input> input;
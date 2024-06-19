#pragma once

class Context final {
public:
    constexpr Context() noexcept = default;

    Context(Context &&) = delete;

    Context(const Context &) = delete;

    constexpr ~Context() noexcept = default;

    Context &operator=(Context &&) = delete;

    Context &operator=(const Context &) = delete;
};

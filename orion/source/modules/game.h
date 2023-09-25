#pragma once

namespace orion {
    class Game final {
    public:
        Game() noexcept;
        ~Game() noexcept;

        auto hook() noexcept -> void;
        auto unhook() const noexcept -> void;

        auto init() noexcept -> void;
        auto draw() noexcept -> void;
        auto validate() noexcept -> void;
        auto invalidate() noexcept -> void;
    };
}  // namespace orion

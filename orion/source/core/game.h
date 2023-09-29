#pragma once

namespace orion::core {

    class Game final {
    public:
        explicit Game() noexcept;

        ~Game() noexcept;

        auto hook() noexcept -> void;
        auto unhook() noexcept -> void;

        auto init() noexcept -> void;
        auto draw() noexcept -> void;
        auto validate() noexcept -> void;
        auto invalidate() noexcept -> void;
    };

}  // namespace orion::core

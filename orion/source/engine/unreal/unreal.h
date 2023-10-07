#pragma once

#ifdef _WIN64

namespace orion {

    namespace core {

        class Game;

    }

    namespace engine::unreal {

        class Dumper final {
            NON_CONSTRUCTIBLE(Dumper);

            friend core::Game;

            static auto dump() noexcept -> void;
        };

    }  // namespace engine::unreal

}  // namespace orion

#endif

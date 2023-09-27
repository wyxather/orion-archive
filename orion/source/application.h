#pragma once

namespace orion {

    namespace core::platform {

        class Window;

    }

    class Application final {
        NON_CONSTRUCTIBLE(Application)

        friend class core::platform::Window;

        static auto setup() noexcept -> void;
        static auto exit() noexcept -> void;
    };

}  // namespace orion

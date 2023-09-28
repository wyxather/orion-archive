#pragma once

namespace orion {

    namespace core {

        class Platform;

    }

    class Application final {
        NON_CONSTRUCTIBLE(Application)

        friend class core::Platform;

        static auto setup() noexcept -> void;
        static auto exit() noexcept -> void;
    };

}  // namespace orion

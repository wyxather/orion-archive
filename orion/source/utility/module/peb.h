#pragma once

#include "source/utility/windows.h"

namespace orion::utility::module {

    class PebLdrData;

    class Peb final : private PEB {
    private:
        Peb() = delete;

    public:
        Peb(Peb &&) = delete;
        Peb &operator=(Peb &&) = delete;

        Peb(const Peb &) = delete;
        Peb &operator=(const Peb &) = delete;

        [[nodiscard]] auto is_being_debugged() const noexcept -> bool;
        [[nodiscard]] auto get_ldr_data() const noexcept -> const PebLdrData &;
        [[nodiscard]] static auto get() noexcept -> const Peb &;
    };

}  // namespace orion::utility::module

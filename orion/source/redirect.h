#pragma once

#include <cstddef>

namespace orion {

    class Redirect final {
    private:
        Redirect() = delete;

    public:
        Redirect(Redirect &&) = delete;
        Redirect &operator=(Redirect &&) = delete;

        Redirect(const Redirect &) = delete;
        Redirect &operator=(const Redirect &) = delete;

        [[nodiscard]] static auto imgui_alloc(std::size_t size, void *user_data) noexcept -> void *;
        static auto imgui_free(void *ptr, void *user_data) noexcept -> void;
    };

}  // namespace orion

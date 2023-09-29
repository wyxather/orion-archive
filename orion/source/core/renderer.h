#pragma once

namespace orion {
    class Renderer final {
    public:
        enum class Type { D3D9, D3D11 };

        enum class Enumerate { AUTO, MANUAL };

        explicit Renderer(Type type) noexcept;
        explicit Renderer(Enumerate enumerate) noexcept;

        ~Renderer() noexcept;

        Renderer(Renderer&&) = delete;
        Renderer& operator=(Renderer&&) = delete;

        Renderer(const Renderer&) = delete;
        Renderer& operator=(const Renderer&) = delete;

        [[nodiscard]] constexpr auto&& get_type() const noexcept {
            return Renderer::type.value();
        }

        [[nodiscard]] constexpr auto&& get_hooks() const noexcept {
            return Renderer::hooks.value();
        }

        auto hook() noexcept -> void;
        auto unhook() const noexcept -> void;

    private:
        HMODULE handle = nullptr;
        std::optional<const Type> type;
        std::optional<hooks::Type> hooks;
    };
}  // namespace orion

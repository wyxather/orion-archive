#pragma once

namespace orion::core
{

class Renderer final
{
  public:
    NON_COPYABLE(Renderer)
    NON_MOVEABLE(Renderer)

    enum class Type
    {
        DirectX9,
        DirectX11
    };
    enum class Enumerate
    {
        Auto,
        Manual
    };

    explicit Renderer(const Type type) noexcept;
    explicit Renderer(const Enumerate enumerate) noexcept;

    ~Renderer() noexcept;

    auto hook() noexcept -> void;
    auto unhook() noexcept -> void;

  private:
    HMODULE handle = nullptr;
    std::optional<const Type> type;
    std::optional<hooks::Type> hooks;

    class DirectX9;
    class DirectX11;

  public:
    NODISCARD constexpr auto get_type() const noexcept -> auto
    {
        return type.value();
    }

    NODISCARD constexpr auto get_hooks() const noexcept -> const auto&
    {
        return hooks.value();
    }
};

} // namespace orion::core

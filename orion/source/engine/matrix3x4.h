#pragma once

namespace orion::engine
{

struct Vector3;

struct Matrix3x4 final
{
  public:
    constexpr explicit Matrix3x4() noexcept = default;

    constexpr ~Matrix3x4() noexcept = default;

    constexpr Matrix3x4(const Matrix3x4&) noexcept = default;
    constexpr Matrix3x4& operator=(const Matrix3x4&) noexcept = default;

    constexpr Matrix3x4(Matrix3x4&&) noexcept = default;
    constexpr Matrix3x4& operator=(Matrix3x4&&) noexcept = default;

    auto origin() const noexcept -> Vector3;

  private:
    std::array<std::array<float, 4>, 3> m{};

  public:
    NODISCARD constexpr auto operator[](const std::size_t index) noexcept -> auto&
    {
        return m[index];
    }

    NODISCARD constexpr auto operator[](const std ::size_t index) const noexcept -> const auto&
    {
        return m[index];
    }
};

} // namespace orion::engine

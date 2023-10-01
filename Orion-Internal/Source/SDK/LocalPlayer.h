#pragma once

class Entity;

template <typename T>
class LocalPlayer
{
public:
    constexpr explicit LocalPlayer() noexcept : localEntity{ nullptr } {}

    LocalPlayer(LocalPlayer&&) = delete;
    LocalPlayer(const LocalPlayer&) = delete;
    LocalPlayer& operator=(LocalPlayer&&) = delete;
    LocalPlayer& operator=(const LocalPlayer&) = delete;

    [[nodiscard]] constexpr explicit operator bool() const noexcept
    {
        assert(localEntity != nullptr);
        return *localEntity != nullptr;
    }

    [[nodiscard]] constexpr auto operator->() const noexcept
    {
        assert(localEntity != nullptr && *localEntity != nullptr);
        return *localEntity;
    }

    constexpr auto operator=(std::uintptr_t address) noexcept
    {
        assert(localEntity == nullptr);
        localEntity = *reinterpret_cast<Entity***>(address);
    }

    [[nodiscard]] constexpr auto get() const noexcept
    {
        assert(localEntity != nullptr && *localEntity != nullptr);
        return *localEntity;
    }

private:
    T** localEntity;
};
static_assert(sizeof(LocalPlayer<Entity>) == 0x4);

inline LocalPlayer<Entity> localPlayer;
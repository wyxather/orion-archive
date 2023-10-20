#pragma once

#include "source/hooks/hooks.h"

namespace orion
{

class Application;
class Unload;

namespace hooks
{

class MinHook final
{
    friend Application;
    friend Unload;

    static auto initialize() noexcept -> void;
    static auto uninitialize() noexcept -> void;

    static auto enable() noexcept -> void;
    static auto disable() noexcept -> void;

  public:
    NON_COPYABLE(MinHook);
    NON_MOVEABLE(MinHook);

    explicit MinHook(const std::size_t size, const void* const gadget = nullptr) noexcept;

    explicit MinHook(const void* const vmt_ptr, const void* const gadget = nullptr) noexcept;

    explicit MinHook(const void* const* const class_ptr, const void* const gadget = nullptr) noexcept;

    auto hook_at(const std::size_t index, void* const target, void* const function) const noexcept -> void;

    auto hook_at(const std::size_t index, void* const function) const noexcept -> void;

    constexpr auto restore() const noexcept -> void
    {
        /*MH_DisableHook(MH_ALL_HOOKS)*/
    }

  private:
    const void* const gadget;
    const void* const base;
    std::unique_ptr<void*[]> originals;

  public:
    template <std::size_t index, typename ReturnType, CallConv calling_conv, typename... Args>
    NODISCARD constexpr auto call(Args... args) const noexcept -> ReturnType
    {
        switch (calling_conv)
        {
            using enum CallConv;
        case StdCall: {
            using Fn = ReturnType(__stdcall*)(Args...);
            const auto fn = static_cast<Fn>(originals[index]);
            return fn(args...);
        }
        case ThisCall: {
            using Fn = ReturnType(__thiscall*)(Args...);
            const auto fn = static_cast<Fn>(originals[index]);
            return fn(args...);
        }
        case FastCall: {
            using Fn = ReturnType(__fastcall*)(Args...);
            const auto fn = static_cast<Fn>(originals[index]);
            return fn(args...);
        }
        case VectorCall: {
            using Fn = ReturnType(__vectorcall*)(Args...);
            const auto fn = static_cast<Fn>(originals[index]);
            return fn(args...);
        }
        default: {
            using Fn = ReturnType(__stdcall*)(Args...);
            const auto fn = static_cast<Fn>(originals[index]);
            return fn(args...);
        }
        }
    }

#ifndef _WIN64
    template <std::size_t index, typename ReturnType, typename... Args>
    NODISCARD constexpr auto cdeclcall(Args... args) const noexcept -> ReturnType
    {
        return RetSpoof::invoke_cdecl<ReturnType>(originals[index], gadget, args...);
    }

    template <std::size_t index, typename ReturnType, typename... Args>
    NODISCARD constexpr auto stdcall(Args... args) const noexcept -> ReturnType
    {
        return RetSpoof::invoke_stdcall<ReturnType>(originals[index], gadget, args...);
    }

    template <std::size_t index, typename ReturnType, typename Self, typename... Args>
    NODISCARD constexpr auto thiscall(Self self, Args... args) const noexcept -> ReturnType
    {
        return RetSpoof::invoke_thiscall<ReturnType>(self, originals[index], gadget, args...);
    }

    template <std::size_t index, typename ReturnType, typename Self, typename Garbage, typename... Args>
    NODISCARD constexpr auto fastcall(Self self, Garbage garbage, Args... args) const noexcept -> ReturnType
    {
        return RetSpoof::invoke_fastcall<ReturnType>(self, garbage, originals[index], gadget, args...);
    }
#else
    template <std::size_t index, typename ReturnType, typename... Args>
    NODISCARD constexpr auto cdeclcall(Args... args) const noexcept -> ReturnType
    {
        using Fn = ReturnType (*)(Args...);
        const auto fn = static_cast<Fn>(originals[index]);
        return RetSpoof64::call(gadget, fn, args...);
    }

    template <std::size_t index, typename ReturnType, typename... Args>
    NODISCARD constexpr auto stdcall(Args... args) const noexcept -> ReturnType
    {
        using Fn = ReturnType (*)(Args...);
        const auto fn = static_cast<Fn>(originals[index]);
        return RetSpoof64::call(gadget, fn, args...);
    }

    template <std::size_t index, typename ReturnType, typename... Args>
    NODISCARD constexpr auto thiscall(Args... args) const noexcept -> ReturnType
    {
        using Fn = ReturnType (*)(Args...);
        const auto fn = static_cast<Fn>(originals[index]);
        return RetSpoof64::call(gadget, fn, args...);
    }

    template <std::size_t index, typename ReturnType, typename... Args>
    NODISCARD constexpr auto fastcall(Args... args) const noexcept -> ReturnType
    {
        using Fn = ReturnType (*)(Args...);
        const auto fn = static_cast<Fn>(originals[index]);
        return RetSpoof64::call(gadget, fn, args...);
    }

    template <std::size_t index, typename ReturnType, typename... Args>
    NODISCARD constexpr auto vectorcall(Args... args) const noexcept -> ReturnType
    {
        using Fn = ReturnType (*)(Args...);
        const auto fn = static_cast<Fn>(originals[index]);
        return RetSpoof64::call(gadget, fn, args...);
    }
#endif
};

} // namespace hooks

} // namespace orion

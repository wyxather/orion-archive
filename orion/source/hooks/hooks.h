#pragma once

namespace orion
{

namespace imports
{

struct Kernel32;

}

namespace hooks
{

struct Hooks final
{
  protected:
    Hooks( Hooks&& )                 = delete;
    Hooks& operator=( Hooks&& )      = delete;
    Hooks( const Hooks& )            = delete;
    Hooks& operator=( const Hooks& ) = delete;

    constexpr explicit Hooks() noexcept = default;

    static std::size_t calcVmtLength( const imports::Kernel32& kernel32, const void* const vmtAddress ) noexcept;
    static std::size_t calcVmtLength( const imports::Kernel32& kernel32,
                                      const void* const* const classAddress ) noexcept;
};

using HookType = class MinHook;

} // namespace hooks

} // namespace orion

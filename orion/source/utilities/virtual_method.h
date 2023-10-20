#pragma once

#ifndef DEFINE_VIRTUAL_METHOD
#define DEFINE_VIRTUAL_METHOD(index, name, type, params, args)                                                         \
    NODISCARD constexpr auto name params const noexcept -> type                                                        \
    {                                                                                                                  \
        return ::orion::utilities::VirtualMethod::call<static_cast<std::size_t>(index), type> args;                    \
    }
#endif

#ifndef DEFINE_VIRTUAL_METHOD_TEMPLATE
#define DEFINE_VIRTUAL_METHOD_TEMPLATE(index, name, temp, type, parms, args)                                           \
    temp NODISCARD constexpr auto name parms const noexcept -> type                                                    \
    {                                                                                                                  \
        return ::orion::utilities::VirtualMethod::call<static_cast<std::size_t>(index), type> args;                    \
    }
#endif

#ifndef VIRTUAL_METHOD_GET
#define VIRTUAL_METHOD_GET(_1, _2, _3, _4, _5, _6, MAX, ...) MAX
#endif VIRTUAL_METHOD_GET

#ifndef VIRTUAL_METHOD_EXPAND
#define VIRTUAL_METHOD_EXPAND(x) x
#endif

#ifndef VIRTUAL_METHOD
// index, name, [temp], type, parms, args
#define VIRTUAL_METHOD(...)                                                                                            \
    VIRTUAL_METHOD_EXPAND(                                                                                             \
        VIRTUAL_METHOD_GET(__VA_ARGS__, DEFINE_VIRTUAL_METHOD_TEMPLATE, DEFINE_VIRTUAL_METHOD)(__VA_ARGS__))
#endif

#ifndef MEMBER
#define MEMBER(name, offset, type)                                                                                     \
    NODISCARD constexpr auto name() const noexcept -> std::add_lvalue_reference_t<type>                                \
    {                                                                                                                  \
        return *reinterpret_cast<std::add_pointer_t<type>>(reinterpret_cast<std::uintptr_t>(this) + offset);           \
    }
#endif

namespace orion::utilities
{

class VirtualMethod final
{
  public:
    NON_CONSTRUCTIBLE(VirtualMethod)

    template <std::size_t index, typename ReturnType, typename ClassType, typename... Args>
    NODISCARD static constexpr auto call(ClassType self, Args... args) noexcept -> ReturnType
    {
        using FunctionType = ReturnType(__thiscall * * const*)(ClassType, Args...);
        const auto virtual_method_table = *reinterpret_cast<FunctionType>(self);
        const auto virtual_method = virtual_method_table[index];
        return virtual_method(self, args...);
    }
};

} // namespace orion::utilities

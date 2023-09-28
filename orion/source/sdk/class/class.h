#pragma once

#define DEFINE_VIRTUAL_METHOD(index, name, conv, type, params, args) \
    [[nodiscard]] constexpr auto name params const noexcept -> type { \
        return VirtualMethod::call< \
            type, \
            static_cast<std::size_t>(index), \
            VirtualMethod::CallType::THISCALL> \
            args; \
    }

#define DEFINE_VIRTUAL_METHOD_TEMPLATE( \
    index, \
    name, \
    conv, \
    temp, \
    type, \
    params, \
    args \
) \
    temp [[nodiscard]] constexpr auto name params const noexcept -> type { \
        return VirtualMethod::call< \
            type, \
            static_cast<std::size_t>(index), \
            VirtualMethod::CallType::NONE> \
            args; \
    }

#define VIRTUAL_METHOD_GET(_1, _2, _3, _4, _5, _6, _7, MAX, ...) MAX
#define VIRTUAL_METHOD_EXPAND(x) x

// Usage: Index, Name, Calling Convention, Return Type, Params, Args
#define VIRTUAL_METHOD(...) \
    VIRTUAL_METHOD_EXPAND( \
        VIRTUAL_METHOD_GET(__VA_ARGS__, DEFINE_VIRTUAL_METHOD_TEMPLATE, DEFINE_VIRTUAL_METHOD, , , , , )( \
            __VA_ARGS__ \
        ) \
    )

#define MEMBER(name, offset, type) \
    [[nodiscard]] constexpr auto name() const noexcept \
        -> std::add_lvalue_reference_t<type> { \
        return *reinterpret_cast<std::add_pointer_t<type>>( \
            reinterpret_cast<std::uintptr_t>(this) + offset \
        ); \
    }

namespace orion::VirtualMethod {
    enum class CallingConv { THISCALL };

    template<
        typename _ReturnType,
        const std::size_t _Index,
        const CallingConv _CallType,
        typename _ClassType,
        typename... _Args>
    [[nodiscard]] constexpr auto call(_ClassType _Base, _Args... _Arg) noexcept
        -> _ReturnType {
        switch (_CallType) {
            default:
                return (*reinterpret_cast<
                        _ReturnType(__cdecl * * const*)(_ClassType, _Args...)>(
                    _Base
                ))[_Index](_Base, _Arg...);
            case CallingConv::THISCALL:
                return (*reinterpret_cast<_ReturnType(__thiscall * * const*)(
                            _ClassType,
                            _Args...
                        )>(_Base))[_Index](_Base, _Arg...);
        }
    }
}  // namespace orion::VirtualMethod

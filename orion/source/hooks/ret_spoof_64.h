#pragma once

#ifdef _WIN64

namespace orion::hooks {

    namespace detail {

        extern "C" void* _ret_spoof();

    }

    class RetSpoof64 final {
    public:
        NON_CONSTRUCTIBLE(RetSpoof64)

    private:
        template<typename ReturnType, typename... Args>
        NODISCARD static constexpr auto
        ret_spoof_helper(const void* const shell, Args... args) noexcept
            -> ReturnType {
            using Fn = ReturnType (*)(Args...);
            const auto fn = static_cast<Fn>(shell);
            return fn(args...);
        }

        template<std::size_t size, typename>
        class ArgumentRemapper final {
        public:
            NON_CONSTRUCTIBLE(ArgumentRemapper)

            template<
                typename ReturnType,
                typename First,
                typename Second,
                typename Third,
                typename Fourth,
                typename... Pack>
            NODISCARD static constexpr auto call(
                const void* const shell,
                const void* const shell_param,
                First first,
                Second second,
                Third third,
                Fourth fourth,
                Pack... pack
            ) noexcept -> ReturnType {
                return ret_spoof_helper<
                    ReturnType,
                    First,
                    Second,
                    Third,
                    Fourth,
                    const void*,
                    const void*,
                    Pack...>(
                    shell,
                    first,
                    second,
                    third,
                    fourth,
                    shell_param,
                    nullptr,
                    pack...
                );
            }
        };

        template<std::size_t size>
        class ArgumentRemapper<size, std::enable_if_t<size <= 4>> final {
        public:
            NON_CONSTRUCTIBLE(ArgumentRemapper)

            template<
                typename ReturnType,
                typename First = const void*,
                typename Second = const void*,
                typename Third = const void*,
                typename Fourth = const void*>
            NODISCARD static constexpr auto call(
                const void* const shell,
                const void* const shell_param,
                First first = First {},
                Second second = Second {},
                Third third = Third {},
                Fourth fourth = Fourth {}
            ) noexcept -> ReturnType {
                return ret_spoof_helper<
                    ReturnType,
                    First,
                    Second,
                    Third,
                    Fourth,
                    const void*,
                    const void*>(
                    shell,
                    first,
                    second,
                    third,
                    fourth,
                    shell_param,
                    nullptr
                );
            }
        };

        class ShellParams final {
        public:
            NON_COPYABLE(ShellParams)
            NON_MOVEABLE(ShellParams)

            const void* const trampoline = nullptr;
            const void* const function = nullptr;
            const void* const rbx = nullptr;

            constexpr explicit ShellParams(
                const void* const trampoline,
                const void* const function
            ) noexcept :
                trampoline {trampoline},
                function {function} {}
        };

    public:
        template<typename ReturnType, typename... Args>
        NODISCARD static constexpr auto call(
            const void* const trampoline,
            ReturnType (*const fn)(Args...),
            Args... args
        ) noexcept -> ReturnType {
            const ShellParams shell_params {trampoline, fn};
            using Mapper = ArgumentRemapper<sizeof...(Args), void>;
            return Mapper::template call<ReturnType, Args...>(
                &detail::_ret_spoof,
                &shell_params,
                args...
            );
        }
    };

}  // namespace orion::hooks

#endif

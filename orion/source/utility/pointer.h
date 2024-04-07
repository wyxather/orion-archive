#pragma once

#include <concepts>
#include <cstddef>
#include <cstdint>
#include <type_traits>
#include <xtr1common>

namespace orion::utility {

    template<typename DataType>
        requires(std::is_pointer_v<DataType>)
    class Pointer {
    private:
        DataType data {};

    public:
        constexpr Pointer() noexcept = default;

        template<typename ValueType>
            requires(
                (!std::same_as<std::remove_cvref_t<ValueType>, Pointer>)
                && (std::is_array_v<std::remove_reference_t<ValueType>>)
            )
        constexpr explicit Pointer(ValueType &&value) noexcept
            : data { std::addressof(std::forward<ValueType>(value)) } {}

        template<typename ValueType>
            requires(
                (!std::same_as<std::remove_cvref_t<ValueType>, Pointer>)
                && (std::is_class_v<std::remove_reference_t<ValueType>>)
            )
        constexpr explicit Pointer(ValueType &&value) noexcept
            : data { std::addressof(std::forward<ValueType>(value)) } {}

        template<typename ValueType>
            requires(
                (!std::same_as<std::remove_cvref_t<ValueType>, Pointer>)
                && (std::floating_point<std::remove_reference_t<ValueType>>)
            )
        constexpr explicit Pointer(ValueType &&value) noexcept
            : data { std::addressof(std::forward<ValueType>(value)) } {}

        template<typename ValueType>
            requires(
                (!std::same_as<std::remove_cvref_t<ValueType>, Pointer>)
                && (std::is_function_v<std::remove_reference_t<ValueType>>)
            )
        constexpr explicit Pointer(ValueType &&value) noexcept
            : data { std::addressof(std::forward<ValueType>(value)) } {}

        template<typename ValueType>
            requires(
                (!std::same_as<std::remove_cvref_t<ValueType>, Pointer>)
                && (std::integral<std::remove_reference_t<ValueType>>)
            )
        constexpr explicit Pointer(ValueType &&value) noexcept
            : data { (DataType)(std::forward<ValueType>(value)) } {}

        template<typename ValueType>
            requires(
                (!std::same_as<std::remove_cvref_t<ValueType>, Pointer>)
                && (std::is_pointer_v<std::remove_reference_t<ValueType>>)
            )
        constexpr explicit Pointer(ValueType &&value) noexcept
            : data { std::forward<ValueType>(value) } {}

        constexpr Pointer(Pointer &&) noexcept = default;
        constexpr Pointer &operator=(Pointer &&) noexcept = default;

        constexpr Pointer(const Pointer &) noexcept = default;
        constexpr Pointer &operator=(const Pointer &) noexcept = default;

        [[nodiscard]] constexpr auto value() const noexcept -> auto && {
            return data;
        }

        template<std::integral ReturnType>
        [[nodiscard]] constexpr auto value() const noexcept -> auto {
            return (ReturnType)(data);
        }

        template<typename ReturnType>
            requires((!std::is_pointer_v<ReturnType>) && (!std::is_reference_v<ReturnType>)
                     && (!std::same_as<std::remove_cv_t<ReturnType>, std::remove_cv_t<std::remove_pointer_t<DataType>>>)
                     && (!std::is_const_v<std::remove_pointer_t<DataType>>)
                     && (!std::is_volatile_v<std::remove_pointer_t<DataType>>))
        [[nodiscard]] constexpr auto as() const noexcept -> auto {
            return (ReturnType *)(data);
        }

        template<typename ReturnType>
            requires((!std::is_pointer_v<ReturnType>) && (!std::is_reference_v<ReturnType>)
                     && (!std::same_as<std::remove_cv_t<ReturnType>, std::remove_cv_t<std::remove_pointer_t<DataType>>>)
                     && (std::is_const_v<std::remove_pointer_t<DataType>>)
                     && (!std::is_volatile_v<std::remove_pointer_t<DataType>>))
        [[nodiscard]] constexpr auto as() const noexcept -> auto {
            return (const ReturnType *)(data);
        }

        template<typename ReturnType>
            requires((!std::is_pointer_v<ReturnType>) && (!std::is_reference_v<ReturnType>)
                     && (!std::same_as<std::remove_cv_t<ReturnType>, std::remove_cv_t<std::remove_pointer_t<DataType>>>)
                     && (!std::is_const_v<std::remove_pointer_t<DataType>>)
                     && (std::is_volatile_v<std::remove_pointer_t<DataType>>))
        [[nodiscard]] constexpr auto as() const noexcept -> auto {
            return (volatile ReturnType *)(data);
        }

        template<typename ReturnType>
            requires((!std::is_pointer_v<ReturnType>) && (!std::is_reference_v<ReturnType>)
                     && (!std::same_as<std::remove_cv_t<ReturnType>, std::remove_cv_t<std::remove_pointer_t<DataType>>>)
                     && (std::is_const_v<std::remove_pointer_t<DataType>>)
                     && (std::is_volatile_v<std::remove_pointer_t<DataType>>))
        [[nodiscard]] constexpr auto as() const noexcept -> auto {
            return (const volatile ReturnType *)(data);
        }

        template<typename ReturnType = std::remove_pointer_t<DataType>>
            requires((!std::is_pointer_v<ReturnType>) && (!std::is_reference_v<ReturnType>)
                     && (!std::is_const_v<std::remove_pointer_t<DataType>>)
                     && (!std::is_volatile_v<std::remove_pointer_t<DataType>>))
        [[nodiscard]] constexpr auto as_ref() const noexcept -> auto && {
            return *(ReturnType *)(data);
        }

        template<typename ReturnType = std::remove_pointer_t<DataType>>
            requires((!std::is_pointer_v<ReturnType>) && (!std::is_reference_v<ReturnType>)
                     && (std::is_const_v<std::remove_pointer_t<DataType>>)
                     && (!std::is_volatile_v<std::remove_pointer_t<DataType>>))
        [[nodiscard]] constexpr auto as_ref() const noexcept -> auto && {
            return *(const ReturnType *)(data);
        }

        template<typename ReturnType = std::remove_pointer_t<DataType>>
            requires((!std::is_pointer_v<ReturnType>) && (!std::is_reference_v<ReturnType>)
                     && (!std::is_const_v<std::remove_pointer_t<DataType>>)
                     && (std::is_volatile_v<std::remove_pointer_t<DataType>>))
        [[nodiscard]] constexpr auto as_ref() const noexcept -> auto && {
            return *(volatile ReturnType *)(data);
        }

        template<typename ReturnType = std::remove_pointer_t<DataType>>
            requires((!std::is_pointer_v<ReturnType>) && (!std::is_reference_v<ReturnType>)
                     && (std::is_const_v<std::remove_pointer_t<DataType>>)
                     && (std::is_volatile_v<std::remove_pointer_t<DataType>>))
        [[nodiscard]] constexpr auto as_ref() const noexcept -> auto && {
            return *(const volatile ReturnType *)(data);
        }

        template<std::integral Offset>
            requires(!std::is_const_v<DataType>)
        constexpr auto add(const Offset offset) noexcept -> auto && {
            data = (DataType)((std::uintptr_t)(data) + offset);
            return *this;
        }

        template<std::integral T = std::uintptr_t>
            requires((!std::is_const_v<DataType>) && (sizeof(T) == sizeof(DataType)))
        constexpr auto deref() noexcept -> auto && {
            data = (DataType)(*(T *)(data));
            return *this;
        }

        template<std::integral T = std::uintptr_t>
            requires((!std::is_const_v<DataType>) && (sizeof(T) < sizeof(DataType)))
        constexpr auto deref() noexcept -> auto && {
            data = (DataType)(std::uintptr_t)(*(T *)(data));
            return *this;
        }

        template<std::integral Bit>
            requires(!std::is_const_v<DataType>)
        constexpr auto bitwise_or(const Bit bit) noexcept -> auto && {
            data = (DataType)((std::uintptr_t)(data) | bit);
            return *this;
        }

        constexpr auto abs() noexcept -> auto &&
            requires(!std::is_const_v<DataType>)
        {
            if constexpr ( sizeof(data) <= 4 ) {
                data = Pointer { data }
                           .add(4)
                           .add(Pointer { data }.deref<std::uint32_t>().value<std::uintptr_t>())
                           .value();
            } else {
                data = Pointer { data }
                           .add(4)
                           .add(Pointer { data }
                                    .deref<std::uint32_t>()
                                    .bitwise_or(0xFFFFFFFF00000000)
                                    .value<std::uintptr_t>())
                           .value();
            }
            return *this;
        }
    };

    template<typename T>
        requires(std::is_array_v<std::remove_reference_t<T>>)
    Pointer(T &&) -> Pointer<std::remove_reference_t<T> *>;

    template<typename T>
        requires(std::is_class_v<std::remove_reference_t<T>>)
    Pointer(T &&) -> Pointer<std::remove_reference_t<T> *>;

    template<typename T>
        requires(std::floating_point<std::remove_reference_t<T>>)
    Pointer(T &&) -> Pointer<std::remove_reference_t<T> *>;

    template<typename T>
        requires(std::is_function_v<std::remove_reference_t<T>>)
    Pointer(T &&) -> Pointer<std::remove_reference_t<T> *>;

    template<typename T>
        requires(std::integral<std::remove_reference_t<T>>)
    Pointer(T &&) -> Pointer<void *>;

    template<typename T>
        requires(std::is_pointer_v<std::remove_reference_t<T>>)
    Pointer(T &&) -> Pointer<std::remove_reference_t<T>>;

    template<typename FunctionType>
        requires(std::is_function_v<std::remove_pointer_t<FunctionType>>)
    class FunctionPointer : public Pointer<FunctionType> {
    public:
        using Pointer<FunctionType>::Pointer;
    };

    template<typename T>
        requires(std::is_pointer_v<std::remove_reference_t<T>>
                 && std::is_function_v<std::remove_pointer_t<std::remove_reference_t<T>>>)
    FunctionPointer(T &&) -> FunctionPointer<std::remove_reference_t<T>>;

    template<typename T>
        requires(!std::is_pointer_v<std::remove_reference_t<T>>
                 && std::is_function_v<std::remove_reference_t<T>>)
    FunctionPointer(T &&) -> FunctionPointer<std::add_pointer_t<std::remove_reference_t<T>>>;

}  // namespace orion::utility

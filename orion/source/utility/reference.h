#pragma once

#include <concepts>
#include <type_traits>
#include <xtr1common>

namespace orion::utility {

    template<typename DataType>
        requires(std::is_reference_v<DataType>)
    class Reference final {
    private:
        DataType data;

    public:
        template<typename ValueType>
            requires(!std::same_as<std::remove_cvref_t<ValueType>, Reference>)
        constexpr explicit Reference(ValueType &&value) noexcept
            : data { std::forward<ValueType>(value) } {}

        constexpr Reference(Reference &&) noexcept = default;
        constexpr Reference &operator=(Reference &&) noexcept = default;

        constexpr Reference(const Reference &) noexcept = default;
        constexpr Reference &operator=(const Reference &) noexcept = default;

        [[nodiscard]] constexpr auto value() const noexcept -> auto && {
            return data;
        }

        template<std::integral ReturnType>
        [[nodiscard]] constexpr auto address() const noexcept -> auto {
            return (ReturnType)(&data);
        }

        template<typename ReturnType>
            requires((!std::is_pointer_v<ReturnType>) && (!std::is_reference_v<ReturnType>)
                     && (!std::same_as<std::remove_cv_t<ReturnType>, std::remove_cvref_t<DataType>>)
                     && (!std::is_const_v<std::remove_reference_t<DataType>>)
                     && (!std::is_volatile_v<std::remove_reference_t<DataType>>))
        [[nodiscard]] constexpr auto as() const noexcept -> auto & {
            return (ReturnType &)(data);
        }

        template<typename ReturnType>
            requires((!std::is_pointer_v<ReturnType>) && (!std::is_reference_v<ReturnType>)
                     && (!std::same_as<std::remove_cv_t<ReturnType>, std::remove_cvref_t<DataType>>)
                     && (std::is_const_v<std::remove_reference_t<DataType>>)
                     && (!std::is_volatile_v<std::remove_reference_t<DataType>>))
        [[nodiscard]] constexpr auto as() const noexcept -> auto & {
            return (const ReturnType &)(data);
        }

        template<typename ReturnType>
            requires((!std::is_pointer_v<ReturnType>) && (!std::is_reference_v<ReturnType>)
                     && (!std::same_as<std::remove_cv_t<ReturnType>, std::remove_cvref_t<DataType>>)
                     && (!std::is_const_v<std::remove_reference_t<DataType>>)
                     && (std::is_volatile_v<std::remove_reference_t<DataType>>))
        [[nodiscard]] constexpr auto as() const noexcept -> auto & {
            return (volatile ReturnType &)(data);
        }

        template<typename ReturnType>
            requires((!std::is_pointer_v<ReturnType>) && (!std::is_reference_v<ReturnType>)
                     && (!std::same_as<std::remove_cv_t<ReturnType>, std::remove_cvref_t<DataType>>)
                     && (std::is_const_v<std::remove_reference_t<DataType>>)
                     && (std::is_volatile_v<std::remove_reference_t<DataType>>))
        [[nodiscard]] constexpr auto as() const noexcept -> auto & {
            return (const volatile ReturnType &)(data);
        }

        template<typename ReturnType = std::remove_reference_t<DataType>>
            requires((!std::is_pointer_v<ReturnType>) && (!std::is_reference_v<ReturnType>)
                     && (!std::is_const_v<std::remove_reference_t<DataType>>)
                     && (!std::is_volatile_v<std::remove_reference_t<DataType>>))
        [[nodiscard]] constexpr auto as_ptr() const noexcept -> auto {
            return (ReturnType *)(&data);
        }

        template<typename ReturnType = std::remove_reference_t<DataType>>
            requires((!std::is_pointer_v<ReturnType>) && (!std::is_reference_v<ReturnType>)
                     && (std::is_const_v<std::remove_reference_t<DataType>>)
                     && (!std::is_volatile_v<std::remove_reference_t<DataType>>))
        [[nodiscard]] constexpr auto as_ptr() const noexcept -> auto {
            return (const ReturnType *)(&data);
        }

        template<typename ReturnType = std::remove_reference_t<DataType>>
            requires((!std::is_pointer_v<ReturnType>) && (!std::is_reference_v<ReturnType>)
                     && (!std::is_const_v<std::remove_reference_t<DataType>>)
                     && (std::is_volatile_v<std::remove_reference_t<DataType>>))
        [[nodiscard]] constexpr auto as_ptr() const noexcept -> auto {
            return (volatile ReturnType *)(&data);
        }

        template<typename ReturnType = std::remove_reference_t<DataType>>
            requires((!std::is_pointer_v<ReturnType>) && (!std::is_reference_v<ReturnType>)
                     && (std::is_const_v<std::remove_reference_t<DataType>>)
                     && (std::is_volatile_v<std::remove_reference_t<DataType>>))
        [[nodiscard]] constexpr auto as_ptr() const noexcept -> auto {
            return (const volatile ReturnType *)(&data);
        }
    };

    template<typename T>
    Reference(T &&) -> Reference<T>;

}  // namespace orion::utility

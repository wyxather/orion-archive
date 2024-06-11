#pragma once

#include <memory>
#include <type_traits>

template<typename T, typename E>
class Result final {
private:
    union {
        T value;
        E error;
    };

    bool has_value;

public:
    using value_type = T;
    using error_type = E;

    template<typename U>
        requires(std::is_same_v<T, std::remove_cvref_t<U>>)
    constexpr explicit(false) Result(U &&value) noexcept
        : value { std::forward<U>(value) }, has_value { true } {}

    template<typename U>
        requires(std::is_same_v<E, U>)
    constexpr explicit(false) Result(U &&error) noexcept
        : error { std::forward<U>(error) }, has_value { false } {}

    constexpr Result(Result &&) noexcept = default;

    constexpr Result(const Result &) noexcept = default;

    constexpr ~Result() noexcept {
        if ( has_value ) [[likely]] {
            if constexpr ( !std::is_trivially_destructible_v<T> ) {
                std::destroy_at(std::addressof(value));
            }
        } else {
            if constexpr ( !std::is_trivially_destructible_v<E> ) {
                std::destroy_at(std::addressof(error));
            }
        }
    }

    Result &operator=(Result &&) = delete;

    Result &operator=(const Result &) = delete;

    [[nodiscard]] constexpr auto is_ok() const noexcept -> bool {
        return has_value;
    }

    [[nodiscard]] constexpr auto is_err() const noexcept -> bool {
        return !has_value;
    }

    template<typename Self>
    [[nodiscard]] constexpr auto unwrap(this Self &&self) noexcept -> auto && {
        assert(self.has_value);
        return std::forward<Self>(self).value;
    }

    template<typename Self>
    [[nodiscard]] constexpr auto unwrap_err(this Self &&self) noexcept -> auto && {
        assert(!self.has_value);
        return std::forward<Self>(self).error;
    }

    template<typename Self, typename Fn>
        requires(std::is_same_v<std::remove_cvref_t<std::invoke_result_t<Fn, E>>, T>)
    [[nodiscard]] constexpr auto unwrap_or_else(this Self &&self, Fn &&fn) noexcept -> T {
        if ( self.has_value ) [[likely]] {
            return std::forward<Self>(self).value;
        } else {
            return std::invoke(std::forward<Fn>(fn), std::forward<Self>(self).error);
        }
    }

    template<typename Self, typename Fn>
        requires(std::is_same_v<std::remove_cvref_t<std::invoke_result_t<Fn, T>>, void>)
    [[nodiscard]] constexpr auto and_then(this Self &&self, Fn &&fn) noexcept -> Result<void, E> {
        if ( self.has_value ) [[likely]] {
            std::invoke(std::forward<Fn>(fn), std::forward<Self>(self).value);
            return {};
        } else [[unlikely]] {
            return E { std::forward<Self>(self).error };
        }
    }

    template<typename Self, typename Fn>
        requires(!std::is_same_v<std::remove_cvref_t<std::invoke_result_t<Fn, T>>, void>
                 && !std::is_same_v<std::remove_cvref_t<std::invoke_result_t<Fn, T>>, E>
                 && !std::_Is_specialization_v<std::remove_cvref_t<std::invoke_result_t<Fn, T>>, Result>)
    [[nodiscard]] constexpr auto and_then(this Self &&self, Fn &&fn) noexcept
        -> Result<std::remove_cvref_t<std::invoke_result_t<Fn, T>>, E> {
        if ( self.has_value ) [[likely]] {
            return std::invoke(std::forward<Fn>(fn), std::forward<Self>(self).value);
        } else [[unlikely]] {
            return E { std::forward<Self>(self).error };
        }
    }

    template<typename Self, typename Fn>
        requires(std::is_same_v<typename std::remove_cvref_t<std::invoke_result_t<Fn, T>>::error_type, E>
                 && std::_Is_specialization_v<std::remove_cvref_t<std::invoke_result_t<Fn, T>>, Result>)
    [[nodiscard]] constexpr auto and_then(this Self &&self, Fn &&fn) noexcept
        -> std::remove_cvref_t<std::invoke_result_t<Fn, T>> {
        if ( self.has_value ) [[likely]] {
            return std::invoke(std::forward<Fn>(fn), std::forward<Self>(self).value);
        } else [[unlikely]] {
            return E { std::forward<Self>(self).error };
        }
    }

    template<typename Self, typename Fn>
        requires(std::is_same_v<std::remove_cvref_t<std::invoke_result_t<Fn, E>>, void>)
    [[nodiscard]] constexpr auto or_else(this Self &&self, Fn &&fn) noexcept -> Result<void, E> {
        if ( !self.has_value ) [[unlikely]] {
            std::invoke(std::forward<Fn>(fn), std::forward<Self>(self).error);
        }
        return {};
    }

    template<typename Self, typename Fn>
        requires(std::is_same_v<std::remove_cvref_t<std::invoke_result_t<Fn, E>>, T>
                 || std::is_same_v<std::remove_cvref_t<std::invoke_result_t<Fn, E>>, E>)
    [[nodiscard]] constexpr auto or_else(this Self &&self, Fn &&fn) noexcept -> Result<T, E> {
        if ( self.has_value ) [[likely]] {
            return T { std::forward<Self>(self).value };
        } else [[unlikely]] {
            return std::invoke(std::forward<Fn>(fn), std::forward<Self>(self).error);
        }
    }

    template<typename Self, typename Fn>
        requires(!std::is_same_v<std::remove_cvref_t<std::invoke_result_t<Fn, E>>, void>
                 && !std::is_same_v<std::remove_cvref_t<std::invoke_result_t<Fn, E>>, T>
                 && !std::is_same_v<std::remove_cvref_t<std::invoke_result_t<Fn, E>>, E>
                 && !std::_Is_specialization_v<std::remove_cvref_t<std::invoke_result_t<Fn, E>>, Result>)
    [[nodiscard]] constexpr auto or_else(this Self &&self, Fn &&fn) noexcept
        -> Result<std::remove_cvref_t<std::invoke_result_t<Fn, E>>, E> {
        if ( self.has_value ) [[likely]] {
            return std::remove_cvref_t<std::invoke_result_t<Fn, E>> {};
        } else [[unlikely]] {
            return std::invoke(std::forward<Fn>(fn), std::forward<Self>(self).error);
        }
    }

    template<typename Self, typename Fn>
        requires(std::is_same_v<typename std::remove_cvref_t<std::invoke_result_t<Fn, E>>::value_type, T>
                 && std::is_same_v<typename std::remove_cvref_t<std::invoke_result_t<Fn, E>>::error_type, E>
                 && std::_Is_specialization_v<std::remove_cvref_t<std::invoke_result_t<Fn, E>>, Result>)
    [[nodiscard]] constexpr auto or_else(this Self &&self, Fn &&fn) noexcept -> Result<T, E> {
        if ( self.has_value ) [[likely]] {
            return T { std::forward<Self>(self).value };
        } else [[unlikely]] {
            return std::invoke(std::forward<Fn>(fn), std::forward<Self>(self).error);
        }
    }

    template<typename Self, typename Fn>
        requires(std::is_same_v<typename std::remove_cvref_t<std::invoke_result_t<Fn, E>>::value_type, void>
                 && std::is_same_v<typename std::remove_cvref_t<std::invoke_result_t<Fn, E>>::error_type, E>
                 && std::_Is_specialization_v<std::remove_cvref_t<std::invoke_result_t<Fn, E>>, Result>)
    [[nodiscard]] constexpr auto or_else(this Self &&self, Fn &&fn) noexcept -> Result<void, E> {
        if ( self.has_value ) [[likely]] {
            return {};
        } else [[unlikely]] {
            return std::invoke(std::forward<Fn>(fn), std::forward<Self>(self).error);
        }
    }

    template<typename Self, typename Fn>
        requires(!std::is_same_v<typename std::remove_cvref_t<std::invoke_result_t<Fn, E>>::value_type, void>
                 && !std::is_same_v<typename std::remove_cvref_t<std::invoke_result_t<Fn, E>>::value_type, T>
                 && std::is_same_v<typename std::remove_cvref_t<std::invoke_result_t<Fn, E>>::error_type, E>
                 && std::_Is_specialization_v<std::remove_cvref_t<std::invoke_result_t<Fn, E>>, Result>)
    [[nodiscard]] constexpr auto or_else(this Self &&self, Fn &&fn) noexcept
        -> std::remove_cvref_t<std::invoke_result_t<Fn, E>> {
        if ( self.has_value ) [[likely]] {
            return typename std::remove_cvref_t<std::invoke_result_t<Fn, E>>::value_type {};
        } else [[unlikely]] {
            return std::invoke(std::forward<Fn>(fn), std::forward<Self>(self).error);
        }
    }
};

template<typename E>
class Result<void, E> final {
private:
    class None final {};

    union {
        None none;
        E error;
    };

    bool has_value;

public:
    using value_type = void;
    using error_type = E;

    constexpr Result() noexcept : none {}, has_value { true } {}

    template<typename U>
        requires(std::is_same_v<E, U>)
    constexpr explicit(false) Result(U &&error) noexcept
        : error { std::forward<U>(error) }, has_value { false } {}

    constexpr Result(Result &&) noexcept = default;

    constexpr Result(const Result &) noexcept = default;

    constexpr ~Result() noexcept {
        if ( !has_value ) [[unlikely]] {
            if constexpr ( !std::is_trivially_destructible_v<E> ) {
                std::destroy_at(std::addressof(error));
            }
        }
    }

    Result &operator=(Result &&) = delete;

    Result &operator=(const Result &) = delete;

    [[nodiscard]] constexpr auto is_ok() const noexcept -> bool {
        return has_value;
    }

    [[nodiscard]] constexpr auto is_err() const noexcept -> bool {
        return !has_value;
    }

    template<typename Self>
    [[nodiscard]] constexpr auto unwrap_err(this Self &&self) noexcept -> auto && {
        assert(!self.has_value);
        return std::forward<Self>(self).error;
    }

    template<typename Self, typename Fn>
        requires(std::is_same_v<std::remove_cvref_t<std::invoke_result_t<Fn>>, void>)
    [[nodiscard]] constexpr auto and_then(this Self &&self, Fn &&fn) noexcept -> Result<void, E> {
        if ( self.has_value ) [[likely]] {
            std::invoke(std::forward<Fn>(fn));
            return {};
        } else [[unlikely]] {
            return E { std::forward<Self>(self).error };
        }
    }

    template<typename Self, typename Fn>
        requires(!std::is_same_v<std::remove_cvref_t<std::invoke_result_t<Fn>>, void>
                 && !std::is_same_v<std::remove_cvref_t<std::invoke_result_t<Fn>>, E>
                 && !std::_Is_specialization_v<std::remove_cvref_t<std::invoke_result_t<Fn>>, Result>)
    [[nodiscard]] constexpr auto and_then(this Self &&self, Fn &&fn) noexcept
        -> Result<std::remove_cvref_t<std::invoke_result_t<Fn>>, E> {
        if ( self.has_value ) [[likely]] {
            return std::invoke(std::forward<Fn>(fn));
        } else [[unlikely]] {
            return E { std::forward<Self>(self).error };
        }
    }

    template<typename Self, typename Fn>
        requires(std::is_same_v<typename std::remove_cvref_t<std::invoke_result_t<Fn>>::error_type, E>
                 && std::_Is_specialization_v<std::remove_cvref_t<std::invoke_result_t<Fn>>, Result>)
    [[nodiscard]] constexpr auto and_then(this Self &&self, Fn &&fn) noexcept
        -> std::remove_cvref_t<std::invoke_result_t<Fn>> {
        if ( self.has_value ) [[likely]] {
            return std::invoke(std::forward<Fn>(fn));
        } else [[unlikely]] {
            return E { std::forward<Self>(self).error };
        }
    }

    template<typename Self, typename Fn>
        requires(std::is_same_v<std::remove_cvref_t<std::invoke_result_t<Fn, E>>, void>)
    [[nodiscard]] constexpr auto or_else(this Self &&self, Fn &&fn) noexcept -> Result<void, E> {
        if ( !self.has_value ) [[unlikely]] {
            std::invoke(std::forward<Fn>(fn), std::forward<Self>(self).error);
        }
        return {};
    }

    template<typename Self, typename Fn>
        requires(std::is_same_v<std::remove_cvref_t<std::invoke_result_t<Fn, E>>, E>)
    [[nodiscard]] constexpr auto or_else(this Self &&self, Fn &&fn) noexcept -> Result<void, E> {
        if ( !self.has_value ) [[unlikely]] {
            return std::invoke(std::forward<Fn>(fn), std::forward<Self>(self).error);
        }
        return {};
    }

    template<typename Self, typename Fn>
        requires(!std::is_same_v<std::remove_cvref_t<std::invoke_result_t<Fn, E>>, void>
                 && !std::is_same_v<std::remove_cvref_t<std::invoke_result_t<Fn, E>>, E>
                 && !std::_Is_specialization_v<std::remove_cvref_t<std::invoke_result_t<Fn, E>>, Result>)
    [[nodiscard]] constexpr auto or_else(this Self &&self, Fn &&fn) noexcept
        -> Result<std::remove_cvref_t<std::invoke_result_t<Fn, E>>, E> {
        if ( self.has_value ) [[likely]] {
            return std::remove_cvref_t<std::invoke_result_t<Fn, E>> {};
        } else [[unlikely]] {
            return std::invoke(std::forward<Fn>(fn), std::forward<Self>(self).error);
        }
    }

    template<typename Self, typename Fn>
        requires(std::is_same_v<typename std::remove_cvref_t<std::invoke_result_t<Fn, E>>::value_type, void>
                 && std::is_same_v<typename std::remove_cvref_t<std::invoke_result_t<Fn, E>>::error_type, E>
                 && std::_Is_specialization_v<std::remove_cvref_t<std::invoke_result_t<Fn, E>>, Result>)
    [[nodiscard]] constexpr auto or_else(this Self &&self, Fn &&fn) noexcept
        -> std::remove_cvref_t<std::invoke_result_t<Fn, E>> {
        if ( self.has_value ) [[likely]] {
            return {};
        } else [[unlikely]] {
            return std::invoke(std::forward<Fn>(fn), std::forward<Self>(self).error);
        }
    }

    template<typename Self, typename Fn>
        requires(!std::is_same_v<typename std::remove_cvref_t<std::invoke_result_t<Fn, E>>::value_type, void>
                 && std::is_same_v<typename std::remove_cvref_t<std::invoke_result_t<Fn, E>>::error_type, E>
                 && std::_Is_specialization_v<std::remove_cvref_t<std::invoke_result_t<Fn, E>>, Result>)
    [[nodiscard]] constexpr auto or_else(this Self &&self, Fn &&fn) noexcept
        -> std::remove_cvref_t<std::invoke_result_t<Fn, E>> {
        if ( self.has_value ) [[likely]] {
            return typename std::remove_cvref_t<std::invoke_result_t<Fn, E>>::value_type {};
        } else [[unlikely]] {
            return std::invoke(std::forward<Fn>(fn), std::forward<Self>(self).error);
        }
    }
};

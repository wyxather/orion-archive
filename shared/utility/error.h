#pragma once

#include <bit>
#include <cstddef>
#include <cstdint>
#include <source_location>
#include <type_traits>
#include <utility>

#include "manually_construct_destruct.h"
#include "path.h"
#include "string.h"
#include "xorstr.h"

#define Err(message) \
    ErrorBuilder<message, __FILE__, std::source_location::current().line()>::build()

class Error final {
public:
    enum class Callback {
        EncryptMessage,
        DecryptMessage,
        EncryptFilename,
        DecryptFilename,
        LineNumber,
    };

    enum class Handle {
        Message = 1 << 0,
        Filename = 1 << 1,
    };

private:
    using Fn = auto (*const)(Callback) noexcept -> const char *;

    Fn callback;

public:
    constexpr explicit Error(Fn callback) noexcept : callback { callback } {}

    constexpr Error(Error &&) noexcept = default;

    constexpr Error(const Error &) noexcept = default;

    constexpr ~Error() noexcept {
        std::invoke(callback, Callback::EncryptMessage);
        std::invoke(callback, Callback::EncryptFilename);
    }

    Error &operator=(Error &&) = delete;

    Error &operator=(const Error &) = delete;

    [[nodiscard]] constexpr auto what() noexcept -> auto {
        return std::invoke(callback, Callback::DecryptMessage);
    }

    [[nodiscard]] constexpr auto where() noexcept -> auto {
        return std::invoke(callback, Callback::DecryptFilename);
    }

    [[nodiscard]] constexpr auto line_number() noexcept -> auto {
        return std::bit_cast<std::size_t>(std::invoke(callback, Callback::LineNumber));
    }
};

template<String Message, String Filepath, std::size_t LineNumber>
class ErrorBuilder final {
private:
    using message_type = decltype(xorarr(Message));
    using filename_type = decltype(xorarr(Path<Filepath>::filename));

    static constinit inline ManuallyConstructDestruct<message_type> message;
    static constinit inline ManuallyConstructDestruct<filename_type> filename;
    static constinit inline std::uint8_t is_constructed = 0;
    static constinit inline std::uint8_t is_decrypted = 0;

    template<Error::Handle handle>
    static constexpr auto init() noexcept -> void {
        if constexpr ( handle == Error::Handle::Message ) {
            message.init(xorarr(Message));
        } else if constexpr ( handle == Error::Handle::Filename ) {
            filename.init(xorarr(Path<Filepath>::filename));
        }
    }

    template<Error::Handle handle>
    [[nodiscard]] static constexpr auto get() noexcept -> const char * {
        if constexpr ( handle == Error::Handle::Message ) {
            return message->get();
        } else if constexpr ( handle == Error::Handle::Filename ) {
            return filename->get();
        } else {
            return nullptr;
        }
    }

    template<Error::Handle handle>
    [[nodiscard]] static constexpr auto crypt_get() noexcept -> const char * {
        if constexpr ( handle == Error::Handle::Message ) {
            return message.as_mut().crypt_get();
        } else if constexpr ( handle == Error::Handle::Filename ) {
            return filename.as_mut().crypt_get();
        } else {
            return nullptr;
        }
    }

    template<Error::Handle handle>
    [[nodiscard]] static constexpr auto encrypt() noexcept -> const char * {
        constexpr auto underlying_handle = std::to_underlying(handle);
        if ( std::cmp_not_equal(is_decrypted & underlying_handle, 0) ) {
            is_decrypted &= ~underlying_handle;
            return crypt_get<handle>();
        } else {
            return get<handle>();
        }
    }

    template<Error::Handle handle>
    [[nodiscard]] static constexpr auto decrypt() noexcept -> const char * {
        constexpr auto underlying_handle = std::to_underlying(handle);
        if ( std::cmp_equal(is_decrypted & underlying_handle, 0) ) {
            if ( std::cmp_equal(is_constructed & underlying_handle, 0) ) {
                is_constructed |= underlying_handle;
                init<handle>();
            }
            is_decrypted |= underlying_handle;
            return crypt_get<handle>();
        } else {
            return get<handle>();
        }
    }

    static auto error_callback(const Error::Callback callback) noexcept -> const char * {
        switch ( callback ) {
            case Error::Callback::EncryptMessage:
                return encrypt<Error::Handle::Message>();
            case Error::Callback::DecryptMessage:
                return decrypt<Error::Handle::Message>();
            case Error::Callback::EncryptFilename:
                return encrypt<Error::Handle::Filename>();
            case Error::Callback::DecryptFilename:
                return decrypt<Error::Handle::Filename>();
            case Error::Callback::LineNumber:
                return std::bit_cast<const char *>(LineNumber);
            default:
                return nullptr;
        }
    }

    ErrorBuilder() = delete;

    ErrorBuilder(ErrorBuilder &&) = delete;

    ErrorBuilder(const ErrorBuilder &) = delete;

    ~ErrorBuilder() = delete;

    ErrorBuilder &operator=(ErrorBuilder &&) = delete;

    ErrorBuilder &operator=(const ErrorBuilder &) = delete;

public:
    [[nodiscard]] static constexpr auto build() noexcept -> Error {
        return Error { std::addressof(error_callback) };
    }
};

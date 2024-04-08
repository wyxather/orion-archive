#pragma once

#include <concepts>
#include <cstddef>
#include <cstdint>
#include <source_location>
#include <type_traits>

#include "source/import/ntdll.h"
#include "source/utility/string.h"
#include "source/utility/windows.h"
#include "source/utility/xorstr.h"

#define log \
    orion::core::Console::Log<__FILE__, std::source_location::current().line()>

namespace orion {

    namespace import {

        class Kernel32;
        class User32;

    }  // namespace import

    namespace core {

        class Console final {
        private:
            enum class LogLevel {
                Trace,
                Debug,
                Info,
                Warn,
                Error
            };

            static constexpr auto log_level = LogLevel::Trace;

            HANDLE std_output_handle;

        public:
            explicit Console(
                const import::Ntdll &ntdll,
                const import::Kernel32 &kernel32,
                const import::User32 &user32
            ) noexcept;

            ~Console() noexcept;

            Console(Console &&) = delete;
            Console &operator=(Console &&) = delete;

            Console(const Console &) = delete;
            Console &operator=(const Console &) = delete;

        private:
            auto set_output_color(WORD color) const noexcept -> void;

            auto write(const char *str, std::uint32_t length) const noexcept -> void;
            auto write(const wchar_t *str, std::uint32_t length) const noexcept -> void;

            auto write_prefix(
                const char *log_level_str,
                WORD log_level_color,
                const char *file_name,
                std::uintmax_t line
            ) const noexcept -> void;
            auto write_prefix(
                const wchar_t *log_level_str,
                WORD log_level_color,
                const wchar_t *file_name,
                std::uintmax_t line
            ) const noexcept -> void;

            static auto WINAPI ctrl_handler(DWORD ctrl_type) noexcept -> BOOL;

            [[nodiscard]] static auto get() noexcept -> const Console &;
            [[nodiscard]] static auto get_ntdll() noexcept -> const import::Ntdll &;

            static auto get_local_time(SYSTEMTIME &local_time) noexcept -> void;

            static auto get_date_format(const SYSTEMTIME &local_time, LPCSTR format, LPSTR buffer, int size) noexcept -> int;
            static auto get_date_format(const SYSTEMTIME &local_time, LPCWSTR format, LPWSTR buffer, int size) noexcept -> int;

            static auto get_time_format(const SYSTEMTIME &local_time, LPCSTR format, LPSTR buffer, int size) noexcept -> int;
            static auto get_time_format(const SYSTEMTIME &local_time, LPCWSTR format, LPWSTR buffer, int size) noexcept -> int;

            template<typename... Args>
            static constexpr auto format_str(
                char *const buffer,
                const std::size_t size,
                const char *const format,
                Args &&...args
            ) noexcept -> int {
                const auto &ntdll = Console::get_ntdll();
                return ntdll.snprintf.cdeclcall<int>(
                    ntdll.gadget_address,
                    buffer,
                    size,
                    format,
                    std::forward<Args>(args)...
                );
            }

            template<typename... Args>
            static constexpr auto format_str(
                wchar_t *const buffer,
                const std::size_t size,
                const wchar_t *const format,
                Args &&...args
            ) noexcept -> int {
                const auto &ntdll = Console::get_ntdll();
                return ntdll.snwprintf.cdeclcall<int>(
                    ntdll.gadget_address,
                    buffer,
                    size,
                    format,
                    std::forward<Args>(args)...
                );
            }

        public:
            template<utility::String FilePath, std::uintmax_t Line>
            class Log final {
            private:
                Log() = delete;

                Log(Log &&) = delete;
                Log &operator=(Log &&) = delete;

                Log(const Log &) = delete;
                Log &operator=(const Log &) = delete;

                template<std::size_t N>
                [[nodiscard]] static consteval auto find_last_of(
                    const utility::String<char, N> &str,
                    const char ch
                ) noexcept -> std::size_t {
                    auto idx = N - 2;
                    while ( idx >= 0 && str[idx] != ch ) {
                        --idx;
                    }
                    return idx;
                }

                [[nodiscard]] static consteval auto get_file_name() noexcept -> auto {
                    constexpr auto begin = Log::find_last_of(FilePath, '\\') + 1;
                    constexpr auto end = Log::find_last_of(FilePath, '.');
                    constexpr auto length = end - begin;
                    auto file_name = utility::String<char, length> {};
                    for ( auto i = std::size_t {}; i < length; ++i ) {
                        file_name[i] = FilePath[begin + i];
                    }
                    return file_name;
                }

            public:
                template<utility::String Format = "%s\n", typename... Args>
                static constexpr auto trace(Args &&...args) noexcept -> void {
                    if constexpr ( log_level <= LogLevel::Trace ) {
                        constexpr auto file_name = get_file_name();
                        const auto &console = Console::get();
                        console.write_prefix(
                            utility::XorStr<"TRACE">::access().data(),
                            (FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY),
                            utility::XorStr<file_name>::access().data(),
                            Line
                        );
                        auto buffer = utility::String<char, 512> {};
                        const auto written = Console::format_str(
                            buffer.data(),
                            buffer.size(),
                            utility::XorStr<Format>::access().data(),
                            std::forward<Args>(args)...
                        );
                        console.write(buffer.data(), written);
                    }
                }

                template<utility::String Format, typename... Args>
                    requires(std::same_as<decltype(Format.data()), const wchar_t *>)
                static constexpr auto trace(Args &&...args) noexcept -> void {
                    if constexpr ( log_level <= LogLevel::Trace ) {
                        constexpr auto file_name = get_file_name();
                        const auto &console = Console::get();
                        console.write_prefix(
                            utility::XorStr<"TRACE">::access().data(),
                            (FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY),
                            utility::XorStr<file_name>::access().data(),
                            Line
                        );
                        auto buffer = utility::String<wchar_t, 512> {};
                        const auto written = Console::format_str(
                            buffer.data(),
                            buffer.size(),
                            utility::XorStr<Format>::access().data(),
                            std::forward<Args>(args)...
                        );
                        console.write(buffer.data(), written);
                    }
                }

                template<utility::String Format = "%s\n", typename... Args>
                static constexpr auto debug(Args &&...args) noexcept -> void {
                    if constexpr ( log_level <= LogLevel::Trace ) {
                        constexpr auto file_name = get_file_name();
                        const auto &console = Console::get();
                        console.write_prefix(
                            utility::XorStr<"DEBUG">::access().data(),
                            (FOREGROUND_BLUE | FOREGROUND_INTENSITY),
                            utility::XorStr<file_name>::access().data(),
                            Line
                        );
                        auto buffer = utility::String<char, 512> {};
                        const auto written = Console::format_str(
                            buffer.data(),
                            buffer.size(),
                            utility::XorStr<Format>::access().data(),
                            std::forward<Args>(args)...
                        );
                        console.write(buffer.data(), written);
                    }
                }

                template<utility::String Format, typename... Args>
                    requires(std::same_as<decltype(Format.data()), const wchar_t *>)
                static constexpr auto debug(Args &&...args) noexcept -> void {
                    if constexpr ( log_level <= LogLevel::Trace ) {
                        constexpr auto file_name = get_file_name();
                        const auto &console = Console::get();
                        console.write_prefix(
                            utility::XorStr<"DEBUG">::access().data(),
                            (FOREGROUND_BLUE | FOREGROUND_INTENSITY),
                            utility::XorStr<file_name>::access().data(),
                            Line
                        );
                        auto buffer = utility::String<wchar_t, 512> {};
                        const auto written = Console::format_str(
                            buffer.data(),
                            buffer.size(),
                            utility::XorStr<Format>::access().data(),
                            std::forward<Args>(args)...
                        );
                        console.write(buffer.data(), written);
                    }
                }

                template<utility::String Format = "%s\n", typename... Args>
                static constexpr auto info(Args &&...args) noexcept -> void {
                    if constexpr ( log_level <= LogLevel::Trace ) {
                        constexpr auto file_name = get_file_name();
                        const auto &console = Console::get();
                        console.write_prefix(
                            utility::XorStr<"INFO">::access().data(),
                            (FOREGROUND_GREEN | FOREGROUND_INTENSITY),
                            utility::XorStr<file_name>::access().data(),
                            Line
                        );
                        auto buffer = utility::String<char, 512> {};
                        const auto written = Console::format_str(
                            buffer.data(),
                            buffer.size(),
                            utility::XorStr<Format>::access().data(),
                            std::forward<Args>(args)...
                        );
                        console.write(buffer.data(), written);
                    }
                }

                template<utility::String Format, typename... Args>
                    requires(std::same_as<decltype(Format.data()), const wchar_t *>)
                static constexpr auto info(Args &&...args) noexcept -> void {
                    if constexpr ( log_level <= LogLevel::Trace ) {
                        constexpr auto file_name = get_file_name();
                        const auto &console = Console::get();
                        console.write_prefix(
                            utility::XorStr<"INFO">::access().data(),
                            (FOREGROUND_GREEN | FOREGROUND_INTENSITY),
                            utility::XorStr<file_name>::access().data(),
                            Line
                        );
                        auto buffer = utility::String<wchar_t, 512> {};
                        const auto written = Console::format_str(
                            buffer.data(),
                            buffer.size(),
                            utility::XorStr<Format>::access().data(),
                            std::forward<Args>(args)...
                        );
                        console.write(buffer.data(), written);
                    }
                }

                template<utility::String Format = "%s\n", typename... Args>
                static constexpr auto warn(Args &&...args) noexcept -> void {
                    if constexpr ( log_level <= LogLevel::Trace ) {
                        constexpr auto file_name = get_file_name();
                        const auto &console = Console::get();
                        console.write_prefix(
                            utility::XorStr<"WARN">::access().data(),
                            (FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY),
                            utility::XorStr<file_name>::access().data(),
                            Line
                        );
                        auto buffer = utility::String<char, 512> {};
                        const auto written = Console::format_str(
                            buffer.data(),
                            buffer.size(),
                            utility::XorStr<Format>::access().data(),
                            std::forward<Args>(args)...
                        );
                        console.write(buffer.data(), written);
                    }
                }

                template<utility::String Format, typename... Args>
                    requires(std::same_as<decltype(Format.data()), const wchar_t *>)
                static constexpr auto warn(Args &&...args) noexcept -> void {
                    if constexpr ( log_level <= LogLevel::Trace ) {
                        constexpr auto file_name = get_file_name();
                        const auto &console = Console::get();
                        console.write_prefix(
                            utility::XorStr<"WARN">::access().data(),
                            (FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY),
                            utility::XorStr<file_name>::access().data(),
                            Line
                        );
                        auto buffer = utility::String<wchar_t, 512> {};
                        const auto written = Console::format_str(
                            buffer.data(),
                            buffer.size(),
                            utility::XorStr<Format>::access().data(),
                            std::forward<Args>(args)...
                        );
                        console.write(buffer.data(), written);
                    }
                }

                template<utility::String Format = "%s\n", typename... Args>
                static constexpr auto error(Args &&...args) noexcept -> void {
                    if constexpr ( log_level <= LogLevel::Trace ) {
                        constexpr auto file_name = get_file_name();
                        const auto &console = Console::get();
                        console.write_prefix(
                            utility::XorStr<"ERROR">::access().data(),
                            (FOREGROUND_RED | FOREGROUND_INTENSITY),
                            utility::XorStr<file_name>::access().data(),
                            Line
                        );
                        auto buffer = utility::String<char, 512> {};
                        const auto written = Console::format_str(
                            buffer.data(),
                            buffer.size(),
                            utility::XorStr<Format>::access().data(),
                            std::forward<Args>(args)...
                        );
                        console.write(buffer.data(), written);
                    }
                }

                template<utility::String Format, typename... Args>
                    requires(std::same_as<decltype(Format.data()), const wchar_t *>)
                static constexpr auto error(Args &&...args) noexcept -> void {
                    if constexpr ( log_level <= LogLevel::Trace ) {
                        constexpr auto file_name = get_file_name();
                        const auto &console = Console::get();
                        console.write_prefix(
                            utility::XorStr<"ERROR">::access().data(),
                            (FOREGROUND_RED | FOREGROUND_INTENSITY),
                            utility::XorStr<file_name>::access().data(),
                            Line
                        );
                        auto buffer = utility::String<wchar_t, 512> {};
                        const auto written = Console::format_str(
                            buffer.data(),
                            buffer.size(),
                            utility::XorStr<Format>::access().data(),
                            std::forward<Args>(args)...
                        );
                        console.write(buffer.data(), written);
                    }
                }
            };
        };

    }  // namespace core

}  // namespace orion

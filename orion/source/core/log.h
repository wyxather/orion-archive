#pragma once

#include <print>
#include <source_location>

#include "source/orion.h"

namespace orion::core {

    template<stb::fixed_string file_name, std::size_t line>
    class Log final {
    public:
        NON_CONSTRUCTIBLE(Log)

    private:
        NODISCARD static consteval auto parse_file_name() noexcept {
            constexpr auto begin =
                stb::detail::find_last_of(file_name, '\\') + 1;
            constexpr auto end = stb::detail::find_last_of(file_name, '.');
            constexpr auto length = end - begin;
            std::array<char, length> result;
            for (std::size_t index = 0; index < length; ++index) {
                result[index] = file_name[begin + index];
            }
            return stb::fixed_string<result.size()>(result.data());
        }

        template<stb::fixed_string log_level, WORD color>
        static constexpr auto print_prefix() noexcept {
            std::print(
                "[{:%Y-%b-%d %H:%M:%S} ",
                std::chrono::current_zone()->to_local(
                    std::chrono::system_clock::now()
                )
            );
            const auto& console = orion.get_console();
            console.set_text_output_color(color);
            std::print("{:<6}", utilities::String<log_level>().c_str());
            console.set_text_output_color(
                FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE
            );
            std::print(
                "{}:{}] ",
                utilities::String<parse_file_name()>().c_str(),
                line
            );
        }

        enum class Level { Trace, Debug, Info, Warn, Error };

        static constexpr auto log_level = Level::Info;

    public:
        template<typename... Args>
        static constexpr auto trace(
            const std::format_string<Args...> format,
            Args&&... args
        ) noexcept {
            if constexpr (log_level <= Level::Trace) {
                print_prefix<
                    "TRACE",
                    FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY>(
                );
                std::println(format, std::forward<Args>(args)...);
            }
        }

        template<typename... Args>
        static constexpr auto debug(
            const std::format_string<Args...> format,
            Args&&... args
        ) noexcept {
            if constexpr (log_level <= Level::Debug) {
                print_prefix<"DEBUG", FOREGROUND_BLUE | FOREGROUND_INTENSITY>();
                std::println(format, std::forward<Args>(args)...);
            }
        }

        template<typename... Args>
        static constexpr auto info(
            const std::format_string<Args...> format,
            Args&&... args
        ) noexcept {
            if constexpr (log_level <= Level::Info) {
                print_prefix<"INFO", FOREGROUND_GREEN | FOREGROUND_INTENSITY>();
                std::println(format, std::forward<Args>(args)...);
            }
        }

        template<typename... Args>
        static constexpr auto warn(
            const std::format_string<Args...> format,
            Args&&... args
        ) noexcept {
            if constexpr (log_level <= Level::Warn) {
                print_prefix<
                    "WARN",
                    FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY>();
                std::println(format, std::forward<Args>(args)...);
            }
        }

        template<typename... Args>
        static constexpr auto error(
            const std::format_string<Args...> format,
            Args&&... args
        ) noexcept {
            if constexpr (log_level <= Level::Error) {
                print_prefix<"ERROR", FOREGROUND_RED | FOREGROUND_INTENSITY>();
                std::println(format, std::forward<Args>(args)...);
            }
        }
    };

}  // namespace orion::core

#define log orion::core::Log<__FILE__, std::source_location::current().line()>

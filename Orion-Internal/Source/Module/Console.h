#pragma once

namespace Orion
{
	class Application;

	namespace Module
	{
		class Console
		{
			const Application& m_app;

		public:
			enum class Color
			{
				BLACK,
				BLUE,
				GREEN,
				CYAN,
				RED,
				MAGENTA,
				BROWN,
				LIGHTGRAY,
				DARKGRAY,
				LIGHTBLUE,
				LIGHTGREEN,
				LIGHTCYAN,
				LIGHTRED,
				LIGHTMAGENTA,
				YELLOW,
				WHITE
			};

			Console(const Application& app) noexcept;
			~Console() noexcept;

			Console(Console&&) = delete;
			Console(const Console&) = delete;
			Console& operator=(Console&&) = delete;
			Console& operator=(const Console&) = delete;

			template <stb::compiletime_string_wrapper printFormat, Color color = Color::LIGHTGREEN, typename ...Args>
			constexpr void print(Args&& ...args) const noexcept
			{
#if !NDEBUG
				Console::color(color);
				String<printFormat> format;
				std::printf(format.get(), std::forward<Args>(args)...);
#endif
			}

			template <stb::compiletime_string_wrapper printFormat, Color color = Color::LIGHTGREEN, typename ...Args>
			constexpr void log(Args&& ...args) const noexcept
			{
#if !NDEBUG
				char timeBuffer[9]{};
				Console::time(timeBuffer);
				Console::print<"[%s] ", color>(timeBuffer);
				Console::print<printFormat, color>(std::forward<Args>(args)...);
				Console::print<"\n", color>();
#endif
			}

		private:
#if !NDEBUG
			static BOOL CALLBACK enumerate(HWND handle, Console* console) noexcept;
			static void time(char timeBuffer[9]) noexcept;

			void color(Color color) const noexcept;

			HWND m_handle = {};
			HANDLE m_output = {};
			FILE* m_stream = {};
#endif
		};
	}
}
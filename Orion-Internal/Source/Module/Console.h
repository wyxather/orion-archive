#pragma once

class Console
{
public:
	Console() noexcept;
	~Console() noexcept;

	Console(Console&&) = delete;
	Console(const Console&) = delete;
	Console& operator=(Console&&) = delete;
	Console& operator=(const Console&) = delete;

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

private:
#if !NDEBUG
	static auto time(std::array<char, 9>& buffer) noexcept -> void;
	static auto __stdcall enumerate(HWND handle, Console* console) noexcept -> BOOL;

	auto color(Color color) const noexcept -> void;

	template <stb::compiletime_string_wrapper format, Color color = Color::LIGHTGREEN, typename ...Args>
	constexpr void print(Args&& ...args) const noexcept
	{
		Console::color(color);
		Orion::String<format> fmt;
		std::printf(fmt.get(), std::forward<Args>(args)...);
	}

	HWND handle;
	HANDLE output;
	FILE* stream;
#endif

public:
	template <stb::compiletime_string_wrapper format, Color color = Color::LIGHTGREEN, typename ...Args>
	constexpr void log(Args&& ...args) const noexcept
	{
#if !NDEBUG
		std::array<char, 9> buffer;
		Console::time(buffer);
		Console::print<"[%s] ", color>(buffer.data());
		Console::print<format, color>(std::forward<Args>(args)...);
		Console::print<"\n", color>();
#endif
	}
};

inline std::optional<const Console> console;
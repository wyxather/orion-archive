#pragma once

namespace Orion
{
	template <stb::compiletime_string_wrapper str>
	class String
	{
	public:
		String(String&&) = delete;
		String(const String&) = delete;
		String& operator=(String&&) = delete;
		String& operator=(const String&) = delete;

	private:
		static inline auto value{ xorarr(stb::compiletime_value<str()>::value) };

	public:
		constexpr String() noexcept { value.crypt(); }
		constexpr ~String() noexcept { value.crypt(); }

		[[nodiscard]] static constexpr auto get() noexcept { return value.get(); }
	};
}
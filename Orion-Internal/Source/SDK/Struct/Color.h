#pragma once

struct Color
{
public:
	constexpr explicit Color(std::uint32_t r = 0, std::uint32_t g = 0, std::uint32_t b = 0, std::uint32_t a = 0) noexcept
	{
		color[0] = r;
		color[1] = g;
		color[2] = b;
		color[3] = a;
	}

private:
	std::uint8_t color[4];
};
static_assert(sizeof(Color) == 0x4);
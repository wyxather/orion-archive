#pragma once

class FileSVG
{
public:
	explicit FileSVG(std::size_t width, std::size_t height) noexcept;
	~FileSVG() noexcept;

	FileSVG(FileSVG&&) = delete;
	FileSVG(const FileSVG&) = delete;
	FileSVG& operator=(FileSVG&&) = delete;
	FileSVG& operator=(const FileSVG&) = delete;

	[[nodiscard]] auto& get() noexcept { return *reinterpret_cast<std::uint8_t**>(data.data()); }
	[[nodiscard]] auto& size() noexcept { return *reinterpret_cast<std::size_t*>(reinterpret_cast<std::uintptr_t>(data.data()) + 0x4); }
	[[nodiscard]] auto parse(const std::uint8_t* const fileData, const std::size_t fileSize, const std::size_t* const width, const std::size_t* const height, const float scale = 1.f) noexcept -> bool;

private:
	std::array<std::uint8_t, 0x2C> data = {};
};
static_assert(sizeof(FileSVG) == 0x2C);
#pragma once

namespace WeaponIcon
{
	struct Data
	{
		constexpr explicit Data() noexcept = default;
		constexpr ~Data() noexcept = default;

		constexpr Data(Data&&) noexcept = default;
		constexpr Data& operator=(Data&&) noexcept = default;

		Data(const Data&) = delete;
		Data& operator=(const Data&) = delete;

		void* texture = {};
		float size[2] = {};
	};

	auto install() noexcept -> void;
	auto uninstall() noexcept -> void;
	auto invalidate() noexcept -> void;

	[[nodiscard]] auto get(std::uint32_t hash) noexcept -> const Data*;
}
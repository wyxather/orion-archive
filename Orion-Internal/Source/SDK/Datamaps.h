#pragma once

#define DATAMAP_OFFSET(class_name, var_name, offset, return_type) \
[[nodiscard]] std::add_lvalue_reference_t<return_type> var_name() const noexcept \
{ \
    return *reinterpret_cast<std::add_pointer_t<return_type>>(reinterpret_cast<const std::uintptr_t>(this) + \
	Datamaps::get(Orion::Fnv<class_name "->" #var_name, std::uint32_t>::value) + offset); \
}

#define DATAMAP(class_name, var_name, return_type) \
		DATAMAP_OFFSET(class_name, var_name, 0, return_type)

namespace Datamaps
{
	auto install() noexcept -> void;
	auto uninstall() noexcept -> void;

	[[nodiscard]] auto get(std::uint32_t hash) noexcept -> std::uint32_t;
}
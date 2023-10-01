#pragma once

#define DEFINE_NETVAR_OFFSET(class_name, var_name, offset, return_type) \
[[nodiscard]] std::add_lvalue_reference_t<return_type> var_name() const noexcept \
{ \
    return *reinterpret_cast<std::add_pointer_t<return_type>>(reinterpret_cast<const std::uintptr_t>(this) + \
	Netvars::get(Orion::Fnv<class_name "->" #var_name, std::uint32_t>::value) + offset); \
}

#define DEFINE_NETVAR(class_name, var_name, return_type) \
		DEFINE_NETVAR_OFFSET(class_name, var_name, 0, return_type)

#define DEFINE_CUSTOM_NETVAR_OFFSET(class_name, var_name, func_name, offset, return_type) \
[[nodiscard]] std::add_lvalue_reference_t<return_type> func_name() const noexcept \
{ \
    return *reinterpret_cast<std::add_pointer_t<return_type>>(reinterpret_cast<const std::uintptr_t>(this) + \
	Netvars::get(Orion::Fnv<class_name "->" var_name, std::uint32_t>::value) + offset); \
}

#define DEFINE_CUSTOM_NETVAR(class_name, var_name, func_name, return_type) \
		DEFINE_CUSTOM_NETVAR_OFFSET(class_name, var_name, func_name, 0, return_type)

#define NETVAR_GET(_1,_2,_3,_4,MAX,...) MAX
#define NETVAR_EXPAND(x) x
#define NETVAR(...) NETVAR_EXPAND(NETVAR_GET(__VA_ARGS__, DEFINE_CUSTOM_NETVAR, DEFINE_NETVAR, )(__VA_ARGS__))

namespace Netvars
{
	auto install() noexcept -> void;
	auto uninstall() noexcept -> void;

	[[nodiscard]] auto get(std::uint32_t hash) noexcept -> std::uint32_t;
}
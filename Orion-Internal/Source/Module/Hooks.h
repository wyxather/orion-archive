#pragma once

class Hooks
{
public:
	enum class Function
	{
		NONE,
		STDCALL,
		THISCALL,
		FASTCALL,
		VECTORCALL
	};

	explicit Hooks() noexcept;
	~Hooks() noexcept;

	Hooks(Hooks&&) = delete;
	Hooks(const Hooks&) = delete;
	Hooks& operator=(Hooks&&) = delete;
	Hooks& operator=(const Hooks&) = delete;

	static auto enable() noexcept -> void;
	static auto disable() noexcept -> void;

	[[nodiscard]] static auto calculateVmtLength(void* address) noexcept -> std::size_t;
};

class MinHook
{
public:
	explicit MinHook() noexcept;
	~MinHook() noexcept;

	MinHook(MinHook&&) = delete;
	MinHook(const MinHook&) = delete;
	MinHook& operator=(MinHook&&) = delete;
	MinHook& operator=(const MinHook&) = delete;

	auto init(void* address) noexcept -> void;
	auto init(std::size_t size) noexcept -> void;

	auto hookAt(std::size_t index, void* function, bool enable = false) noexcept -> void;
	auto hookAt(std::size_t index, void* target, void* function, bool enable = false) noexcept -> void;

	auto restore() noexcept -> void;

	template <std::size_t index, typename ReturnType, Hooks::Function function = Hooks::Function::NONE, bool callTarget = false, typename ...Args>
	[[nodiscard]] constexpr auto get(Args ...args) const noexcept
	{
		switch (function) {
		case Hooks::Function::STDCALL: return static_cast<ReturnType(__stdcall*)(Args...)>(callTarget ? data[index].first : data[index].second)(args...);
		case Hooks::Function::THISCALL: return static_cast<ReturnType(__thiscall*)(Args...)>(callTarget ? data[index].first : data[index].second)(args...);
		case Hooks::Function::FASTCALL: return static_cast<ReturnType(__fastcall*)(Args...)>(callTarget ? data[index].first : data[index].second)(args...);
		case Hooks::Function::VECTORCALL: return static_cast<ReturnType(__vectorcall*)(Args...)>(callTarget ? data[index].first : data[index].second)(args...);
		}
		return static_cast<ReturnType(__cdecl*)(Args...)>(callTarget ? data[index].first : data[index].second)(args...);
	}

	template <std::size_t index, typename ReturnType, Hooks::Function function = Hooks::Function::NONE, bool callTarget = false, typename ...Args>
	[[nodiscard]] constexpr auto call(Args ...args) const noexcept
	{
		return get<index, ReturnType, function, callTarget>(base, args...);
	}

private:
	void* base;
	std::size_t size;
	std::unique_ptr<std::pair<void*, void*>[]> data;
};

inline std::optional<const Hooks> hooks;

using HookType = MinHook;
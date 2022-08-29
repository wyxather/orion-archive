#pragma once

namespace Orion
{
	class Application;

	namespace Module
	{
		class Hooks
		{
			const Application& m_app;

		public:
			enum class Function {
				NONE,
				STDCALL,
				THISCALL,
				FASTCALL,
				VECTORCALL
			};

			class MinHook
			{
			public:
				MinHook() noexcept {}
				~MinHook() noexcept;

				MinHook(MinHook&&) noexcept = default;
				MinHook& operator=(MinHook&&) noexcept = default;

				MinHook(const MinHook&) = delete;
				MinHook& operator=(const MinHook&) = delete;

				void init(void* address) noexcept;
				void hookAt(std::size_t index, void* function, bool enable = false) noexcept;
				void restore() noexcept;

				template <std::size_t index, typename returnType, Function function = Function::NONE, bool callTarget = false, typename ...Args>
				[[nodiscard]] constexpr auto get(Args ...args) const noexcept
				{
					switch (function) {
					case Function::STDCALL: return static_cast<returnType(__stdcall*)(Args...)>(callTarget ? m_data[index].first : m_data[index].second)(args...);
					case Function::THISCALL: return static_cast<returnType(__thiscall*)(Args...)>(callTarget ? m_data[index].first : m_data[index].second)(args...);
					case Function::FASTCALL: return static_cast<returnType(__fastcall*)(Args...)>(callTarget ? m_data[index].first : m_data[index].second)(args...);
					case Function::VECTORCALL: return static_cast<returnType(__vectorcall*)(Args...)>(callTarget ? m_data[index].first : m_data[index].second)(args...);
					}
					return static_cast<returnType(__cdecl*)(Args...)>(callTarget ? m_data[index].first : m_data[index].second)(args...);
				}

				template <std::size_t index, typename returnType, Function function = Function::NONE, bool callTarget = false, typename ...Args>
				[[nodiscard]] constexpr auto call(Args ...args) const noexcept
				{
					return get<index, returnType, function, callTarget>(m_base, args...);
				}

			private:
				void* m_base = {};
				std::size_t m_size = {};
				std::unique_ptr<std::pair<void*, void*>[]> m_data;
			};

			static std::size_t calculateVmtLength(void* address) noexcept;
			static void enable() noexcept;

			Hooks(const Application& app) noexcept;
			~Hooks() noexcept;

			Hooks(Hooks&&) = delete;
			Hooks(const Hooks&) = delete;
			Hooks& operator=(Hooks&&) = delete;
			Hooks& operator=(const Hooks&) = delete;

			MinHook& operator[](const std::uint32_t key) noexcept;

		private:
			HashTable<MinHook> m_data;
		};
	}
}
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
			static std::size_t calculateVmtLength(void* address) noexcept;

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
				void hookAt(std::size_t index, void* function) noexcept;
				void restore() noexcept;

			private:
				void* m_base = {};
				std::size_t m_size = {};
				std::unique_ptr<std::pair<void*, void*>[]> m_data;
			};

			Hooks(const Application& app) noexcept;
			~Hooks() noexcept;

			Hooks(Hooks&&) = delete;
			Hooks(const Hooks&) = delete;
			Hooks& operator=(Hooks&&) = delete;
			Hooks& operator=(const Hooks&) = delete;

			MinHook& operator[](std::uint32_t key) noexcept;

		private:
			HashTable<MinHook> m_data;
		};
	}
}
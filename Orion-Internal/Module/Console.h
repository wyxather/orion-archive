#pragma once

namespace Orion
{
	class Application;

	namespace Module
	{
		class Console
		{
			const Application& m_app;

		public:
			Console(const Application& app) noexcept;
			~Console() noexcept;

			Console(Console&&) = delete;
			Console(const Console&) = delete;
			Console& operator=(Console&&) = delete;
			Console& operator=(const Console&) = delete;

		private:
			static BOOL CALLBACK enumerate(HWND handle, Console* console) noexcept;

			HWND m_handle = {};
			FILE* m_stream = {};
		};
	}
}
#pragma once

namespace Orion
{
	namespace Module
	{
		class Console
		{
		public:
			Console() noexcept;
			~Console() noexcept;

			Console(Console&&) = delete;
			Console(const Console&) = delete;
			Console& operator=(Console&&) = delete;
			Console& operator=(const Console&) = delete;

		private:
			static BOOL CALLBACK enumerate(HWND handle, Console* console) noexcept;

			DWORD m_id = {};
			HWND m_handle = {};
			FILE* m_stream = {};
		};
	}
}
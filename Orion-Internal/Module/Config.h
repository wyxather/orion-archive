#pragma once

namespace Orion
{
	class Application;

	namespace Module
	{
		class Config
		{
			const Application& m_app;

		public:
			class File;

			class Data
			{
			public:
				bool hitbox[4] = {};
				float color[4] = {};
				int target = {};
			};

			Config(const Application& app) noexcept;

			Config(Config&&) = delete;
			Config(const Config&) = delete;
			Config& operator=(Config&&) = delete;
			Config& operator=(const Config&) = delete;

			[[nodiscard]] constexpr auto&& getInput() noexcept { return m_input; }
			[[nodiscard]] constexpr auto&& getSort() noexcept { return m_settings.sort; }
			[[nodiscard]] constexpr auto&& getFiles() const noexcept { return m_files; }
			[[nodiscard]] constexpr auto&& getData() noexcept { return orion; }

			void init() noexcept;
			void save() noexcept;
			void update() noexcept;
			void create() noexcept;
			void load(const File& file) noexcept;
			void rename(const File& file) noexcept;
			static void remove(const File& file) noexcept;

		private:
			void sort() noexcept;
			void enumerate() noexcept;
			void save(const void* json) noexcept;
			void load(void* json, const File& file) noexcept;

			[[nodiscard]] bool exist(std::string_view fileName) const noexcept;

			enum Sort
			{
				NAME,
				TIME
			};
			struct
			{
				int sort = {};
				std::filesystem::path path;

			} m_settings;
			Data orion;
			std::string m_name;
			std::vector<File> m_files;
			std::array<char, 260> m_input = {};
		};

		class Config::File
		{
		public:
			constexpr File(
				std::string_view name,
				const std::filesystem::path& path,
				std::string_view time,
				time_t time_t,
				bool active) noexcept :
				m_name{ name },
				m_path{ path },
				m_time{ time },
				m_time_t{ time_t },
				m_active{ active }
			{}

			constexpr File() noexcept = default;
			constexpr File(File&&) noexcept = default;
			constexpr File& operator=(File&&) noexcept = default;

			File(const File&) = delete;
			File& operator=(const File&) = delete;

			bool m_active = {};
			std::string m_name, m_time;
			std::time_t m_time_t = {};
			std::filesystem::path m_path;
		};
	}
}
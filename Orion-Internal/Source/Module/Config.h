#pragma once

class Config
{
public:
	class File;

	class Data
	{
	public:
		constexpr explicit Data() noexcept = default;

		Data(Data&&) = delete;
		Data(const Data&) = delete;
		Data& operator=(Data&&) = delete;
		Data& operator=(const Data&) = delete;

		struct
		{
			struct
			{
				struct
				{
					bool enable = false;
					float color[4] = { 1, 1, 1, .5f };

				} box;

				struct
				{
					bool icon = false;

				} weapon;

				bool name = false;
				bool skeleton = false;
				bool healthbar = false;

			} ally;

			struct
			{
				struct
				{
					bool enable = false;
					float color[4] = { 1, 1, 1, .5f };

				} box;

				struct
				{
					bool icon = false;

				} weapon;

				bool name = false;
				bool skeleton = false;
				bool healthbar = false;

			} enemy;

			int current = 0;

		} players;

		struct
		{
			struct
			{
				bool enable = false;
				float color[4] = { 1, 1, 1, 1 };
				float size = 3;

			} crosshair;

			struct
			{
				float aspect_ratio = 0;

			} misc;

		} view;

		struct
		{
			struct
			{
				bool auto_jump = false;

			} movement;

		} main;
	};

	constexpr explicit Config() noexcept = default;

	Config(Config&&) = delete;
	Config(const Config&) = delete;
	Config& operator=(Config&&) = delete;
	Config& operator=(const Config&) = delete;

	[[nodiscard]] constexpr auto&& getInput() noexcept { return m_input; }
	[[nodiscard]] constexpr auto&& getSort() noexcept { return m_settings.sort; }
	[[nodiscard]] constexpr auto&& getFiles() const noexcept { return m_files; }
	[[nodiscard]] constexpr auto&& getData() noexcept { return orion; }

	auto init() noexcept -> void;
	auto save() noexcept -> void;
	auto update() noexcept -> void;
	auto create() noexcept -> void;
	auto load(const File& file) noexcept -> void;
	auto rename(const File& file) noexcept -> void;
	static auto remove(const File& file) noexcept -> void;

private:
	auto sort() noexcept -> void;
	auto enumerate() noexcept -> void;
	auto save(const void* json) noexcept -> void;
	auto load(void* json, const File& file) noexcept -> void;

	[[nodiscard]] auto exist(std::string_view fileName) const noexcept -> bool;

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
	constexpr explicit File(
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

inline std::optional<Config> config;
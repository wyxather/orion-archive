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
			bool enable = false;
			bool hitbox[11] = {};
			bool aimkey[2] = { false, true };
			float fov = 90.f;

		} legitbot;

		struct
		{
			int player = 0;

			struct
			{
				struct
				{
					bool enable = false;
					int type = 0;
					float color[4] = { 1.f, 1.f, 0.f, 1.f };
					float scale[3] = { .25f, .25f, .25f };

				} box;

				bool name = false;
				bool weapon = false;
				bool snapline = false;
				bool healthbar = false;
				bool shieldbar = false;

			} enemy;

		} players;

		struct
		{
			struct
			{
				bool god_mode = false;
				bool no_recoil = false;
				bool no_sway = false;
				bool no_ammo_cost = false;
				bool no_heat = false;

			} exploits;

			struct
			{
				bool enable = false;
				float value = 20.f;

			} fire_rate;

			struct
			{
				bool enable = false;
				float value = 0.f;

			} spread;

			struct
			{
				bool enable = false;
				float value = 100.f;

			} accuracy;

			struct
			{
				bool enable = false;
				float value = 100.f;

			} damage;

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
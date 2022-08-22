#include "Config.h"
#include "Dependencies/json.hpp"

#include <fstream>

using Orion::Module::Config;

Config::Config(const Application& app) noexcept : m_app{ app } {}

void Config::init() noexcept
{
	if (PWSTR relativePath{}; SUCCEEDED(SHGetKnownFolderPath(FOLDERID_Desktop, NULL, nullptr, &relativePath))) {

		Orion::String<"Orion"> name;

		m_settings.sort = Sort::NAME;
		m_settings.path = relativePath;
		m_settings.path /= name.get();

		save();
		update();

		CoTaskMemFree(relativePath);
	}
}

void Config::sort() noexcept
{
	switch (m_settings.sort) {
	case Sort::TIME:
		std::sort(m_files.begin(), m_files.end(),
			[](const File& a, const File& b) {
				return (a.m_time_t != b.m_time_t)
					? (a.m_time_t > b.m_time_t)
					: (b.m_name.compare(a.m_name) < 0);
			});
		break;
	}
}

void Config::update() noexcept
{
	enumerate();
	sort();
}

void Config::enumerate() noexcept
{
	std::error_code ec;
	std::vector<std::filesystem::directory_entry> entry;

	std::transform(std::filesystem::directory_iterator{ m_settings.path, ec },
		std::filesystem::directory_iterator{},
		std::back_inserter(entry),
		[](const std::filesystem::directory_entry& entry) { return entry; });

	m_files.clear();

	for (const auto& e : entry) {

		if (!e.path().has_extension())
			continue;

		if (Orion::String<".cfg"> extension;
			extension.get() != e.path().extension().string())
			continue;

		using namespace std::chrono;

		const auto time_t{ system_clock::to_time_t(clock_cast<system_clock>(e.last_write_time())) };

		if (tm tm;
			!localtime_s(&tm, &time_t)) {

			Orion::String<"%e %b %Y %H:%M"> format;

			if (char time[64];
				strftime(time, sizeof(time), format.get(), &tm)) {

				const auto& path{ e.path() };
				const auto& name{ path.stem().string() };
				m_files.emplace_back(name, path, time, time_t, name == m_name);
			}
		}
	}
}

void Config::create() noexcept
{
	Orion::String<"New Config"> fileName;
	std::string name;
	std::size_t index{};

	do {
		name = fileName.get();

		if (index)
			name += " " + std::to_string(index + 1);

		if (!exist(name))
			break;

		++index;

	} while (true);

	m_name = name;
	save();
}

void Orion::Module::Config::remove(const File& file) noexcept
{
	std::filesystem::remove(file.m_path);
}

void Orion::Module::Config::rename(const File& file) noexcept
{
	if (!strlen(m_input.data())
		|| file.m_name == m_input.data()
		|| exist(m_input.data()))
		return;

	Orion::String<".cfg"> extension;

	if (file.m_active)
		m_name = m_input.data();

	std::filesystem::rename(
		m_settings.path / (file.m_name + std::string{ extension.get() }),
		m_settings.path / (std::string{ m_input.data() } + std::string{ extension.get() }));
}

bool Config::exist(std::string_view fileName) const noexcept
{
	for (auto&& file : m_files)
		if (file.m_name == fileName)
			return true;
	return false;
}

void Config::save(const void* json) noexcept
{
	Orion::String<".cfg"> extension;
	std::error_code ec;

	std::filesystem::create_directory(m_settings.path, ec);

	if (m_name.empty()) {

		Orion::String<"Default"> name;
		m_name = name.get();

		if (std::ofstream out{ m_settings.path / (std::string{ name.get() } + std::string{ extension.get() }) }; out.good())
			out << std::setw(2) << *static_cast<const nlohmann::json*>(json);
	}
	else {
		if (std::ofstream out{ m_settings.path / (m_name + std::string{ extension.get() }) }; out.good())
			out << std::setw(2) << *static_cast<const nlohmann::json*>(json);
	}
}

void Config::load(void* json, const File& file) noexcept
{
	Orion::String<".cfg"> extension;

	if (std::ifstream in{ m_settings.path / (file.m_name + std::string{ extension.get() }) }; in.good()) {

		*static_cast<nlohmann::json*>(json) = nlohmann::json::parse(in, nullptr, false, true);
		if ((*static_cast<nlohmann::json*>(json)).is_discarded())
			return;

		m_name = file.m_name;
	}
}

void Config::save() noexcept
{
	nlohmann::json o;
	{

	}
	save(static_cast<const void*>(&o));
}

void Config::load(const File& file) noexcept
{
	nlohmann::json o;
	load(static_cast<void*>(&o), file);
	{

	}
}
#include <fstream>

#include "dependencies/json.hpp"
#include "source/orion.h"

using orion::core::Config;
using orion::utilities::Fnv1a;
using orion::utilities::String;

Config::Config() noexcept
{
    PWSTR relative_path;
    if (SUCCEEDED(orion.get_shell32().sh_get_known_folder_path(FOLDERID_Desktop, NULL, nullptr, &relative_path)))
    {
        settings.sort = Sort::Name;
        settings.path = relative_path;
        settings.path /= String<"Orion">().c_str();
        save();
        update();
        orion.get_combase().co_task_mem_free(relative_path);
    }
}

auto Config::sort() noexcept -> void
{
    if (settings.sort == Sort::Time)
    {
        constexpr auto is_newer = [](const File& a, const File& b) noexcept {
            if (a.time_t != b.time_t)
            {
                return (a.time_t > b.time_t);
            }
            return (b.name.compare(a.name) < 0);
        };
        std::ranges::sort(files.begin(), files.end(), is_newer);
    }
}

auto Config::update() noexcept -> void
{
    enumerate();
    sort();
}

auto Config::enumerate() noexcept -> void
{
    std::error_code ec;
    std::vector<std::filesystem::directory_entry> entry;
    std::transform(std::filesystem::directory_iterator{settings.path, ec}, std::filesystem::directory_iterator{},
                   std::back_inserter(entry),
                   [](const std::filesystem::directory_entry& directory_entry) { return directory_entry; });
    files.clear();
    for (const auto& e : entry)
    {
        const auto& path = e.path();
        if (!path.has_extension())
        {
            continue;
        }
        if (!Fnv1a<".cfg">::eq(path.extension().string().c_str()))
        {
            return;
        }
        const auto time_t =
            std::chrono::system_clock::to_time_t(clock_cast<std::chrono::system_clock>(e.last_write_time()));
        if (tm tm; localtime_s(&tm, &time_t) == 0)
        {
            std::stringstream string_stream;
            string_stream << std::put_time(&tm, String<"%e %b %Y %H:%M">().c_str());
            const auto file_name = path.stem().string();
            files.emplace_back(file_name, path, string_stream.str(), time_t, file_name == name);
        }
    }
}

auto Config::create() noexcept -> void
{
    std::string file_name;
    std::size_t index = 0;
    do
    {
        file_name = String<"New Config">();
        if (index != 0)
        {
            file_name += String<" ">();
            file_name += std::to_string(index + 1);
        }
        if (!exist(file_name))
        {
            break;
        }
        ++index;
    } while (true);
    name = file_name;
    save();
}

auto Config::remove(const File& file) const noexcept -> void
{
    std::filesystem::remove(file.path);
}

auto Config::rename(const File& file) noexcept -> void
{
    if (std::strlen(input.data()) == 0)
    {
        return;
    }
    if (file.name == input.data())
    {
        return;
    }
    if (exist(input.data()))
    {
        return;
    }
    if (file.active)
    {
        name = input.data();
    }
    String<".cfg"> extension;
    std::filesystem::rename(settings.path / (file.name + std::string(extension.c_str())),
                            settings.path / (std::string(input.data()) + std::string(extension.c_str())));
}

auto Config::exist(const std::string_view filename) const noexcept -> bool
{
    constexpr auto has_same_name = [](const std::string_view name_compared) noexcept {
        return
            [&name_compared](const decltype(files)::value_type& file) noexcept { return name_compared == file.name; };
    };
    return std::ranges::any_of(files, has_same_name(filename));
}

auto Config::save(const void* const json) noexcept -> void
{
    std::error_code ec;
    std::filesystem::create_directory(settings.path, ec);
    String<".cfg"> extension;
    if (name.empty())
    {
        String<"Default"> filename;
        name = filename.c_str();
        std::ofstream out{settings.path / (std::string(filename.c_str()) + std::string(extension.c_str()))};
        if (out.good())
        {
            out << std::setw(2) << *static_cast<const nlohmann::json*>(json);
        }
    }
    else
    {
        std::ofstream out{settings.path / (name + std::string(extension.c_str()))};
        if (out.good())
        {
            out << std::setw(2) << *static_cast<const nlohmann::json*>(json);
        }
    }
}

void Config::load(void* const json, const File& file) noexcept
{
    std::ifstream in{settings.path / (file.name + std::string(String<".cfg">()))};
    if (!in.good())
    {
        return;
    }
    *static_cast<nlohmann::json*>(json) = nlohmann::json::parse(in, nullptr, false, true);
    if ((*static_cast<nlohmann::json*>(json)).is_discarded())
    {
        return;
    }
    name = file.name;
}

namespace orion
{
template <stb::fixed_string _Key, typename _Value>
constexpr auto write(nlohmann::json& json, const _Value& object) noexcept
{
    String<_Key> key;
    json[key.c_str()] = object;
}

template <stb::fixed_string _Key> constexpr auto read(const nlohmann::json& json, bool& object) noexcept
{
    if (String<_Key> key; json.contains(key.c_str()))
    {
        if (const auto& value = json[key.c_str()]; value.is_boolean())
        {
            value.get_to(object);
        }
    }
}

template <stb::fixed_string _Key> constexpr auto read(const nlohmann::json& json, int& object) noexcept
{
    if (String<_Key> key; json.contains(key.c_str()))
    {
        if (const auto& value = json[key.c_str()]; value.is_number_integer())
        {
            value.get_to(object);
        }
    }
}

template <stb::fixed_string _Key> constexpr auto read(const nlohmann::json& json, float& object) noexcept
{
    if (String<_Key> key; json.contains(key.c_str()))
    {
        if (const auto& value = json[key.c_str()]; value.is_number_float())
        {
            value.get_to(object);
        }
    }
}
} // namespace orion

auto Config::save() noexcept -> void
{
    nlohmann::json json;
#pragma push_macro("CONFIG")
#define CONFIG(object) write<#object>(json, object)
    CONFIG(data.player[0].ability_ratio);
    CONFIG(data.player[0].critical_power);
    CONFIG(data.player[0].critical_ratio);
    CONFIG(data.player[0].repeat_on_boost);
    CONFIG(data.player[0].god_mode);
    CONFIG(data.player[0].hit_ratio);
    CONFIG(data.player[0].max_stats);
    CONFIG(data.player[0].resist_disease);

    CONFIG(data.player[1].ability_ratio);
    CONFIG(data.player[1].critical_power);
    CONFIG(data.player[1].critical_ratio);
    CONFIG(data.player[1].repeat_on_boost);
    CONFIG(data.player[1].god_mode);
    CONFIG(data.player[1].hit_ratio);
    CONFIG(data.player[1].max_stats);
    CONFIG(data.player[1].resist_disease);

    CONFIG(data.player[2].ability_ratio);
    CONFIG(data.player[2].critical_power);
    CONFIG(data.player[2].critical_ratio);
    CONFIG(data.player[2].repeat_on_boost);
    CONFIG(data.player[2].god_mode);
    CONFIG(data.player[2].hit_ratio);
    CONFIG(data.player[2].max_stats);
    CONFIG(data.player[2].resist_disease);

    CONFIG(data.player[3].ability_ratio);
    CONFIG(data.player[3].critical_power);
    CONFIG(data.player[3].critical_ratio);
    CONFIG(data.player[3].repeat_on_boost);
    CONFIG(data.player[3].god_mode);
    CONFIG(data.player[3].hit_ratio);
    CONFIG(data.player[3].max_stats);
    CONFIG(data.player[3].resist_disease);

    CONFIG(data.player[4].ability_ratio);
    CONFIG(data.player[4].critical_power);
    CONFIG(data.player[4].critical_ratio);
    CONFIG(data.player[4].repeat_on_boost);
    CONFIG(data.player[4].god_mode);
    CONFIG(data.player[4].hit_ratio);
    CONFIG(data.player[4].max_stats);
    CONFIG(data.player[4].resist_disease);

    CONFIG(data.player[5].ability_ratio);
    CONFIG(data.player[5].critical_power);
    CONFIG(data.player[5].critical_ratio);
    CONFIG(data.player[5].repeat_on_boost);
    CONFIG(data.player[5].god_mode);
    CONFIG(data.player[5].hit_ratio);
    CONFIG(data.player[5].max_stats);
    CONFIG(data.player[5].resist_disease);

    CONFIG(data.player[6].ability_ratio);
    CONFIG(data.player[6].critical_power);
    CONFIG(data.player[6].critical_ratio);
    CONFIG(data.player[6].repeat_on_boost);
    CONFIG(data.player[6].god_mode);
    CONFIG(data.player[6].hit_ratio);
    CONFIG(data.player[6].max_stats);
    CONFIG(data.player[6].resist_disease);

    CONFIG(data.player[7].ability_ratio);
    CONFIG(data.player[7].critical_power);
    CONFIG(data.player[7].critical_ratio);
    CONFIG(data.player[7].repeat_on_boost);
    CONFIG(data.player[7].god_mode);
    CONFIG(data.player[7].hit_ratio);
    CONFIG(data.player[7].max_stats);
    CONFIG(data.player[7].resist_disease);
#pragma pop_macro("CONFIG")
    save(static_cast<const void*>(&json));
}

auto Config::load(const File& file) noexcept -> void
{
    nlohmann::json json;
    load(static_cast<void*>(&json), file);
#pragma push_macro("CONFIG")
#define CONFIG(object) read<#object>(json, object)
    CONFIG(data.player[0].ability_ratio);
    CONFIG(data.player[0].critical_power);
    CONFIG(data.player[0].critical_ratio);
    CONFIG(data.player[0].repeat_on_boost);
    CONFIG(data.player[0].god_mode);
    CONFIG(data.player[0].hit_ratio);
    CONFIG(data.player[0].max_stats);
    CONFIG(data.player[0].resist_disease);

    CONFIG(data.player[1].ability_ratio);
    CONFIG(data.player[1].critical_power);
    CONFIG(data.player[1].critical_ratio);
    CONFIG(data.player[1].repeat_on_boost);
    CONFIG(data.player[1].god_mode);
    CONFIG(data.player[1].hit_ratio);
    CONFIG(data.player[1].max_stats);
    CONFIG(data.player[1].resist_disease);

    CONFIG(data.player[2].ability_ratio);
    CONFIG(data.player[2].critical_power);
    CONFIG(data.player[2].critical_ratio);
    CONFIG(data.player[2].repeat_on_boost);
    CONFIG(data.player[2].god_mode);
    CONFIG(data.player[2].hit_ratio);
    CONFIG(data.player[2].max_stats);
    CONFIG(data.player[2].resist_disease);

    CONFIG(data.player[3].ability_ratio);
    CONFIG(data.player[3].critical_power);
    CONFIG(data.player[3].critical_ratio);
    CONFIG(data.player[3].repeat_on_boost);
    CONFIG(data.player[3].god_mode);
    CONFIG(data.player[3].hit_ratio);
    CONFIG(data.player[3].max_stats);
    CONFIG(data.player[3].resist_disease);

    CONFIG(data.player[4].ability_ratio);
    CONFIG(data.player[4].critical_power);
    CONFIG(data.player[4].critical_ratio);
    CONFIG(data.player[4].repeat_on_boost);
    CONFIG(data.player[4].god_mode);
    CONFIG(data.player[4].hit_ratio);
    CONFIG(data.player[4].max_stats);
    CONFIG(data.player[4].resist_disease);

    CONFIG(data.player[5].ability_ratio);
    CONFIG(data.player[5].critical_power);
    CONFIG(data.player[5].critical_ratio);
    CONFIG(data.player[5].repeat_on_boost);
    CONFIG(data.player[5].god_mode);
    CONFIG(data.player[5].hit_ratio);
    CONFIG(data.player[5].max_stats);
    CONFIG(data.player[5].resist_disease);

    CONFIG(data.player[6].ability_ratio);
    CONFIG(data.player[6].critical_power);
    CONFIG(data.player[6].critical_ratio);
    CONFIG(data.player[6].repeat_on_boost);
    CONFIG(data.player[6].god_mode);
    CONFIG(data.player[6].hit_ratio);
    CONFIG(data.player[6].max_stats);
    CONFIG(data.player[6].resist_disease);

    CONFIG(data.player[7].ability_ratio);
    CONFIG(data.player[7].critical_power);
    CONFIG(data.player[7].critical_ratio);
    CONFIG(data.player[7].repeat_on_boost);
    CONFIG(data.player[7].god_mode);
    CONFIG(data.player[7].hit_ratio);
    CONFIG(data.player[7].max_stats);
    CONFIG(data.player[7].resist_disease);
#pragma pop_macro("CONFIG")
}

#include <fstream>

#include "dependencies/json.hpp"
#include "source/orion.h"

using orion::core::Config;
using orion::utilities::String;

Config::Config() noexcept {
    if (PWSTR relative_path;
        SUCCEEDED(orion.get_shell32().sh_get_known_folder_path(
            FOLDERID_Desktop,
            NULL,
            nullptr,
            &relative_path
        ))) {
        settings.sort = Sort::Name;
        settings.path = relative_path;
        settings.path /= String<"Orion">().c_str();
        save();
        update();
        orion.get_combase().co_task_mem_free(relative_path);
    }
}

auto Config::sort() noexcept -> void {
    if (Sort::Time == Config::settings.sort) {
        constexpr auto is_newer = [](const File& a, const File& b) noexcept {
            if (a.time_t != b.time_t)
                return (a.time_t > b.time_t);
            return (b.name.compare(a.name) < 0);
        };
        std::ranges::sort(Config::files.begin(), Config::files.end(), is_newer);
    }
}

auto Config::update() noexcept -> void {
    Config::enumerate();
    Config::sort();
}

auto Config::enumerate() noexcept -> void {
    std::error_code ec;
    std::vector<std::filesystem::directory_entry> entry;

    std::transform(
        std::filesystem::directory_iterator {Config::settings.path, ec},
        std::filesystem::directory_iterator {},
        std::back_inserter(entry),
        [](const std::filesystem::directory_entry& directory_entry) {
            return directory_entry;
        }
    );

    Config::files.clear();

    for (const auto& e : entry) {
        const auto& path = e.path();

        if (!path.has_extension())
            continue;

        if (!utilities::Fnv1a<".cfg">::eq(path.extension().string().c_str()))
            return;

        using namespace std::chrono;
        const auto time_t =
            system_clock::to_time_t(clock_cast<system_clock>(e.last_write_time()
            ));

        if (tm tm; localtime_s(&tm, &time_t) == 0) {
            std::stringstream string_stream;
            string_stream << std::put_time(
                &tm,
                utilities::String<"%e %b %Y %H:%M">().c_str()
            );
            const auto file_name = path.stem().string();
            Config::files.emplace_back(
                file_name,
                path,
                string_stream.str(),
                time_t,
                file_name == Config::name
            );
        }
    }
}

auto Config::create() noexcept -> void {
    std::string file_name;
    std::size_t index = 0;

    do {
        file_name = utilities::String<"New Config">();

        if (index != 0) {
            file_name += utilities::String<" ">();
            file_name += std::to_string(index + 1);
        }

        if (!Config::exist(file_name))
            break;

        ++index;
    } while (true);

    Config::name = file_name;
    Config::save();
}

auto Config::remove(const File& file) const noexcept -> void {
    std::filesystem::remove(file.path);
}

auto Config::rename(const File& file) noexcept -> void {
    if (std::strlen(Config::input.data()) == 0)
        return;

    if (file.name == Config::input.data())
        return;

    if (Config::exist(Config::input.data()))
        return;

    if (file.active)
        Config::name = Config::input.data();

    utilities::String<".cfg"> extension;
    std::filesystem::rename(
        Config::settings.path / (file.name + std::string(extension.c_str())),
        Config::settings.path
            / (std::string(Config::input.data())
               + std::string(extension.c_str()))
    );
}

auto Config::exist(const std::string_view filename) const noexcept -> bool {
    constexpr auto has_same_name = [](const std::string_view name_compared
                                   ) noexcept {
        return [&name_compared](const decltype(Config::files)::value_type& file
               ) noexcept { return name_compared == file.name; };
    };
    return std::ranges::any_of(Config::files, has_same_name(filename));
}

auto Config::save(const void* const json) noexcept -> void {
    std::error_code ec;
    std::filesystem::create_directory(Config::settings.path, ec);

    utilities::String<".cfg"> extension;
    if (Config::name.empty()) {
        utilities::String<"Default"> filename;
        Config::name = filename.c_str();
        if (std::ofstream out(
                Config::settings.path
                / (std::string(filename.c_str())
                   + std::string(extension.c_str()))
            );
            out.good())
            out << std::setw(2) << *static_cast<const nlohmann::json*>(json);
    } else {
        if (std::ofstream out(
                Config::settings.path
                / (Config::name + std::string(extension.c_str()))
            );
            out.good())
            out << std::setw(2) << *static_cast<const nlohmann::json*>(json);
    }
}

void Config::load(void* const json, const File& file) noexcept {
    if (std::ifstream in(
            Config::settings.path
            / (file.name + std::string(utilities::String<".cfg">()))
        );
        in.good()) {
        *static_cast<nlohmann::json*>(json) =
            nlohmann::json::parse(in, nullptr, false, true);
        if (!(*static_cast<nlohmann::json*>(json)).is_discarded())
            Config::name = file.name;
    }
}

namespace orion {
    template<stb::fixed_string _Key, typename _Value>
    constexpr auto write(nlohmann::json& json, const _Value& object) noexcept {
        utilities::String<_Key> key;
        json[key.c_str()] = object;
    }

    template<stb::fixed_string _Key>
    constexpr auto read(const nlohmann::json& json, bool& object) noexcept {
        if (utilities::String<_Key> key; json.contains(key.c_str()))
            if (const auto& value = json[key.c_str()]; value.is_boolean())
                value.get_to(object);
    }

    template<stb::fixed_string _Key>
    constexpr auto read(const nlohmann::json& json, int& object) noexcept {
        if (utilities::String<_Key> key; json.contains(key.c_str()))
            if (const auto& value = json[key.c_str()];
                value.is_number_integer())
                value.get_to(object);
    }

    template<stb::fixed_string _Key>
    constexpr auto read(const nlohmann::json& json, float& object) noexcept {
        if (utilities::String<_Key> key; json.contains(key.c_str()))
            if (const auto& value = json[key.c_str()]; value.is_number_float())
                value.get_to(object);
    }
}  // namespace orion

auto Config::save() noexcept -> void {
    nlohmann::json json;
#pragma push_macro("CONFIG")
#define CONFIG(object) write<#object>(json, object)
    CONFIG(data.hitbox[0]);
    CONFIG(data.hitbox[1]);
    CONFIG(data.hitbox[2]);
    CONFIG(data.hitbox[3]);
    CONFIG(data.color[0]);
    CONFIG(data.color[1]);
    CONFIG(data.color[2]);
    CONFIG(data.color[3]);
    CONFIG(data.target);
#pragma pop_macro("CONFIG")
    Config::save(static_cast<const void*>(&json));
}

auto Config::load(const File& file) noexcept -> void {
    nlohmann::json json;
    Config::load(static_cast<void*>(&json), file);
#pragma push_macro("CONFIG")
#define CONFIG(object) read<#object>(json, object)
    CONFIG(data.hitbox[0]);
    CONFIG(data.hitbox[1]);
    CONFIG(data.hitbox[2]);
    CONFIG(data.hitbox[3]);
    CONFIG(data.color[0]);
    CONFIG(data.color[1]);
    CONFIG(data.color[2]);
    CONFIG(data.color[3]);
    CONFIG(data.target);
#pragma pop_macro("CONFIG")
}

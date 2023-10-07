#pragma once

namespace orion::core
{

class Config final
{
  public:
    NON_COPYABLE(Config)
    NON_MOVEABLE(Config)

    explicit Config() noexcept;

    class File;

    class Data final
    {
      public:
        NON_COPYABLE(Data)
        NON_MOVEABLE(Data)

        constexpr explicit Data() noexcept = default;

        struct Player
        {
            bool god_mode = false;
            bool resist_disease = false;
            bool max_stats = false;
            bool repeat_on_boost = false;
            float hit_ratio = 0.f;
            float ability_ratio = 0.f;
            float critical_ratio = 0.f;
            float critical_power = 0.f;
        };

        Player player[8];
    };

    auto save() noexcept -> void;
    auto update() noexcept -> void;
    auto create() noexcept -> void;
    auto load(const File& file) noexcept -> void;
    auto rename(const File& file) noexcept -> void;
    auto remove(const File& file) const noexcept -> void;

  private:
    auto sort() noexcept -> void;
    auto enumerate() noexcept -> void;
    auto save(const void* json) noexcept -> void;
    auto load(void* json, const File& file) noexcept -> void;

    NODISCARD auto exist(const std::string_view fileName) const noexcept -> bool;

    enum Sort
    {
        Name,
        Time
    };

    struct
    {
        int sort = {};
        std::filesystem::path path;
    } settings;

    Data data;
    std::string name;
    std::vector<File> files;
    std::array<CHAR, 260> input = {};

  public:
    NODISCARD constexpr auto get_sort() noexcept -> auto&
    {
        return settings.sort;
    }

    NODISCARD constexpr auto get_data() noexcept -> auto&
    {
        return data;
    }

    NODISCARD constexpr auto get_files() const noexcept -> const auto&
    {
        return files;
    }

    NODISCARD constexpr auto get_input() noexcept -> auto&
    {
        return input;
    }
};

class Config::File
{
  public:
    NON_COPYABLE(File)

    constexpr explicit File(const std::string_view name, const std::filesystem::path& path, const std::string_view time,
                            const time_t time_t, const bool active) noexcept
        : active(active), name(name), time(time), time_t(time_t), path(path)
    {
    }

    constexpr explicit File() noexcept = default;

    constexpr File(File&&) noexcept = default;
    constexpr File& operator=(File&&) noexcept = default;

    bool active = {};
    std::string name;
    std::string time;
    std::time_t time_t = {};
    std::filesystem::path path;
};

} // namespace orion::core

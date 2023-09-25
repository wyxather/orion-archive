#pragma once

namespace orion {
    class Config final {
    public:
        class File;

        class Data final {
        public:
            constexpr Data() noexcept = default;

            Data(Data&&) = delete;
            Data& operator=(Data&&) = delete;

            Data(const Data&) = delete;
            Data& operator=(const Data&) = delete;

            bool hitbox[4] = {};
            float color[4] = {};
            int target = {};
        };

        Config() noexcept;

        Config(Config&&) = delete;
        Config& operator=(Config&&) = delete;

        Config(const Config&) = delete;
        Config& operator=(const Config&) = delete;

        [[nodiscard]] constexpr auto&& get_input() noexcept {
            return Config::input;
        }

        [[nodiscard]] constexpr auto&& get_sort() noexcept {
            return Config::settings.sort;
        }

        [[nodiscard]] constexpr auto&& get_files() const noexcept {
            return Config::files;
        }

        [[nodiscard]] constexpr auto&& get_data() noexcept {
            return Config::orion;
        }

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

        [[nodiscard]] auto exist(std::string_view fileName) const noexcept
            -> bool;

        enum Sort { NAME, TIME };

        struct {
            int sort = {};
            std::filesystem::path path;
        } settings;

        Data orion;
        std::string name;
        std::vector<File> files;
        std::array<CHAR, 260> input = {};
    };

    class Config::File {
    public:
        constexpr explicit File(
            const std::string_view name,
            const std::filesystem::path& path,
            const std::string_view time,
            const time_t time_t,
            const bool active
        ) noexcept :
            active(active),
            name(name),
            time(time),
            time_t(time_t),
            path(path) {}

        constexpr File() noexcept = default;

        constexpr File(File&&) noexcept = default;
        constexpr File& operator=(File&&) noexcept = default;

        File(const File&) = delete;
        File& operator=(const File&) = delete;

        bool active = {};
        std::string name;
        std::string time;
        std::time_t time_t = {};
        std::filesystem::path path;
    };
}  // namespace orion

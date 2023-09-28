#pragma once

namespace orion::GuiBuilder {
    struct Font final {
        explicit Font(ImFont& font) noexcept;
        explicit Font(ImFont& font, float scale) noexcept;
        ~Font() noexcept;

        Font(Font&&) = delete;
        Font& operator=(Font&&) = delete;

        Font(const Font&) = delete;
        Font& operator=(const Font&) = delete;

    private:
        ImFont& font;
        float scale = 1.0f;
    };

    struct Header final {
        struct Nav;

        Header() noexcept;
        ~Header() noexcept;

        Header(Header&&) = delete;
        Header& operator=(Header&&) = delete;

        Header(const Header&) = delete;
        Header& operator=(const Header&) = delete;

        [[nodiscard]] constexpr explicit operator bool() const noexcept {
            return true;
        }
    };

    struct Header::Nav final {
        struct Items;

        Nav() noexcept;
        ~Nav() noexcept;

        Nav(Nav&&) = delete;
        Nav& operator=(Nav&&) = delete;

        Nav(const Nav&) = delete;
        Nav& operator=(const Nav&) = delete;

        [[nodiscard]] constexpr explicit operator bool() const noexcept {
            return true;
        }

    private:
        static auto watermark() noexcept -> void;
        static auto profile() noexcept -> void;
    };

    struct Header::Nav::Items final {
        Items() noexcept;
        ~Items() noexcept;

        Items(Items&&) = delete;
        Items& operator=(Items&&) = delete;

        Items(const Items&) = delete;
        Items& operator=(const Items&) = delete;

        [[nodiscard]] constexpr explicit operator bool() const noexcept {
            return true;
        }

    private:
        static auto
        button(const char* str, const char* icon, std::uint32_t hash) noexcept
            -> void;

        auto text(const char* str) noexcept -> void;

        bool first_text_call = false;

    public:
        template<stb::fixed_string _Str>
        constexpr auto button(const char* const icon) const noexcept {
            return Items::button(
                utilities::String<_Str>(),
                icon,
                utilities::Fnv1a<_Str>::value
            );
        }

        template<stb::fixed_string _Str>
        constexpr auto text() noexcept {
            return Items::text(utilities::String<_Str>());
        }
    };

    struct Body final {
        struct Head;
        struct Content;

        Body() noexcept;
        ~Body() noexcept;

        Body(Body&&) = delete;
        Body& operator=(Body&&) = delete;

        Body(const Body&) = delete;
        Body& operator=(const Body&) = delete;

        [[nodiscard]] constexpr explicit operator bool() const noexcept {
            return true;
        }
    };

    struct Body::Head final {
        Head() noexcept;
        ~Head() noexcept;

        Head(Head&&) = delete;
        Head& operator=(Head&&) = delete;

        Head(const Head&) = delete;
        Head& operator=(const Head&) = delete;

        auto save() const noexcept -> void;
        auto create() const noexcept -> void;

        [[nodiscard]] constexpr explicit operator bool() const noexcept {
            return true;
        }

    private:
        [[nodiscard]] static auto combo(const char* items, int& value) noexcept
            -> bool;

        Font font;

    public:
        template<stb::fixed_string _Str>
        [[nodiscard]] constexpr auto combo(int& value) const noexcept {
            return Head::combo(utilities::String<_Str>(), value);
        }
    };

    struct Body::Content final {
        struct Panel;

        Content() noexcept;
        ~Content() noexcept;

        Content(Content&&) = delete;
        Content& operator=(Content&&) = delete;

        Content(const Content&) = delete;
        Content& operator=(const Content&) = delete;

        [[nodiscard]] constexpr explicit operator bool() const noexcept {
            return true;
        }
    };

    struct Body::Content::Panel final {
        struct Config;
        struct Table;

        explicit Panel(std::uint32_t hash) noexcept;
        ~Panel() noexcept;

        Panel(Panel&&) = delete;
        Panel& operator=(Panel&&) = delete;

        Panel(const Panel&) = delete;
        Panel& operator=(const Panel&) = delete;

        [[nodiscard]] constexpr explicit operator bool() const noexcept {
            return Panel::resume;
        }

    private:
        bool resume = false;
    };

    struct Body::Content::Panel::Config final {
        Config() noexcept;
        ~Config() noexcept;

        Config(Config&&) = delete;
        Config& operator=(Config&&) = delete;

        Config(const Config&) = delete;
        Config& operator=(const Config&) = delete;

    private:
        enum class Event { UNDEFINED, SAVE, LOAD, REMOVE, RENAME, INPUT };

        static auto filter_config_name(ImGuiInputTextCallbackData* data
        ) noexcept -> int;

        auto draw(
            std::string_view name,
            std::string_view time,
            bool active,
            std::array<char, 260>& input
        ) const noexcept -> Event;
    };

    struct Body::Content::Panel::Table final {
        template<stb::fixed_string _Str, bool _NextColumn>
        struct Group;
        struct Widget;

        Table() noexcept;
        ~Table() noexcept;

        Table(Table&&) = delete;
        Table& operator=(Table&&) = delete;

        Table(const Table&) = delete;
        Table& operator=(const Table&) = delete;

        static auto begin_group(
            const char* name,
            std::uint32_t hash,
            bool next_column
        ) noexcept -> void;
        static auto end_group() noexcept -> void;

        [[nodiscard]] constexpr explicit operator bool() const noexcept {
            return Table::resume;
        }

    private:
        bool resume = false;
    };

    template<stb::fixed_string _Str, bool _NextColumn>
    struct Body::Content::Panel::Table::Group final {
        constexpr Group() noexcept {
            Table::begin_group(
                utilities::String<_Str>(),
                utilities::Fnv1a<_Str>::value,
                _NextColumn
            );
        }

        constexpr ~Group() noexcept {
            Table::end_group();
        }

        Group(Group&&) = delete;
        Group& operator=(Group&&) = delete;

        Group(const Group&) = delete;
        Group& operator=(const Group&) = delete;

        [[nodiscard]] constexpr explicit operator bool() const noexcept {
            return true;
        }
    };

    struct Body::Content::Panel::Table::Widget final {
        Widget() noexcept;
        ~Widget() noexcept;

        Widget(Widget&&) = delete;
        Widget& operator=(Widget&&) = delete;

        Widget(const Widget&) = delete;
        Widget& operator=(const Widget&) = delete;

        [[nodiscard]] constexpr explicit operator bool() const noexcept {
            return true;
        }
    };
}  // namespace orion::GuiBuilder

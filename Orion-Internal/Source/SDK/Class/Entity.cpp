#include "Entity.h"
#include "Localize.h"
#include "Module/Game.h"

auto Entity::isOtherEnemy(const Entity& other) const noexcept -> bool
{
	return game->memory.isOtherEnemy(this, &other);
}

auto Entity::getPlayerName(char(&out)[128]) const noexcept -> void
{
    constexpr auto removeNewlineChars = [](wchar_t* begin, wchar_t* end) noexcept {
        return std::remove(begin, end, L'\n');
    };
    constexpr auto removeColorMarkup = [](wchar_t* begin, wchar_t* end) noexcept {
        return std::remove_if(begin, end, [](wchar_t c) { return c > 0 && c < 17; });
    };
    constexpr auto removeConsecutiveSpaces = [](wchar_t* begin, wchar_t* end) noexcept {
        return std::unique(begin, end, [](wchar_t a, wchar_t b) { return a == L' ' && a == b; });
    };

    if (!*game->memory.playerResource) {
        Orion::String<"unknown"> name;
        strcpy(out, name.get());
        return;
    }

    wchar_t wide[128];
    game->memory.getDecoratedPlayerName(*game->memory.playerResource, index(), wide, sizeof(wide), 4);

    auto end = removeNewlineChars(wide, wide + wcslen(wide));
    end = removeColorMarkup(wide, end);
    end = removeConsecutiveSpaces(wide, end);
    *end = L'\0';

    static_cast<void>(game->interfaces.localize->convertUnicodeToAnsi(wide, out, 128));
}
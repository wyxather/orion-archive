#pragma once

#include "Class.h"

class Localize // : IAppSystem
{
public:
    INCONSTRUCTIBLE(Localize);

    enum __vftable
    {
        // IAppSystem
        Connect,
        Disconnect,
        QueryInterface,
        Init,
        Shutdown,
        GetDependencies,
        GetTier,
        Reconnect,
        IsSingleton,
        // ILocalize
        AddFile,
        RemoveAll,
        Find,
        FindSafe,
        ConvertANSIToUnicode = 15,
        ConvertUnicodeToANSI,
        FindIndex,
        GetNameByIndex,
        GetValueByIndex,
        FindAsUTF8 = 47
    };

    VIRTUAL_METHOD(__vftable::Find, find, __stdcall, wchar_t*, (const char* tokenName), (this, tokenName));
    VIRTUAL_METHOD(__vftable::FindSafe, findSafe, __stdcall, const wchar_t*, (const char* tokenName), (this, tokenName));
    VIRTUAL_METHOD(__vftable::ConvertANSIToUnicode, convertAnsiToUnicode, __stdcall, int, (const char* ansi, wchar_t* unicode, int unicodeBufferSizeInBytes), (this, ansi, unicode, unicodeBufferSizeInBytes));
    VIRTUAL_METHOD(__vftable::ConvertUnicodeToANSI, convertUnicodeToAnsi, __stdcall, int, (const wchar_t* unicode, char* ansi, int ansiBufferSize), (this, unicode, ansi, ansiBufferSize));
    VIRTUAL_METHOD(__vftable::FindAsUTF8, findAsUTF8, __stdcall, const char*, (const char* tokenName), (this, tokenName));

    [[nodiscard]] constexpr auto convertUnicodeToAnsi(const wchar_t* unicode) const noexcept -> std::string
    {
        char buffer[4096];
        const auto result{ convertUnicodeToAnsi(unicode, buffer, sizeof(buffer)) };
        return buffer;
    }
};
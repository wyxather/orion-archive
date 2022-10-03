#pragma once

#include <Psapi.h>

namespace Orion
{
    template <stb::compiletime_string_wrapper str, typename _Ty = std::uint32_t>
    class Fnv
    {
    public:
        Fnv() = delete;
        ~Fnv() = delete;

        Fnv(Fnv&&) = delete;
        Fnv(const Fnv&) = delete;
        Fnv& operator=(Fnv&&) = delete;
        Fnv& operator=(const Fnv&) = delete;

    private:
        class Prime
        {
        public:
            Prime() = delete;
            ~Prime() = delete;

            Prime(Prime&&) = delete;
            Prime(const Prime&) = delete;
            Prime& operator=(Prime&&) = delete;
            Prime& operator=(const Prime&) = delete;

        private:
            [[nodiscard]] static constexpr auto get() noexcept
            {
                switch (sizeof(_Ty)) {
                case (sizeof(std::uint32_t)): return static_cast<_Ty>(0x01000193);
                case (sizeof(std::uint64_t)): return static_cast<_Ty>(0x00000100000001B3);
                }
                return _Ty{};
            }

        public:
            static constexpr inline auto value = stb::compiletime_value<Prime::get()>::value;
        };

        class OffsetBasis
        {
        public:
            OffsetBasis() = delete;
            ~OffsetBasis() = delete;

            OffsetBasis(OffsetBasis&&) = delete;
            OffsetBasis(const OffsetBasis&) = delete;
            OffsetBasis& operator=(OffsetBasis&&) = delete;
            OffsetBasis& operator=(const OffsetBasis&) = delete;

        private:
            [[nodiscard]] static constexpr auto get() noexcept
            {
                switch (sizeof(_Ty)) {
                case (sizeof(std::uint32_t)): return static_cast<_Ty>(0x811C9DC5);
                case (sizeof(std::uint64_t)): return static_cast<_Ty>(0xCBF29CE484222325);
                }
                return _Ty{};
            }

        public:
            static constexpr inline auto value = stb::compiletime_value<OffsetBasis::get()>::value;
        };

        [[nodiscard]] static constexpr auto get(const char* string, const _Ty offsetBasis = OffsetBasis::value) noexcept -> _Ty
        {
            return *string ? get(string + 1, (offsetBasis ^ *string) * static_cast<std::uintmax_t>(Prime::value)) : offsetBasis;
        }

    public:
        static constexpr inline auto value = stb::compiletime_value<Fnv::get(str().data())>::value;

        [[nodiscard]] static constexpr auto compare(const char* string, _Ty offsetBasis = OffsetBasis::value) noexcept
        {
            while (*string) {
                offsetBasis ^= *string++;
                offsetBasis *= Prime::value;
            }
            return offsetBasis == value;
        }

        [[nodiscard]] static constexpr auto run(const char* string, _Ty offsetBasis = OffsetBasis::value) noexcept
        {
            while (*string) {
                offsetBasis ^= *string++;
                offsetBasis *= Prime::value;
            }
            return offsetBasis;
        }
    };

    template <typename _DataTy, typename _KeyTy = std::uint32_t>
    class HashTable
    {
        std::vector<std::pair<_KeyTy, _DataTy>> m_data;

    public:
        constexpr HashTable() noexcept = default;
        constexpr ~HashTable() noexcept = default;

        constexpr explicit HashTable(HashTable&&) noexcept = default;
        constexpr HashTable& operator=(HashTable&&) noexcept = default;

        HashTable(const HashTable&) = delete;
        HashTable& operator=(const HashTable&) = delete;

    private:
        constexpr auto insert(const _KeyTy key) noexcept
        {
            m_data.emplace_back(key, _DataTy{});
            m_data.shrink_to_fit();
            std::ranges::sort(m_data, {}, &decltype(m_data)::value_type::first);
        }

    public:
        [[nodiscard]] constexpr auto find(const _KeyTy key) noexcept -> _DataTy*
        {
            if (const auto it = std::ranges::lower_bound(m_data, key, {}, &decltype(m_data)::value_type::first);
                it != m_data.end() && it->first == key)
                return &it->second;
            return nullptr;
        }

        [[nodiscard]] constexpr auto&& operator[](const _KeyTy key) noexcept
        {
            if (const auto value = find(key))
                return *value;
            insert(key);
            return *find(key);
        }

        [[nodiscard]] constexpr auto size() const noexcept { return m_data.size(); }

        [[nodiscard]] constexpr auto begin() noexcept { return m_data.begin(); }
        [[nodiscard]] constexpr auto begin() const noexcept { return m_data.cbegin(); }

        [[nodiscard]] constexpr auto end() noexcept { return m_data.end(); }
        [[nodiscard]] constexpr auto end() const noexcept { return m_data.cend(); }
    };

    template <stb::compiletime_string_wrapper str>
    class Pattern
    {
        static inline auto value{ xorarr(stb::compiletime_string_to_byte_array_data::getter<str>::value) };

    public:
        constexpr explicit Pattern() noexcept { value.crypt(); }
        constexpr ~Pattern() noexcept { value.crypt(); }

        Pattern(Pattern&&) = delete;
        Pattern(const Pattern&) = delete;
        Pattern& operator=(Pattern&&) = delete;
        Pattern& operator=(const Pattern&) = delete;

        [[nodiscard]] static constexpr auto get() noexcept { return value.get(); }
        [[nodiscard]] static constexpr auto size() noexcept { return value.size() + 1; }
    };

    template <stb::compiletime_string_wrapper str>
    class String
    {
        static inline auto value{ xorarr(stb::compiletime_value<str()>::value) };

    public:
        constexpr explicit String() noexcept { value.crypt(); }
        constexpr ~String() noexcept { value.crypt(); }

        String(String&&) = delete;
        String(const String&) = delete;
        String& operator=(String&&) = delete;
        String& operator=(const String&) = delete;

        [[nodiscard]] static constexpr auto get() noexcept { return value.get(); }
        [[nodiscard]] static constexpr auto size() noexcept { return value.size(); }
    };

    template <stb::compiletime_string_wrapper str>
    class BadCharTable
    {
        struct Generator
        {
            constexpr explicit Generator() noexcept
            {
                constexpr auto pattern = stb::compiletime_string_to_byte_array_data::getter<str>::value;
                constexpr auto patternLength = pattern.size() - 1;
                constexpr auto lastWildCard = stb::detail::find_last_of(pattern, '\xFF');
                constexpr auto lastWildCardIndex = lastWildCard == -1 ? 0 : lastWildCard;
                constexpr auto defaultShift = (std::max)(std::size_t{ 1 }, std::size_t{ patternLength - lastWildCardIndex });
                table.fill(defaultShift);
                for (auto i = lastWildCardIndex; i < patternLength; i++)
                    table[pattern[i]] = patternLength - i;
            }

            Generator(Generator&&) = delete;
            Generator(const Generator&) = delete;
            Generator& operator=(Generator&&) = delete;
            Generator& operator=(const Generator&) = delete;

            [[nodiscard]] constexpr auto&& operator()() const noexcept { return table; }

        private:
            std::array<std::size_t, (std::numeric_limits<std::uint8_t>::max)() + 1> table = {};
        };

        static inline auto value{ xorarr(stb::compiletime_value<Generator()()>::value) };

    public:
        constexpr explicit BadCharTable() noexcept { value.crypt(); }
        constexpr ~BadCharTable() noexcept { value.crypt(); }

        BadCharTable(BadCharTable&&) = delete;
        BadCharTable(const BadCharTable&) = delete;
        BadCharTable& operator=(BadCharTable&&) = delete;
        BadCharTable& operator=(const BadCharTable&) = delete;

        [[nodiscard]] static constexpr auto get() noexcept { return value.get(); }
        [[nodiscard]] static constexpr auto size() noexcept { return value.size() + 1; }
    };

    template <typename returnType>
    [[nodiscard]] constexpr auto relativeToAbsolute(std::uintptr_t address) noexcept
    {
        return (returnType)(address + 4 + *reinterpret_cast<std::int32_t*>(address));
    }

    template <stb::compiletime_string_wrapper moduleName>
    [[nodiscard]] constexpr auto getModuleInfo(MODULEINFO& moduleInfo) noexcept
    {
        String<moduleName> name;
        if (const auto handle = LI_FN(GetModuleHandleA)(name.get()))
            return (LI_FN(GetModuleInformation)(LI_FN(GetCurrentProcess)(), handle, &moduleInfo, static_cast<DWORD>(sizeof(MODULEINFO)))) != 0;
        return false;
    }

    template <
        typename returnType,
        stb::compiletime_string_wrapper moduleName,
        stb::compiletime_string_wrapper patternName,
        stb::compiletime_string_wrapper pattern,
        bool reportError = false>
    [[nodiscard]] constexpr auto findPattern() noexcept
    {
        if (MODULEINFO moduleInfo; getModuleInfo<moduleName>(moduleInfo)) {
            if (moduleInfo.lpBaseOfDll && moduleInfo.SizeOfImage) {
                Pattern<pattern> pat;
                BadCharTable<pattern> tab;

                constexpr auto lastIdx = pat.size() - 1;
                auto start = static_cast<const std::uint8_t*>(moduleInfo.lpBaseOfDll);
                const auto end = start + moduleInfo.SizeOfImage - pat.size();

                while (start <= end) {
                    std::intmax_t i = lastIdx;
                    while (i >= 0 && (static_cast<std::byte>(pat.get()[i]) == static_cast<std::byte>('\xFF') || start[i] == pat.get()[i]))
                        --i;
                    if (i < 0)
                        return reinterpret_cast<returnType>(reinterpret_cast<void*>(reinterpret_cast<std::uintptr_t>(start)));
                    start += tab.get()[static_cast<std::uint8_t>(start[lastIdx])];
                }
            }
        }
        if constexpr (reportError) {
            String<moduleName> modName;
            String<patternName> patName;
            String<"Failed to find pattern "> msgBegin;
            String<"!"> msgEnd;
            LI_FN(MessageBoxA)(nullptr, std::string{ std::string{ msgBegin.get() } + patName.get() + msgEnd.get() }.c_str(), modName.get(), MB_OK | MB_ICONWARNING);
        }
        return returnType{};
    }
}
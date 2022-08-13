#pragma once

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
            [[nodiscard]] static constexpr _Ty get() noexcept
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
            [[nodiscard]] static constexpr _Ty get() noexcept
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

        [[nodiscard]] static constexpr _Ty get(const char* string, const _Ty offsetBasis = OffsetBasis::value) noexcept
        {
            return *string ? get(string + 1, (offsetBasis ^ *string) * static_cast<std::uintmax_t>(Prime::value)) : offsetBasis;
        }
    public:
        static constexpr inline auto value = stb::compiletime_value<Fnv::get(str().data())>::value;

        [[nodiscard]] static constexpr _Ty compare(const char* string, _Ty offsetBasis = OffsetBasis::value) noexcept
        {
            while (*string) {
                offsetBasis ^= *string++;
                offsetBasis *= Prime::value;
            }
            return offsetBasis == value;
        }

        [[nodiscard]] static constexpr _Ty run(const char* string, _Ty offsetBasis = OffsetBasis::value) noexcept
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
        HashTable() noexcept {}
        ~HashTable() noexcept {}

        HashTable(HashTable&&) = delete;
        HashTable(const HashTable&) = delete;
        HashTable& operator=(HashTable&&) = delete;
        HashTable& operator=(const HashTable&) = delete;

    private:
        [[nodiscard]] constexpr _DataTy* find(const _KeyTy key) noexcept
        {
            if (const auto it = std::ranges::lower_bound(m_data, key, {}, &decltype(m_data)::value_type::first);
                it != m_data.end() && it->first == key)
                return &it->second;
            return nullptr;
        }

        [[nodiscard]] constexpr const _DataTy* find(const _KeyTy key) const noexcept
        {
            if (const auto it = std::ranges::lower_bound(m_data, key, {}, &decltype(m_data)::value_type::first);
                it != m_data.cend() && it->first == key)
                return &it->second;
            return nullptr;
        }

        constexpr void insert(const _KeyTy key) noexcept
        {
            m_data.emplace_back(key, _DataTy{});
            m_data.shrink_to_fit();
            std::ranges::sort(m_data, {}, &decltype(m_data)::value_type::first);
        }

    public:
        [[nodiscard]] constexpr _DataTy& operator[](const _KeyTy key) noexcept
        {
            if (const auto value = find(key))
                return *value;
            insert(key);
            return *find(key);
        }
        [[nodiscard]] constexpr const _DataTy& operator[](const _KeyTy key) const noexcept
        {
            return *find(key);
        }

        [[nodiscard]] constexpr auto size() const noexcept { return m_data.size(); }

        [[nodiscard]] constexpr auto begin() noexcept { return m_data.begin(); }
        [[nodiscard]] constexpr auto begin() const noexcept { return m_data.cbegin(); }

        [[nodiscard]] constexpr auto end() noexcept { return m_data.end(); }
        [[nodiscard]] constexpr auto end() const noexcept { return m_data.cend(); }
    };

	template <stb::compiletime_string_wrapper str>
	class String
	{
	public:
		String(String&&) = delete;
		String(const String&) = delete;
		String& operator=(String&&) = delete;
		String& operator=(const String&) = delete;

	private:
		static inline auto value{ xorarr(stb::compiletime_value<str()>::value) };

	public:
		constexpr String() noexcept { value.crypt(); }
		constexpr ~String() noexcept { value.crypt(); }

		[[nodiscard]] static constexpr auto get() noexcept { return value.get(); }
		[[nodiscard]] static constexpr auto size() noexcept { return value.size(); }
	};
}
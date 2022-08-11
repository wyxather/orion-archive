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
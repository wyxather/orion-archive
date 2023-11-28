#pragma once

namespace orion
{

namespace imports
{

struct Ntdll;
struct Kernel32;

} // namespace imports

namespace utilities
{

class Memory final
{
    Memory()                           = delete;
    ~Memory()                          = delete;
    Memory( Memory&& )                 = delete;
    Memory& operator=( Memory&& )      = delete;
    Memory( const Memory& )            = delete;
    Memory& operator=( const Memory& ) = delete;

    static constexpr auto PATTERN_MASKED = static_cast<std::uint8_t>( '\xCD' );

    using PatternType    = std::uint8_t;
    using PatternBuilder = stb::basic_hex_string_array_conversion<' ', '?', PatternType, PATTERN_MASKED>;

  public:
    _NODISCARD static std::span<const std::uint8_t> getModuleBytes(
        const li::detail::win::LDR_DATA_TABLE_ENTRY_T& ldr ) noexcept
    {
        return std::span<const std::uint8_t>( reinterpret_cast<const std::uint8_t*>( ldr.DllBase ), ldr.SizeOfImage );
    }

    _NODISCARD static std::size_t calcVmtLength( const imports::Ntdll&    ntdll,
                                                 const imports::Kernel32& kernel32,
                                                 const void* const        vmtAddress ) noexcept;
    _NODISCARD static std::size_t calcVmtLength( const imports::Ntdll&    ntdll,
                                                 const imports::Kernel32& kernel32,
                                                 const void* const* const classAddress ) noexcept;

    template<stb::fixed_string str>
    class Pattern final
    {
        Pattern()                            = delete;
        ~Pattern()                           = delete;
        Pattern( Pattern&& )                 = delete;
        Pattern& operator=( Pattern&& )      = delete;
        Pattern( const Pattern& )            = delete;
        Pattern& operator=( const Pattern& ) = delete;

        _NODISCARD static constexpr bool compare( const std::span<const std::uint8_t>& bytes,
                                                  const std::span<const PatternType>&  pattern ) noexcept
        {
            for ( std::size_t index = 0; index < bytes.size(); ++index )
            {
                if ( bytes[index] != pattern[index] && pattern[index] != PATTERN_MASKED )
                {
                    return false;
                }
            }
            return true;
        }

      public:
        _NODISCARD static constexpr std::uint8_t* find( const std::span<const std::uint8_t>& bytes ) noexcept
        {
            auto value = xorarr( stb::consteval_value<PatternBuilder::build<str>::value>::value );

            const std::span<const PatternType> pattern( value.crypt_get(), value.size() + 1 );

            const auto indexOfLastPatternChar = pattern.size() - 1;
            const auto patternWithoutFirstAndLastChar =
                pattern.subspan( 1, pattern.size() > 2 ? pattern.size() - 2 : 0 );
            const auto byteSpanPerIteration = indexOfLastPatternChar + sizeof( __m128i );

            const auto firstCharMask = _mm_set1_epi8( static_cast<char>( pattern.front() ) );
            const auto lastCharMask  = _mm_set1_epi8( static_cast<char>( pattern.back() ) );

            for ( std::size_t index = 0; bytes.size() - index >= byteSpanPerIteration; index += sizeof( __m128i ) )
            {
                const auto possibleFirstChars = _mm_loadu_si128( reinterpret_cast<const __m128i*>( &bytes[index] ) );
                const auto possibleLastChars =
                    _mm_loadu_si128( reinterpret_cast<const __m128i*>( &bytes[index + indexOfLastPatternChar] ) );

                const auto firstCharMatchPos = _mm_cmpeq_epi8( firstCharMask, possibleFirstChars );
                const auto lastCharMatchPos  = _mm_cmpeq_epi8( lastCharMask, possibleLastChars );

                auto mask = static_cast<std::uint16_t>(
                    _mm_movemask_epi8( _mm_and_si128( firstCharMatchPos, lastCharMatchPos ) ) );
                while ( mask != 0 )
                {
                    const auto bitPos = std::countr_zero( mask );
                    if ( const auto match =
                             compare( bytes.subspan( index + bitPos + 1, patternWithoutFirstAndLastChar.size() ),
                                      patternWithoutFirstAndLastChar );
                         match )
                    {
                        return const_cast<std::uint8_t*>( &bytes[index + bitPos] );
                    }
                    mask = mask & ( mask - 1 );
                }
            }
            return nullptr;
        }

        _NODISCARD static constexpr std::uint8_t* find( const li::detail::win::LDR_DATA_TABLE_ENTRY_T& ldr ) noexcept
        {
            return find( getModuleBytes( ldr ) );
        }
    };

    _NODISCARD static constexpr int memcmp( void* const s1, void* const s2, std::size_t n ) noexcept
    {
        if ( ( n == 0 ) || ( s1 == s2 ) )
        {
            return 0;
        }
        auto ptr1 = reinterpret_cast<__m128i*>( s1 );
        auto ptr2 = reinterpret_cast<__m128i*>( s2 );
        for ( ;; ++ptr1, ++ptr2 )
        {
            constexpr auto mode =
                ( _SIDD_UBYTE_OPS | _SIDD_CMP_EQUAL_EACH | _SIDD_NEGATIVE_POLARITY | _SIDD_LEAST_SIGNIFICANT );
            const auto a = _mm_loadu_si128( ptr1 );
            const auto b = _mm_loadu_si128( ptr2 );
            if ( _mm_cmpestrc( a, static_cast<int>( n ), b, static_cast<int>( n ), mode ) != 0 )
            {
                const auto index = _mm_cmpestri( a, static_cast<int>( n ), b, static_cast<int>( n ), mode );
                const auto b1    = ( reinterpret_cast<std::uint8_t*>( ptr1 ) )[index];
                const auto b2    = ( reinterpret_cast<std::uint8_t*>( ptr2 ) )[index];
                if ( b1 < b2 )
                {
                    return -1;
                }
                else if ( b1 > b2 )
                {
                    return 1;
                }
                else
                {
                    return 0;
                }
            }
            if ( n > 16 )
            {
                n -= 16;
            }
            else
            {
                break;
            }
        }
        return 0;
    }
};

} // namespace utilities

} // namespace orion

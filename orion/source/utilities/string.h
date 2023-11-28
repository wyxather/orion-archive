#pragma once

namespace orion::utilities
{

class String final
{
    String()                           = delete;
    ~String()                          = delete;
    String( String&& )                 = delete;
    String& operator=( String&& )      = delete;
    String( const String& )            = delete;
    String& operator=( const String& ) = delete;

  public:
    _NODISCARD static std::size_t strlen( const char* const str ) noexcept
    {
        const auto  zeros = _mm_setzero_si128();
        std::size_t result {};
        for ( auto mem = reinterpret_cast<const __m128i*>( str );; ++mem, result += sizeof( __m128i ) )
        {
            constexpr auto mode = ( _SIDD_UBYTE_OPS | _SIDD_CMP_EQUAL_EACH | _SIDD_LEAST_SIGNIFICANT );
            const auto     data = _mm_loadu_si128( mem );
            if ( _mm_cmpistrc( data, zeros, mode ) != 0 )
            {
                const auto index = _mm_cmpistri( data, zeros, mode );
                return result + index;
            }
        }
        return result;
    }

    _NODISCARD static constexpr int strcmp( const char* const str1, const char* const str2 ) noexcept
    {
        if ( str1 == str2 )
        {
            return 0;
        }
        auto ptr1 = reinterpret_cast<const __m128i*>( str1 );
        auto ptr2 = reinterpret_cast<const __m128i*>( str2 );
        for ( ;; ++ptr1, ++ptr2 )
        {
            constexpr auto mode =
                ( _SIDD_UBYTE_OPS | _SIDD_CMP_EQUAL_EACH | _SIDD_NEGATIVE_POLARITY | _SIDD_LEAST_SIGNIFICANT );
            const auto a = _mm_loadu_si128( ptr1 );
            const auto b = _mm_loadu_si128( ptr2 );
            if ( _mm_cmpistrc( a, b, mode ) != 0 )
            {
                const auto index = _mm_cmpistri( a, b, mode );
                const auto b1    = ( reinterpret_cast<const std::uint8_t*>( ptr1 ) )[index];
                const auto b2    = ( reinterpret_cast<const std::uint8_t*>( ptr2 ) )[index];
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
            else if ( _mm_cmpistrz( a, b, mode ) != 0 )
            {
                break;
            }
        }
        return 0;
    }
};

} // namespace orion::utilities

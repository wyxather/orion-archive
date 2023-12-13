#pragma once

namespace orion::utilities::math
{

template<std::floating_point T>
_NODISCARD constexpr T easeInSine( const T x ) noexcept
{
    return static_cast<T>( 1 ) - std::cos( x * std::numbers::pi_v<T> * static_cast<T>( 0.5 ) );
}

template<std::floating_point T>
_NODISCARD constexpr T easeOutSine( const T x ) noexcept
{
    return std::sin( x * std::numbers::pi_v<T> * static_cast<T>( 0.5 ) );
}

template<std::floating_point T>
_NODISCARD constexpr T easeInOutSine( const T x ) noexcept
{
    return -( std::cos( std::numbers::pi_v<T> * x ) - static_cast<T>( 1 ) ) * static_cast<T>( 0.5 );
}

template<std::floating_point T>
_NODISCARD constexpr T easeInQuad( const T x ) noexcept
{
    return x * x;
}

template<std::floating_point T>
_NODISCARD constexpr T easeOutQuad( const T x ) noexcept
{
    return static_cast<T>( 1 ) - ( static_cast<T>( 1 ) - x ) * ( static_cast<T>( 1 ) - x );
}

template<std::floating_point T>
_NODISCARD constexpr T easeInOutQuad( const T x ) noexcept
{
    if ( x < static_cast<T>( 0.5 ) )
    {
        return static_cast<T>( 2 ) * x * x;
    }
    return static_cast<T>( 1 ) -
           std::pow( static_cast<T>( -2 ) * x + static_cast<T>( 2 ), static_cast<T>( 2 ) ) * static_cast<T>( 0.5 );
}

template<std::floating_point T>
_NODISCARD constexpr T easeInCubic( const T x ) noexcept
{
    return x * x * x;
}

template<std::floating_point T>
_NODISCARD constexpr T easeOutCubic( const T x ) noexcept
{
    return static_cast<T>( 1 ) - std::pow( static_cast<T>( 1 ) - x, static_cast<T>( 3 ) );
}

template<std::floating_point T>
_NODISCARD constexpr T easeInOutCubic( const T x ) noexcept
{
    if ( x < static_cast<T>( 0.5 ) )
    {
        return static_cast<T>( 4 ) * x * x * x;
    }
    return static_cast<T>( 1 ) -
           std::pow( static_cast<T>( -2 ) * x + static_cast<T>( 2 ), static_cast<T>( 3 ) ) * static_cast<T>( 0.5 );
}

template<std::floating_point T>
_NODISCARD constexpr T easeInQuart( const T x ) noexcept
{
    return x * x * x * x;
}

template<std::floating_point T>
_NODISCARD constexpr T easeOutQuart( const T x ) noexcept
{
    return static_cast<T>( 1 ) - std::pow( static_cast<T>( 1 ) - x, static_cast<T>( 4 ) );
}

template<std::floating_point T>
_NODISCARD constexpr T easeInOutQuart( const T x ) noexcept
{
    if ( x < static_cast<T>( 0.5 ) )
    {
        return static_cast<T>( 8 ) * x * x * x * x;
    }
    return static_cast<T>( 1 ) -
           std::pow( static_cast<T>( -2 ) * x + static_cast<T>( 2 ), static_cast<T>( 4 ) ) * static_cast<T>( 0.5 );
}

template<std::floating_point T>
_NODISCARD constexpr T easeInQuint( const T x ) noexcept
{
    return x * x * x * x * x;
}

template<std::floating_point T>
_NODISCARD constexpr T easeOutQuint( const T x ) noexcept
{
    return static_cast<T>( 1 ) - std::pow( static_cast<T>( 1 ) - x, static_cast<T>( 5 ) );
}

template<std::floating_point T>
_NODISCARD constexpr T easeInOutQuint( const T x ) noexcept
{
    if ( x < static_cast<T>( 0.5 ) )
    {
        return static_cast<T>( 16 ) * x * x * x * x * x;
    }
    return static_cast<T>( 1 ) -
           std::pow( static_cast<T>( -2 ) * x + static_cast<T>( 2 ), static_cast<T>( 5 ) ) * static_cast<T>( 0.5 );
}

template<std::floating_point T>
_NODISCARD constexpr T easeInExpo( const T x ) noexcept
{
    if ( x == static_cast<T>( 0 ) )
    {
        return static_cast<T>( 0 );
    }
    return std::pow( static_cast<T>( 2 ), static_cast<T>( 10 ) * x - static_cast<T>( 10 ) );
}

template<std::floating_point T>
_NODISCARD constexpr T easeOutExpo( const T x ) noexcept
{
    if ( x == static_cast<T>( 1 ) )
    {
        return static_cast<T>( 1 );
    }
    return static_cast<T>( 1 ) - std::pow( static_cast<T>( 2 ), static_cast<T>( -10 ) * x );
}

template<std::floating_point T>
_NODISCARD constexpr T easeInOutExpo( const T x ) noexcept
{
    if ( x == static_cast<T>( 0 ) )
    {
        return static_cast<T>( 0 );
    }
    if ( x == static_cast<T>( 1 ) )
    {
        return static_cast<T>( 1 );
    }
    if ( x < static_cast<T>( 0.5 ) )
    {
        return std::pow( static_cast<T>( 2 ), static_cast<T>( 20 ) * x - static_cast<T>( 10 ) ) * static_cast<T>( 0.5 );
    }
    return ( static_cast<T>( 2 ) - std::pow( static_cast<T>( 2 ), static_cast<T>( -20 ) * x + static_cast<T>( 10 ) ) ) *
           static_cast<T>( 0.5 );
}

template<std::floating_point T>
_NODISCARD constexpr T easeInCirc( const T x ) noexcept
{
    return static_cast<T>( 1 ) - std::sqrt( static_cast<T>( 1 ) - std::pow( x, static_cast<T>( 2 ) ) );
}

template<std::floating_point T>
_NODISCARD constexpr T easeOutCirc( const T x ) noexcept
{
    return std::sqrt( static_cast<T>( 1 ) - std::pow( x - static_cast<T>( 1 ), static_cast<T>( 2 ) ) );
}

template<std::floating_point T>
_NODISCARD constexpr T easeInOutCirc( const T x ) noexcept
{
    if ( x < static_cast<T>( 0.5 ) )
    {
        return ( static_cast<T>( 1 ) -
                 std::sqrt( static_cast<T>( 1 ) - std::pow( static_cast<T>( 2 ) * x, static_cast<T>( 2 ) ) ) ) *
               static_cast<T>( 0.5 );
    }
    return ( std::sqrt( static_cast<T>( 1 ) -
                        std::pow( static_cast<T>( -2 ) * x + static_cast<T>( 2 ), static_cast<T>( 2 ) ) ) +
             static_cast<T>( 1 ) ) *
           static_cast<T>( 0.5 );
}

template<std::floating_point T>
_NODISCARD constexpr T easeInBack( const T x ) noexcept
{
    constexpr auto c1 = static_cast<T>( 1.70158 );
    constexpr auto c3 = c1 + static_cast<T>( 1 );
    return c3 * x * x * x - c1 * x * x;
}

template<std::floating_point T>
_NODISCARD constexpr T easeOutBack( const T x ) noexcept
{
    constexpr auto c1 = static_cast<T>( 1.70158 );
    constexpr auto c3 = c1 + static_cast<T>( 1 );
    return static_cast<T>( 1 ) + c3 * std::pow( x - static_cast<T>( 1 ), static_cast<T>( 3 ) ) +
           c1 * std::pow( x - static_cast<T>( 1 ), static_cast<T>( 2 ) );
}

template<std::floating_point T>
_NODISCARD constexpr T easeInOutBack( const T x ) noexcept
{
    constexpr auto c1 = static_cast<T>( 1.70158 );
    constexpr auto c2 = c1 * static_cast<T>( 1.525 );
    if ( x < static_cast<T>( 0.5 ) )
    {
        return ( std::pow( static_cast<T>( 2 ) * x, static_cast<T>( 2 ) ) *
                 ( ( c2 + static_cast<T>( 1 ) ) * static_cast<T>( 2 ) * x - c2 ) ) *
               static_cast<T>( 0.5 );
    }
    return ( std::pow( static_cast<T>( 2 ) * x - static_cast<T>( 2 ), static_cast<T>( 2 ) ) *
                 ( ( c2 + static_cast<T>( 1 ) ) * ( x * static_cast<T>( 2 ) - static_cast<T>( 2 ) ) + c2 ) +
             static_cast<T>( 2 ) ) *
           static_cast<T>( 0.5 );
}

template<std::floating_point T>
_NODISCARD constexpr T easeInElastic( const T x ) noexcept
{
    if ( x == static_cast<T>( 0 ) )
    {
        return static_cast<T>( 0 );
    }
    if ( x == static_cast<T>( 1 ) )
    {
        return static_cast<T>( 1 );
    }
    constexpr auto c4 = (static_cast<T>( 2 ) * std::numbers::pi_v<T>) / static_cast<T>( 3 );
    return -std::pow( static_cast<T>( 2 ), static_cast<T>( 10 ) * x - static_cast<T>( 10 ) ) *
           std::sin( ( x * static_cast<T>( 10 ) - static_cast<T>( 10.75 ) ) * c4 );
}

template<std::floating_point T>
_NODISCARD constexpr T easeOutElastic( const T x ) noexcept
{
    if ( x == static_cast<T>( 0 ) )
    {
        return static_cast<T>( 0 );
    }
    if ( x == static_cast<T>( 1 ) )
    {
        return static_cast<T>( 1 );
    }
    constexpr auto c4 = (static_cast<T>( 2 ) * std::numbers::pi_v<T>) / static_cast<T>( 3 );
    return std::pow( static_cast<T>( 2 ), static_cast<T>( -10 ) * x ) *
               std::sin( ( x * static_cast<T>( 10 ) - static_cast<T>( 0.75 ) ) * c4 ) +
           static_cast<T>( 1 );
}

template<std::floating_point T>
_NODISCARD constexpr T easeInOutElastic( const T x ) noexcept
{
    if ( x == static_cast<T>( 0 ) )
    {
        return static_cast<T>( 0 );
    }
    if ( x == static_cast<T>( 1 ) )
    {
        return static_cast<T>( 1 );
    }
    constexpr auto c5 = (static_cast<T>( 2 ) * std::numbers::pi_v<T>) / static_cast<T>( 4.5 );
    if ( x < static_cast<T>( 0.5 ) )
    {
        return -( std::pow( static_cast<T>( 2 ), static_cast<T>( 20 ) * x - static_cast<T>( 10 ) ) *
                  std::sin( ( static_cast<T>( 20 ) * x - static_cast<T>( 11.125 ) ) * c5 ) ) *
               static_cast<T>( 0.5 );
    }
    return ( std::pow( static_cast<T>( 2 ), static_cast<T>( -20 ) * x + static_cast<T>( 10 ) ) *
             std::sin( ( static_cast<T>( 20 ) * x - static_cast<T>( 11.125 ) ) * c5 ) ) *
               static_cast<T>( 0.5 ) +
           static_cast<T>( 1 );
}

template<std::floating_point T>
_NODISCARD constexpr T easeOutBounce( T x ) noexcept
{
    constexpr auto n1 = static_cast<T>( 7.5625 );
    constexpr auto d1 = static_cast<T>( 2.75 );
    if ( x < static_cast<T>( 1 ) / d1 )
    {
        return n1 * x * x;
    }
    if ( x < static_cast<T>( 2 ) / d1 )
    {
        return n1 * ( x -= static_cast<T>( 1.5 ) / d1 ) * x + static_cast<T>( 0.75 );
    }
    if ( x < static_cast<T>( 2.5 ) / d1 )
    {
        return n1 * ( x -= static_cast<T>( 2.25 ) / d1 ) * x + static_cast<T>( 0.9375 );
    }
    return n1 * ( x -= static_cast<T>( 2.625 ) / d1 ) * x + static_cast<T>( 0.984375 );
}

template<std::floating_point T>
_NODISCARD constexpr T easeInBounce( const T x ) noexcept
{
    return static_cast<T>( 1 ) - easeOutBounce<T>( static_cast<T>( 1 ) - x );
}

template<std::floating_point T>
_NODISCARD constexpr T easeInOutBounce( const T x ) noexcept
{
    if ( x < static_cast<T>( 0.5 ) )
    {
        return ( static_cast<T>( 1 ) - easeOutBounce<T>( static_cast<T>( 1 ) - static_cast<T>( 2 ) * x ) ) *
               static_cast<T>( 0.5 );
    }
    return ( static_cast<T>( 1 ) + easeOutBounce<T>( static_cast<T>( 2 ) * x - static_cast<T>( 1 ) ) ) *
           static_cast<T>( 0.5 );
}

} // namespace orion::utilities::math

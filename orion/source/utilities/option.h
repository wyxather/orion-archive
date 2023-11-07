#pragma once

namespace orion::utilities
{

template<typename T, bool ClearTrace = true>
struct Option final
{
    Option( Option&& )                 = delete;
    Option& operator=( Option&& )      = delete;
    Option( const Option& )            = delete;
    Option& operator=( const Option& ) = delete;

    constexpr explicit Option() noexcept = default;

    template<typename... Args>
    constexpr void emplace( Args&&... args ) noexcept
    {
        assert( !hasValue );
        new ( &value ) T( std::forward<Args>( args )... );
#ifndef NDEBUG
        hasValue = true;
#endif
    }

    constexpr void reset() noexcept
    {
        assert( hasValue );
        if constexpr ( !std::is_trivially_destructible_v<T> )
        {
            reinterpret_cast<T*>( value.data() )->~T();
        }
        if constexpr ( ClearTrace )
        {
            value.fill( decltype( value )::value_type() );
        }
#ifndef NDEBUG
        hasValue = false;
#endif
    }

    _NODISCARD constexpr T& operator*() & noexcept
    {
        assert( hasValue );
        return *reinterpret_cast<T*>( value.data() );
    }

    _NODISCARD constexpr const T& operator*() const& noexcept
    {
        assert( hasValue );
        return *reinterpret_cast<const T*>( value.data() );
    }

    _NODISCARD constexpr T* operator->() noexcept
    {
        assert( hasValue );
        return reinterpret_cast<T*>( value.data() );
    }

    _NODISCARD constexpr const T* operator->() const noexcept
    {
        assert( hasValue );
        return reinterpret_cast<const T*>( value.data() );
    }

  private:
    alignas( alignof( T ) ) std::array<std::byte, sizeof( T )> value {};
#ifndef NDEBUG
    bool hasValue = false;
#endif
};

} // namespace orion::utilities

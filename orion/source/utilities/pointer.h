#pragma once

namespace orion::utilities
{

class Pointer final
{
  public:
    constexpr explicit Pointer( const std::uintptr_t value ) : pointer( value )
    {
    }

    constexpr explicit Pointer( void* const value ) : pointer( std::uintptr_t( value ) )
    {
    }

    static constexpr std::size_t size() noexcept
    {
        return sizeof( pointer );
    }

    constexpr const std::uintptr_t& get() const noexcept
    {
        return pointer;
    }

    template<typename ReturnType>
    constexpr ReturnType as() const noexcept
    {
        return (ReturnType)( pointer );
    }

    constexpr Pointer& add( std::integral auto value ) noexcept
    {
        pointer += value;
        return *this;
    }

    constexpr Pointer& bitwiseOr( std::integral auto value ) noexcept
    {
        pointer |= value;
        return *this;
    }

    template<std::integral Integral>
    constexpr Pointer& deref() noexcept
    {
        pointer = *(Integral*)( pointer );
        return *this;
    }

    constexpr Pointer& abs() noexcept
    {
        if constexpr ( size() <= 4 )
        {
            pointer = Pointer( pointer ).add( 4 ).add( Pointer( pointer ).deref<std::uint32_t>().get() ).get();
        }
        else
        {
            pointer = Pointer( pointer )
                          .add( 4 )
                          .add( Pointer( pointer ).deref<std::uint32_t>().bitwiseOr( 0xFFFFFFFF00000000 ).get() )
                          .get();
        }
        return *this;
    }

  private:
    std::uintptr_t pointer = {};
};

} // namespace orion::utilities

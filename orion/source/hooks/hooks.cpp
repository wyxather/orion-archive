#include "source/hooks/hooks.h"

#include "source/imports/kernel32.h"

std::size_t orion::hooks::Hooks::calcVmtLength( const imports::Kernel32& kernel32,
                                                const void* const        vmtAddress ) noexcept
{
    constexpr decltype( MEMORY_BASIC_INFORMATION::Protect ) MEMORY_PROTECTION_FLAGS =
        ( PAGE_EXECUTE | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY );
    std::size_t              length = 0;
    MEMORY_BASIC_INFORMATION memoryBasicInfo;
    do
    {
        const auto virtualMethod = static_cast<void* const*>( vmtAddress )[length];
        if ( const auto numBytes = kernel32.virtualQuery( virtualMethod, &memoryBasicInfo, sizeof( memoryBasicInfo ) );
             ( numBytes == 0 ) || ( ( memoryBasicInfo.Protect & MEMORY_PROTECTION_FLAGS ) == 0 ) )
        {
            break;
        }
        ++length;
    } while ( true );
    return length;
}

std::size_t orion::hooks::Hooks::calcVmtLength( const imports::Kernel32& kernel32,
                                                const void* const* const classAddress ) noexcept
{
    return calcVmtLength( kernel32, *classAddress );
}
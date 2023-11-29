#include "source/context.h"

void* operator new( const std::size_t size )
{
    return orion::utilities::Memory::alloc(
        size, orion::context.getKernel32().getProcessHeap( orion::context.getNtdll().gadgetAddress ) );
}

void* operator new[]( const std::size_t size )
{
    return orion::utilities::Memory::alloc(
        size, orion::context.getKernel32().getProcessHeap( orion::context.getNtdll().gadgetAddress ) );
}

void operator delete( void* const ptr ) noexcept
{
    return orion::utilities::Memory::free(
        ptr, orion::context.getKernel32().getProcessHeap( orion::context.getNtdll().gadgetAddress ) );
}

void operator delete( void* const ptr, [[maybe_unused]] const std::size_t size ) noexcept
{
    return orion::utilities::Memory::free(
        ptr, orion::context.getKernel32().getProcessHeap( orion::context.getNtdll().gadgetAddress ) );
}

void operator delete[]( void* const ptr ) noexcept
{
    return orion::utilities::Memory::free(
        ptr, orion::context.getKernel32().getProcessHeap( orion::context.getNtdll().gadgetAddress ) );
}

void operator delete[]( void* const ptr, [[maybe_unused]] const std::size_t size ) noexcept
{
    return orion::utilities::Memory::free(
        ptr, orion::context.getKernel32().getProcessHeap( orion::context.getNtdll().gadgetAddress ) );
}

void* orion::utilities::Memory::alloc( const std::size_t size, void* const processHeap ) noexcept
{
    return orion::context.getNtdll().rtlAllocateHeap( orion::context.getNtdll().gadgetAddress, processHeap, 0, size );
}

void orion::utilities::Memory::free( void* const ptr, void* const processHeap ) noexcept
{
    std::ignore = orion::context.getNtdll().rtlFreeHeap( orion::context.getNtdll().gadgetAddress, processHeap, 0, ptr );
}

std::size_t orion::utilities::Memory::calcVmtLength( const imports::Ntdll&    ntdll,
                                                     const imports::Kernel32& kernel32,
                                                     const void* const        vmtAddress ) noexcept
{
    constexpr decltype( MEMORY_BASIC_INFORMATION::Protect ) MEMORY_PROTECTION_FLAGS =
        ( PAGE_EXECUTE | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY );
    std::size_t              length = 0;
    MEMORY_BASIC_INFORMATION memoryBasicInfo;
    do
    {
        const auto virtualMethod = static_cast<void* const*>( vmtAddress )[length];
        if ( const auto numBytes = kernel32.virtualQuery(
                 ntdll.gadgetAddress, virtualMethod, &memoryBasicInfo, sizeof( memoryBasicInfo ) );
             ( numBytes == 0 ) || ( ( memoryBasicInfo.Protect & MEMORY_PROTECTION_FLAGS ) == 0 ) )
        {
            break;
        }
        ++length;
    } while ( true );
    return length;
}

std::size_t orion::utilities::Memory::calcVmtLength( const imports::Ntdll&    ntdll,
                                                     const imports::Kernel32& kernel32,
                                                     const void* const* const classAddress ) noexcept
{
    return calcVmtLength( ntdll, kernel32, *classAddress );
}

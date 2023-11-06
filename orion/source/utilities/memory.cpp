#include "source/imports/kernel32.h"

std::span<const std::uint8_t> orion::utilities::Memory::getModuleBytes( const imports::Kernel32& kernel32,
                                                                        const HMODULE            moduleHandle ) noexcept
{
    MODULEINFO moduleInfo;
    kernel32.getModuleInformation( kernel32.getCurrentProcess(), moduleHandle, &moduleInfo, sizeof( moduleInfo ) );
    return std::span<const std::uint8_t>( static_cast<std::uint8_t*>( moduleInfo.lpBaseOfDll ),
                                          moduleInfo.SizeOfImage );
}

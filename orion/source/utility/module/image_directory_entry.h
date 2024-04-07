#pragma once

#include "source/utility/windows.h"

namespace orion::utility::module {

    enum class ImageDirectoryEntry {
        Architecture = IMAGE_DIRECTORY_ENTRY_ARCHITECTURE,
        BaseReloc = IMAGE_DIRECTORY_ENTRY_BASERELOC,
        BoundImport = IMAGE_DIRECTORY_ENTRY_BOUND_IMPORT,
        ComDescriptor = IMAGE_DIRECTORY_ENTRY_COM_DESCRIPTOR,
        Debug = IMAGE_DIRECTORY_ENTRY_DEBUG,
        DelayImport = IMAGE_DIRECTORY_ENTRY_DELAY_IMPORT,
        Exception = IMAGE_DIRECTORY_ENTRY_EXCEPTION,
        Export = IMAGE_DIRECTORY_ENTRY_EXPORT,
        GlobalPtr = IMAGE_DIRECTORY_ENTRY_GLOBALPTR,
        ImportAddressTable = IMAGE_DIRECTORY_ENTRY_IAT,
        Import = IMAGE_DIRECTORY_ENTRY_IMPORT,
        LoadConfig = IMAGE_DIRECTORY_ENTRY_LOAD_CONFIG,
        Resource = IMAGE_DIRECTORY_ENTRY_RESOURCE,
        Security = IMAGE_DIRECTORY_ENTRY_SECURITY,
        Tls = IMAGE_DIRECTORY_ENTRY_TLS,
    };

}  // namespace orion::utility::module

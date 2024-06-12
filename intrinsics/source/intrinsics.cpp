#include "intrinsics.h"

#pragma function(strcmp)

_Check_return_ auto __cdecl strcmp(const _In_z_ char *const str1, const _In_z_ char *const str2) -> int {
    return intrinsics::strcmp(str1, str2);
}

#pragma function(memcmp)

_NODISCARD _Check_return_ auto __cdecl memcmp(
    _In_reads_bytes_(size) const void *const buf1,
    _In_reads_bytes_(size) const void *const buf2,
    const _In_ std::size_t size
) -> int {
    return intrinsics::memcmp(
        static_cast<const unsigned char *>(buf1),
        static_cast<const unsigned char *>(buf2),
        size
    );
}

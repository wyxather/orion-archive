#include "source/imports/msvcrt.h"

orion::imports::Msvcrt::Msvcrt(void* const msvcrt) noexcept
{
    using Fn     = decltype(_vsnprintf_s);
    _vsnprintf_s = LI_FUNC(_vsnprintf_s)::in<Fn>(msvcrt);
}

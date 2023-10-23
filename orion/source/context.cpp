#include "source/context.h"

orion::Context::~Context()
{
    platform.reset();
    console.reset();
    user32.reset();
    msvcrt.reset();
    kernel32.reset();
    handle.reset();
}

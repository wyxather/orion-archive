#include "source/context.h"

orion::Context::~Context()
{
    console.reset();
    user32.reset();
    kernel32.reset();
    handle.reset();
}

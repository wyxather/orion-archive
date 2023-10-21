#include "source/context.h"

orion::Context::~Context()
{
    console.reset();
    kernel32.reset();
    handle.reset();
}

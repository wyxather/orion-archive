#include "source/context.h"

orion::Context::~Context()
{
    kernel32.reset();
    handle.reset();
}

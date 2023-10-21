#include "source/context.h"

orion::Context::~Context()
{
    handle.reset();
}

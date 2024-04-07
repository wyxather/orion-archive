#include "source/context.h"

using orion::Context;

Context::~Context() noexcept {
    ntdll.reset();
    handle.reset();
}

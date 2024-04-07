#include "source/context.h"

using orion::Context;

Context::~Context() noexcept {
    kernel32.reset();
    ntdll.reset();
    handle.reset();
}

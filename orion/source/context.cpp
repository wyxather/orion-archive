#include "source/context.h"

using orion::Context;

Context::~Context() noexcept {
    user32.reset();
    kernel32.reset();
    ntdll.reset();
    handle.reset();
}

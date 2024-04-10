#include "source/context.h"

using orion::Context;

Context::~Context() noexcept {
    input.reset();
    renderer.reset();
    platform.reset();
    console.reset();
    user32.reset();
    kernel32.reset();
    ntdll.reset();
    handle.reset();
}

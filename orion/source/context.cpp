#include "source/context.h"

using orion::Context;

Context::~Context() noexcept {
    handle.reset();
}

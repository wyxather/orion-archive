#pragma once

#include "context.h"

class Global final {
public:
    static constinit inline ManuallyConstructDestruct<Context> context;

    Global() = delete;

    Global(Global &&) = delete;

    Global(const Global &) = delete;

    ~Global() = delete;

    Global &operator=(Global &&) = delete;

    Global &operator=(const Global &) = delete;
};

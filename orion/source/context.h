#pragma once

namespace orion
{

struct Context final
{
    Context()                          = default;
    Context(Context&&)                 = delete;
    Context& operator=(Context&&)      = delete;
    Context(const Context&)            = delete;
    Context& operator=(const Context&) = delete;

    ~Context();

    _NODISCARD constexpr auto getHandle() const noexcept
    {
        return *handle;
    }

  private:
    friend class Main;

    utilities::Option<const HMODULE> handle;
};

constinit inline Context context;

} // namespace orion

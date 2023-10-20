#include "source/modules/modules.h"
#include "source/orion.h"

using orion::modules::Combase;
using orion::utilities::String;

Combase::Combase() noexcept
{
    constexpr char COMBASE[] = "combase.dll";
    const auto combase = LI_MOD(COMBASE)::safe<decltype(handle)>();
    if (combase != nullptr)
    {
        initialize(combase);
    }
    else
    {
        handle = orion.get_kernel32().load_library_a(String<COMBASE>());
        initialize(handle);
    }
}

Combase::~Combase() noexcept
{
    if (handle != nullptr)
    {
        orion.get_kernel32().free_library(handle);
        handle = nullptr;
    }
    co_task_mem_free = nullptr;
}

auto Combase::initialize(const HMODULE handle) noexcept -> void
{
    co_task_mem_free = LI_FUNC(CoTaskMemFree)::in(handle);
}

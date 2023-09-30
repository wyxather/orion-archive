#pragma once

namespace orion::modules {

    class Combase final {
    public:
        NON_COPYABLE(Combase)
        NON_MOVEABLE(Combase)

        explicit Combase() noexcept;

        ~Combase() noexcept;

        decltype(&CoTaskMemFree) co_task_mem_free = nullptr;

    private:
        auto initialize(const HMODULE handle) noexcept -> void;

        HMODULE handle = nullptr;
    };

}  // namespace orion::modules

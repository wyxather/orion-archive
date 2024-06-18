#pragma once

class LoaderData;

class ProcessEnvironmentBlock final : private PEB {
private:
    ProcessEnvironmentBlock() = delete;

    ProcessEnvironmentBlock(ProcessEnvironmentBlock &&) = delete;

    ProcessEnvironmentBlock(const ProcessEnvironmentBlock &) = delete;

    ~ProcessEnvironmentBlock() = delete;

    ProcessEnvironmentBlock &operator=(ProcessEnvironmentBlock &&) = delete;

    ProcessEnvironmentBlock &operator=(const ProcessEnvironmentBlock &) = delete;

public:
    [[nodiscard]] auto is_being_debugged() const noexcept -> bool;

    [[nodiscard]] auto get_loader_data() const noexcept -> Result<const LoaderData *, Error>;

    [[nodiscard]] static auto get() noexcept -> Result<const ProcessEnvironmentBlock *, Error>;
};

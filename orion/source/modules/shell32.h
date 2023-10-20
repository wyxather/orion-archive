#pragma once

namespace orion::modules
{

class Shell32 final
{
  public:
    NON_COPYABLE(Shell32)
    NON_MOVEABLE(Shell32)

    explicit Shell32() noexcept;

    ~Shell32() noexcept;

    decltype(&SHGetKnownFolderPath) sh_get_known_folder_path = nullptr;

  private:
    auto initialize(const HMODULE handle) noexcept -> void;

    HMODULE handle = nullptr;
};

} // namespace orion::modules

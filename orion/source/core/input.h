#pragma once

namespace orion
{

namespace imports
{

struct User32;

}

namespace core
{

struct Input final
{
    enum class Type
    {
        Undefined,
        DirectInput8,
    };

    friend void to_json( nlohmann::json& json, const Input& input ) noexcept;

    Input( Input&& )                 = delete;
    Input& operator=( Input&& )      = delete;
    Input( const Input& )            = delete;
    Input& operator=( const Input& ) = delete;

    explicit Input( const HMODULE orionHandle, const imports::User32& user32 ) noexcept;

    void hook() noexcept;
    void unhook() noexcept;

  private:
    _NODISCARD static int getUserInput( const char* text, const char* caption ) noexcept;

    void hookDirectInput8() noexcept;

    HMODULE handle = nullptr;
    Type    type   = Type::Undefined;
};

} // namespace core

} // namespace orion

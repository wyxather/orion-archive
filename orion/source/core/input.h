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

    static HRESULT STDMETHODCALLTYPE directInputDevice8GetDeviceState( CONST LPDIRECTINPUTDEVICE8 directInputDevice8,
                                                                       CONST DWORD                dataSizeInBytes,
                                                                       CONST LPVOID               data ) noexcept;

    static HRESULT STDMETHODCALLTYPE directInputDevice8GetDeviceData( CONST LPDIRECTINPUTDEVICE8 directInputDevice8,
                                                                      CONST DWORD                dataSizeInBytes,
                                                                      CONST LPDIDEVICEOBJECTDATA data,
                                                                      CONST LPDWORD              dataCount,
                                                                      CONST DWORD                dataFlags ) noexcept;

    void hookDirectInput8() noexcept;

    li::detail::safe_module_enumerator          enumerator;
    Type                                        type = Type::Undefined;
    utilities::Option<utilities::MinHook<2>, false> hooks;
};

} // namespace core

} // namespace orion

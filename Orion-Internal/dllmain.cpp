namespace Orion
{
    namespace Module
    {
        class Console
        {
        public:
            Console() noexcept {}
            ~Console() noexcept {}
        };
    }

    class Application
    {
    public:
        Application(HMODULE moduleHandle) noexcept {}
        ~Application() noexcept {}

        Application(Application&&) = delete;
        Application(const Application&) = delete;
        Application& operator=(Application&&) = delete;
        Application& operator=(const Application&) = delete;

    private:
        HMODULE m_handle = {};
    };
}

std::optional<Orion::Application> application;

#include <clocale>

EXTERN_C BOOL WINAPI _CRT_INIT(HMODULE, DWORD, LPVOID);

BOOL APIENTRY DllEntryPoint(HMODULE moduleHandle, DWORD reason, LPVOID reserved)
{
    if (!_CRT_INIT(moduleHandle, reason, reserved))
        return FALSE;

    if (reason == DLL_PROCESS_ATTACH) {
        std::setlocale(LC_CTYPE, ".utf8");
        application.emplace(moduleHandle);
    }

    return TRUE;
}
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

    std::optional<Orion::Application> instance;
}

#include <clocale>

EXTERN_C BOOL WINAPI _CRT_INIT(HMODULE, DWORD, LPVOID);

BOOL APIENTRY DllEntryPoint(HMODULE moduleHandle, DWORD reason, LPVOID reserved)
{
    if (!_CRT_INIT(moduleHandle, reason, reserved))
        return FALSE;

    if (reason == DLL_PROCESS_ATTACH) {

        std::setlocale(LC_CTYPE, xorstr_(".utf8"));

        _MM_SET_FLUSH_ZERO_MODE(_MM_FLUSH_ZERO_ON);
        _MM_SET_DENORMALS_ZERO_MODE(_MM_DENORMALS_ZERO_ON);

        Orion::instance.emplace(moduleHandle);
    }

    return TRUE;
}
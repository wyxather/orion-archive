#ifdef _WIN64

    #include "source/engine/unreal/unreal.h"

    #include "source/core/log.h"
    #include "source/engine/unreal/generator.h"

using orion::engine::unreal::Dumper;

auto WINAPI dump_thread(LPVOID) -> DWORD {
    const auto t_1 = std::chrono::high_resolution_clock::now();

    log::info("Started Generation!");

    Generator::Init();

    if (Settings::GameName.empty() && Settings::GameVersion.empty()) {
        // Only Possible in Main()
        auto Kismet = ObjectArray::FindClassFast("KismetSystemLibrary");
        const auto GetGameName =
            Kismet.GetFunction("KismetSystemLibrary", "GetGameName");
        const auto GetEngineVersion =
            Kismet.GetFunction("KismetSystemLibrary", "GetEngineVersion");

        FString Name;
        FString Version;
        Kismet.ProcessEvent(GetGameName, &Name);
        Kismet.ProcessEvent(GetEngineVersion, &Version);

        Settings::GameName = Name.ToString();
        Settings::GameVersion = Version.ToString();
    }

    log::info("GameName: {}", Settings::GameName.c_str());
    log::info("GameVersion: {}", Settings::GameVersion.c_str());

    Generator::GenerateSDK();
    Generator::GenerateMappings();
    Generator::GenerateIDAMappings();

    const auto t_C = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> ms_double_ = t_C - t_1;

    log::info("Generating SDK took ({}ms)", ms_double_.count());

    return EXIT_SUCCESS;
}

auto Dumper::dump() noexcept -> void {
    const auto& kernel32 = orion.get_kernel32();
    const auto thread_handle =
        kernel32.create_thread(nullptr, 0, dump_thread, nullptr, 0, nullptr);
    if (thread_handle) {
        kernel32.close_handle(thread_handle);
    }
}

#endif

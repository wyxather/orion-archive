#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class MJRawInput.MJRawInputFunctionLibrary
class UMJRawInputFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMJRawInputFunctionLibrary* GetDefaultObj();

	TArray<struct FRegisteredDeviceInfo> GetRegisteredDevices();
};

// 0x18 (0x50 - 0x38)
// Class MJRawInput.MJRawInputSettings
class UMJRawInputSettings : public UDeveloperSettings
{
public:
	TArray<struct FMJRawInputDeviceConfiguration> DeviceConfigurations;                              // 0x38(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                         bRegisterDefaultDevice;                            // 0x48(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_135[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMJRawInputSettings* GetDefaultObj();

};

}



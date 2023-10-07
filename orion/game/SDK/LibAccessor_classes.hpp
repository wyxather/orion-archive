#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass LibAccessor.LibAccessor_C
class ULibAccessor_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibAccessor_C* GetDefaultObj();

	void GetKSPlayerController(class UObject* __WorldContext, class AKSPlayerControllerBP_C** KSPlayerController);
	void GetKSGameMode(class UObject* __WorldContext, class AKSGameModeBP_C** KSGameMode);
};

}



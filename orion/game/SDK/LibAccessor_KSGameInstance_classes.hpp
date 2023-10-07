#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass LibAccessor_KSGameInstance.LibAccessor_KSGameInstance_C
class ULibAccessor_KSGameInstance_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibAccessor_KSGameInstance_C* GetDefaultObj();

	void GetKSGameInstance(class UObject* __WorldContext, class UKSGameInstanceBP_C** KSGameInstance);
};

}



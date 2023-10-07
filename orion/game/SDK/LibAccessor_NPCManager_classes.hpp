#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass LibAccessor_NPCManager.LibAccessor_NPCManager_C
class ULibAccessor_NPCManager_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibAccessor_NPCManager_C* GetDefaultObj();

	void GetNPCManager(class UObject* __WorldContext, class ANPCManagerBP_C** AsNPCManager_BP);
	void GetVibrationManager(class UObject* __WorldContext, class AVibrationManagerBP_C** VibrationManager);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass LibStartupUtil.LibStartupUtil_C
class ULibStartupUtil_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibStartupUtil_C* GetDefaultObj();

	void ExistAvailableSaveData(class UObject* __WorldContext, bool* Exist);
	void InitSaveDataOnNewGame(class UObject* __WorldContext);
};

}



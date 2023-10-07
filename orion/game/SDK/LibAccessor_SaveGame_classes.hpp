#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass LibAccessor_SaveGame.LibAccessor_SaveGame_C
class ULibAccessor_SaveGame_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibAccessor_SaveGame_C* GetDefaultObj();

	void GetSaveDataManager(class UObject* __WorldContext, class AKSSaveDataManagerBP_C** SaveDataManager);
	void GetSaveData(class UObject* __WorldContext, class UKSSaveGameBP_C** KSSaveGame);
};

}



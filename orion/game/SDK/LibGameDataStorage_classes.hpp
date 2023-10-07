#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass LibGameDataStorage.LibGameDataStorage_C
class ULibGameDataStorage_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibGameDataStorage_C* GetDefaultObj();

	void CreateMainMemberCharaFormArray(class UObject* __WorldContext, TArray<uint8>* CharaForm);
	void CreateMainMemberArrayForSaveData(class UObject* __WorldContext, TArray<int32>* CharacterIDs, TArray<int32>* JobIDs);
	void UpdateSaveDataPlayerLocation(class UObject* __WorldContext);
	void MakeMainMissionClearFlag(class UObject* __WorldContext, int32* ClearFlag);
	void GetCurrentPlayTime(class UObject* __WorldContext, int32* PlayTime);
};

}



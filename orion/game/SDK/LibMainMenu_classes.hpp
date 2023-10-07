#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass LibMainMenu.LibMainMenu_C
class ULibMainMenu_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibMainMenu_C* GetDefaultObj();

	void GetMainMenuList(class UObject* __WorldContext, class UMainMenuList_C** MainMenuList);
	bool IsRunningMainMenu(class UObject* __WorldContext);
	void SetMapCharacterVisible(bool IsFastTraveling, class UObject* __WorldContext);
	void SetFieldMapHidden(bool IsHidden, class UObject* __WorldContext);
	void GetEqpIconName(int32 ID, class UObject* __WorldContext, class FName* IconName);
	void OpenMainMenuCommon(class UObject* __WorldContext, class UMainMenuBase** MainMenuBase);
	void CheckLearningHealSkill(struct FSavePlayerCharacterData& SaveCharacterData, struct FJobData& JobData, class UObject* __WorldContext, bool* LEARNING);
	void IsChacterLearningHealSkill(const struct FSavePlayerCharacterData& CharacterData, class UObject* __WorldContext, bool* LEARNING);
	void CloseMainMenu(bool FastClose, class UObject* __WorldContext, bool* IsClose);
	void OpenMainMenu(bool FastWorldMap, class UObject* __WorldContext);
	void CombineAilmentData(TArray<struct FMainMenuAilmentData>& CombineTarget, class UObject* __WorldContext, struct FMainMenuAilmentData* CombineData);
	void GetCharacterAilmentData(struct FSavePlayerCharacterData& CharacterData, class UObject* __WorldContext, struct FMainMenuAilmentData* NewParam);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_BattleAIUtility.BP_BattleAIUtility_C
class UBP_BattleAIUtility_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBP_BattleAIUtility_C* GetDefaultObj();

	void ShuffleActionTable(TArray<class FName>& ActionTable, bool FixedFirstAbility, class UObject* __WorldContext);
	void PopActionTable(TArray<class FName>& ActionTable, class UObject* __WorldContext, class FName* AbilityLabel);
	void CreateActionTable(class ABattleCharacterBase* Target, TArray<int32>& IndexList, bool ExecShuffle, bool FixedFirstAbility, class UObject* __WorldContext, TArray<class FName>* ActionTable);
	void ReplaceFirstAbilityIndex(TArray<int32>& TargetTable, int32 ReplaceIndex, class UObject* __WorldContext);
	void GetMultiAbilityData(TArray<int32>& BaseAbilityTable, TArray<int32>& WorkingAbilityTable, bool& ResetAbilityTable, bool& SetupNewTable, class ABattleCharacterBase* OwnerCharacter, class UObject* __WorldContext, class FName* AbilityName, int32* AbilityIndex, bool* FinishAbilityTable);
	void DrawLotsForIndex(TArray<int32>& RateList, class UObject* __WorldContext, int32* Result);
	void DrawLots(TArray<struct FBattleAICommandData>& CommandList, class UObject* __WorldContext, class FName* Result);
	void GetHPRatio(class ABattleCharacterBase* Target, class UObject* __WorldContext, float* HPRate);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass LibRareEnemy.LibRareEnemy_C
class ULibRareEnemy_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibRareEnemy_C* GetDefaultObj();

	void GetAdditionalOctlinRate(TArray<class ABattleCharacterBase*>& Players, bool ContainSupportAbility, class UObject* __WorldContext, int32* AdditionalRate);
	void GetAdditionalCatlinRate(TArray<class ABattleCharacterBase*>& Players, bool ContainSupportAbility, class UObject* __WorldContext, int32* AdditionalRate);
	void GetAdditionalRareEnemyRate(TArray<class ABattleCharacterBase*>& Players, class UObject* __WorldContext, int32* AdditionalRate);
	void GetRareEnemyLabel(enum class EAreaID Area, bool RareEnemyCatlin, class UObject* __WorldContext, class FName* RareEnemy_Low, class FName* RareEnemy_Middle, class FName* RareEnemy_High);
	void GetRareOctlinLabelByArea(enum class EAreaID Area, class UObject* __WorldContext, class FName* RareEnemy_Low, class FName* RareEnemy_Middle, class FName* RareEnemy_High);
	void GetRareCatlinLabelByArea(enum class EAreaID Area, class UObject* __WorldContext, class FName* RareEnemy_Low, class FName* RareEnemy_Middle, class FName* RareEnemy_High);
};

}



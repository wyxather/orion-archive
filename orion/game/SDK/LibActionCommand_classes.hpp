#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass LibActionCommand.LibActionCommand_C
class ULibActionCommand_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibActionCommand_C* GetDefaultObj();

	void GetConfusionAttackAbilityByWeapon(enum class EWEAPON_CATEGORY WeaponType, class UObject* __WorldContext, class FName* AbilityName);
	void GetChaseAttackAbilityByWeapon(enum class EWEAPON_CATEGORY WeaponType, class UObject* __WorldContext, class FName* AbilityName);
	void GetEnchantAbilityByAttribute(enum class EATTRIBUTE_TYPE AttributeType, bool IsEnemy, class UObject* __WorldContext, class FName* AbilityName);
	void GetActionCommandForInventor(const struct FCommandMenuItem& CommandMenuItem, class UObject* __WorldContext, struct FAbilityDataBase* Command);
	void GetActionCommandForInvade(struct FCommandMenuItem& CommandMenuItem, class UObject* __WorldContext, struct FAbilityDataBase* Command);
	void GetActionCommandForSupporter(class FName Display_Name, struct FCommandMenuItem& CommandMenuItem, class UObject* __WorldContext, struct FAbilityDataBase* Command);
	void GetActionCommandForItem(class FName ItemId, class UObject* __WorldContext, struct FAbilityDataBase* Command);
	void GetActionCommandForPreparation(const struct FAbilitySetDataBase& CommandSet, int32 BoostLv, bool PreparationAttack, class UObject* __WorldContext, struct FAbilityDataBase* Command, class FName* Label);
	void GetNormalAttackCommand(class ABattleCharacterBase* Player, int32 BoostLv, class UObject* __WorldContext, struct FAbilityDataBase* Command, class FName* Label);
	void GetActionCommandFromSet(const struct FAbilitySetDataBase& CommandSet, int32 BoostLv, class UObject* __WorldContext, struct FAbilityDataBase* Command, class FName* Label);
	void GetActionCommand(class FName CommandName, class UObject* __WorldContext, struct FAbilityDataBase* Command);
};

}



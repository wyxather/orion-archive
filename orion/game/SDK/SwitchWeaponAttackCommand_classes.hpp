#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x691 - 0x691)
// BlueprintGeneratedClass SwitchWeaponAttackCommand.SwitchWeaponAttackCommand_C
class ASwitchWeaponAttackCommand_C : public ABP_ActionCommandBase_C
{
public:

	static class UClass* StaticClass();
	static class ASwitchWeaponAttackCommand_C* GetDefaultObj();

	bool ExecAilmentCommand(int32 Index, bool AllAilment, bool LastHit);
	void Setup_Action_Command(class ABattleCharacterBaseBP_C* Enforcer, TArray<class ABattleCharacterBaseBP_C*>& Target, const struct FAbilityDataBase& NewCommand, int32 BoostLevel, bool* Success);
	void CheckEnableCommandWeapon(enum class EWEAPON_CATEGORY* Weapon, bool* Enable);
};

}



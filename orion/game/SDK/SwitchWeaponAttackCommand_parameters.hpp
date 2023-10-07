#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x35 (0x35 - 0x0)
// Function SwitchWeaponAttackCommand.SwitchWeaponAttackCommand_C.ExecAilmentCommand
struct ASwitchWeaponAttackCommand_C_ExecAilmentCommand_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllAilment;                                        // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         LastHit;                                           // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x6(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x125 (0x125 - 0x0)
// Function SwitchWeaponAttackCommand.SwitchWeaponAttackCommand_C.Setup Action Command
struct ASwitchWeaponAttackCommand_C_Setup_Action_Command_Params
{
public:
	class ABattleCharacterBaseBP_C*              Enforcer;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABattleCharacterBaseBP_C*>      Target;                                            // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAbilityDataBase                      NewCommand;                                        // 0x18(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        BoostLevel;                                        // 0x108(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x10C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function SwitchWeaponAttackCommand.SwitchWeaponAttackCommand_C.CheckEnableCommandWeapon
struct ASwitchWeaponAttackCommand_C_CheckEnableCommandWeapon_Params
{
public:
	enum class EWEAPON_CATEGORY                  Weapon;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enable;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}



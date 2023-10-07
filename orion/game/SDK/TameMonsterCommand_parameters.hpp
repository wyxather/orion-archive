#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x33A (0x33A - 0x0)
// Function TameMonsterCommand.TameMonsterCommand_C.Setup Action Command
struct ATameMonsterCommand_C_Setup_Action_Command_Params
{
public:
	class ABattleCharacterBaseBP_C*              Enforcer;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABattleCharacterBaseBP_C*>      Target;                                            // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAbilityDataBase                      NewCommand;                                        // 0x18(0xF0)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        BoostLevel;                                        // 0x108(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x10C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function TameMonsterCommand.TameMonsterCommand_C.ExecSpecialAilmentCommand
struct ATameMonsterCommand_C_ExecSpecialAilmentCommand_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function TameMonsterCommand.TameMonsterCommand_C.CheckExecCommand
struct ATameMonsterCommand_C_CheckExecCommand_Params
{
public:
	bool                                         Exec;                                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function TameMonsterCommand.TameMonsterCommand_C.CheckBackPackOver
struct ATameMonsterCommand_C_CheckBackPackOver_Params
{
public:
	bool                                         Over;                                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1C (0x1C - 0x0)
// Function TameMonsterCommand.TameMonsterCommand_C.JudgeTameMonster
struct ATameMonsterCommand_C_JudgeTameMonster_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x648 (0x648 - 0x0)
// Function TameMonsterCommand.TameMonsterCommand_C.ExecuteUbergraph_TameMonsterCommand
struct ATameMonsterCommand_C_ExecuteUbergraph_TameMonsterCommand_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}



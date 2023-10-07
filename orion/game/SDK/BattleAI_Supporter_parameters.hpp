#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x1D (0x1D - 0x0)
// Function BattleAI_Supporter.BattleAI_Supporter_C.UpdateThink
struct UBattleAI_Supporter_C_UpdateThink_Params
{
public:
	class FName                                  CommandName;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BattleAI_Supporter.BattleAI_Supporter_C.SetBattleCommandTable
struct UBattleAI_Supporter_C_SetBattleCommandTable_Params
{
public:
	TArray<struct FBattleAICommandData>          AcCommandTable;                                    // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x138 (0x138 - 0x0)
// Function BattleAI_Supporter.BattleAI_Supporter_C.SelectBattleTarget
struct UBattleAI_Supporter_C_SelectBattleTarget_Params
{
public:
	TArray<class ABattleCharacterBase*>          PlayerList;                                        // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class ABattleCharacterBase*>          EnemyList;                                         // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class EBATTLE_TARGET_TYPE               TargetType;                                        // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_143D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABattleCharacterBase*>          TargetList;                                        // 0x28(0x10)(Parm, OutParm)
};

}
}



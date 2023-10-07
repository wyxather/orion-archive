#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x3D8 (0x3D8 - 0x0)
// Function BattleAI_NormalEnemy.BattleAI_NormalEnemy_C.SelectBattleTarget
struct UBattleAI_NormalEnemy_C_SelectBattleTarget_Params
{
public:
	TArray<class ABattleCharacterBase*>          PlayerList;                                        // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class ABattleCharacterBase*>          EnemyList;                                         // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class EBATTLE_TARGET_TYPE               TargetType;                                        // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1793[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABattleCharacterBase*>          TargetList;                                        // 0x28(0x10)(Parm, OutParm)
};

// 0xD59 (0xD59 - 0x0)
// Function BattleAI_NormalEnemy.BattleAI_NormalEnemy_C.AIInitialize
struct UBattleAI_NormalEnemy_C_AIInitialize_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4A5 (0x4A5 - 0x0)
// Function BattleAI_NormalEnemy.BattleAI_NormalEnemy_C.UpdateThink
struct UBattleAI_NormalEnemy_C_UpdateThink_Params
{
public:
	class FName                                  CommandName;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BattleAI_NormalEnemy.BattleAI_NormalEnemy_C.BoostActionCheck
struct UBattleAI_NormalEnemy_C_BoostActionCheck_Params
{
public:
	bool                                         UseBoostAction;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}



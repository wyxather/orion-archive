#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x10 (0x10 - 0x0)
// Function BP_BattleAI_Base.BP_BattleAI_Base_C.UpdateThinkForConfusion
struct UBP_BattleAI_Base_C_UpdateThinkForConfusion_Params
{
public:
	class FName                                  CommandName;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_BattleAI_Base.BP_BattleAI_Base_C.PostSignOfBoost
struct UBP_BattleAI_Base_C_PostSignOfBoost_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_BattleAI_Base.BP_BattleAI_Base_C.GetCounterAbility
struct UBP_BattleAI_Base_C_GetCounterAbility_Params
{
public:
	class FName                                  CommandName;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_BattleAI_Base.BP_BattleAI_Base_C.PostUpdateThink
struct UBP_BattleAI_Base_C_PostUpdateThink_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1F9 (0x1F9 - 0x0)
// Function BP_BattleAI_Base.BP_BattleAI_Base_C.SelectBattleTarget
struct UBP_BattleAI_Base_C_SelectBattleTarget_Params
{
public:
	TArray<class ABattleCharacterBase*>          PlayerList;                                        // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class ABattleCharacterBase*>          EnemyList;                                         // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class EBATTLE_TARGET_TYPE               TargetType;                                        // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1457[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABattleCharacterBase*>          TargetList;                                        // 0x28(0x10)(Parm, OutParm)
};

// 0x8 (0x8 - 0x0)
// Function BP_BattleAI_Base.BP_BattleAI_Base_C.UpdateThink
struct UBP_BattleAI_Base_C_UpdateThink_Params
{
public:
	class FName                                  CommandName;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_BattleAI_Base.BP_BattleAI_Base_C.PreUpdateThink
struct UBP_BattleAI_Base_C_PreUpdateThink_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_BattleAI_Base.BP_BattleAI_Base_C.AIInitialize
struct UBP_BattleAI_Base_C_AIInitialize_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x16 (0x16 - 0x0)
// Function BP_BattleAI_Base.BP_BattleAI_Base_C.SwitchPahse
struct UBP_BattleAI_Base_C_SwitchPahse_Params
{
public:
	float                                        HpRateOfPhase1;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HpRateOfPhase2;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HpRateOfPhase3;                                    // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Phase;                                             // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7 (0x7 - 0x0)
// Function BP_BattleAI_Base.BP_BattleAI_Base_C.DoAnyTimes
struct UBP_BattleAI_Base_C_DoAnyTimes_Params
{
public:
	int32                                        ExecNum;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ExecCondition;                                     // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	bool                                         Exec;                                              // 0x5(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BP_BattleAI_Base.BP_BattleAI_Base_C.CountSpecialTurnVariable
struct UBP_BattleAI_Base_C_CountSpecialTurnVariable_Params
{
public:
	int32                                        SpecialTurn;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TurnVariable;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSpesialTurn;                                     // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x51 (0x51 - 0x0)
// Function BP_BattleAI_Base.BP_BattleAI_Base_C.GetAbilityPattern
struct UBP_BattleAI_Base_C_GetAbilityPattern_Params
{
public:
	TArray<int32>                                ActionPattern;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         MultiAction;                                       // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         FinishAbilityPattern;                              // 0x11(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1462[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AbilityName;                                       // 0x14(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AbilityIndex;                                      // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function BP_BattleAI_Base.BP_BattleAI_Base_C.GetFirstActionPattern
struct UBP_BattleAI_Base_C_GetFirstActionPattern_Params
{
public:
	TArray<int32>                                FirstActionPattern;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FName                                  AbilityName;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Finish;                                            // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4C (0x4C - 0x0)
// Function BP_BattleAI_Base.BP_BattleAI_Base_C.GetAbilityTable
struct UBP_BattleAI_Base_C_GetAbilityTable_Params
{
public:
	TArray<int32>                                AbilityTable;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         MultiAction;                                       // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         FixFirstAbility;                                   // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1465[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AbilityName;                                       // 0x14(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AbilityIndex;                                      // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FinishAbilityTable;                                // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1C (0x1C - 0x0)
// Function BP_BattleAI_Base.BP_BattleAI_Base_C.AddSignActionTurn
struct UBP_BattleAI_Base_C_AddSignActionTurn_Params
{
public:
	bool                                         NotMultiActionSign;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function BP_BattleAI_Base.BP_BattleAI_Base_C.CheckUniqueAbility
struct UBP_BattleAI_Base_C_CheckUniqueAbility_Params
{
public:
	bool                                         UseNormalAttack;                                   // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x13 (0x13 - 0x0)
// Function BP_BattleAI_Base.BP_BattleAI_Base_C.TakeDamage_Old
struct UBP_BattleAI_Base_C_TakeDamage_Old_Params
{
public:
	int32                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1466[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBaseBP_C*              Enforcer;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EATTRIBUTE_TYPE                   Attribute;                                         // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWEAPON_CATEGORY                  Weapon;                                            // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Return;                                            // 0x12(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_BattleAI_Base.BP_BattleAI_Base_C.SetOwner_old
struct UBP_BattleAI_Base_C_SetOwner_old_Params
{
public:
	class ABattleCharacterBaseBP_C*              Owner;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_BattleAI_Base.BP_BattleAI_Base_C.GetHPRate
struct UBP_BattleAI_Base_C_GetHPRate_Params
{
public:
	float                                        HPRate;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}



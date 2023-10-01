#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Debuff_Corrosive_Stacking_OnEnemy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Debuff_Corrosive_Stacking_OnEnemy.Action_Debuff_Corrosive_Stacking_OnEnemy_C.FilterIncomingDamage
struct UAction_Debuff_Corrosive_Stacking_OnEnemy_C_FilterIncomingDamage_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FDamageInfo                                 DamageInfoOut;                                            // (Parm, OutParm, ContainsInstancedReference)
	bool                                               ShouldApplyDamage;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Debuff_Corrosive_Stacking_OnEnemy.Action_Debuff_Corrosive_Stacking_OnEnemy_C.OnActionStart
struct UAction_Debuff_Corrosive_Stacking_OnEnemy_C_OnActionStart_Params
{
};

// Function Action_Debuff_Corrosive_Stacking_OnEnemy.Action_Debuff_Corrosive_Stacking_OnEnemy_C.OnReapplyBuff
struct UAction_Debuff_Corrosive_Stacking_OnEnemy_C_OnReapplyBuff_Params
{
};

// Function Action_Debuff_Corrosive_Stacking_OnEnemy.Action_Debuff_Corrosive_Stacking_OnEnemy_C.ExecuteUbergraph_Action_Debuff_Corrosive_Stacking_OnEnemy
struct UAction_Debuff_Corrosive_Stacking_OnEnemy_C_ExecuteUbergraph_Action_Debuff_Corrosive_Stacking_OnEnemy_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

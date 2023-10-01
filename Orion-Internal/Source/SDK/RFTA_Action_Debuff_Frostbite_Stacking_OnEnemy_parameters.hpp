#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Debuff_Frostbite_Stacking_OnEnemy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Debuff_Frostbite_Stacking_OnEnemy.Action_Debuff_Frostbite_Stacking_OnEnemy_C.AllowAction
struct UAction_Debuff_Frostbite_Stacking_OnEnemy_C_AllowAction_Params
{
	class UClass**                                     ActionBP;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FDamageInfo*                                InDamageInfo;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Action_Debuff_Frostbite_Stacking_OnEnemy.Action_Debuff_Frostbite_Stacking_OnEnemy_C.OnActionStart
struct UAction_Debuff_Frostbite_Stacking_OnEnemy_C_OnActionStart_Params
{
};

// Function Action_Debuff_Frostbite_Stacking_OnEnemy.Action_Debuff_Frostbite_Stacking_OnEnemy_C.OnActionStop
struct UAction_Debuff_Frostbite_Stacking_OnEnemy_C_OnActionStop_Params
{
};

// Function Action_Debuff_Frostbite_Stacking_OnEnemy.Action_Debuff_Frostbite_Stacking_OnEnemy_C.OnReapplyBuff
struct UAction_Debuff_Frostbite_Stacking_OnEnemy_C_OnReapplyBuff_Params
{
};

// Function Action_Debuff_Frostbite_Stacking_OnEnemy.Action_Debuff_Frostbite_Stacking_OnEnemy_C.SFX_Frost_Bite_Stack
struct UAction_Debuff_Frostbite_Stacking_OnEnemy_C_SFX_Frost_Bite_Stack_Params
{
};

// Function Action_Debuff_Frostbite_Stacking_OnEnemy.Action_Debuff_Frostbite_Stacking_OnEnemy_C.ExecuteUbergraph_Action_Debuff_Frostbite_Stacking_OnEnemy
struct UAction_Debuff_Frostbite_Stacking_OnEnemy_C_ExecuteUbergraph_Action_Debuff_Frostbite_Stacking_OnEnemy_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_MantleOfThorns_Buff_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_MantleOfThorns_Buff.Action_MantleOfThorns_Buff_C.ReflectDamage
struct UAction_MantleOfThorns_Buff_C_ReflectDamage_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// Function Action_MantleOfThorns_Buff.Action_MantleOfThorns_Buff_C.FilterIncomingDamage
struct UAction_MantleOfThorns_Buff_C_FilterIncomingDamage_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FDamageInfo                                 DamageInfoOut;                                            // (Parm, OutParm, ContainsInstancedReference)
	bool                                               ShouldApplyDamage;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_MantleOfThorns_Buff.Action_MantleOfThorns_Buff_C.ModifyDamage
struct UAction_MantleOfThorns_Buff_C_ModifyDamage_Params
{
	struct FDamageInfo                                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_MantleOfThorns_Buff.Action_MantleOfThorns_Buff_C.IsMeleeClass
struct UAction_MantleOfThorns_Buff_C_IsMeleeClass_Params
{
	class UClass**                                     Class;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Action_MantleOfThorns_Buff.Action_MantleOfThorns_Buff_C.OnActionStart
struct UAction_MantleOfThorns_Buff_C_OnActionStart_Params
{
};

// Function Action_MantleOfThorns_Buff.Action_MantleOfThorns_Buff_C.OnActionStop
struct UAction_MantleOfThorns_Buff_C_OnActionStop_Params
{
};

// Function Action_MantleOfThorns_Buff.Action_MantleOfThorns_Buff_C.ExecuteUbergraph_Action_MantleOfThorns_Buff
struct UAction_MantleOfThorns_Buff_C_ExecuteUbergraph_Action_MantleOfThorns_Buff_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_StormCaller_DFA_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Mod_StormCaller_DFA.Action_Mod_StormCaller_DFA_C.OnActionAdded
struct UAction_Mod_StormCaller_DFA_C_OnActionAdded_Params
{
	class UActionBase**                                Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_StormCaller_DFA.Action_Mod_StormCaller_DFA_C.FilterIncomingDamage
struct UAction_Mod_StormCaller_DFA_C_FilterIncomingDamage_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FDamageInfo                                 DamageInfoOut;                                            // (Parm, OutParm, ContainsInstancedReference)
	bool                                               ShouldApplyDamage;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Mod_StormCaller_DFA.Action_Mod_StormCaller_DFA_C.ModifyDamage
struct UAction_Mod_StormCaller_DFA_C_ModifyDamage_Params
{
	struct FDamageInfo                                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Mod_StormCaller_DFA.Action_Mod_StormCaller_DFA_C.OnActionStart
struct UAction_Mod_StormCaller_DFA_C_OnActionStart_Params
{
};

// Function Action_Mod_StormCaller_DFA.Action_Mod_StormCaller_DFA_C.OnDOT
struct UAction_Mod_StormCaller_DFA_C_OnDOT_Params
{
};

// Function Action_Mod_StormCaller_DFA.Action_Mod_StormCaller_DFA_C.OnActionStop
struct UAction_Mod_StormCaller_DFA_C_OnActionStop_Params
{
};

// Function Action_Mod_StormCaller_DFA.Action_Mod_StormCaller_DFA_C.OnOwnerEnteredInteractive
struct UAction_Mod_StormCaller_DFA_C_OnOwnerEnteredInteractive_Params
{
	struct FName*                                      StateName;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_StormCaller_DFA.Action_Mod_StormCaller_DFA_C.ExecuteUbergraph_Action_Mod_StormCaller_DFA
struct UAction_Mod_StormCaller_DFA_C_ExecuteUbergraph_Action_Mod_StormCaller_DFA_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

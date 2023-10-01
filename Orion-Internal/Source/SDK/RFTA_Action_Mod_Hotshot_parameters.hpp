#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_Hotshot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Mod_Hotshot.Action_Mod_Hotshot_C.EvocationTraitDamageMod
struct UAction_Mod_Hotshot_C_EvocationTraitDamageMod_Params
{
	float                                              ModDamage;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_Hotshot.Action_Mod_Hotshot_C.ModifyDamage
struct UAction_Mod_Hotshot_C_ModifyDamage_Params
{
	struct FDamageInfo                                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Mod_Hotshot.Action_Mod_Hotshot_C.OnPostComputeStats
struct UAction_Mod_Hotshot_C_OnPostComputeStats_Params
{
};

// Function Action_Mod_Hotshot.Action_Mod_Hotshot_C.OnActionStart
struct UAction_Mod_Hotshot_C_OnActionStart_Params
{
};

// Function Action_Mod_Hotshot.Action_Mod_Hotshot_C.OnCharacterEvent
struct UAction_Mod_Hotshot_C_OnCharacterEvent_Params
{
	struct FName*                                      EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_Hotshot.Action_Mod_Hotshot_C.OnActionStop
struct UAction_Mod_Hotshot_C_OnActionStop_Params
{
};

// Function Action_Mod_Hotshot.Action_Mod_Hotshot_C.ExecuteUbergraph_Action_Mod_Hotshot
struct UAction_Mod_Hotshot_C_ExecuteUbergraph_Action_Mod_Hotshot_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

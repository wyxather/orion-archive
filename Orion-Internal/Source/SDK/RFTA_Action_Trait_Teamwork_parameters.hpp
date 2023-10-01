#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Trait_Teamwork_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Trait_Teamwork.Action_Trait_Teamwork_C.ModifyInspectInfo
struct UAction_Trait_Teamwork_C_ModifyInspectInfo_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               InspectLevel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo                                Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Trait_Teamwork.Action_Trait_Teamwork_C.GetExperienceMod
struct UAction_Trait_Teamwork_C_GetExperienceMod_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Trait_Teamwork.Action_Trait_Teamwork_C.GetModPowerMod
struct UAction_Trait_Teamwork_C_GetModPowerMod_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Trait_Teamwork.Action_Trait_Teamwork_C.OnComputeStats
struct UAction_Trait_Teamwork_C_OnComputeStats_Params
{
};

// Function Action_Trait_Teamwork.Action_Trait_Teamwork_C.OnReapplyBuff
struct UAction_Trait_Teamwork_C_OnReapplyBuff_Params
{
};

// Function Action_Trait_Teamwork.Action_Trait_Teamwork_C.OnLevelChanged
struct UAction_Trait_Teamwork_C_OnLevelChanged_Params
{
};

// Function Action_Trait_Teamwork.Action_Trait_Teamwork_C.ExecuteUbergraph_Action_Trait_Teamwork
struct UAction_Trait_Teamwork_C_ExecuteUbergraph_Action_Trait_Teamwork_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

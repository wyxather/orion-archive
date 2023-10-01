#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Frost_Cloud_DOT_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Frost_Cloud_DOT.Action_Frost_Cloud_DOT_C.CheckTag
struct UAction_Frost_Cloud_DOT_C_CheckTag_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Frost_Cloud_DOT.Action_Frost_Cloud_DOT_C.IsHostile
struct UAction_Frost_Cloud_DOT_C_IsHostile_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Frost_Cloud_DOT.Action_Frost_Cloud_DOT_C.IsPlayer
struct UAction_Frost_Cloud_DOT_C_IsPlayer_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Frost_Cloud_DOT.Action_Frost_Cloud_DOT_C.IsBoss
struct UAction_Frost_Cloud_DOT_C_IsBoss_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Frost_Cloud_DOT.Action_Frost_Cloud_DOT_C.CanDoDamage
struct UAction_Frost_Cloud_DOT_C_CanDoDamage_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Frost_Cloud_DOT.Action_Frost_Cloud_DOT_C.Release
struct UAction_Frost_Cloud_DOT_C_Release_Params
{
};

// Function Action_Frost_Cloud_DOT.Action_Frost_Cloud_DOT_C.AllowAction
struct UAction_Frost_Cloud_DOT_C_AllowAction_Params
{
	class UClass**                                     ActionBP;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FDamageInfo*                                InDamageInfo;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Action_Frost_Cloud_DOT.Action_Frost_Cloud_DOT_C.OnActionStart
struct UAction_Frost_Cloud_DOT_C_OnActionStart_Params
{
};

// Function Action_Frost_Cloud_DOT.Action_Frost_Cloud_DOT_C.OnActionStop
struct UAction_Frost_Cloud_DOT_C_OnActionStop_Params
{
};

// Function Action_Frost_Cloud_DOT.Action_Frost_Cloud_DOT_C.ExecuteUbergraph_Action_Frost_Cloud_DOT
struct UAction_Frost_Cloud_DOT_C_ExecuteUbergraph_Action_Frost_Cloud_DOT_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_IronBear_BearFist_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_IronBear_BearFist_Base.Action_IronBear_BearFist_Base_C.NotifyUsed
struct UAction_IronBear_BearFist_Base_C_NotifyUsed_Params
{
};

// Function Action_IronBear_BearFist_Base.Action_IronBear_BearFist_Base_C.DoBearFistMeleeHit
struct UAction_IronBear_BearFist_Base_C_DoBearFistMeleeHit_Params
{
	bool                                               NormalFireMode;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_IronBear_BearFist_Base.Action_IronBear_BearFist_Base_C.OnBegin
struct UAction_IronBear_BearFist_Base_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_IronBear_BearFist_Base.Action_IronBear_BearFist_Base_C.ExecuteUbergraph_Action_IronBear_BearFist_Base
struct UAction_IronBear_BearFist_Base_C_ExecuteUbergraph_Action_IronBear_BearFist_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

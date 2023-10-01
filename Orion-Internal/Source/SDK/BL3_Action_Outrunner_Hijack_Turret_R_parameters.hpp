#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Outrunner_Hijack_Turret_R_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Outrunner_Hijack_Turret_R.Action_Outrunner_Hijack_Turret_R_C.OnBegin
struct UAction_Outrunner_Hijack_Turret_R_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Outrunner_Hijack_Turret_R.Action_Outrunner_Hijack_Turret_R_C.ExecuteUbergraph_Action_Outrunner_Hijack_Turret_R
struct UAction_Outrunner_Hijack_Turret_R_C_ExecuteUbergraph_Action_Outrunner_Hijack_Turret_R_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

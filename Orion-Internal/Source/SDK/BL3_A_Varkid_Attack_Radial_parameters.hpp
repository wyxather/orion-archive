#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Varkid_Attack_Radial_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_Varkid_Attack_Radial.A_Varkid_Attack_Radial_C.OnBegin
struct UA_Varkid_Attack_Radial_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Varkid_Attack_Radial.A_Varkid_Attack_Radial_C.OnEnd
struct UA_Varkid_Attack_Radial_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Varkid_Attack_Radial.A_Varkid_Attack_Radial_C.Notify_Slam
struct UA_Varkid_Attack_Radial_C_Notify_Slam_Params
{
};

// Function A_Varkid_Attack_Radial.A_Varkid_Attack_Radial_C.ExecuteUbergraph_A_Varkid_Attack_Radial
struct UA_Varkid_Attack_Radial_C_ExecuteUbergraph_A_Varkid_Attack_Radial_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

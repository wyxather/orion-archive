#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetJabbermon_GrandSlam_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_PetJabbermon_GrandSlam.A_PetJabbermon_GrandSlam_C.OnBegin
struct UA_PetJabbermon_GrandSlam_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_PetJabbermon_GrandSlam.A_PetJabbermon_GrandSlam_C.Notify_Melee
struct UA_PetJabbermon_GrandSlam_C_Notify_Melee_Params
{
};

// Function A_PetJabbermon_GrandSlam.A_PetJabbermon_GrandSlam_C.OnEnd
struct UA_PetJabbermon_GrandSlam_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_PetJabbermon_GrandSlam.A_PetJabbermon_GrandSlam_C.Notify_BatVis
struct UA_PetJabbermon_GrandSlam_C_Notify_BatVis_Params
{
};

// Function A_PetJabbermon_GrandSlam.A_PetJabbermon_GrandSlam_C.ExecuteUbergraph_A_PetJabbermon_GrandSlam
struct UA_PetJabbermon_GrandSlam_C_ExecuteUbergraph_A_PetJabbermon_GrandSlam_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

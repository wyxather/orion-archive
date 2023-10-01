#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetJabbermon_Fling_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_PetJabbermon_Fling.A_PetJabbermon_Fling_C.BeginFling
struct UA_PetJabbermon_Fling_C_BeginFling_Params
{
};

// Function A_PetJabbermon_Fling.A_PetJabbermon_Fling_C.OnServerBegin
struct UA_PetJabbermon_Fling_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_PetJabbermon_Fling.A_PetJabbermon_Fling_C.Notify_ShowPoop
struct UA_PetJabbermon_Fling_C_Notify_ShowPoop_Params
{
};

// Function A_PetJabbermon_Fling.A_PetJabbermon_Fling_C.ExecuteUbergraph_A_PetJabbermon_Fling
struct UA_PetJabbermon_Fling_C_ExecuteUbergraph_A_PetJabbermon_Fling_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

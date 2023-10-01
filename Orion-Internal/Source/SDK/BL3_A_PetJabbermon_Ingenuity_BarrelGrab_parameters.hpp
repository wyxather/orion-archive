#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetJabbermon_Ingenuity_BarrelGrab_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_PetJabbermon_Ingenuity_BarrelGrab.A_PetJabbermon_Ingenuity_BarrelGrab_C.Notify_Barrel_Attach
struct UA_PetJabbermon_Ingenuity_BarrelGrab_C_Notify_Barrel_Attach_Params
{
};

// Function A_PetJabbermon_Ingenuity_BarrelGrab.A_PetJabbermon_Ingenuity_BarrelGrab_C.OnEnd
struct UA_PetJabbermon_Ingenuity_BarrelGrab_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_PetJabbermon_Ingenuity_BarrelGrab.A_PetJabbermon_Ingenuity_BarrelGrab_C.Notify_Barrel_Align
struct UA_PetJabbermon_Ingenuity_BarrelGrab_C_Notify_Barrel_Align_Params
{
};

// Function A_PetJabbermon_Ingenuity_BarrelGrab.A_PetJabbermon_Ingenuity_BarrelGrab_C.OnServerBegin
struct UA_PetJabbermon_Ingenuity_BarrelGrab_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_PetJabbermon_Ingenuity_BarrelGrab.A_PetJabbermon_Ingenuity_BarrelGrab_C.ExecuteUbergraph_A_PetJabbermon_Ingenuity_BarrelGrab
struct UA_PetJabbermon_Ingenuity_BarrelGrab_C_ExecuteUbergraph_A_PetJabbermon_Ingenuity_BarrelGrab_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

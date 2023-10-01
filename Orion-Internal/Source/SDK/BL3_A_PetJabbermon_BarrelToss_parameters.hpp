#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetJabbermon_BarrelToss_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_PetJabbermon_BarrelToss.A_PetJabbermon_BarrelToss_C.Notify_Throw
struct UA_PetJabbermon_BarrelToss_C_Notify_Throw_Params
{
};

// Function A_PetJabbermon_BarrelToss.A_PetJabbermon_BarrelToss_C.OnServerBegin
struct UA_PetJabbermon_BarrelToss_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_PetJabbermon_BarrelToss.A_PetJabbermon_BarrelToss_C.OnServerEnd
struct UA_PetJabbermon_BarrelToss_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_PetJabbermon_BarrelToss.A_PetJabbermon_BarrelToss_C.ExecuteUbergraph_A_PetJabbermon_BarrelToss
struct UA_PetJabbermon_BarrelToss_C_ExecuteUbergraph_A_PetJabbermon_BarrelToss_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

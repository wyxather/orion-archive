#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetJabbermon_RocketLauncher_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.OnBegin
struct UA_PetJabbermon_RocketLauncher_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.SpawnLauncher
struct UA_PetJabbermon_RocketLauncher_C_SpawnLauncher_Params
{
};

// Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.FireLauncher
struct UA_PetJabbermon_RocketLauncher_C_FireLauncher_Params
{
};

// Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.StartLauncherDespawn
struct UA_PetJabbermon_RocketLauncher_C_StartLauncherDespawn_Params
{
};

// Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.OnEnd
struct UA_PetJabbermon_RocketLauncher_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C.ExecuteUbergraph_A_PetJabbermon_RocketLauncher
struct UA_PetJabbermon_RocketLauncher_C_ExecuteUbergraph_A_PetJabbermon_RocketLauncher_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

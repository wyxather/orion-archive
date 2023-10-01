#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Challenge_Console_PlanetDiscovery_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Challenge_Console_PlanetDiscovery.BP_Challenge_Console_PlanetDiscovery_C.OnInitChallengeInstance
struct UBP_Challenge_Console_PlanetDiscovery_C_OnInitChallengeInstance_Params
{
	class UChallengesComponent**                       OwningChallenges;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AGbxCharacter**                              AssociatedCharacter;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Challenge_Console_PlanetDiscovery.BP_Challenge_Console_PlanetDiscovery_C.AreaDiscovered
struct UBP_Challenge_Console_PlanetDiscovery_C_AreaDiscovered_Params
{
	struct FText                                       DisplayText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UWwiseEvent*                                 DiscoverySound;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Challenge_Console_PlanetDiscovery.BP_Challenge_Console_PlanetDiscovery_C.ExecuteUbergraph_BP_Challenge_Console_PlanetDiscovery
struct UBP_Challenge_Console_PlanetDiscovery_C_ExecuteUbergraph_BP_Challenge_Console_PlanetDiscovery_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

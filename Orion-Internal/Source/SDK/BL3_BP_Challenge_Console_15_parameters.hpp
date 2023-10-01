#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Challenge_Console_15_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Challenge_Console_15.BP_Challenge_Console_14_C.OnInitChallengeInstance
struct UBP_Challenge_Console_14_C_OnInitChallengeInstance_Params
{
	class UChallengesComponent**                       OwningChallenges;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AGbxCharacter**                              AssociatedCharacter;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Challenge_Console_15.BP_Challenge_Console_14_C.OnAnyChallengeCompleted
struct UBP_Challenge_Console_14_C_OnAnyChallengeCompleted_Params
{
	class UChallengesComponent*                        ChallengeComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      ChallengeClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Challenge_Console_15.BP_Challenge_Console_14_C.ExecuteUbergraph_BP_Challenge_Console_15
struct UBP_Challenge_Console_14_C_ExecuteUbergraph_BP_Challenge_Console_15_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

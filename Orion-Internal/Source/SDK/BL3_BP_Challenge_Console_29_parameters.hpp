#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Challenge_Console_29_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Challenge_Console_29.BP_Challenge_Console_28_C.CheckSticky
struct UBP_Challenge_Console_28_C_CheckSticky_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isSticky;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Challenge_Console_29.BP_Challenge_Console_28_C.GrenadeDestroyed
struct UBP_Challenge_Console_28_C_GrenadeDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Challenge_Console_29.BP_Challenge_Console_28_C.CausedDeath
struct UBP_Challenge_Console_28_C_CausedDeath_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_Challenge_Console_29.BP_Challenge_Console_28_C.OnInitChallengeInstance
struct UBP_Challenge_Console_28_C_OnInitChallengeInstance_Params
{
	class UChallengesComponent**                       OwningChallenges;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AGbxCharacter**                              AssociatedCharacter;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Challenge_Console_29.BP_Challenge_Console_28_C.ExecuteUbergraph_BP_Challenge_Console_29
struct UBP_Challenge_Console_28_C_ExecuteUbergraph_BP_Challenge_Console_29_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Challenge_PlayerLevel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Challenge_PlayerLevel.BP_Challenge_PlayerLevel_C.LeveledUp
struct UBP_Challenge_PlayerLevel_C_LeveledUp_Params
{
	int                                                Old_XP_Level;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                New_XP_Level;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Challenge_PlayerLevel.BP_Challenge_PlayerLevel_C.OnInitChallengeInstance
struct UBP_Challenge_PlayerLevel_C_OnInitChallengeInstance_Params
{
	class UChallengesComponent**                       OwningChallenges;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AGbxCharacter**                              AssociatedCharacter;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Challenge_PlayerLevel.BP_Challenge_PlayerLevel_C.ExecuteUbergraph_BP_Challenge_PlayerLevel
struct UBP_Challenge_PlayerLevel_C_ExecuteUbergraph_BP_Challenge_PlayerLevel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

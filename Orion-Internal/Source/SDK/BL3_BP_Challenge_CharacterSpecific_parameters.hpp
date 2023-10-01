#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Challenge_CharacterSpecific_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Challenge_CharacterSpecific.BP_Challenge_CharacterSpecific_C.SetBinds
struct UBP_Challenge_CharacterSpecific_C_SetBinds_Params
{
	class AOakCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BindSet;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Challenge_CharacterSpecific.BP_Challenge_CharacterSpecific_C.OnInitChallengeInstance
struct UBP_Challenge_CharacterSpecific_C_OnInitChallengeInstance_Params
{
	class UChallengesComponent**                       OwningChallenges;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AGbxCharacter**                              AssociatedCharacter;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Challenge_CharacterSpecific.BP_Challenge_CharacterSpecific_C.ExecuteUbergraph_BP_Challenge_CharacterSpecific
struct UBP_Challenge_CharacterSpecific_C_ExecuteUbergraph_BP_Challenge_CharacterSpecific_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

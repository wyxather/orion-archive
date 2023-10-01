#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_NonPlayerCharacter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AIAction_NonPlayerCharacter.AIAction_NonPlayerCharacter_C.BndEvt__ReviveSequence_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_NonPlayerCharacter
struct UAIAction_NonPlayerCharacter_C_BndEvt__ReviveSequence_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_NonPlayerCharacter_Params
{
	class AGbxAIController*                            AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGbxCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAIActionBlueprintContext                   Context;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AIAction_NonPlayerCharacter.AIAction_NonPlayerCharacter_C.ExecuteUbergraph_AIAction_NonPlayerCharacter
struct UAIAction_NonPlayerCharacter_C_ExecuteUbergraph_AIAction_NonPlayerCharacter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

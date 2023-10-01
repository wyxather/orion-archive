#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_RakkBasic_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AITree_RakkBasic.AITree_RakkBasic_C.BndEvt__Random_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_RakkBasic
struct UAITree_RakkBasic_C_BndEvt__Random_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_RakkBasic_Params
{
	class AGbxAIController*                            AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGbxCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAIActionBlueprintContext                   Context;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AITree_RakkBasic.AITree_RakkBasic_C.BndEvt__MeleeSwoop.MoveNearAction_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_RakkBasic
struct UAITree_RakkBasic_C_BndEvt__MeleeSwoop_MoveNearAction_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_RakkBasic_Params
{
	class AGbxAIController*                            AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGbxCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAIActionBlueprintContext                   Context;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	EAIActionResult                                    Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AITree_RakkBasic.AITree_RakkBasic_C.BndEvt__MeleeSwoop.MoveNearAction_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_RakkBasic
struct UAITree_RakkBasic_C_BndEvt__MeleeSwoop_MoveNearAction_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_RakkBasic_Params
{
	class AGbxAIController*                            AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGbxCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAIActionBlueprintContext                   Context;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AITree_RakkBasic.AITree_RakkBasic_C.ExecuteUbergraph_AITree_RakkBasic
struct UAITree_RakkBasic_C_ExecuteUbergraph_AITree_RakkBasic_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

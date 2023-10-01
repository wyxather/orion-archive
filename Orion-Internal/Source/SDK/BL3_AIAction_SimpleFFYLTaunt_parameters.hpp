#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_SimpleFFYLTaunt_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AIAction_SimpleFFYLTaunt.AIAction_SimpleFFYLTaunt_C.BndEvt__OnInitializeInstanceEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_FFYLTaunt
struct UAIAction_SimpleFFYLTaunt_C_BndEvt__OnInitializeInstanceEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_FFYLTaunt_Params
{
	class AGbxAIController*                            AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGbxCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAIActionBlueprintContext                   Context;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AIAction_SimpleFFYLTaunt.AIAction_SimpleFFYLTaunt_C.BndEvt__Sequence_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_FFYLTaunt
struct UAIAction_SimpleFFYLTaunt_C_BndEvt__Sequence_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_FFYLTaunt_Params
{
	class AGbxAIController*                            AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGbxCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAIActionBlueprintContext                   Context;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	EAIActionResult                                    Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIAction_SimpleFFYLTaunt.AIAction_SimpleFFYLTaunt_C.ExecuteUbergraph_AIAction_SimpleFFYLTaunt
struct UAIAction_SimpleFFYLTaunt_C_ExecuteUbergraph_AIAction_SimpleFFYLTaunt_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

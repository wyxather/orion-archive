#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_VarkidEvolution_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AIAction_VarkidEvolution.AIAction_VarkidEvolution_C.BndEvt__CallEvolveFunction_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_VarkidEvolution
struct UAIAction_VarkidEvolution_C_BndEvt__CallEvolveFunction_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_VarkidEvolution_Params
{
	class AGbxAIController*                            AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGbxCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAIActionBlueprintContext                   Context;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AIAction_VarkidEvolution.AIAction_VarkidEvolution_C.ExecuteUbergraph_AIAction_VarkidEvolution
struct UAIAction_VarkidEvolution_C_ExecuteUbergraph_AIAction_VarkidEvolution_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

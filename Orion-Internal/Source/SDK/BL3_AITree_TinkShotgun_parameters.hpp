#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_TinkShotgun_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AITree_TinkShotgun.AITree_TinkShotgun_C.BndEvt__Patrol_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkShotgun
struct UAITree_TinkShotgun_C_BndEvt__Patrol_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TinkShotgun_Params
{
	class AGbxAIController*                            AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGbxCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAIActionBlueprintContext                   Context;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AITree_TinkShotgun.AITree_TinkShotgun_C.ExecuteUbergraph_AITree_TinkShotgun
struct UAITree_TinkShotgun_C_ExecuteUbergraph_AITree_TinkShotgun_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

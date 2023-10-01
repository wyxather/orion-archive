#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_Tink_TurretBasic_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AITree_Tink_TurretBasic.AITree_Tink_TurretBasic_C.BndEvt__Idle_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_Tink_TurretBasic
struct UAITree_Tink_TurretBasic_C_BndEvt__Idle_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_Tink_TurretBasic_Params
{
	class AGbxAIController*                            AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGbxCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAIActionBlueprintContext                   Context;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AITree_Tink_TurretBasic.AITree_Tink_TurretBasic_C.ExecuteUbergraph_AITree_Tink_TurretBasic
struct UAITree_Tink_TurretBasic_C_ExecuteUbergraph_AITree_Tink_TurretBasic_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

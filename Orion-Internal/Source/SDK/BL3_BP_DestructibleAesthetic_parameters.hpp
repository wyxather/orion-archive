#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_DestructibleAesthetic_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_DestructibleAesthetic.BP_DestructibleAesthetic_C.UserConstructionScript
struct ABP_DestructibleAesthetic_C_UserConstructionScript_Params
{
};

// Function BP_DestructibleAesthetic.BP_DestructibleAesthetic_C.BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_10_ComponentFractureSignature__DelegateSignature_BP_DestructibleAesthetic
struct ABP_DestructibleAesthetic_C_BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_10_ComponentFractureSignature__DelegateSignature_BP_DestructibleAesthetic_Params
{
	struct FVector                                     HitPoint;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitDirection;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_DestructibleAesthetic.BP_DestructibleAesthetic_C.ExecuteUbergraph_BP_DestructibleAesthetic
struct ABP_DestructibleAesthetic_C_ExecuteUbergraph_BP_DestructibleAesthetic_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

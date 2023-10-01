#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_LightDestructible_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_LightDestructible.BP_LightDestructible_C.UserConstructionScript
struct ABP_LightDestructible_C_UserConstructionScript_Params
{
};

// Function BP_LightDestructible.BP_LightDestructible_C.BndEvt__RigidBodyComponent_K2Node_ComponentBoundEvent_0_RigidBodyComponentImpulseAdded__DelegateSignature_PO_LightDestructible
struct ABP_LightDestructible_C_BndEvt__RigidBodyComponent_K2Node_ComponentBoundEvent_0_RigidBodyComponentImpulseAdded__DelegateSignature_PO_LightDestructible_Params
{
	struct FVector                                     Impulse;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_LightDestructible.BP_LightDestructible_C.ExecuteUbergraph_BP_LightDestructible
struct ABP_LightDestructible_C_ExecuteUbergraph_BP_LightDestructible_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_OakAttributeComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_OakAttributeComponent.BP_OakAttributeComponent_C.ClearElementalAffinity
struct UBP_OakAttributeComponent_C_ClearElementalAffinity_Params
{
};

// Function BP_OakAttributeComponent.BP_OakAttributeComponent_C.InitElementAffinity
struct UBP_OakAttributeComponent_C_InitElementAffinity_Params
{
};

// Function BP_OakAttributeComponent.BP_OakAttributeComponent_C.SetElementAffinity
struct UBP_OakAttributeComponent_C_SetElementAffinity_Params
{
	EOakElementalType                                  Element;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_ElementalAffinity>                Affinity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OakAttributeComponent.BP_OakAttributeComponent_C.ReceiveBeginPlay
struct UBP_OakAttributeComponent_C_ReceiveBeginPlay_Params
{
};

// Function BP_OakAttributeComponent.BP_OakAttributeComponent_C.ExecuteUbergraph_BP_OakAttributeComponent
struct UBP_OakAttributeComponent_C_ExecuteUbergraph_BP_OakAttributeComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

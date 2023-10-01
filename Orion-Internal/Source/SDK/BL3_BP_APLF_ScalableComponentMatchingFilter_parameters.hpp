#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_APLF_ScalableComponentMatchingFilter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_APLF_ScalableComponentMatchingFilter.BP_APLF_ScalableComponentMatchingFilter_C.ShouldIgnoreComponent
struct UBP_APLF_ScalableComponentMatchingFilter_C_ShouldIgnoreComponent_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIgnore;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_APLF_ScalableComponentMatchingFilter.BP_APLF_ScalableComponentMatchingFilter_C.SetActorRlativeOffset
struct UBP_APLF_ScalableComponentMatchingFilter_C_SetActorRlativeOffset_Params
{
	class AActor*                                      self2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_APLF_ScalableComponentMatchingFilter.BP_APLF_ScalableComponentMatchingFilter_C.AddFoundLocations
struct UBP_APLF_ScalableComponentMatchingFilter_C_AddFoundLocations_Params
{
};

// Function BP_APLF_ScalableComponentMatchingFilter.BP_APLF_ScalableComponentMatchingFilter_C.ExecuteUbergraph_BP_APLF_ScalableComponentMatchingFilter
struct UBP_APLF_ScalableComponentMatchingFilter_C_ExecuteUbergraph_BP_APLF_ScalableComponentMatchingFilter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

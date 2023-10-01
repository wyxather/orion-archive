// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_APLF_ScalableComponentMatchingFilter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_APLF_ScalableComponentMatchingFilter.BP_APLF_ScalableComponentMatchingFilter_C.ShouldIgnoreComponent
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIgnore                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_APLF_ScalableComponentMatchingFilter_C::ShouldIgnoreComponent(class UPrimitiveComponent* Component, bool* bIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_APLF_ScalableComponentMatchingFilter.BP_APLF_ScalableComponentMatchingFilter_C.ShouldIgnoreComponent");

	UBP_APLF_ScalableComponentMatchingFilter_C_ShouldIgnoreComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIgnore != nullptr)
		*bIgnore = params.bIgnore;
}


// Function BP_APLF_ScalableComponentMatchingFilter.BP_APLF_ScalableComponentMatchingFilter_C.SetActorRlativeOffset
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  self2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, IsPlainOldData)

void UBP_APLF_ScalableComponentMatchingFilter_C::SetActorRlativeOffset(class AActor* self2, struct FVector* Location, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_APLF_ScalableComponentMatchingFilter.BP_APLF_ScalableComponentMatchingFilter_C.SetActorRlativeOffset");

	UBP_APLF_ScalableComponentMatchingFilter_C_SetActorRlativeOffset_Params params;
	params.self2 = self2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function BP_APLF_ScalableComponentMatchingFilter.BP_APLF_ScalableComponentMatchingFilter_C.AddFoundLocations
// (Event, Public, BlueprintEvent)

void UBP_APLF_ScalableComponentMatchingFilter_C::AddFoundLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_APLF_ScalableComponentMatchingFilter.BP_APLF_ScalableComponentMatchingFilter_C.AddFoundLocations");

	UBP_APLF_ScalableComponentMatchingFilter_C_AddFoundLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_APLF_ScalableComponentMatchingFilter.BP_APLF_ScalableComponentMatchingFilter_C.ExecuteUbergraph_BP_APLF_ScalableComponentMatchingFilter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_APLF_ScalableComponentMatchingFilter_C::ExecuteUbergraph_BP_APLF_ScalableComponentMatchingFilter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_APLF_ScalableComponentMatchingFilter.BP_APLF_ScalableComponentMatchingFilter_C.ExecuteUbergraph_BP_APLF_ScalableComponentMatchingFilter");

	UBP_APLF_ScalableComponentMatchingFilter_C_ExecuteUbergraph_BP_APLF_ScalableComponentMatchingFilter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

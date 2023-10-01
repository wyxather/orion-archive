// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Decorator_HangingSpline_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Decorator_HangingSpline.BP_Decorator_HangingSpline_C.GenerateCatenary
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Decorator_HangingSpline_C::GenerateCatenary()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Decorator_HangingSpline.BP_Decorator_HangingSpline_C.GenerateCatenary");

	ABP_Decorator_HangingSpline_C_GenerateCatenary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Decorator_HangingSpline.BP_Decorator_HangingSpline_C.PopulateInstances
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Decorator_HangingSpline_C::PopulateInstances()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Decorator_HangingSpline.BP_Decorator_HangingSpline_C.PopulateInstances");

	ABP_Decorator_HangingSpline_C_PopulateInstances_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Decorator_HangingSpline.BP_Decorator_HangingSpline_C.ConstructSplineMeshes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Decorator_HangingSpline_C::ConstructSplineMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Decorator_HangingSpline.BP_Decorator_HangingSpline_C.ConstructSplineMeshes");

	ABP_Decorator_HangingSpline_C_ConstructSplineMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Decorator_HangingSpline.BP_Decorator_HangingSpline_C.ResampleSpline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Decorator_HangingSpline_C::ResampleSpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Decorator_HangingSpline.BP_Decorator_HangingSpline_C.ResampleSpline");

	ABP_Decorator_HangingSpline_C_ResampleSpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Decorator_HangingSpline.BP_Decorator_HangingSpline_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Decorator_HangingSpline_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Decorator_HangingSpline.BP_Decorator_HangingSpline_C.UserConstructionScript");

	ABP_Decorator_HangingSpline_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

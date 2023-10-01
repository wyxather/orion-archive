// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AHitReact_Varkid_Death_Pod_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AHitReact_Varkid_Death_Pod.AHitReact_Varkid_Death_Pod_C.Notify_PodBurst
// (BlueprintCallable, BlueprintEvent)

void UAHitReact_Varkid_Death_Pod_C::Notify_PodBurst()
{
	static auto fn = UObject::FindObject<UFunction>("Function AHitReact_Varkid_Death_Pod.AHitReact_Varkid_Death_Pod_C.Notify_PodBurst");

	UAHitReact_Varkid_Death_Pod_C_Notify_PodBurst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AHitReact_Varkid_Death_Pod.AHitReact_Varkid_Death_Pod_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAHitReact_Varkid_Death_Pod_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AHitReact_Varkid_Death_Pod.AHitReact_Varkid_Death_Pod_C.OnBegin");

	UAHitReact_Varkid_Death_Pod_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AHitReact_Varkid_Death_Pod.AHitReact_Varkid_Death_Pod_C.ExecuteUbergraph_AHitReact_Varkid_Death_Pod
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAHitReact_Varkid_Death_Pod_C::ExecuteUbergraph_AHitReact_Varkid_Death_Pod(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AHitReact_Varkid_Death_Pod.AHitReact_Varkid_Death_Pod_C.ExecuteUbergraph_AHitReact_Varkid_Death_Pod");

	UAHitReact_Varkid_Death_Pod_C_ExecuteUbergraph_AHitReact_Varkid_Death_Pod_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

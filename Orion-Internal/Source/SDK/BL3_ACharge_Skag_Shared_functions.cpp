// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ACharge_Skag_Shared_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ACharge_Skag_Shared.ACharge_Skag_Shared_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UACharge_Skag_Shared_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ACharge_Skag_Shared.ACharge_Skag_Shared_C.OnBegin");

	UACharge_Skag_Shared_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ACharge_Skag_Shared.ACharge_Skag_Shared_C.Notify_HitTarget
// (BlueprintCallable, BlueprintEvent)

void UACharge_Skag_Shared_C::Notify_HitTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ACharge_Skag_Shared.ACharge_Skag_Shared_C.Notify_HitTarget");

	UACharge_Skag_Shared_C_Notify_HitTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ACharge_Skag_Shared.ACharge_Skag_Shared_C.ExecuteUbergraph_ACharge_Skag_Shared
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UACharge_Skag_Shared_C::ExecuteUbergraph_ACharge_Skag_Shared(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ACharge_Skag_Shared.ACharge_Skag_Shared_C.ExecuteUbergraph_ACharge_Skag_Shared");

	UACharge_Skag_Shared_C_ExecuteUbergraph_ACharge_Skag_Shared_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

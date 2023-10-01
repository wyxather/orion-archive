// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Operative_RedirectDrone_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Operative_RedirectDrone.Action_Operative_RedirectDrone_C.AN_RedirectDrone
// (BlueprintCallable, BlueprintEvent)

void UAction_Operative_RedirectDrone_C::AN_RedirectDrone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_RedirectDrone.Action_Operative_RedirectDrone_C.AN_RedirectDrone");

	UAction_Operative_RedirectDrone_C_AN_RedirectDrone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_RedirectDrone.Action_Operative_RedirectDrone_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Operative_RedirectDrone_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_RedirectDrone.Action_Operative_RedirectDrone_C.OnServerBegin");

	UAction_Operative_RedirectDrone_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_RedirectDrone.Action_Operative_RedirectDrone_C.AN_PerformRedirectFeedback
// (BlueprintCallable, BlueprintEvent)

void UAction_Operative_RedirectDrone_C::AN_PerformRedirectFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_RedirectDrone.Action_Operative_RedirectDrone_C.AN_PerformRedirectFeedback");

	UAction_Operative_RedirectDrone_C_AN_PerformRedirectFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_RedirectDrone.Action_Operative_RedirectDrone_C.ExecuteUbergraph_Action_Operative_RedirectDrone
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Operative_RedirectDrone_C::ExecuteUbergraph_Action_Operative_RedirectDrone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_RedirectDrone.Action_Operative_RedirectDrone_C.ExecuteUbergraph_Action_Operative_RedirectDrone");

	UAction_Operative_RedirectDrone_C_ExecuteUbergraph_Action_Operative_RedirectDrone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_QuickChangeProxy_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_QuickChangeProxy.BP_QuickChangeProxy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_QuickChangeProxy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickChangeProxy.BP_QuickChangeProxy_C.UserConstructionScript");

	ABP_QuickChangeProxy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickChangeProxy.BP_QuickChangeProxy_C.OnOwningPlayerExitedInteractRange
// (Event, Public, BlueprintEvent)

void ABP_QuickChangeProxy_C::OnOwningPlayerExitedInteractRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickChangeProxy.BP_QuickChangeProxy_C.OnOwningPlayerExitedInteractRange");

	ABP_QuickChangeProxy_C_OnOwningPlayerExitedInteractRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickChangeProxy.BP_QuickChangeProxy_C.OnOwningPlayerStartedInteraction
// (Event, Public, BlueprintEvent)

void ABP_QuickChangeProxy_C::OnOwningPlayerStartedInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickChangeProxy.BP_QuickChangeProxy_C.OnOwningPlayerStartedInteraction");

	ABP_QuickChangeProxy_C_OnOwningPlayerStartedInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickChangeProxy.BP_QuickChangeProxy_C.OnOwningPlayerEnteredInteractRange
// (Event, Public, BlueprintEvent)

void ABP_QuickChangeProxy_C::OnOwningPlayerEnteredInteractRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickChangeProxy.BP_QuickChangeProxy_C.OnOwningPlayerEnteredInteractRange");

	ABP_QuickChangeProxy_C_OnOwningPlayerEnteredInteractRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickChangeProxy.BP_QuickChangeProxy_C.OnFinalizeStopInteraction
// (Event, Public, BlueprintEvent)

void ABP_QuickChangeProxy_C::OnFinalizeStopInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickChangeProxy.BP_QuickChangeProxy_C.OnFinalizeStopInteraction");

	ABP_QuickChangeProxy_C_OnFinalizeStopInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickChangeProxy.BP_QuickChangeProxy_C.ExecuteUbergraph_BP_QuickChangeProxy
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_QuickChangeProxy_C::ExecuteUbergraph_BP_QuickChangeProxy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickChangeProxy.BP_QuickChangeProxy_C.ExecuteUbergraph_BP_QuickChangeProxy");

	ABP_QuickChangeProxy_C_ExecuteUbergraph_BP_QuickChangeProxy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

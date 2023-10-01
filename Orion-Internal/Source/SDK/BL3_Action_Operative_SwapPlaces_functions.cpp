// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Operative_SwapPlaces_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Operative_SwapPlaces.Action_Operative_SwapPlaces_C.Notify_SwapPlaces
// (BlueprintCallable, BlueprintEvent)

void UAction_Operative_SwapPlaces_C::Notify_SwapPlaces()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_SwapPlaces.Action_Operative_SwapPlaces_C.Notify_SwapPlaces");

	UAction_Operative_SwapPlaces_C_Notify_SwapPlaces_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Operative_SwapPlaces.Action_Operative_SwapPlaces_C.ExecuteUbergraph_Action_Operative_SwapPlaces
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Operative_SwapPlaces_C::ExecuteUbergraph_Action_Operative_SwapPlaces(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Operative_SwapPlaces.Action_Operative_SwapPlaces_C.ExecuteUbergraph_Action_Operative_SwapPlaces");

	UAction_Operative_SwapPlaces_C_ExecuteUbergraph_Action_Operative_SwapPlaces_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

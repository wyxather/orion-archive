// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPFiringComponent_TOR_Contained_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPFiringComponent_TOR_Contained.BPFiringComponent_TOR_Contained_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPFiringComponent_TOR_Contained_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFiringComponent_TOR_Contained.BPFiringComponent_TOR_Contained_C.ReceiveBeginPlay");

	UBPFiringComponent_TOR_Contained_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFiringComponent_TOR_Contained.BPFiringComponent_TOR_Contained_C.NotifyReloadStarted_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPFiringComponent_TOR_Contained_C::NotifyReloadStarted_Event(class AWeapon* EventWeapon, bool bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFiringComponent_TOR_Contained.BPFiringComponent_TOR_Contained_C.NotifyReloadStarted_Event");

	UBPFiringComponent_TOR_Contained_C_NotifyReloadStarted_Event_Params params;
	params.EventWeapon = EventWeapon;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFiringComponent_TOR_Contained.BPFiringComponent_TOR_Contained_C.K2_OnDeactivated
// (Event, Public, BlueprintEvent)

void UBPFiringComponent_TOR_Contained_C::K2_OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFiringComponent_TOR_Contained.BPFiringComponent_TOR_Contained_C.K2_OnDeactivated");

	UBPFiringComponent_TOR_Contained_C_K2_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPFiringComponent_TOR_Contained.BPFiringComponent_TOR_Contained_C.ExecuteUbergraph_BPFiringComponent_TOR_Contained
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPFiringComponent_TOR_Contained_C::ExecuteUbergraph_BPFiringComponent_TOR_Contained(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFiringComponent_TOR_Contained.BPFiringComponent_TOR_Contained_C.ExecuteUbergraph_BPFiringComponent_TOR_Contained");

	UBPFiringComponent_TOR_Contained_C_ExecuteUbergraph_BPFiringComponent_TOR_Contained_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_Torgue_RoisensThorns_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectileComponent_Torgue_RoisensThorns.BPWeaponFireProjectileComponent_Torgue_RoisensThorns_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectileComponent_Torgue_RoisensThorns_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Torgue_RoisensThorns.BPWeaponFireProjectileComponent_Torgue_RoisensThorns_C.ReceiveBeginPlay");

	UBPWeaponFireProjectileComponent_Torgue_RoisensThorns_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_Torgue_RoisensThorns.BPWeaponFireProjectileComponent_Torgue_RoisensThorns_C.NotifyUseStarted_Event
// (BlueprintCallable, BlueprintEvent)

void UBPWeaponFireProjectileComponent_Torgue_RoisensThorns_C::NotifyUseStarted_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Torgue_RoisensThorns.BPWeaponFireProjectileComponent_Torgue_RoisensThorns_C.NotifyUseStarted_Event");

	UBPWeaponFireProjectileComponent_Torgue_RoisensThorns_C_NotifyUseStarted_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_Torgue_RoisensThorns.BPWeaponFireProjectileComponent_Torgue_RoisensThorns_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_Torgue_RoisensThorns
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectileComponent_Torgue_RoisensThorns_C::ExecuteUbergraph_BPWeaponFireProjectileComponent_Torgue_RoisensThorns(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Torgue_RoisensThorns.BPWeaponFireProjectileComponent_Torgue_RoisensThorns_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_Torgue_RoisensThorns");

	UBPWeaponFireProjectileComponent_Torgue_RoisensThorns_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_Torgue_RoisensThorns_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

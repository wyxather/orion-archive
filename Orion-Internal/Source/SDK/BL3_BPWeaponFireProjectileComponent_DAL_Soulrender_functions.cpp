// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_DAL_Soulrender_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectileComponent_DAL_Soulrender.BPWeaponFireProjectileComponent_DAL_Soulrender_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectileComponent_DAL_Soulrender_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_DAL_Soulrender.BPWeaponFireProjectileComponent_DAL_Soulrender_C.ReceiveBeginPlay");

	UBPWeaponFireProjectileComponent_DAL_Soulrender_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_DAL_Soulrender.BPWeaponFireProjectileComponent_DAL_Soulrender_C.NotifyUsed_Event
// (BlueprintCallable, BlueprintEvent)

void UBPWeaponFireProjectileComponent_DAL_Soulrender_C::NotifyUsed_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_DAL_Soulrender.BPWeaponFireProjectileComponent_DAL_Soulrender_C.NotifyUsed_Event");

	UBPWeaponFireProjectileComponent_DAL_Soulrender_C_NotifyUsed_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_DAL_Soulrender.BPWeaponFireProjectileComponent_DAL_Soulrender_C.K2_OnActivated
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectileComponent_DAL_Soulrender_C::K2_OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_DAL_Soulrender.BPWeaponFireProjectileComponent_DAL_Soulrender_C.K2_OnActivated");

	UBPWeaponFireProjectileComponent_DAL_Soulrender_C_K2_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_DAL_Soulrender.BPWeaponFireProjectileComponent_DAL_Soulrender_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_DAL_Soulrender
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectileComponent_DAL_Soulrender_C::ExecuteUbergraph_BPWeaponFireProjectileComponent_DAL_Soulrender(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_DAL_Soulrender.BPWeaponFireProjectileComponent_DAL_Soulrender_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_DAL_Soulrender");

	UBPWeaponFireProjectileComponent_DAL_Soulrender_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_DAL_Soulrender_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

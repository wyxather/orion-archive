// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_Nemesis_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectileComponent_Nemesis.BPWeaponFireProjectileComponent_Nemesis_C.K2_OnActivated
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectileComponent_Nemesis_C::K2_OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Nemesis.BPWeaponFireProjectileComponent_Nemesis_C.K2_OnActivated");

	UBPWeaponFireProjectileComponent_Nemesis_C_K2_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_Nemesis.BPWeaponFireProjectileComponent_Nemesis_C.ElementalSwitch
// (BlueprintCallable, BlueprintEvent)

void UBPWeaponFireProjectileComponent_Nemesis_C::ElementalSwitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Nemesis.BPWeaponFireProjectileComponent_Nemesis_C.ElementalSwitch");

	UBPWeaponFireProjectileComponent_Nemesis_C_ElementalSwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_Nemesis.BPWeaponFireProjectileComponent_Nemesis_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectileComponent_Nemesis_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Nemesis.BPWeaponFireProjectileComponent_Nemesis_C.ReceiveBeginPlay");

	UBPWeaponFireProjectileComponent_Nemesis_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_Nemesis.BPWeaponFireProjectileComponent_Nemesis_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_Nemesis
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectileComponent_Nemesis_C::ExecuteUbergraph_BPWeaponFireProjectileComponent_Nemesis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Nemesis.BPWeaponFireProjectileComponent_Nemesis_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_Nemesis");

	UBPWeaponFireProjectileComponent_Nemesis_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_Nemesis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

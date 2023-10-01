// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_Toboggan_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Artifact_Toboggan.Ability_Artifact_Toboggan_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_Toboggan_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Toboggan.Ability_Artifact_Toboggan_C.OnActivated");

	UAbility_Artifact_Toboggan_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_Toboggan.Ability_Artifact_Toboggan_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_Toboggan_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Toboggan.Ability_Artifact_Toboggan_C.OnDeactivated");

	UAbility_Artifact_Toboggan_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_Toboggan.Ability_Artifact_Toboggan_C.WeaponFired
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Artifact_Toboggan_C::WeaponFired(class AWeapon* EventWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Toboggan.Ability_Artifact_Toboggan_C.WeaponFired");

	UAbility_Artifact_Toboggan_C_WeaponFired_Params params;
	params.EventWeapon = EventWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_Toboggan.Ability_Artifact_Toboggan_C.StartedSliding
// (BlueprintCallable, BlueprintEvent)

void UAbility_Artifact_Toboggan_C::StartedSliding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Toboggan.Ability_Artifact_Toboggan_C.StartedSliding");

	UAbility_Artifact_Toboggan_C_StartedSliding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_Toboggan.Ability_Artifact_Toboggan_C.BubbleExpired
// (BlueprintCallable, BlueprintEvent)

void UAbility_Artifact_Toboggan_C::BubbleExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Toboggan.Ability_Artifact_Toboggan_C.BubbleExpired");

	UAbility_Artifact_Toboggan_C_BubbleExpired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_Toboggan.Ability_Artifact_Toboggan_C.ExecuteUbergraph_Ability_Artifact_Toboggan
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Artifact_Toboggan_C::ExecuteUbergraph_Ability_Artifact_Toboggan(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_Toboggan.Ability_Artifact_Toboggan_C.ExecuteUbergraph_Ability_Artifact_Toboggan");

	UAbility_Artifact_Toboggan_C_ExecuteUbergraph_Ability_Artifact_Toboggan_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

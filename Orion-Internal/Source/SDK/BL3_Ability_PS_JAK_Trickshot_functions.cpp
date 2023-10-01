// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_PS_JAK_Trickshot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.OnRegistered
// (Event, Protected, BlueprintEvent)

void UAbility_PS_JAK_Trickshot_C::OnRegistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.OnRegistered");

	UAbility_PS_JAK_Trickshot_C_OnRegistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.OnCausedDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UAbility_PS_JAK_Trickshot_C::OnCausedDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.OnCausedDamage");

	UAbility_PS_JAK_Trickshot_C_OnCausedDamage_Params params;
	params.DamageInstigator = DamageInstigator;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;
	params.DamagedActor = DamagedActor;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.ReloadEndedDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCompleted                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_PS_JAK_Trickshot_C::ReloadEndedDelegate(class AWeapon* EventWeapon, bool bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.ReloadEndedDelegate");

	UAbility_PS_JAK_Trickshot_C_ReloadEndedDelegate_Params params;
	params.EventWeapon = EventWeapon;
	params.bCompleted = bCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_PS_JAK_Trickshot_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.OnDeactivated");

	UAbility_PS_JAK_Trickshot_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.OnUnregistered
// (Event, Protected, BlueprintEvent)

void UAbility_PS_JAK_Trickshot_C::OnUnregistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.OnUnregistered");

	UAbility_PS_JAK_Trickshot_C_OnUnregistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.OnPaused
// (Event, Protected, BlueprintEvent)

void UAbility_PS_JAK_Trickshot_C::OnPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.OnPaused");

	UAbility_PS_JAK_Trickshot_C_OnPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.ExecuteUbergraph_Ability_PS_JAK_Trickshot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_PS_JAK_Trickshot_C::ExecuteUbergraph_Ability_PS_JAK_Trickshot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.ExecuteUbergraph_Ability_PS_JAK_Trickshot");

	UAbility_PS_JAK_Trickshot_C_ExecuteUbergraph_Ability_PS_JAK_Trickshot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

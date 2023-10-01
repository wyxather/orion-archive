// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Septimator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Septimator.Ability_Septimator_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Septimator_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Septimator.Ability_Septimator_C.OnActivated");

	UAbility_Septimator_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Septimator.Ability_Septimator_C.CausedDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UAbility_Septimator_C::CausedDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Septimator.Ability_Septimator_C.CausedDamage");

	UAbility_Septimator_C_CausedDamage_Params params;
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


// Function Ability_Septimator.Ability_Septimator_C.Reset
// (BlueprintCallable, BlueprintEvent)

void UAbility_Septimator_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Septimator.Ability_Septimator_C.Reset");

	UAbility_Septimator_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Septimator.Ability_Septimator_C.NotifySwitchedMode_Event
// (BlueprintCallable, BlueprintEvent)

void UAbility_Septimator_C::NotifySwitchedMode_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Septimator.Ability_Septimator_C.NotifySwitchedMode_Event");

	UAbility_Septimator_C_NotifySwitchedMode_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Septimator.Ability_Septimator_C.ExecuteUbergraph_Ability_Septimator
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Septimator_C::ExecuteUbergraph_Ability_Septimator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Septimator.Ability_Septimator_C.ExecuteUbergraph_Ability_Septimator");

	UAbility_Septimator_C_ExecuteUbergraph_Ability_Septimator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

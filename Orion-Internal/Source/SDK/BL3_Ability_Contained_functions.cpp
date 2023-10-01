// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Contained_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Contained.Ability_Contained_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Contained_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Contained.Ability_Contained_C.OnActivated");

	UAbility_Contained_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Contained.Ability_Contained_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Contained_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Contained.Ability_Contained_C.OnDeactivated");

	UAbility_Contained_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Contained.Ability_Contained_C.OnUnregistered
// (Event, Protected, BlueprintEvent)

void UAbility_Contained_C::OnUnregistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Contained.Ability_Contained_C.OnUnregistered");

	UAbility_Contained_C_OnUnregistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Contained.Ability_Contained_C.OnPaused
// (Event, Protected, BlueprintEvent)

void UAbility_Contained_C::OnPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Contained.Ability_Contained_C.OnPaused");

	UAbility_Contained_C_OnPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Contained.Ability_Contained_C.OnCauseAnyDamage_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UAbility_Contained_C::OnCauseAnyDamage_Event(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Contained.Ability_Contained_C.OnCauseAnyDamage_Event");

	UAbility_Contained_C_OnCauseAnyDamage_Event_Params params;
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


// Function Ability_Contained.Ability_Contained_C.ExecuteUbergraph_Ability_Contained
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Contained_C::ExecuteUbergraph_Ability_Contained(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Contained.Ability_Contained_C.ExecuteUbergraph_Ability_Contained");

	UAbility_Contained_C_ExecuteUbergraph_Ability_Contained_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Operative_DroneActiveTerrorLifesteal_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Operative_DroneActiveTerrorLifesteal.Ability_Operative_DroneActiveTerrorLifesteal_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Operative_DroneActiveTerrorLifesteal_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Operative_DroneActiveTerrorLifesteal.Ability_Operative_DroneActiveTerrorLifesteal_C.OnActivated");

	UAbility_Operative_DroneActiveTerrorLifesteal_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Operative_DroneActiveTerrorLifesteal.Ability_Operative_DroneActiveTerrorLifesteal_C.DroneStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EOperativeGadgets> ActionSkill                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Operative_DroneActiveTerrorLifesteal_C::DroneStarted(TEnumAsByte<EOperativeGadgets> ActionSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Operative_DroneActiveTerrorLifesteal.Ability_Operative_DroneActiveTerrorLifesteal_C.DroneStarted");

	UAbility_Operative_DroneActiveTerrorLifesteal_C_DroneStarted_Params params;
	params.ActionSkill = ActionSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Operative_DroneActiveTerrorLifesteal.Ability_Operative_DroneActiveTerrorLifesteal_C.DroneEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EOperativeGadgets> ActionSkill                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Operative_DroneActiveTerrorLifesteal_C::DroneEnded(TEnumAsByte<EOperativeGadgets> ActionSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Operative_DroneActiveTerrorLifesteal.Ability_Operative_DroneActiveTerrorLifesteal_C.DroneEnded");

	UAbility_Operative_DroneActiveTerrorLifesteal_C_DroneEnded_Params params;
	params.ActionSkill = ActionSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Operative_DroneActiveTerrorLifesteal.Ability_Operative_DroneActiveTerrorLifesteal_C.CausedDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UAbility_Operative_DroneActiveTerrorLifesteal_C::CausedDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Operative_DroneActiveTerrorLifesteal.Ability_Operative_DroneActiveTerrorLifesteal_C.CausedDamage");

	UAbility_Operative_DroneActiveTerrorLifesteal_C_CausedDamage_Params params;
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


// Function Ability_Operative_DroneActiveTerrorLifesteal.Ability_Operative_DroneActiveTerrorLifesteal_C.ExecuteUbergraph_Ability_Operative_DroneActiveTerrorLifesteal
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Operative_DroneActiveTerrorLifesteal_C::ExecuteUbergraph_Ability_Operative_DroneActiveTerrorLifesteal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Operative_DroneActiveTerrorLifesteal.Ability_Operative_DroneActiveTerrorLifesteal_C.ExecuteUbergraph_Ability_Operative_DroneActiveTerrorLifesteal");

	UAbility_Operative_DroneActiveTerrorLifesteal_C_ExecuteUbergraph_Ability_Operative_DroneActiveTerrorLifesteal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

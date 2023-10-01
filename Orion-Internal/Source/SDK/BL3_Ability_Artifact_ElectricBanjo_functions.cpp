// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_ElectricBanjo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Artifact_ElectricBanjo.Ability_Artifact_ElectricBanjo_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_ElectricBanjo_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_ElectricBanjo.Ability_Artifact_ElectricBanjo_C.OnActivated");

	UAbility_Artifact_ElectricBanjo_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_ElectricBanjo.Ability_Artifact_ElectricBanjo_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_ElectricBanjo_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_ElectricBanjo.Ability_Artifact_ElectricBanjo_C.OnDeactivated");

	UAbility_Artifact_ElectricBanjo_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_ElectricBanjo.Ability_Artifact_ElectricBanjo_C.CausedDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UAbility_Artifact_ElectricBanjo_C::CausedDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_ElectricBanjo.Ability_Artifact_ElectricBanjo_C.CausedDamage");

	UAbility_Artifact_ElectricBanjo_C_CausedDamage_Params params;
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


// Function Ability_Artifact_ElectricBanjo.Ability_Artifact_ElectricBanjo_C.ExecuteUbergraph_Ability_Artifact_ElectricBanjo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Artifact_ElectricBanjo_C::ExecuteUbergraph_Ability_Artifact_ElectricBanjo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_ElectricBanjo.Ability_Artifact_ElectricBanjo_C.ExecuteUbergraph_Ability_Artifact_ElectricBanjo");

	UAbility_Artifact_ElectricBanjo_C_ExecuteUbergraph_Ability_Artifact_ElectricBanjo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

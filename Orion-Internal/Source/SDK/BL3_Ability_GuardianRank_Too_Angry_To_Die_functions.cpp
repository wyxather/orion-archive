// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_GuardianRank_Too_Angry_To_Die_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_GuardianRank_Too_Angry_To_Die.Ability_GuardianRank_Too_Angry_To_Die_C.OnDamageInFFYL
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UAbility_GuardianRank_Too_Angry_To_Die_C::OnDamageInFFYL(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_Too_Angry_To_Die.Ability_GuardianRank_Too_Angry_To_Die_C.OnDamageInFFYL");

	UAbility_GuardianRank_Too_Angry_To_Die_C_OnDamageInFFYL_Params params;
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


// Function Ability_GuardianRank_Too_Angry_To_Die.Ability_GuardianRank_Too_Angry_To_Die_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_GuardianRank_Too_Angry_To_Die_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_Too_Angry_To_Die.Ability_GuardianRank_Too_Angry_To_Die_C.OnActivated");

	UAbility_GuardianRank_Too_Angry_To_Die_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_GuardianRank_Too_Angry_To_Die.Ability_GuardianRank_Too_Angry_To_Die_C.OnDownStateStart
// (BlueprintCallable, BlueprintEvent)

void UAbility_GuardianRank_Too_Angry_To_Die_C::OnDownStateStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_Too_Angry_To_Die.Ability_GuardianRank_Too_Angry_To_Die_C.OnDownStateStart");

	UAbility_GuardianRank_Too_Angry_To_Die_C_OnDownStateStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_GuardianRank_Too_Angry_To_Die.Ability_GuardianRank_Too_Angry_To_Die_C.OnDownStateEnd
// (BlueprintCallable, BlueprintEvent)

void UAbility_GuardianRank_Too_Angry_To_Die_C::OnDownStateEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_Too_Angry_To_Die.Ability_GuardianRank_Too_Angry_To_Die_C.OnDownStateEnd");

	UAbility_GuardianRank_Too_Angry_To_Die_C_OnDownStateEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_GuardianRank_Too_Angry_To_Die.Ability_GuardianRank_Too_Angry_To_Die_C.ExecuteUbergraph_Ability_GuardianRank_Too_Angry_To_Die
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_GuardianRank_Too_Angry_To_Die_C::ExecuteUbergraph_Ability_GuardianRank_Too_Angry_To_Die(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_Too_Angry_To_Die.Ability_GuardianRank_Too_Angry_To_Die_C.ExecuteUbergraph_Ability_GuardianRank_Too_Angry_To_Die");

	UAbility_GuardianRank_Too_Angry_To_Die_C_ExecuteUbergraph_Ability_GuardianRank_Too_Angry_To_Die_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

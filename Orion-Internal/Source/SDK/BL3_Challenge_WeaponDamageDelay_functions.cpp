// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_WeaponDamageDelay_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Challenge_WeaponDamageDelay.Challenge_WeaponDamageDelay_C.SetBinds
// (Public, BlueprintCallable, BlueprintEvent, Const)

void UChallenge_WeaponDamageDelay_C::SetBinds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_WeaponDamageDelay.Challenge_WeaponDamageDelay_C.SetBinds");

	UChallenge_WeaponDamageDelay_C_SetBinds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_WeaponDamageDelay.Challenge_WeaponDamageDelay_C.OnInitChallengeInstance
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChallengesComponent**   OwningChallenges               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AGbxCharacter**          AssociatedCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_WeaponDamageDelay_C::OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_WeaponDamageDelay.Challenge_WeaponDamageDelay_C.OnInitChallengeInstance");

	UChallenge_WeaponDamageDelay_C_OnInitChallengeInstance_Params params;
	params.OwningChallenges = OwningChallenges;
	params.AssociatedCharacter = AssociatedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_WeaponDamageDelay.Challenge_WeaponDamageDelay_C.CheckDamageDealt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UChallenge_WeaponDamageDelay_C::CheckDamageDealt(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_WeaponDamageDelay.Challenge_WeaponDamageDelay_C.CheckDamageDealt");

	UChallenge_WeaponDamageDelay_C_CheckDamageDealt_Params params;
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


// Function Challenge_WeaponDamageDelay.Challenge_WeaponDamageDelay_C.ExecuteUbergraph_Challenge_WeaponDamageDelay
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_WeaponDamageDelay_C::ExecuteUbergraph_Challenge_WeaponDamageDelay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_WeaponDamageDelay.Challenge_WeaponDamageDelay_C.ExecuteUbergraph_Challenge_WeaponDamageDelay");

	UChallenge_WeaponDamageDelay_C_ExecuteUbergraph_Challenge_WeaponDamageDelay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

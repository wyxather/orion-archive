// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Test_KillSource_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Challenge_Test_KillSource.Challenge_Test_KillSource_C.CheckModifiedShot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FWeaponShotModifierData Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChallenge_Test_KillSource_C::CheckModifiedShot(class AWeapon* Weapon, const struct FWeaponShotModifierData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Test_KillSource.Challenge_Test_KillSource_C.CheckModifiedShot");

	UChallenge_Test_KillSource_C_CheckModifiedShot_Params params;
	params.Weapon = Weapon;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_Test_KillSource.Challenge_Test_KillSource_C.CheckDamageDone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UChallenge_Test_KillSource_C::CheckDamageDone(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Test_KillSource.Challenge_Test_KillSource_C.CheckDamageDone");

	UChallenge_Test_KillSource_C_CheckDamageDone_Params params;
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


// Function Challenge_Test_KillSource.Challenge_Test_KillSource_C.CheckPickUpItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PickedUpActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_Test_KillSource_C::CheckPickUpItem(class AActor* PickedUpActor, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Test_KillSource.Challenge_Test_KillSource_C.CheckPickUpItem");

	UChallenge_Test_KillSource_C_CheckPickUpItem_Params params;
	params.PickedUpActor = PickedUpActor;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_Test_KillSource.Challenge_Test_KillSource_C.CheckDamageTaken
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FReceivedDamageDetails  Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UChallenge_Test_KillSource_C::CheckDamageTaken(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Test_KillSource.Challenge_Test_KillSource_C.CheckDamageTaken");

	UChallenge_Test_KillSource_C_CheckDamageTaken_Params params;
	params.DamageReceiver = DamageReceiver;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_Test_KillSource.Challenge_Test_KillSource_C.SetBinds
// (Public, BlueprintCallable, BlueprintEvent, Const)

void UChallenge_Test_KillSource_C::SetBinds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Test_KillSource.Challenge_Test_KillSource_C.SetBinds");

	UChallenge_Test_KillSource_C_SetBinds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_Test_KillSource.Challenge_Test_KillSource_C.CheckKillCondition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     DeathDetails                   (BlueprintVisible, Parm, OutParm, ReferenceParm)

void UChallenge_Test_KillSource_C::CheckKillCondition(class UDamageComponent* DamageReceiver, struct FCausedDeathDetails* DeathDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Test_KillSource.Challenge_Test_KillSource_C.CheckKillCondition");

	UChallenge_Test_KillSource_C_CheckKillCondition_Params params;
	params.DamageReceiver = DamageReceiver;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeathDetails != nullptr)
		*DeathDetails = params.DeathDetails;
}


// Function Challenge_Test_KillSource.Challenge_Test_KillSource_C.OnInitChallengeInstance
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChallengesComponent**   OwningChallenges               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AGbxCharacter**          AssociatedCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_Test_KillSource_C::OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Test_KillSource.Challenge_Test_KillSource_C.OnInitChallengeInstance");

	UChallenge_Test_KillSource_C_OnInitChallengeInstance_Params params;
	params.OwningChallenges = OwningChallenges;
	params.AssociatedCharacter = AssociatedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_Test_KillSource.Challenge_Test_KillSource_C.ExecuteUbergraph_Challenge_Test_KillSource
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_Test_KillSource_C::ExecuteUbergraph_Challenge_Test_KillSource(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Test_KillSource.Challenge_Test_KillSource_C.ExecuteUbergraph_Challenge_Test_KillSource");

	UChallenge_Test_KillSource_C_ExecuteUbergraph_Challenge_Test_KillSource_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPEventHub_Siren_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_OnCausedDamage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageSource                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPEventHub_Siren_C::SkillEvent_OnCausedDamage__DelegateSignature(float Damage, class UClass* DamageSource, class UClass* DamageType, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_OnCausedDamage__DelegateSignature");

	UBPEventHub_Siren_C_SkillEvent_OnCausedDamage__DelegateSignature_Params params;
	params.Damage = Damage;
	params.DamageSource = DamageSource;
	params.DamageType = DamageType;
	params.DamagedActor = DamagedActor;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_PhaseGraspEnemyEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Killed                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPEventHub_Siren_C::SkillEvent_PhaseGraspEnemyEnded__DelegateSignature(bool Killed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_PhaseGraspEnemyEnded__DelegateSignature");

	UBPEventHub_Siren_C_SkillEvent_PhaseGraspEnemyEnded__DelegateSignature_Params params;
	params.Killed = Killed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_PhaseGraspEnemy__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPhaseTranceElementalType      Element                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPEventHub_Siren_C::SkillEvent_PhaseGraspEnemy__DelegateSignature(class AActor* Enemy, EPhaseTranceElementalType Element)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_PhaseGraspEnemy__DelegateSignature");

	UBPEventHub_Siren_C_SkillEvent_PhaseGraspEnemy__DelegateSignature_Params params;
	params.Enemy = Enemy;
	params.Element = Element;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_PhaseSlamEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPEventHub_Siren_C::SkillEvent_PhaseSlamEnded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_PhaseSlamEnded__DelegateSignature");

	UBPEventHub_Siren_C_SkillEvent_PhaseSlamEnded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_PhaseSlamStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPEventHub_Siren_C::SkillEvent_PhaseSlamStarted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_PhaseSlamStarted__DelegateSignature");

	UBPEventHub_Siren_C_SkillEvent_PhaseSlamStarted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Siren.BPEventHub_Siren_C.PhaseTranceOnSuccessfullyActivated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPhaseTranceAttackFamilyType   FamilyType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPhasetranceAttackAction> PhaseTranceAction              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPEventHub_Siren_C::PhaseTranceOnSuccessfullyActivated__DelegateSignature(EPhaseTranceAttackFamilyType FamilyType, TEnumAsByte<EPhasetranceAttackAction> PhaseTranceAction, bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Siren.BPEventHub_Siren_C.PhaseTranceOnSuccessfullyActivated__DelegateSignature");

	UBPEventHub_Siren_C_PhaseTranceOnSuccessfullyActivated__DelegateSignature_Params params;
	params.FamilyType = FamilyType;
	params.PhaseTranceAction = PhaseTranceAction;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_RushEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPEventHub_Siren_C::SkillEvent_RushEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_RushEvent__DelegateSignature");

	UBPEventHub_Siren_C_SkillEvent_RushEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_ActivateRushBonus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RushStacks                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPEventHub_Siren_C::SkillEvent_ActivateRushBonus__DelegateSignature(int RushStacks)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_ActivateRushBonus__DelegateSignature");

	UBPEventHub_Siren_C_SkillEvent_ActivateRushBonus__DelegateSignature_Params params;
	params.RushStacks = RushStacks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

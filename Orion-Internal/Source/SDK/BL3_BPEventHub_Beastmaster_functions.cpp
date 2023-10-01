// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPEventHub_Beastmaster_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HulkedOut_FoundValidLocation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           res                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPEventHub_Beastmaster_C::Beastmaster_HulkedOut_FoundValidLocation__DelegateSignature(bool res)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HulkedOut_FoundValidLocation__DelegateSignature");

	UBPEventHub_Beastmaster_C_Beastmaster_HulkedOut_FoundValidLocation__DelegateSignature_Params params;
	params.res = res;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HulkedOut_Ended__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPEventHub_Beastmaster_C::Beastmaster_HulkedOut_Ended__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HulkedOut_Ended__DelegateSignature");

	UBPEventHub_Beastmaster_C_Beastmaster_HulkedOut_Ended__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_FadeAway_Ended__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPEventHub_Beastmaster_C::Beastmaster_FadeAway_Ended__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_FadeAway_Ended__DelegateSignature");

	UBPEventHub_Beastmaster_C_Beastmaster_FadeAway_Ended__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HulkedOut_StoppedHealingPlayer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  StoppedHealingTarget           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RiftLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPEventHub_Beastmaster_C::Beastmaster_HulkedOut_StoppedHealingPlayer__DelegateSignature(class AActor* StoppedHealingTarget, const struct FVector& RiftLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HulkedOut_StoppedHealingPlayer__DelegateSignature");

	UBPEventHub_Beastmaster_C_Beastmaster_HulkedOut_StoppedHealingPlayer__DelegateSignature_Params params;
	params.StoppedHealingTarget = StoppedHealingTarget;
	params.RiftLocation = RiftLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_ActionSkillActivated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_BeastmasterActionSkill> ActionSkill                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPEventHub_Beastmaster_C::Beastmaster_ActionSkillActivated__DelegateSignature(TEnumAsByte<Enum_BeastmasterActionSkill> ActionSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_ActionSkillActivated__DelegateSignature");

	UBPEventHub_Beastmaster_C_Beastmaster_ActionSkillActivated__DelegateSignature_Params params;
	params.ActionSkill = ActionSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HulkedOut_BeginHealingPlayer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PlayerHealed                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RiftLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPEventHub_Beastmaster_C::Beastmaster_HulkedOut_BeginHealingPlayer__DelegateSignature(class AActor* PlayerHealed, const struct FVector& RiftLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HulkedOut_BeginHealingPlayer__DelegateSignature");

	UBPEventHub_Beastmaster_C_Beastmaster_HulkedOut_BeginHealingPlayer__DelegateSignature_Params params;
	params.PlayerHealed = PlayerHealed;
	params.RiftLocation = RiftLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HulkedOut_DealtDamage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPEventHub_Beastmaster_C::Beastmaster_HulkedOut_DealtDamage__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HulkedOut_DealtDamage__DelegateSignature");

	UBPEventHub_Beastmaster_C_Beastmaster_HulkedOut_DealtDamage__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_AttackCommandSelectedTarget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOakActionAbilityPetEvolutionType PetEvolution                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EOakActionAbilityPetType       PetType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPEventHub_Beastmaster_C::Beastmaster_AttackCommandSelectedTarget__DelegateSignature(EOakActionAbilityPetEvolutionType PetEvolution, EOakActionAbilityPetType PetType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_AttackCommandSelectedTarget__DelegateSignature");

	UBPEventHub_Beastmaster_C_Beastmaster_AttackCommandSelectedTarget__DelegateSignature_Params params;
	params.PetEvolution = PetEvolution;
	params.PetType = PetType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_Pet_UsedAttackCommand__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOakActionAbilityPetEvolutionType PetEvolution                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EOakActionAbilityPetType       PetType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPEventHub_Beastmaster_C::Beastmaster_Pet_UsedAttackCommand__DelegateSignature(EOakActionAbilityPetEvolutionType PetEvolution, EOakActionAbilityPetType PetType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_Pet_UsedAttackCommand__DelegateSignature");

	UBPEventHub_Beastmaster_C_Beastmaster_Pet_UsedAttackCommand__DelegateSignature_Params params;
	params.PetEvolution = PetEvolution;
	params.PetType = PetType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_Pet_RevivedPlayer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  RevivedBy                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPEventHub_Beastmaster_C::Beastmaster_Pet_RevivedPlayer__DelegateSignature(class AActor* RevivedBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_Pet_RevivedPlayer__DelegateSignature");

	UBPEventHub_Beastmaster_C_Beastmaster_Pet_RevivedPlayer__DelegateSignature_Params params;
	params.RevivedBy = RevivedBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_FadeAway_Damage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedEnemy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPEventHub_Beastmaster_C::Beastmaster_FadeAway_Damage__DelegateSignature(class AActor* DamagedEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_FadeAway_Damage__DelegateSignature");

	UBPEventHub_Beastmaster_C_Beastmaster_FadeAway_Damage__DelegateSignature_Params params;
	params.DamagedEnemy = DamagedEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_FadeAway_KilledEnemy__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  KilledEnemy                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPEventHub_Beastmaster_C::Beastmaster_FadeAway_KilledEnemy__DelegateSignature(class AActor* KilledEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_FadeAway_KilledEnemy__DelegateSignature");

	UBPEventHub_Beastmaster_C_Beastmaster_FadeAway_KilledEnemy__DelegateSignature_Params params;
	params.KilledEnemy = KilledEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_Rakks_HealedPlayer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPEventHub_Beastmaster_C::Beastmaster_Rakks_HealedPlayer__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_Rakks_HealedPlayer__DelegateSignature");

	UBPEventHub_Beastmaster_C_Beastmaster_Rakks_HealedPlayer__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_Rakks_DealtDamage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedEnemy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPEventHub_Beastmaster_C::Beastmaster_Rakks_DealtDamage__DelegateSignature(class AActor* DamagedEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_Rakks_DealtDamage__DelegateSignature");

	UBPEventHub_Beastmaster_C_Beastmaster_Rakks_DealtDamage__DelegateSignature_Params params;
	params.DamagedEnemy = DamagedEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_Rakks_KilledEnemy__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  KilledEnemy                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPEventHub_Beastmaster_C::Beastmaster_Rakks_KilledEnemy__DelegateSignature(class AActor* KilledEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_Rakks_KilledEnemy__DelegateSignature");

	UBPEventHub_Beastmaster_C_Beastmaster_Rakks_KilledEnemy__DelegateSignature_Params params;
	params.KilledEnemy = KilledEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HuntSkillActivated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPEventHub_Beastmaster_C::Beastmaster_HuntSkillActivated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HuntSkillActivated__DelegateSignature");

	UBPEventHub_Beastmaster_C_Beastmaster_HuntSkillActivated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_EnemyDominated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewDominated                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPEventHub_Beastmaster_C::Beastmaster_EnemyDominated__DelegateSignature(class AActor* NewDominated)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_EnemyDominated__DelegateSignature");

	UBPEventHub_Beastmaster_C_Beastmaster_EnemyDominated__DelegateSignature_Params params;
	params.NewDominated = NewDominated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.ClassModL03_TriggerHuntKillSkill__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPEventHub_Beastmaster_C::ClassModL03_TriggerHuntKillSkill__DelegateSignature(class AActor* DamagedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.ClassModL03_TriggerHuntKillSkill__DelegateSignature");

	UBPEventHub_Beastmaster_C_ClassModL03_TriggerHuntKillSkill__DelegateSignature_Params params;
	params.DamagedActor = DamagedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.ActivePetReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPEventHub_Beastmaster_C::ActivePetReleased__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.ActivePetReleased__DelegateSignature");

	UBPEventHub_Beastmaster_C_ActivePetReleased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.ActivePetSpawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPEventHub_Beastmaster_C::ActivePetSpawned__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.ActivePetSpawned__DelegateSignature");

	UBPEventHub_Beastmaster_C_ActivePetSpawned__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.RegisterPetDamage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPEventHub_Beastmaster_C::RegisterPetDamage__DelegateSignature(class AActor* DamagedActor, class UDamageSource* DamageSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.RegisterPetDamage__DelegateSignature");

	UBPEventHub_Beastmaster_C_RegisterPetDamage__DelegateSignature_Params params;
	params.DamagedActor = DamagedActor;
	params.DamageSource = DamageSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.RegisterPetKill__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPEventHub_Beastmaster_C::RegisterPetKill__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.RegisterPetKill__DelegateSignature");

	UBPEventHub_Beastmaster_C_RegisterPetKill__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

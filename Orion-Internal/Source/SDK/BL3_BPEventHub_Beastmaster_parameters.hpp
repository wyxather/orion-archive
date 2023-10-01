#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPEventHub_Beastmaster_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HulkedOut_FoundValidLocation__DelegateSignature
struct UBPEventHub_Beastmaster_C_Beastmaster_HulkedOut_FoundValidLocation__DelegateSignature_Params
{
	bool                                               res;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HulkedOut_Ended__DelegateSignature
struct UBPEventHub_Beastmaster_C_Beastmaster_HulkedOut_Ended__DelegateSignature_Params
{
};

// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_FadeAway_Ended__DelegateSignature
struct UBPEventHub_Beastmaster_C_Beastmaster_FadeAway_Ended__DelegateSignature_Params
{
};

// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HulkedOut_StoppedHealingPlayer__DelegateSignature
struct UBPEventHub_Beastmaster_C_Beastmaster_HulkedOut_StoppedHealingPlayer__DelegateSignature_Params
{
	class AActor*                                      StoppedHealingTarget;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RiftLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_ActionSkillActivated__DelegateSignature
struct UBPEventHub_Beastmaster_C_Beastmaster_ActionSkillActivated__DelegateSignature_Params
{
	TEnumAsByte<Enum_BeastmasterActionSkill>           ActionSkill;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HulkedOut_BeginHealingPlayer__DelegateSignature
struct UBPEventHub_Beastmaster_C_Beastmaster_HulkedOut_BeginHealingPlayer__DelegateSignature_Params
{
	class AActor*                                      PlayerHealed;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RiftLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HulkedOut_DealtDamage__DelegateSignature
struct UBPEventHub_Beastmaster_C_Beastmaster_HulkedOut_DealtDamage__DelegateSignature_Params
{
};

// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_AttackCommandSelectedTarget__DelegateSignature
struct UBPEventHub_Beastmaster_C_Beastmaster_AttackCommandSelectedTarget__DelegateSignature_Params
{
	EOakActionAbilityPetEvolutionType                  PetEvolution;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EOakActionAbilityPetType                           PetType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_Pet_UsedAttackCommand__DelegateSignature
struct UBPEventHub_Beastmaster_C_Beastmaster_Pet_UsedAttackCommand__DelegateSignature_Params
{
	EOakActionAbilityPetEvolutionType                  PetEvolution;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EOakActionAbilityPetType                           PetType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_Pet_RevivedPlayer__DelegateSignature
struct UBPEventHub_Beastmaster_C_Beastmaster_Pet_RevivedPlayer__DelegateSignature_Params
{
	class AActor*                                      RevivedBy;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_FadeAway_Damage__DelegateSignature
struct UBPEventHub_Beastmaster_C_Beastmaster_FadeAway_Damage__DelegateSignature_Params
{
	class AActor*                                      DamagedEnemy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_FadeAway_KilledEnemy__DelegateSignature
struct UBPEventHub_Beastmaster_C_Beastmaster_FadeAway_KilledEnemy__DelegateSignature_Params
{
	class AActor*                                      KilledEnemy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_Rakks_HealedPlayer__DelegateSignature
struct UBPEventHub_Beastmaster_C_Beastmaster_Rakks_HealedPlayer__DelegateSignature_Params
{
};

// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_Rakks_DealtDamage__DelegateSignature
struct UBPEventHub_Beastmaster_C_Beastmaster_Rakks_DealtDamage__DelegateSignature_Params
{
	class AActor*                                      DamagedEnemy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_Rakks_KilledEnemy__DelegateSignature
struct UBPEventHub_Beastmaster_C_Beastmaster_Rakks_KilledEnemy__DelegateSignature_Params
{
	class AActor*                                      KilledEnemy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_HuntSkillActivated__DelegateSignature
struct UBPEventHub_Beastmaster_C_Beastmaster_HuntSkillActivated__DelegateSignature_Params
{
};

// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.Beastmaster_EnemyDominated__DelegateSignature
struct UBPEventHub_Beastmaster_C_Beastmaster_EnemyDominated__DelegateSignature_Params
{
	class AActor*                                      NewDominated;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.ClassModL03_TriggerHuntKillSkill__DelegateSignature
struct UBPEventHub_Beastmaster_C_ClassModL03_TriggerHuntKillSkill__DelegateSignature_Params
{
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.ActivePetReleased__DelegateSignature
struct UBPEventHub_Beastmaster_C_ActivePetReleased__DelegateSignature_Params
{
};

// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.ActivePetSpawned__DelegateSignature
struct UBPEventHub_Beastmaster_C_ActivePetSpawned__DelegateSignature_Params
{
};

// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.RegisterPetDamage__DelegateSignature
struct UBPEventHub_Beastmaster_C_RegisterPetDamage__DelegateSignature_Params
{
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPEventHub_Beastmaster.BPEventHub_Beastmaster_C.RegisterPetKill__DelegateSignature
struct UBPEventHub_Beastmaster_C_RegisterPetKill__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

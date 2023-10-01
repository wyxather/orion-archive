#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPEventHub_Siren_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_OnCausedDamage__DelegateSignature
struct UBPEventHub_Siren_C_SkillEvent_OnCausedDamage__DelegateSignature_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageSource;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_PhaseGraspEnemyEnded__DelegateSignature
struct UBPEventHub_Siren_C_SkillEvent_PhaseGraspEnemyEnded__DelegateSignature_Params
{
	bool                                               Killed;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_PhaseGraspEnemy__DelegateSignature
struct UBPEventHub_Siren_C_SkillEvent_PhaseGraspEnemy__DelegateSignature_Params
{
	class AActor*                                      Enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPhaseTranceElementalType                          Element;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_PhaseSlamEnded__DelegateSignature
struct UBPEventHub_Siren_C_SkillEvent_PhaseSlamEnded__DelegateSignature_Params
{
};

// Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_PhaseSlamStarted__DelegateSignature
struct UBPEventHub_Siren_C_SkillEvent_PhaseSlamStarted__DelegateSignature_Params
{
};

// Function BPEventHub_Siren.BPEventHub_Siren_C.PhaseTranceOnSuccessfullyActivated__DelegateSignature
struct UBPEventHub_Siren_C_PhaseTranceOnSuccessfullyActivated__DelegateSignature_Params
{
	EPhaseTranceAttackFamilyType                       FamilyType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhasetranceAttackAction>              PhaseTranceAction;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_RushEvent__DelegateSignature
struct UBPEventHub_Siren_C_SkillEvent_RushEvent__DelegateSignature_Params
{
};

// Function BPEventHub_Siren.BPEventHub_Siren_C.SkillEvent_ActivateRushBonus__DelegateSignature
struct UBPEventHub_Siren_C_SkillEvent_ActivateRushBonus__DelegateSignature_Params
{
	int                                                RushStacks;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

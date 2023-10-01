#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Siren_ClassMod_Unique_05_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.OnActivated
struct UOakAbility_Siren_ClassMod_Unique_05_C_OnActivated_Params
{
};

// Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.OnGraspedTarget
struct UOakAbility_Siren_ClassMod_Unique_05_C_OnGraspedTarget_Params
{
	class AGbxCharacter*                               GraspedTarget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.OnActionSkillActivated
struct UOakAbility_Siren_ClassMod_Unique_05_C_OnActionSkillActivated_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.OnCausedAnyDamage
struct UOakAbility_Siren_ClassMod_Unique_05_C_OnCausedAnyDamage_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.OpenDamageGate
struct UOakAbility_Siren_ClassMod_Unique_05_C_OpenDamageGate_Params
{
};

// Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_05
struct UOakAbility_Siren_ClassMod_Unique_05_C_ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_05_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

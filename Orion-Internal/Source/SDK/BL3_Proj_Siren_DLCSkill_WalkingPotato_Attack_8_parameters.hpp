#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Siren_DLCSkill_WalkingPotato_Attack_8_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_Siren_DLCSkill_WalkingPotato_Attack_8.Proj_Siren_DLCSkill_WalkingPotato_Attack_7_C.UserConstructionScript
struct AProj_Siren_DLCSkill_WalkingPotato_Attack_7_C_UserConstructionScript_Params
{
};

// Function Proj_Siren_DLCSkill_WalkingPotato_Attack_8.Proj_Siren_DLCSkill_WalkingPotato_Attack_7_C.ReceiveBeginPlay
struct AProj_Siren_DLCSkill_WalkingPotato_Attack_7_C_ReceiveBeginPlay_Params
{
};

// Function Proj_Siren_DLCSkill_WalkingPotato_Attack_8.Proj_Siren_DLCSkill_WalkingPotato_Attack_7_C.SirenDLCActionSkill_OnCausedAnyDamage
struct AProj_Siren_DLCSkill_WalkingPotato_Attack_7_C_SirenDLCActionSkill_OnCausedAnyDamage_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Proj_Siren_DLCSkill_WalkingPotato_Attack_8.Proj_Siren_DLCSkill_WalkingPotato_Attack_7_C.FireShotAtEnemy
struct AProj_Siren_DLCSkill_WalkingPotato_Attack_7_C_FireShotAtEnemy_Params
{
};

// Function Proj_Siren_DLCSkill_WalkingPotato_Attack_8.Proj_Siren_DLCSkill_WalkingPotato_Attack_7_C.StartFiringShots
struct AProj_Siren_DLCSkill_WalkingPotato_Attack_7_C_StartFiringShots_Params
{
};

// Function Proj_Siren_DLCSkill_WalkingPotato_Attack_8.Proj_Siren_DLCSkill_WalkingPotato_Attack_7_C.ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Attack_8
struct AProj_Siren_DLCSkill_WalkingPotato_Attack_7_C_ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Attack_8_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

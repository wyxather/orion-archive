#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_PetLoader_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_GetType
struct ABPChar_PetLoader_Base_C_PetLoader_GetType_Params
{
	TEnumAsByte<Enum_PetLoader_Variations>             LoaderType;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderRPG_isMissileBarrageDone
struct ABPChar_PetLoader_Base_C_PetLoaderRPG_isMissileBarrageDone_Params
{
	bool                                               isDone_;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_isSpawningSurveyor
struct ABPChar_PetLoader_Base_C_PetLoader_isSpawningSurveyor_Params
{
	bool                                               IsSpawningSurveyor;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.OnRep_bActivateEXPLoader
struct ABPChar_PetLoader_Base_C_OnRep_bActivateEXPLoader_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.ChangeAlertState
struct ABPChar_PetLoader_Base_C_ChangeAlertState_Params
{
	bool                                               NewAlertState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.CanLoseMember
struct ABPChar_PetLoader_Base_C_CanLoseMember_Params
{
	bool                                               IsArm;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLeg;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanLoseMember;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.ShowWeaponIfValid
struct ABPChar_PetLoader_Base_C_ShowWeaponIfValid_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.CheckStartWithoutMembers
struct ABPChar_PetLoader_Base_C_CheckStartWithoutMembers_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.SpawnDestroyedLeg
struct ABPChar_PetLoader_Base_C_SpawnDestroyedLeg_Params
{
	struct FName                                       SpawnToSocketName;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActionToPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageReactionEventSummary                 HitInfo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.SpawnDestroyedArm
struct ABPChar_PetLoader_Base_C_SpawnDestroyedArm_Params
{
	struct FName                                       SpawnToSocketName;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasWeapon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageReactionEventSummary                 HitInfo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.UserConstructionScript
struct ABPChar_PetLoader_Base_C_UserConstructionScript_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.BndEvt__Stance_K2Node_ComponentBoundEvent_0_StanceChangedEvent__DelegateSignature_BPChar_LoaderShared
struct ABPChar_PetLoader_Base_C_BndEvt__Stance_K2Node_ComponentBoundEvent_0_StanceChangedEvent__DelegateSignature_BPChar_LoaderShared_Params
{
	struct FStanceChangedEventArgs                     Args;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.ReceiveBeginPlay
struct ABPChar_PetLoader_Base_C_ReceiveBeginPlay_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.StartFeetThrusters
struct ABPChar_PetLoader_Base_C_StartFeetThrusters_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.StopFeetThrusters
struct ABPChar_PetLoader_Base_C_StopFeetThrusters_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_SetImmuneToPhaselock
struct ABPChar_PetLoader_Base_C_PetLoader_SetImmuneToPhaselock_Params
{
	bool                                               bIsImmune;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.TriggerSmoke
struct ABPChar_PetLoader_Base_C_TriggerSmoke_Params
{
	struct FDamageReactionEventSummary                 HitInfo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_StartLaserCharge
struct ABPChar_PetLoader_Base_C_PetLoader_StartLaserCharge_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderRIOT_ShieldHit
struct ABPChar_PetLoader_Base_C_PetLoaderRIOT_ShieldHit_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_IsUnboxSpawning
struct ABPChar_PetLoader_Base_C_PetLoader_IsUnboxSpawning_Params
{
	bool                                               IsUnboxing;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.OnLeftLegJointDamaged
struct ABPChar_PetLoader_Base_C_OnLeftLegJointDamaged_Params
{
	struct FDamageReactionEventSummary                 Damage_Event;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderBadass_AnticipateLaserBall
struct ABPChar_PetLoader_Base_C_PetLoaderBadass_AnticipateLaserBall_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.OnRightLegJointDamaged
struct ABPChar_PetLoader_Base_C_OnRightLegJointDamaged_Params
{
	struct FDamageReactionEventSummary                 Damage_Event;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.OnLeftArmJointDamaged
struct ABPChar_PetLoader_Base_C_OnLeftArmJointDamaged_Params
{
	struct FDamageReactionEventSummary                 Damage_Event;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.OnRightArmJointDamaged
struct ABPChar_PetLoader_Base_C_OnRightArmJointDamaged_Params
{
	struct FDamageReactionEventSummary                 Damage_Event;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderBadass_ThrowLaserBall
struct ABPChar_PetLoader_Base_C_PetLoaderBadass_ThrowLaserBall_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_DamageCompDiedDelegate__DelegateSignature_BPChar_LoaderShared
struct ABPChar_PetLoader_Base_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_DamageCompDiedDelegate__DelegateSignature_BPChar_LoaderShared_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_StopSpawningSurveyor
struct ABPChar_PetLoader_Base_C_PetLoader_StopSpawningSurveyor_Params
{
	bool                                               FinishedWithSuccess;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_StartSpawningSurveyor
struct ABPChar_PetLoader_Base_C_PetLoader_StartSpawningSurveyor_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderBadass_LaserGround
struct ABPChar_PetLoader_Base_C_PetLoaderBadass_LaserGround_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_4_FightForYourLifeEvent__DelegateSignature_BPChar_Pet
struct ABPChar_PetLoader_Base_C_BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_4_FightForYourLifeEvent__DelegateSignature_BPChar_Pet_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_0_FightForYourLifeEvent__DelegateSignature_BPChar_Pet
struct ABPChar_PetLoader_Base_C_BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_0_FightForYourLifeEvent__DelegateSignature_BPChar_Pet_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.OnEnrageBegin
struct ABPChar_PetLoader_Base_C_OnEnrageBegin_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.OnEnrageEnd
struct ABPChar_PetLoader_Base_C_OnEnrageEnd_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderRIOT_ChargeEnd
struct ABPChar_PetLoader_Base_C_PetLoaderRIOT_ChargeEnd_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.LeftLegRemoveSparks
struct ABPChar_PetLoader_Base_C_LeftLegRemoveSparks_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.RightLegRemoveSparks
struct ABPChar_PetLoader_Base_C_RightLegRemoveSparks_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.LeftArmRemoveSparks
struct ABPChar_PetLoader_Base_C_LeftArmRemoveSparks_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.RightArmRemoveSparks
struct ABPChar_PetLoader_Base_C_RightArmRemoveSparks_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.ActivateDLCSkill7
struct ABPChar_PetLoader_Base_C_ActivateDLCSkill7_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.StartDLCSkill7
struct ABPChar_PetLoader_Base_C_StartDLCSkill7_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderRIOT_ChargeStart
struct ABPChar_PetLoader_Base_C_PetLoaderRIOT_ChargeStart_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_SetEXPCore_Active
struct ABPChar_PetLoader_Base_C_PetLoader_SetEXPCore_Active_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_SetEXPCore_Idle
struct ABPChar_PetLoader_Base_C_PetLoader_SetEXPCore_Idle_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_SetEXPCore_NotActive
struct ABPChar_PetLoader_Base_C_PetLoader_SetEXPCore_NotActive_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_JumpStart
struct ABPChar_PetLoader_Base_C_PetLoader_JumpStart_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_JumpEnd
struct ABPChar_PetLoader_Base_C_PetLoader_JumpEnd_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_EnterCrawlingState
struct ABPChar_PetLoader_Base_C_PetLoader_EnterCrawlingState_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_ToggleHandGrip
struct ABPChar_PetLoader_Base_C_PetLoader_ToggleHandGrip_Params
{
	bool                                               IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_StartLaser
struct ABPChar_PetLoader_Base_C_PetLoader_StartLaser_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_SetProjectedIcon
struct ABPChar_PetLoader_Base_C_PetLoader_SetProjectedIcon_Params
{
	TEnumAsByte<Enum_PetLoader_ProjectedIcons>         Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderRPG_ShootMissile
struct ABPChar_PetLoader_Base_C_PetLoaderRPG_ShootMissile_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderRIOT_ShieldDestroyed
struct ABPChar_PetLoader_Base_C_PetLoaderRIOT_ShieldDestroyed_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderRIOT_ThrowShield
struct ABPChar_PetLoader_Base_C_PetLoaderRIOT_ThrowShield_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderEXP_SelfDestruct
struct ABPChar_PetLoader_Base_C_PetLoaderEXP_SelfDestruct_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderEXP_Explode
struct ABPChar_PetLoader_Base_C_PetLoaderEXP_Explode_Params
{
};

// Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.ExecuteUbergraph_BPChar_PetLoader_Base
struct ABPChar_PetLoader_Base_C_ExecuteUbergraph_BPChar_PetLoader_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

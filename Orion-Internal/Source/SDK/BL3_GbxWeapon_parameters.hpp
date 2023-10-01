#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxWeapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GbxWeapon.Weapon.Unlock
struct AWeapon_Unlock_Params
{
	bool                                               bReplicate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Weapon.TryAutoReload
struct AWeapon_TryAutoReload_Params
{
};

// Function GbxWeapon.Weapon.ToggleMode
struct AWeapon_ToggleMode_Params
{
	unsigned char                                      InputChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Weapon.SwitchPendingUseMode
struct AWeapon_SwitchPendingUseMode_Params
{
};

// Function GbxWeapon.Weapon.SwitchMode
struct AWeapon_SwitchMode_Params
{
	unsigned char                                      InputChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NextUseModeIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForced;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Weapon.StopZooming
struct AWeapon_StopZooming_Params
{
	bool                                               bSkipTransitions;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClearInput;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Weapon.StopWeaponAction
struct AWeapon_StopWeaponAction_Params
{
	TEnumAsByte<EWeaponActionType>                     WeaponAction;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Weapon.StopUsing
struct AWeapon_StopUsing_Params
{
	unsigned char                                      InputChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForced;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Weapon.StopReloading
struct AWeapon_StopReloading_Params
{
};

// Function GbxWeapon.Weapon.StopModeSwitch
struct AWeapon_StopModeSwitch_Params
{
};

// Function GbxWeapon.Weapon.StopEffects
struct AWeapon_StopEffects_Params
{
	TEnumAsByte<EWeaponEffectType>                     EffectType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseModeIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Weapon.StopDynamicMaterialEffect
struct AWeapon_StopDynamicMaterialEffect_Params
{
	int                                                EffectID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Weapon.StopAnimation
struct AWeapon_StopAnimation_Params
{
	class UAnimMontage*                                Anim;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFirstPerson;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Weapon.StartZooming
struct AWeapon_StartZooming_Params
{
};

// Function GbxWeapon.Weapon.StartUsing
struct AWeapon_StartUsing_Params
{
	unsigned char                                      InputChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Weapon.StartReloading
struct AWeapon_StartReloading_Params
{
	bool                                               bAuto;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Weapon.SetTargetLocked
struct AWeapon_SetTargetLocked_Params
{
	bool                                               bIsLocked;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Weapon.SetPreUseState
struct AWeapon_SetPreUseState_Params
{
	unsigned char                                      UseModeIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Weapon.SetMaterialVectorParameterValue
struct AWeapon_SetMaterialVectorParameterValue_Params
{
	struct FName                                       ParamName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ParamValue;                                               // (Parm, IsPlainOldData)
};

// Function GbxWeapon.Weapon.SetMaterialScalarParameterValue
struct AWeapon_SetMaterialScalarParameterValue_Params
{
	struct FName                                       ParamName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ParamValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Weapon.SetEffectVectorParameter
struct AWeapon_SetEffectVectorParameter_Params
{
	struct FName                                       ParamName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ParamValue;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FWeaponEffectQueryData                      QueryData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxWeapon.Weapon.SetEffectMaterialParameter
struct AWeapon_SetEffectMaterialParameter_Params
{
	struct FName                                       ParamName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ParamValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWeaponEffectQueryData                      QueryData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxWeapon.Weapon.SetEffectFloatParameter
struct AWeapon_SetEffectFloatParameter_Params
{
	struct FName                                       ParamName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ParamValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWeaponEffectQueryData                      QueryData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxWeapon.Weapon.SetEffectEmitterState
struct AWeapon_SetEffectEmitterState_Params
{
	struct FName                                       EmitterName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWeaponEffectQueryData                      QueryData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxWeapon.Weapon.SetEffectColorParameter
struct AWeapon_SetEffectColorParameter_Params
{
	struct FName                                       ParamName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ParamValue;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FWeaponEffectQueryData                      QueryData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxWeapon.Weapon.SetBoneVisibility
struct AWeapon_SetBoneVisibility_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWeaponAttachmentVisibilityType>       AttachmentType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Weapon.ServerUnlock
struct AWeapon_ServerUnlock_Params
{
};

// Function GbxWeapon.Weapon.ServerSwitchMode
struct AWeapon_ServerSwitchMode_Params
{
	unsigned char                                      InputChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NextUseModeIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForced;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Weapon.ServerStopUsing
struct AWeapon_ServerStopUsing_Params
{
	unsigned char                                      InputChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForced;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Weapon.ServerStopModeSwitch
struct AWeapon_ServerStopModeSwitch_Params
{
	unsigned char                                      InputChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientUseModeIndex;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Weapon.ServerStartUsing
struct AWeapon_ServerStartUsing_Params
{
	unsigned char                                      InputChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClientPatternSeed;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Weapon.ServerStartReloading
struct AWeapon_ServerStartReloading_Params
{
	unsigned char                                      UseModeIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAuto;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Weapon.ServerSetZoomState
struct AWeapon_ServerSetZoomState_Params
{
	unsigned char                                      UseModeIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWeaponZoomState                            NewState;                                                 // (ConstParm, Parm, ReferenceParm)
	float                                              ZoomStartOffset;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Weapon.ServerSetPatternSeed
struct AWeapon_ServerSetPatternSeed_Params
{
	unsigned char                                      ClientPatternSeed;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Weapon.ServerRestartAutoUse
struct AWeapon_ServerRestartAutoUse_Params
{
};

// Function GbxWeapon.Weapon.ServerLock
struct AWeapon_ServerLock_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Weapon.ServerInterruptReloadToUse
struct AWeapon_ServerInterruptReloadToUse_Params
{
	int                                                ClientLoadedAmmo;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Weapon.ServerEquipInterruptible
struct AWeapon_ServerEquipInterruptible_Params
{
};

// Function GbxWeapon.Weapon.RegisterTrinketAttachment
struct AWeapon_RegisterTrinketAttachment_Params
{
	struct FWeaponRegisterTrinketAttachmentData        Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxWeapon.Weapon.RegisterSkeletalControl
struct AWeapon_RegisterSkeletalControl_Params
{
	struct FWeaponRegisterSkeletalControlData          Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxWeapon.Weapon.RegisterSimpleEffect
struct AWeapon_RegisterSimpleEffect_Params
{
	TEnumAsByte<EWeaponEffectType>                     EffectType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Effect;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       EffectSocket;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Weapon.RegisterMaterialEffect
struct AWeapon_RegisterMaterialEffect_Params
{
	struct FWeaponRegisterMaterialEffectData           Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxWeapon.Weapon.RegisterEffect
struct AWeapon_RegisterEffect_Params
{
	struct FWeaponRegisterAttachmentEffectData         Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxWeapon.Weapon.ReevaluateConditionalEffects
struct AWeapon_ReevaluateConditionalEffects_Params
{
};

// Function GbxWeapon.Weapon.PrevZoomLevel
struct AWeapon_PrevZoomLevel_Params
{
};

// Function GbxWeapon.Weapon.PlayEffects
struct AWeapon_PlayEffects_Params
{
	TEnumAsByte<EWeaponEffectType>                     EffectType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseModeIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EffectID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Weapon.PlayDynamicMaterialEffect
struct AWeapon_PlayDynamicMaterialEffect_Params
{
	struct FWeaponMaterialEffectData                   Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Weapon.PlayAnimation
struct AWeapon_PlayAnimation_Params
{
	class UAnimMontage*                                Anim;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFirstPerson;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Weapon.OnZoomedOut
struct AWeapon_OnZoomedOut_Params
{
};

// Function GbxWeapon.Weapon.OnUseStarted
struct AWeapon_OnUseStarted_Params
{
};

// Function GbxWeapon.Weapon.OnUseFinished
struct AWeapon_OnUseFinished_Params
{
};

// Function GbxWeapon.Weapon.OnUpdateSkeletalControlsWhenUseFinishes
struct AWeapon_OnUpdateSkeletalControlsWhenUseFinishes_Params
{
};

// Function GbxWeapon.Weapon.OnUpdateSkeletalControlsWhenUsed
struct AWeapon_OnUpdateSkeletalControlsWhenUsed_Params
{
};

// Function GbxWeapon.Weapon.OnUpdateSkeletalControlsWhenAmmoChanges
struct AWeapon_OnUpdateSkeletalControlsWhenAmmoChanges_Params
{
};

// Function GbxWeapon.Weapon.OnRep_TargetLockedChanged
struct AWeapon_OnRep_TargetLockedChanged_Params
{
};

// Function GbxWeapon.Weapon.OnRep_PendingUseModeIndex
struct AWeapon_OnRep_PendingUseModeIndex_Params
{
};

// Function GbxWeapon.Weapon.OnRep_PendingAttachState
struct AWeapon_OnRep_PendingAttachState_Params
{
};

// Function GbxWeapon.Weapon.OnRep_CurrentUseModeIndex
struct AWeapon_OnRep_CurrentUseModeIndex_Params
{
	unsigned char                                      PreviousUseModeIndex;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Weapon.OnReloadEnded
struct AWeapon_OnReloadEnded_Params
{
	bool                                               bCompleted;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Weapon.OnAmmoGivenToEmptyWeapon
struct AWeapon_OnAmmoGivenToEmptyWeapon_Params
{
};

// Function GbxWeapon.Weapon.NotifySkeletalControl
struct AWeapon_NotifySkeletalControl_Params
{
	TEnumAsByte<EWeaponEffectType>                     ControlType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ControlName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EWeaponSkeletalControlEvent                        Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EventValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Weapon.NextZoomLevel
struct AWeapon_NextZoomLevel_Params
{
};

// Function GbxWeapon.Weapon.Lock
struct AWeapon_Lock_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReplicate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Weapon.K2_StopWeaponActionObj
struct AWeapon_K2_StopWeaponActionObj_Params
{
	class UGbxAction*                                  WeaponAction;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Weapon.K2_PlayWeaponActionEx
struct AWeapon_K2_PlayWeaponActionEx_Params
{
	TEnumAsByte<EWeaponActionType>                     WeaponAction;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FActionState_Base                           ActionParams;                                             // (Parm)
	bool                                               bCheckForRelevancy;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxAction*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Weapon.K2_PlayWeaponAction
struct AWeapon_K2_PlayWeaponAction_Params
{
	TEnumAsByte<EWeaponActionType>                     WeaponAction;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckForRelevancy;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxAction*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Weapon.IsZoomedIn
struct AWeapon_IsZoomedIn_Params
{
	bool                                               bIncludeTransitions;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Weapon.IsZoomed
struct AWeapon_IsZoomed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Weapon.IsUsing
struct AWeapon_IsUsing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Weapon.IsTargetLocked
struct AWeapon_IsTargetLocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Weapon.IsSwitchingModes
struct AWeapon_IsSwitchingModes_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Weapon.IsReloading
struct AWeapon_IsReloading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Weapon.IsPuttingDown
struct AWeapon_IsPuttingDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Weapon.IsPendingUse
struct AWeapon_IsPendingUse_Params
{
	unsigned char                                      InputChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Weapon.IsLocked
struct AWeapon_IsLocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Weapon.IsLocalAuthority
struct AWeapon_IsLocalAuthority_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Weapon.IsInactive
struct AWeapon_IsInactive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Weapon.IsEquipping
struct AWeapon_IsEquipping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Weapon.IsAuthorityUsing
struct AWeapon_IsAuthorityUsing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Weapon.IsAuthoritySwitchingModes
struct AWeapon_IsAuthoritySwitchingModes_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Weapon.IsAuthorityReloading
struct AWeapon_IsAuthorityReloading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Weapon.IsAuthorityPuttingDown
struct AWeapon_IsAuthorityPuttingDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Weapon.IsAuthorityEquipping
struct AWeapon_IsAuthorityEquipping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Weapon.IsActive
struct AWeapon_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Weapon.GivenTo
struct AWeapon_GivenTo_Params
{
	class APawn*                                       NewOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Weapon.GetZoomFOVScale
struct AWeapon_GetZoomFOVScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Weapon.GetZoomEffect
struct AWeapon_GetZoomEffect_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Weapon.GetZoomDuration
struct AWeapon_GetZoomDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Weapon.GetUseModeComponentByClass
struct AWeapon_GetUseModeComponentByClass_Params
{
	class UClass*                                      ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseModeIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxWeapon.Weapon.GetMuteADSAlpha
struct AWeapon_GetMuteADSAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Weapon.GetMaxZoomFOVScale
struct AWeapon_GetMaxZoomFOVScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Weapon.GetLastInputChannel
struct AWeapon_GetLastInputChannel_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Weapon.GetCurrentReloadPartType
struct AWeapon_GetCurrentReloadPartType_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Weapon.GetAttachmentMesh
struct AWeapon_GetAttachmentMesh_Params
{
	bool                                               bFirstPerson;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UMeshComponent*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxWeapon.Weapon.GetAssociatedUseModeComponentByClass
struct AWeapon_GetAssociatedUseModeComponentByClass_Params
{
	class UClass*                                      ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ReferenceComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxWeapon.Weapon.GetAimAssistParameters
struct AWeapon_GetAimAssistParameters_Params
{
	class UAimAssistParameters*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Weapon.EquipInterruptible
struct AWeapon_EquipInterruptible_Params
{
};

// Function GbxWeapon.Weapon.Dropped
struct AWeapon_Dropped_Params
{
};

// Function GbxWeapon.Weapon.CycleZoomLevel
struct AWeapon_CycleZoomLevel_Params
{
};

// Function GbxWeapon.Weapon.ClientUnlock
struct AWeapon_ClientUnlock_Params
{
};

// Function GbxWeapon.Weapon.ClientStopReloading
struct AWeapon_ClientStopReloading_Params
{
};

// Function GbxWeapon.Weapon.ClientLock
struct AWeapon_ClientLock_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Weapon.AddUseMode
struct AWeapon_AddUseMode_Params
{
	class UWeaponUseComponent*                         UseComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UActorComponent*>                     OtherComponents;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                InputChannels;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Weapon.Activate
struct AWeapon_Activate_Params
{
	class APawn*                                       WeaponOwner;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      InSlot;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EWeaponEquipType                                   InEquipType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.WeaponPreUseComponent.K2_OnDeactivated
struct UWeaponPreUseComponent_K2_OnDeactivated_Params
{
};

// Function GbxWeapon.WeaponPreUseComponent.K2_OnActivated
struct UWeaponPreUseComponent_K2_OnActivated_Params
{
};

// Function GbxWeapon.WeaponUseComponent.ToggleMode
struct UWeaponUseComponent_ToggleMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.WeaponUseComponent.SwitchToZoomedMode
struct UWeaponUseComponent_SwitchToZoomedMode_Params
{
	unsigned char                                      ZoomLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.WeaponUseComponent.SwitchFromZoomedMode
struct UWeaponUseComponent_SwitchFromZoomedMode_Params
{
	unsigned char                                      ZoomLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.WeaponUseComponent.OnPreUseFinished
struct UWeaponUseComponent_OnPreUseFinished_Params
{
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.WeaponUseComponent.K2_OnDeactivated
struct UWeaponUseComponent_K2_OnDeactivated_Params
{
};

// Function GbxWeapon.WeaponUseComponent.K2_OnActivated
struct UWeaponUseComponent_K2_OnActivated_Params
{
};

// Function GbxWeapon.WeaponUseComponent.CanActivateMode
struct UWeaponUseComponent_CanActivateMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.WeaponFireComponent.ServerResetFireSequence
struct UWeaponFireComponent_ServerResetFireSequence_Params
{
};

// Function GbxWeapon.WeaponFireComponent.OnStopFireRateDeceleration
struct UWeaponFireComponent_OnStopFireRateDeceleration_Params
{
};

// Function GbxWeapon.WeaponFireComponent.OnStopFireRateAcceleration
struct UWeaponFireComponent_OnStopFireRateAcceleration_Params
{
};

// Function GbxWeapon.WeaponFireComponent.OnStartFireRateDeceleration
struct UWeaponFireComponent_OnStartFireRateDeceleration_Params
{
};

// Function GbxWeapon.WeaponFireComponent.OnStartFireRateAcceleration
struct UWeaponFireComponent_OnStartFireRateAcceleration_Params
{
};

// Function GbxWeapon.WeaponFireComponent.OnRep_ImpactLocation
struct UWeaponFireComponent_OnRep_ImpactLocation_Params
{
};

// Function GbxWeapon.WeaponFireComponent.OnRep_FlashCount
struct UWeaponFireComponent_OnRep_FlashCount_Params
{
};

// Function GbxWeapon.WeaponFireComponent.OnRep_FireRateAccelChanged
struct UWeaponFireComponent_OnRep_FireRateAccelChanged_Params
{
};

// Function GbxWeapon.WeaponFireComponent.OnRep_ClientFireSequenceState
struct UWeaponFireComponent_OnRep_ClientFireSequenceState_Params
{
};

// Function GbxWeapon.WeaponFireComponent.OnReloadAmmoGiven
struct UWeaponFireComponent_OnReloadAmmoGiven_Params
{
};

// Function GbxWeapon.WeaponFireComponent.OnLoopingFireActionEnd
struct UWeaponFireComponent_OnLoopingFireActionEnd_Params
{
	EGbxActionEndState                                 EndState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.WeaponFireComponent.OnGivenTo
struct UWeaponFireComponent_OnGivenTo_Params
{
};

// Function GbxWeapon.WeaponFireComponent.IsFireRateAccelEnabled
struct UWeaponFireComponent_IsFireRateAccelEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.WeaponFireComponent.GetLockedTarget
struct UWeaponFireComponent_GetLockedTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.WeaponFireComponent.GetFireRatePercent
struct UWeaponFireComponent_GetFireRatePercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.WeaponFireComponent.ClientStopResetFireSequence
struct UWeaponFireComponent_ClientStopResetFireSequence_Params
{
};

// Function GbxWeapon.WeaponFireProjectileComponent.GetShotProjectileData
struct UWeaponFireProjectileComponent_GetShotProjectileData_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.WeaponFireProjectileComponent.GetShotLightProjectileData
struct UWeaponFireProjectileComponent_GetShotLightProjectileData_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Projectile.StopBlockingPawns
struct AProjectile_StopBlockingPawns_Params
{
};

// Function GbxWeapon.Projectile.SetProjectileDamageType
struct AProjectile_SetProjectileDamageType_Params
{
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Projectile.SetProjectileDamageSource
struct AProjectile_SetProjectileDamageSource_Params
{
	class UClass*                                      DamageSource;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Projectile.SetProjectileDamageRadius
struct AProjectile_SetProjectileDamageRadius_Params
{
	float                                              DamageRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Projectile.SetProjectileDamage
struct AProjectile_SetProjectileDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Projectile.ResetCollisionWith
struct AProjectile_ResetCollisionWith_Params
{
	class AActor*                                      ActorToCollide;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Projectile.OnRep_SpawnModifierType
struct AProjectile_OnRep_SpawnModifierType_Params
{
};

// Function GbxWeapon.Projectile.OnLastBounce
struct AProjectile_OnLastBounce_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxWeapon.Projectile.OnHitWorld
struct AProjectile_OnHitWorld_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxWeapon.Projectile.OnHitNeutral
struct AProjectile_OnHitNeutral_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxWeapon.Projectile.OnHitFriendly
struct AProjectile_OnHitFriendly_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxWeapon.Projectile.OnHitEnemy
struct AProjectile_OnHitEnemy_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxWeapon.Projectile.OnHitDamagableObject
struct AProjectile_OnHitDamagableObject_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxWeapon.Projectile.OnExplode
struct AProjectile_OnExplode_Params
{
};

// Function GbxWeapon.Projectile.OnComponentDetachedFromParent
struct AProjectile_OnComponentDetachedFromParent_Params
{
	class USceneComponent*                             SceneComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxWeapon.Projectile.OnBounce
struct AProjectile_OnBounce_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, Parm, IsPlainOldData)
};

// Function GbxWeapon.Projectile.OnBeginExplode
struct AProjectile_OnBeginExplode_Params
{
};

// Function GbxWeapon.Projectile.IgnoreCollisionWith
struct AProjectile_IgnoreCollisionWith_Params
{
	class AActor*                                      ActorToIgnore;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.Projectile.HandleDetachRequest
struct AProjectile_HandleDetachRequest_Params
{
};

// Function GbxWeapon.Projectile.GetProjectileMovementComponent
struct AProjectile_GetProjectileMovementComponent_Params
{
	class UGbxProjectileMovementComponent*             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxWeapon.Projectile.GetProjectileDamageType
struct AProjectile_GetProjectileDamageType_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Projectile.GetProjectileDamageSource
struct AProjectile_GetProjectileDamageSource_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Projectile.GetProjectileDamageRadius
struct AProjectile_GetProjectileDamageRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Projectile.GetProjectileDamage
struct AProjectile_GetProjectileDamage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.Projectile.GetExplosionComponent
struct AProjectile_GetExplosionComponent_Params
{
	class UExplosionComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxWeapon.Projectile.Explode
struct AProjectile_Explode_Params
{
};

// Function GbxWeapon.Projectile.CheckProjectileAttachment
struct AProjectile_CheckProjectileAttachment_Params
{
};

// Function GbxWeapon.Projectile.BounceDelegate
struct AProjectile_BounceDelegate_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxWeapon.GbxProjectileMovementComponent.ScaleVelocity
struct UGbxProjectileMovementComponent_ScaleVelocity_Params
{
	float                                              InScale;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.GbxProjectileMovementComponent.OnRep_InitialProjectileGravity
struct UGbxProjectileMovementComponent_OnRep_InitialProjectileGravity_Params
{
};

// DelegateFunction GbxWeapon.GbxProjectileMovementComponent.OnProjectilePostLastBounceDelegate__DelegateSignature
struct UGbxProjectileMovementComponent_OnProjectilePostLastBounceDelegate__DelegateSignature_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxWeapon.GbxProjectileMovementComponent.OnHit
struct UGbxProjectileMovementComponent_OnHit_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxWeapon.GbxProjectileMovementComponent.OnBounce
struct UGbxProjectileMovementComponent_OnBounce_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxWeapon.LightProjectileManager.ServerSendDebugProjectileImpact
struct ALightProjectileManager_ServerSendDebugProjectileImpact_Params
{
	int                                                ProjSyncID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	uint16_t                                           ProjFlags;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.LightProjectileManager.OnParticleSystemFinished
struct ALightProjectileManager_OnParticleSystemFinished_Params
{
	class UParticleSystemComponent*                    FinishedComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxWeapon.LightProjectile.SetLifetime
struct ULightProjectile_SetLifetime_Params
{
	float                                              NewLifetime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.LightProjectile.SetHomingTargetLocation
struct ULightProjectile_SetHomingTargetLocation_Params
{
	struct FVector                                     HomingLocation;                                           // (Parm, IsPlainOldData)
};

// Function GbxWeapon.LightProjectile.SetHomingTarget
struct ULightProjectile_SetHomingTarget_Params
{
	class AActor*                                      HomingTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetOffset;                                             // (Parm, IsPlainOldData)
};

// Function GbxWeapon.LightProjectile.PlayFeedbackSoundEvent
struct ULightProjectile_PlayFeedbackSoundEvent_Params
{
	class UWwiseEvent*                                 Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.LightProjectile.OnRep_Shutdown
struct ULightProjectile_OnRep_Shutdown_Params
{
};

// Function GbxWeapon.LightProjectile.OnRep_InitialClientState
struct ULightProjectile_OnRep_InitialClientState_Params
{
};

// Function GbxWeapon.LightProjectile.OnRep_Impact
struct ULightProjectile_OnRep_Impact_Params
{
};

// Function GbxWeapon.LightProjectile.OnRep_Exploded
struct ULightProjectile_OnRep_Exploded_Params
{
};

// Function GbxWeapon.LightProjectile.OnRep_Attached
struct ULightProjectile_OnRep_Attached_Params
{
};

// Function GbxWeapon.LightProjectile.OnParticleSystemFinished
struct ULightProjectile_OnParticleSystemFinished_Params
{
	class UParticleSystemComponent*                    FinishedComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxWeapon.LightProjectile.OnAttachedComponentUnregistered
struct ULightProjectile_OnAttachedComponentUnregistered_Params
{
	class UActorComponent*                             UnregisteredComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxWeapon.LightProjectile.OnAttachedComponentCollisionChanged
struct ULightProjectile_OnAttachedComponentCollisionChanged_Params
{
	class UPrimitiveComponent*                         ChangedComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxWeapon.LightProjectile.OnAttachedActorFractured
struct ULightProjectile_OnAttachedActorFractured_Params
{
	struct FVector                                     HitPoint;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitDirection;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxWeapon.LightProjectile.OnAttachedActorDestroyed
struct ULightProjectile_OnAttachedActorDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.LightProjectile.K2_ApplyImpactDamage
struct ULightProjectile_K2_ApplyImpactDamage_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ImpactDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPenetrated;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCanReflect;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.LightProjectile.IsHomingMovingDirectlyTowardsTarget
struct ULightProjectile_IsHomingMovingDirectlyTowardsTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.LightProjectile.IsHoming
struct ULightProjectile_IsHoming_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.LightProjectile.InitChildData
struct ULightProjectile_InitChildData_Params
{
	struct FLightProjectileInitializationData          InitData;                                                 // (Parm, OutParm)
};

// Function GbxWeapon.LightProjectile.GetTarget
struct ULightProjectile_GetTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.LightProjectile.GetSource
struct ULightProjectile_GetSource_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.LightProjectile.GetModifierValue
struct ULightProjectile_GetModifierValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.LightProjectile.GetModifierType
struct ULightProjectile_GetModifierType_Params
{
	EWeaponShotModifierType                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.LightProjectile.GetInstigator
struct ULightProjectile_GetInstigator_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.LightProjectile.GetImpactDataOverride
struct ULightProjectile_GetImpactDataOverride_Params
{
	class UImpactData*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.LightProjectile.GetImpactData
struct ULightProjectile_GetImpactData_Params
{
	class UImpactData*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.LightProjectile.GetHomingStartTime
struct ULightProjectile_GetHomingStartTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.LightProjectile.GetFiringPatternID
struct ULightProjectile_GetFiringPatternID_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.LightProjectile.GetDamageType
struct ULightProjectile_GetDamageType_Params
{
	class UGbxDamageType*                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.LightProjectile.GetDamageCauser
struct ULightProjectile_GetDamageCauser_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.LightProjectile.GetAttitudeTowards
struct ULightProjectile_GetAttitudeTowards_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETeamAttitude>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.LightProjectile.GetAttachedImpactNormal
struct ULightProjectile_GetAttachedImpactNormal_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.LightProjectile.GetAttachedDamageReceiverActor
struct ULightProjectile_GetAttachedDamageReceiverActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.LightProjectile.GetAttachedActor
struct ULightProjectile_GetAttachedActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.LightProjectile.GetAssociatedActor
struct ULightProjectile_GetAssociatedActor_Params
{
	ELightProjectileQueryActorType                     ActorType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.LightProjectile.Explode
struct ULightProjectile_Explode_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.LightProjectile.EnableHoming
struct ULightProjectile_EnableHoming_Params
{
};

// Function GbxWeapon.LightProjectile.DisableHoming
struct ULightProjectile_DisableHoming_Params
{
};

// Function GbxWeapon.LightProjectile.Destroy
struct ULightProjectile_Destroy_Params
{
};

// Function GbxWeapon.LightProjectile.ApplyAreaDamage
struct ULightProjectile_ApplyAreaDamage_Params
{
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AActor*                                      HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxWeapon.LightProjectileData.OnRicochet
struct ULightProjectileData_OnRicochet_Params
{
	class ULightProjectile*                            Projectile;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, Parm, IsPlainOldData)
};

// Function GbxWeapon.LightProjectileData.OnProxyImpact
struct ULightProjectileData_OnProxyImpact_Params
{
	class ULightProjectile*                            Projectile;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxWeapon.LightProjectileData.OnLifetimeExpired
struct ULightProjectileData_OnLifetimeExpired_Params
{
	class ULightProjectile*                            Projectile;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.LightProjectileData.OnImpact
struct ULightProjectileData_OnImpact_Params
{
	class ULightProjectile*                            Projectile;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxWeapon.LightProjectileData.OnExplode
struct ULightProjectileData_OnExplode_Params
{
	class ULightProjectile*                            Projectile;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.LightProjectileData.OnDamage
struct ULightProjectileData_OnDamage_Params
{
	class ULightProjectile*                            Projectile;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bCritical;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.LightProjectileData.OnBegin
struct ULightProjectileData_OnBegin_Params
{
	class ULightProjectile*                            Projectile;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.LightProjectileData.OnAttached
struct ULightProjectileData_OnAttached_Params
{
	class ULightProjectile*                            Projectile;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      AttachedActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.LightProjectileData.GetTimedEventNameList
struct ULightProjectileData_GetTimedEventNameList_Params
{
	TArray<struct FName>                               FuncList;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function GbxWeapon.LightBeamManager.OnParticleSystemFinished
struct ALightBeamManager_OnParticleSystemFinished_Params
{
	class UParticleSystemComponent*                    FinishedComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxWeapon.LightBeam.SetTargetSocket
struct ULightBeam_SetTargetSocket_Params
{
	struct FName                                       Socket;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.LightBeam.OnTrackedImpactParticleSystemFinished
struct ULightBeam_OnTrackedImpactParticleSystemFinished_Params
{
	class UParticleSystemComponent*                    PSC;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxWeapon.LightBeam.OnRep_ModifierValue
struct ULightBeam_OnRep_ModifierValue_Params
{
};

// Function GbxWeapon.LightBeam.OnRep_ModifierType
struct ULightBeam_OnRep_ModifierType_Params
{
};

// Function GbxWeapon.LightBeam.OnRep_ClientState
struct ULightBeam_OnRep_ClientState_Params
{
};

// Function GbxWeapon.LightBeam.LockOntoTarget
struct ULightBeam_LockOntoTarget_Params
{
	struct FLightBeamAttachment                        Target;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxWeapon.LightBeam.InitChildData
struct ULightBeam_InitChildData_Params
{
	struct FLightBeamInitializationData                InitData;                                                 // (Parm, OutParm)
};

// Function GbxWeapon.LightBeam.GetTargetActor
struct ULightBeam_GetTargetActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.LightBeam.GetTarget
struct ULightBeam_GetTarget_Params
{
	struct FLightBeamAttachment                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function GbxWeapon.LightBeam.GetSourceActor
struct ULightBeam_GetSourceActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.LightBeam.GetSource
struct ULightBeam_GetSource_Params
{
	struct FLightBeamAttachment                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function GbxWeapon.LightBeam.GetInstigator
struct ULightBeam_GetInstigator_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.LightBeam.GetImpactForce
struct ULightBeam_GetImpactForce_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.LightBeam.GetDamageType
struct ULightBeam_GetDamageType_Params
{
	class UGbxDamageType*                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.LightBeam.GetDamageCauser
struct ULightBeam_GetDamageCauser_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.LightBeam.GetDamage
struct ULightBeam_GetDamage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.LightBeam.GetAssociatedActor
struct ULightBeam_GetAssociatedActor_Params
{
	ELightBeamQueryActorType                           ActorType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.LightBeamData.UpdateTarget
struct ULightBeamData_UpdateTarget_Params
{
	class ULightBeam*                                  Beam;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.LightBeamData.CanLockOn
struct ULightBeamData_CanLockOn_Params
{
	class ULightBeam*                                  Beam;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.WeaponAnimInstance.BlueprintSwitchedMode
struct UWeaponAnimInstance_BlueprintSwitchedMode_Params
{
	int                                                NewMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.WeaponAmmoComponent.ClientRefillAmmo
struct UWeaponAmmoComponent_ClientRefillAmmo_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.WeaponHeatComponent.SetCanUseWhenOverheated
struct UWeaponHeatComponent_SetCanUseWhenOverheated_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.WeaponHeatComponent.OnUseFinished
struct UWeaponHeatComponent_OnUseFinished_Params
{
};

// Function GbxWeapon.WeaponHeatComponent.OnUsed
struct UWeaponHeatComponent_OnUsed_Params
{
};

// Function GbxWeapon.WeaponHeatComponent.OnStopOverheat
struct UWeaponHeatComponent_OnStopOverheat_Params
{
};

// Function GbxWeapon.WeaponHeatComponent.OnStartOverheat
struct UWeaponHeatComponent_OnStartOverheat_Params
{
};

// Function GbxWeapon.WeaponHeatComponent.OnRep_ReplicatedHeat
struct UWeaponHeatComponent_OnRep_ReplicatedHeat_Params
{
};

// Function GbxWeapon.WeaponHeatComponent.OnRep_Overheated
struct UWeaponHeatComponent_OnRep_Overheated_Params
{
	bool                                               bWasOverheated;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.WeaponHeatComponent.OnPutDown
struct UWeaponHeatComponent_OnPutDown_Params
{
};

// Function GbxWeapon.WeaponHeatComponent.OnEquipped
struct UWeaponHeatComponent_OnEquipped_Params
{
};

// Function GbxWeapon.WeaponHeatComponent.OnDetached
struct UWeaponHeatComponent_OnDetached_Params
{
};

// Function GbxWeapon.WeaponHeatComponent.OnAttached
struct UWeaponHeatComponent_OnAttached_Params
{
};

// Function GbxWeapon.WeaponZoomComponent.OnSwitchedWeaponMode
struct UWeaponZoomComponent_OnSwitchedWeaponMode_Params
{
};

// Function GbxWeapon.WeaponZoomComponent.OnRep_ReplicatedZoomState
struct UWeaponZoomComponent_OnRep_ReplicatedZoomState_Params
{
};

// Function GbxWeapon.WeaponZoomComponent.OnDetached
struct UWeaponZoomComponent_OnDetached_Params
{
};

// Function GbxWeapon.WeaponZoomComponent.OnAttached
struct UWeaponZoomComponent_OnAttached_Params
{
};

// Function GbxWeapon.WeaponZoomComponent.GetMaxZoomFOVScaleWithMode
struct UWeaponZoomComponent_GetMaxZoomFOVScaleWithMode_Params
{
	unsigned char                                      ModeIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.WeaponZoomComponent.GetMaxZoomFOVScale
struct UWeaponZoomComponent_GetMaxZoomFOVScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.GbxTrajectometerComponent.UpdateCollisionShape
struct UGbxTrajectometerComponent_UpdateCollisionShape_Params
{
};

// DelegateFunction GbxWeapon.GbxTrajectometerComponent.SimulationResultEvent__DelegateSignature
struct UGbxTrajectometerComponent_SimulationResultEvent__DelegateSignature_Params
{
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxWeapon.GbxTrajectometerComponent.SetTrajectometerEnabled
struct UGbxTrajectometerComponent_SetTrajectometerEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.LightBeamStatics.SetBeamFlag
struct ULightBeamStatics_SetBeamFlag_Params
{
	struct FLightBeamInitializationData                InitData;                                                 // (Parm, OutParm, ReferenceParm)
	ELightBeamFlag                                     Flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.LightBeamStatics.RemoveLightBeamsBySource
struct ULightBeamStatics_RemoveLightBeamsBySource_Params
{
	class AActor*                                      Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.LightBeamStatics.RemoveLightBeamsByActor
struct ULightBeamStatics_RemoveLightBeamsByActor_Params
{
	struct FLightBeamQueryData                         Query;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxWeapon.LightBeamStatics.IsBeamFlagSet
struct ULightBeamStatics_IsBeamFlagSet_Params
{
	struct FLightBeamInitializationData                InitData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	ELightBeamFlag                                     Flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.LightBeamStatics.ForEachLightBeam
struct ULightBeamStatics_ForEachLightBeam_Params
{
	struct FLightBeamQueryData                         Query;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             Callback;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GbxWeapon.LightBeamStatics.DoesLightBeamExist
struct ULightBeamStatics_DoesLightBeamExist_Params
{
	struct FLightBeamQueryData                         Query;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.LightBeamStatics.CreateLightBeamFromData
struct ULightBeamStatics_CreateLightBeamFromData_Params
{
	struct FLightBeamInitializationData                InitData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxWeapon.LightBeamStatics.CreateLightBeam
struct ULightBeamStatics_CreateLightBeam_Params
{
	class UClass*                                      Data;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLightBeamAttachment                        Source;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FLightBeamAttachment                        Target;                                                   // (Parm)
	bool                                               bTargetLocked;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageSource;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UImpactData*                                 ImpactDataOverride;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FForceSelection                             ImpactForce;                                              // (Parm)
	float                                              LifetimeOverride;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bViewDependent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.LightBeamStatics.ClearBeamFlag
struct ULightBeamStatics_ClearBeamFlag_Params
{
	struct FLightBeamInitializationData                InitData;                                                 // (Parm, OutParm, ReferenceParm)
	ELightBeamFlag                                     Flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.LightProjectileStatics.SplitLightProjectile
struct ULightProjectileStatics_SplitLightProjectile_Params
{
	class ULightProjectile*                            Projectile;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Data;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	ELightProjectileSplitPattern                       Pattern;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpreadAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RotateAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OffsetDistance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroySource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.LightProjectileStatics.SetProjectileFlag
struct ULightProjectileStatics_SetProjectileFlag_Params
{
	struct FLightProjectileInitializationData          InitData;                                                 // (Parm, OutParm, ReferenceParm)
	ELightProjectileFlag                               Flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.LightProjectileStatics.SetHomingState
struct ULightProjectileStatics_SetHomingState_Params
{
	struct FLightProjectileQueryData                   Query;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bIsHoming;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.LightProjectileStatics.RemoveLightProjectilesByActor
struct ULightProjectileStatics_RemoveLightProjectilesByActor_Params
{
	struct FLightProjectileQueryData                   Query;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxWeapon.LightProjectileStatics.IsProjectileFlagSet
struct ULightProjectileStatics_IsProjectileFlagSet_Params
{
	struct FLightProjectileInitializationData          InitData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	ELightProjectileFlag                               Flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.LightProjectileStatics.ForEachLightProjectile
struct ULightProjectileStatics_ForEachLightProjectile_Params
{
	struct FLightProjectileQueryData                   Query;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             Callback;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GbxWeapon.LightProjectileStatics.DetonateLightProjectiles
struct ULightProjectileStatics_DetonateLightProjectiles_Params
{
	struct FLightProjectileQueryData                   Query;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              StackingEnemyBonusDamage;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinDetonationDelay;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxDetonationDelay;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.LightProjectileStatics.CreateLightProjectileFromSource
struct ULightProjectileStatics_CreateLightProjectileFromSource_Params
{
	class ULightProjectile*                            SourceProjectile;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Data;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.LightProjectileStatics.CreateLightProjectileFromDataAsync
struct ULightProjectileStatics_CreateLightProjectileFromDataAsync_Params
{
	struct FLightProjectileInitializationData          InitData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ForceSpawnTimer;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.LightProjectileStatics.CreateLightProjectileFromData
struct ULightProjectileStatics_CreateLightProjectileFromData_Params
{
	struct FLightProjectileInitializationData          InitData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxWeapon.LightProjectileStatics.CreateLightProjectile
struct ULightProjectileStatics_CreateLightProjectile_Params
{
	class UClass*                                      Data;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, IsPlainOldData)
	class APawn*                                       Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageSource;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UImpactData*                                 ImpactDataOverride;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.LightProjectileStatics.ClearProjectileFlag
struct ULightProjectileStatics_ClearProjectileFlag_Params
{
	struct FLightProjectileInitializationData          InitData;                                                 // (Parm, OutParm, ReferenceParm)
	ELightProjectileFlag                               Flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.ProjectileBlueprintLibrary.ThrowProjectileAsync
struct UProjectileBlueprintLibrary_ThrowProjectileAsync_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FThrowProjectileAsyncRequest                Request;                                                  // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.ProjectileBlueprintLibrary.ThrowActorAt
struct UProjectileBlueprintLibrary_ThrowActorAt_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (Parm, IsPlainOldData)
	struct FVector                                     TargetVelocity;                                           // (Parm, IsPlainOldData)
	float                                              MaxPrediction;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AnglePercent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    DirectionOffset;                                          // (Parm, IsPlainOldData)
	struct FVector                                     LocalTargetOffset;                                        // (Parm, IsPlainOldData)
};

// Function GbxWeapon.ProjectileBlueprintLibrary.PredictProjectilePathAsync
struct UProjectileBlueprintLibrary_PredictProjectilePathAsync_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FPredictProjectilePathAsyncRequest          Request;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxWeapon.ProjectileBlueprintLibrary.GetSafeProjectileThrowTransform_Component
struct UProjectileBlueprintLibrary_GetSafeProjectileThrowTransform_Component_Params
{
	class AActor*                                      SourceActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SourceComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              IgnoreActors;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.ProjectileBlueprintLibrary.GetSafeProjectileThrowTransform
struct UProjectileBlueprintLibrary_GetSafeProjectileThrowTransform_Params
{
	class AActor*                                      SourceActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              IgnoreActors;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bThrowFromFirstPersonSocket;                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.ProjectileBlueprintLibrary.GeneratePointsOnFan
struct UProjectileBlueprintLibrary_GeneratePointsOnFan_Params
{
	struct FVector                                     Origin;                                                   // (Parm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, IsPlainOldData)
	int                                                SampleCount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpreadAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RotateAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OriginOffset;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxWeapon.ProjectileBlueprintLibrary.GeneratePointsOnCone
struct UProjectileBlueprintLibrary_GeneratePointsOnCone_Params
{
	struct FVector                                     Origin;                                                   // (Parm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, IsPlainOldData)
	int                                                SampleCount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpreadAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RotateAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OriginOffset;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxWeapon.ProjectileBlueprintLibrary.DetachProjectilesFromActor
struct UProjectileBlueprintLibrary_DetachProjectilesFromActor_Params
{
	class AActor*                                      BaseActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.ProjectileBlueprintLibrary.CalculateConeVector
struct UProjectileBlueprintLibrary_CalculateConeVector_Params
{
	float                                              Fraction;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              AngleWidth;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleHeight;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.ProjectileBlueprintLibrary.CalcThrowVelocityAtActor
struct UProjectileBlueprintLibrary_CalcThrowVelocityAtActor_Params
{
	struct FVector                                     ResultVelocity;                                           // (Parm, OutParm, IsPlainOldData)
	float                                              ResultGravityScale;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // (Parm, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxPrediction;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AnglePercent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    DirectionOffset;                                          // (Parm, IsPlainOldData)
	struct FVector                                     LocalTargetOffset;                                        // (Parm, IsPlainOldData)
};

// Function GbxWeapon.ProjectileBlueprintLibrary.CalcThrowVelocity
struct UProjectileBlueprintLibrary_CalcThrowVelocity_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ResultVelocity;                                           // (Parm, OutParm, IsPlainOldData)
	float                                              ResultGravityScale;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // (Parm, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (Parm, IsPlainOldData)
	struct FVector                                     TargetVelocity;                                           // (Parm, IsPlainOldData)
	float                                              MaxPrediction;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AnglePercent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    DirectionOffset;                                          // (Parm, IsPlainOldData)
	struct FVector                                     LocalTargetOffset;                                        // (Parm, IsPlainOldData)
};

// Function GbxWeapon.RecoilControlComponent.ServerApplyInput
struct URecoilControlComponent_ServerApplyInput_Params
{
	uint32_t                                           CompressedInputRot;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.WeaponAmmoPoolComponent.ServerSendAmmoState
struct UWeaponAmmoPoolComponent_ServerSendAmmoState_Params
{
};

// Function GbxWeapon.WeaponAmmoPoolComponent.OnRep_SpareAmmo
struct UWeaponAmmoPoolComponent_OnRep_SpareAmmo_Params
{
};

// Function GbxWeapon.WeaponAmmoPoolComponent.OnRep_ServerSyncedLoadedAmmo
struct UWeaponAmmoPoolComponent_OnRep_ServerSyncedLoadedAmmo_Params
{
};

// Function GbxWeapon.WeaponAmmoPoolComponent.OnMaxLoadedAmmoChanged
struct UWeaponAmmoPoolComponent_OnMaxLoadedAmmoChanged_Params
{
	float                                              OldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.WeaponAmmoPoolComponent.OnGivenTo
struct UWeaponAmmoPoolComponent_OnGivenTo_Params
{
};

// Function GbxWeapon.WeaponAmmoPoolComponent.ClientSetLoadedAmmo
struct UWeaponAmmoPoolComponent_ClientSetLoadedAmmo_Params
{
	int                                                NewLoadedAmmo;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.WeaponAmmoPoolComponent.ClientConsumeAmmo
struct UWeaponAmmoPoolComponent_ClientConsumeAmmo_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.WeaponAttachmentSlot.SetMesh
struct UWeaponAttachmentSlot_SetMesh_Params
{
	class UMeshComponent*                              InMesh;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxWeapon.WeaponChargeComponent.StopEffects
struct UWeaponChargeComponent_StopEffects_Params
{
};

// Function GbxWeapon.WeaponChargeComponent.Overcharged
struct UWeaponChargeComponent_Overcharged_Params
{
};

// Function GbxWeapon.WeaponChargeComponent.OnRep_ChargeState
struct UWeaponChargeComponent_OnRep_ChargeState_Params
{
	EWeaponChargeState                                 PrevChargeState;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.WeaponChargeComponent.OnChargeActionEnd
struct UWeaponChargeComponent_OnChargeActionEnd_Params
{
	EGbxActionEndState                                 EndState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.WeaponChargeComponent.GetDischargeDuration
struct UWeaponChargeComponent_GetDischargeDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.WeaponChargeComponent.GetChargePercent
struct UWeaponChargeComponent_GetChargePercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.WeaponChargeComponent.GetChargeDuration
struct UWeaponChargeComponent_GetChargeDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.WeaponChargeComponent.FullyDischarged
struct UWeaponChargeComponent_FullyDischarged_Params
{
};

// Function GbxWeapon.WeaponChargeComponent.FullyCharged
struct UWeaponChargeComponent_FullyCharged_Params
{
};

// Function GbxWeapon.WeaponChargeComponent.DelayChargeFinished
struct UWeaponChargeComponent_DelayChargeFinished_Params
{
};

// Function GbxWeapon.WeaponClipReloadComponent.OnRep_ClientReloadState
struct UWeaponClipReloadComponent_OnRep_ClientReloadState_Params
{
};

// Function GbxWeapon.WeaponFireBeamComponent.GetShotLightBeamData
struct UWeaponFireBeamComponent_GetShotLightBeamData_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.WeaponRecoilComponent.OnUsed
struct UWeaponRecoilComponent_OnUsed_Params
{
};

// Function GbxWeapon.WeaponRecoilComponent.OnDetached
struct UWeaponRecoilComponent_OnDetached_Params
{
};

// Function GbxWeapon.WeaponRecoilComponent.OnAttached
struct UWeaponRecoilComponent_OnAttached_Params
{
};

// Function GbxWeapon.WeaponRecoilPatternComponent.ResetPattern
struct UWeaponRecoilPatternComponent_ResetPattern_Params
{
};

// Function GbxWeapon.WeaponRecoilPatternComponent.OnUseFinished
struct UWeaponRecoilPatternComponent_OnUseFinished_Params
{
};

// Function GbxWeapon.WeaponRecoilPatternComponent.GetRecoilPatternWidthGoodness
struct UWeaponRecoilPatternComponent_GetRecoilPatternWidthGoodness_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.WeaponRecoilPatternComponent.GetRecoilPatternHeightGoodness
struct UWeaponRecoilPatternComponent_GetRecoilPatternHeightGoodness_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.WeaponRecoilPatternComponent.GetRecoilPatternGoodness
struct UWeaponRecoilPatternComponent_GetRecoilPatternGoodness_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.WeaponSingleFeedReloadComponent.OnUserInput
struct UWeaponSingleFeedReloadComponent_OnUserInput_Params
{
	unsigned char                                      InputChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.WeaponSingleFeedReloadComponent.OnRep_ClientReloadState
struct UWeaponSingleFeedReloadComponent_OnRep_ClientReloadState_Params
{
};

// Function GbxWeapon.WeaponStatics.UpdateVisibleAmmo
struct UWeaponStatics_UpdateVisibleAmmo_Params
{
	class AWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.WeaponStatics.UnhideWeapons
struct UWeaponStatics_UnhideWeapons_Params
{
	class AActor*                                      WeaponUser;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.WeaponStatics.UnhideWeapon
struct UWeaponStatics_UnhideWeapon_Params
{
	class AActor*                                      WeaponUser;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.WeaponStatics.SetVisibleAmmoUpdateMethod
struct UWeaponStatics_SetVisibleAmmoUpdateMethod_Params
{
	class AWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EWeaponVisibleAmmoUpdateMethod                     NewUpdateMethod;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.WeaponStatics.SetVisibleAmmoState
struct UWeaponStatics_SetVisibleAmmoState_Params
{
	class AWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EWeaponVisibleAmmoState                            NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.WeaponStatics.ResetVisibleAmmoState
struct UWeaponStatics_ResetVisibleAmmoState_Params
{
	class AWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.WeaponStatics.RefillAmmo
struct UWeaponStatics_RefillAmmo_Params
{
	class AWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAsPercent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.WeaponStatics.K2_PlayWeaponHoldActionEx
struct UWeaponStatics_K2_PlayWeaponHoldActionEx_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWeaponActionType>                     WeaponAction;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FActionState_Base                           ActionParams;                                             // (Parm)
	class UGbxAction*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.WeaponStatics.K2_PlayWeaponHoldAction
struct UWeaponStatics_K2_PlayWeaponHoldAction_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWeaponActionType>                     WeaponAction;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxAction*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.WeaponStatics.HideWeapons
struct UWeaponStatics_HideWeapons_Params
{
	class AActor*                                      WeaponUser;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.WeaponStatics.HideWeapon
struct UWeaponStatics_HideWeapon_Params
{
	class AActor*                                      WeaponUser;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.WeaponStatics.GiveAmmo
struct UWeaponStatics_GiveAmmo_Params
{
	class AWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLoaded;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAsPercent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.WeaponStatics.GetWeapon
struct UWeaponStatics_GetWeapon_Params
{
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AWeapon*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.WeaponStatics.GetMaxZoomFOVScale
struct UWeaponStatics_GetMaxZoomFOVScale_Params
{
	class AWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.WeaponStatics.GetLoadedAmmo
struct UWeaponStatics_GetLoadedAmmo_Params
{
	class AWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.WeaponStatics.GetFireRateAccelPercent
struct UWeaponStatics_GetFireRateAccelPercent_Params
{
	class AWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.WeaponStatics.GetFireRate
struct UWeaponStatics_GetFireRate_Params
{
	class AWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.WeaponStatics.GetDamageType
struct UWeaponStatics_GetDamageType_Params
{
	class AWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.WeaponStatics.CreateProjectileEQSProxy
struct UWeaponStatics_CreateProjectileEQSProxy_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
	class AActor*                                      ReferenceActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UProjectileEQSProxy*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxWeapon.WeaponVisibleAmmoComponent.UpdateBoneVisibility
struct UWeaponVisibleAmmoComponent_UpdateBoneVisibility_Params
{
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.WeaponVisibleAmmoComponent.SetVisibleAmmoUpdateMethod
struct UWeaponVisibleAmmoComponent_SetVisibleAmmoUpdateMethod_Params
{
	EWeaponVisibleAmmoUpdateMethod                     NewUpdateMethod;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.WeaponVisibleAmmoComponent.SetVisibleAmmoState
struct UWeaponVisibleAmmoComponent_SetVisibleAmmoState_Params
{
	EWeaponVisibleAmmoState                            NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxWeapon.WeaponVisibleAmmoComponent.ResetVisibleAmmoState
struct UWeaponVisibleAmmoComponent_ResetVisibleAmmoState_Params
{
};

// Function GbxWeapon.WeaponVisibleAmmoComponent.OnRep_ServerAmmoCount
struct UWeaponVisibleAmmoComponent_OnRep_ServerAmmoCount_Params
{
};

// Function GbxWeapon.WeaponVisibleAmmoComponent.OnDetached
struct UWeaponVisibleAmmoComponent_OnDetached_Params
{
};

// Function GbxWeapon.WeaponVisibleAmmoComponent.OnAttached
struct UWeaponVisibleAmmoComponent_OnAttached_Params
{
};

// Function GbxWeapon.WeaponVisibleAmmoComponent.OnAmmoChanged
struct UWeaponVisibleAmmoComponent_OnAmmoChanged_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

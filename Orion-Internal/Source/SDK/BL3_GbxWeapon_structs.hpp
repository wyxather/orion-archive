#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_GbxGameSystemCore_classes.hpp"
#include "BL3_Engine_classes.hpp"
#include "BL3_CoreUObject_classes.hpp"
#include "BL3_AnimGraphRuntime_classes.hpp"
#include "BL3_GbxRuntime_classes.hpp"
#include "BL3_AIModule_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GbxWeapon.EGbxTrajectoryTraceShape
enum class EGbxTrajectoryTraceShape : uint8_t
{
	Line                           = 0,
	Sphere                         = 1,
	Capsule                        = 2,
	Box                            = 3,
	EGbxTrajectoryTraceShape_MAX   = 4
};


// Enum GbxWeapon.EWeaponEquipType
enum class EWeaponEquipType : uint8_t
{
	Default                        = 0,
	Instant                        = 1,
	Custom                         = 2,
	EWeaponEquipType_MAX           = 3
};


// Enum GbxWeapon.EWeaponPutDownType
enum class EWeaponPutDownType : uint8_t
{
	Default                        = 0,
	Instant                        = 1,
	EWeaponPutDownType_MAX         = 2
};


// Enum GbxWeapon.EWeaponShotModifierType
enum class EWeaponShotModifierType : uint8_t
{
	None                           = 0,
	EngineType1                    = 1,
	EngineType2                    = 2,
	EngineType3                    = 3,
	EngineType4                    = 4,
	EngineType5                    = 5,
	EngineType6                    = 6,
	EngineType7                    = 7,
	EngineType8                    = 8,
	GameType1                      = 9,
	GameType2                      = 10,
	GameType3                      = 11,
	GameType4                      = 12,
	GameType5                      = 13,
	GameType6                      = 14,
	GameType7                      = 15,
	GameType8                      = 16,
	EWeaponShotModifierType_MAX    = 17
};


// Enum GbxWeapon.ELightBeamQueryActorType
enum class ELightBeamQueryActorType : uint8_t
{
	Unfiltered                     = 0,
	DamageCauser                   = 1,
	Instigator                     = 2,
	Source                         = 3,
	Target                         = 4,
	SourceOrTarget                 = 5,
	SourceAndTarget                = 6,
	ELightBeamQueryActorType_MAX   = 7
};


// Enum GbxWeapon.ELightBeamLock
enum class ELightBeamLock : uint8_t
{
	Never                          = 0,
	Always                         = 1,
	LockOn                         = 2,
	ELightBeamLock_MAX             = 3
};


// Enum GbxWeapon.ELightBeamFlag
enum class ELightBeamFlag : uint8_t
{
	ViewDependent                  = 0,
	Locked                         = 1,
	FollowViewPoint                = 2,
	DisableChaining                = 3,
	LagCompensation                = 4,
	EngineFlag3                    = 5,
	EngineFlag4                    = 6,
	EngineFlag5                    = 7,
	EngineFlag6                    = 8,
	EngineFlag7                    = 9,
	EngineFlag8                    = 10,
	GameFlag1                      = 11,
	GameFlag2                      = 12,
	GameFlag3                      = 13,
	GameFlag4                      = 14,
	ELightBeamFlag_MAX             = 15
};


// Enum GbxWeapon.ELightProjectileQueryActorType
enum class ELightProjectileQueryActorType : uint8_t
{
	Unfiltered                     = 0,
	DamageCauser                   = 1,
	Instigator                     = 2,
	Source                         = 3,
	Target                         = 4,
	Attached                       = 5,
	ELightProjectileQueryActorType_MAX = 6
};


// Enum GbxWeapon.ELightProjectileSubdivisionMode
enum class ELightProjectileSubdivisionMode : uint8_t
{
	Distance                       = 0,
	Seconds                        = 1,
	Width                          = 2,
	Count                          = 3,
	ELightProjectileSubdivisionMode_MAX = 4
};


// Enum GbxWeapon.ELightProjectileTracerThrottleLevel
enum class ELightProjectileTracerThrottleLevel : uint8_t
{
	None                           = 0,
	NPC                            = 1,
	RemotePlayer                   = 2,
	LocalPlayer                    = 3,
	ELightProjectileTracerThrottleLevel_MAX = 4
};


// Enum GbxWeapon.ELightProjectileFlag
enum class ELightProjectileFlag : uint8_t
{
	OverrideStartRotation          = 0,
	Homing                         = 1,
	StartFromLocalSource           = 2,
	BounceTowardsEnemy             = 3,
	Magnetism                      = 4,
	Reflected                      = 5,
	Penetrated                     = 6,
	HideTracer                     = 7,
	LagCompensation                = 8,
	TargetActorSet                 = 9,
	DisableTracerThrottling        = 10,
	EngineFlag1                    = 11,
	GameFlag1                      = 12,
	GameFlag2                      = 13,
	GameFlag3                      = 14,
	GameFlag4                      = 15,
	ELightProjectileFlag_MAX       = 16
};


// Enum GbxWeapon.ELightProjectileSplitPattern
enum class ELightProjectileSplitPattern : uint8_t
{
	Cone                           = 0,
	Fan                            = 1,
	ELightProjectileSplitPattern_MAX = 2
};


// Enum GbxWeapon.EHitTypeEnum
enum class EHitTypeEnum : uint8_t
{
	Friendly                       = 0,
	Enemy                          = 1,
	Neutral                        = 2,
	EHitTypeEnum_MAX               = 3
};


// Enum GbxWeapon.ERecoilEndOfPatternAction
enum class ERecoilEndOfPatternAction : uint8_t
{
	None                           = 0,
	PingPong                       = 1,
	Loop                           = 2,
	Reset                          = 3,
	ERecoilEndOfPatternAction_MAX  = 4
};


// Enum GbxWeapon.EWeaponReloadEvent
enum class EWeaponReloadEvent : uint8_t
{
	Started                        = 0,
	Ended                          = 1,
	EWeaponReloadEvent_MAX         = 2
};


// Enum GbxWeapon.EWeaponUseEvent
enum class EWeaponUseEvent : uint8_t
{
	UseStarted                     = 0,
	Used                           = 1,
	UseFinished                    = 2,
	EWeaponUseEvent_MAX            = 3
};


// Enum GbxWeapon.EWeaponActionType
enum class EWeaponActionType : uint8_t
{
	EWAT_Default                   = 0,
	EWAT_Use                       = 1,
	EWAT_Reload                    = 2,
	EWAT_Equip                     = 3,
	EWAT_PutDown                   = 4,
	EWAT_UseModeSwitch             = 5,
	EWAT_Charge                    = 6,
	EWAT_Charged                   = 7,
	EWAT_Overcharged               = 8,
	EWAT_ResetFireSequence         = 9,
	EWAT_Discharge                 = 10,
	EWAT_EngineWeaponActionType6   = 11,
	EWAT_EngineWeaponActionType7   = 12,
	EWAT_EngineWeaponActionType8   = 13,
	EWAT_GameWeaponActionType1     = 14,
	EWAT_GameWeaponActionType2     = 15,
	EWAT_GameWeaponActionType3     = 16,
	EWAT_GameWeaponActionType4     = 17,
	EWAT_GameWeaponActionType5     = 18,
	EWAT_GameWeaponActionType6     = 19,
	EWAT_GameWeaponActionType7     = 20,
	EWAT_GameWeaponActionType8     = 21,
	EWAT_MAX                       = 22
};


// Enum GbxWeapon.EAmmoRegenType
enum class EAmmoRegenType : uint8_t
{
	Disabled                       = 0,
	GenerateAmmo                   = 1,
	RefillLoadedAmmo               = 2,
	EAmmoRegenType_MAX             = 3
};


// Enum GbxWeapon.EWeaponChargeEventType
enum class EWeaponChargeEventType : uint8_t
{
	BlueprintEvent                 = 0,
	EnableParticleEmitter          = 1,
	DisableParticleEmitter         = 2,
	EWeaponChargeEventType_MAX     = 3
};


// Enum GbxWeapon.EWeaponChargeComparisonOperatorType
enum class EWeaponChargeComparisonOperatorType : uint8_t
{
	LessThan                       = 0,
	LessThanOrEqual                = 1,
	GreaterThan                    = 2,
	GreaterThanOrEqual             = 3,
	EWeaponChargeComparisonOperatorType_MAX = 4
};


// Enum GbxWeapon.EWeaponChargeState
enum class EWeaponChargeState : uint8_t
{
	None                           = 0,
	Discharging                    = 1,
	Charging                       = 2,
	Charged                        = 3,
	Overcharged                    = 4,
	EWeaponChargeState_MAX         = 5
};


// Enum GbxWeapon.EWeaponSkeletalControlEvent
enum class EWeaponSkeletalControlEvent : uint8_t
{
	Pause                          = 0,
	Resume                         = 1,
	Reset                          = 2,
	CacheState                     = 3,
	RestoreState                   = 4,
	CacheStateAndReset             = 5,
	ResetAndPause                  = 6,
	SetInput                       = 7,
	AddInput                       = 8,
	ReturnToDefault                = 9,
	EWeaponSkeletalControlEvent_MAX = 10
};


// Enum GbxWeapon.EWeaponMaterialEffectBlendMode
enum class EWeaponMaterialEffectBlendMode : uint8_t
{
	Multiply                       = 0,
	Add                            = 1,
	Replace                        = 2,
	AddReplace                     = 3,
	EWAVT_MAX                      = 4,
	EWeaponMaterialEffectBlendMode_MAX = 5
};


// Enum GbxWeapon.EWeaponEffectFlag
enum class EWeaponEffectFlag : uint8_t
{
	AutoActivate                   = 0,
	PlayOnlyOnActiveSlot           = 1,
	IgnoredByFXCoordinator         = 2,
	HideWhenScoped                 = 3,
	SpawnOnlyWhenVisible           = 4,
	PlayersOnly                    = 5,
	EWeaponEffectFlag_MAX          = 6
};


// Enum GbxWeapon.EWeaponTextureMipsSetting
enum class EWeaponTextureMipsSetting : uint8_t
{
	Default                        = 0,
	High                           = 1,
	VeryHigh                       = 2,
	EWeaponTextureMipsSetting_MAX  = 3
};


// Enum GbxWeapon.EWeaponAttachmentVisibilityType
enum class EWeaponAttachmentVisibilityType : uint8_t
{
	EWAVT_Both                     = 0,
	EWAVT_FirstPerson              = 1,
	EWAVT_ThirdPerson              = 2,
	EWAVT_MAX                      = 3
};


// Enum GbxWeapon.EWeaponEffectType
enum class EWeaponEffectType : uint8_t
{
	EWET_Default                   = 0,
	EWET_Use                       = 1,
	EWET_Charge                    = 2,
	EWET_Sight                     = 3,
	EWET_Charged                   = 4,
	EWET_Overcharged               = 5,
	EWET_Discharge                 = 6,
	EWET_EngineWeaponEffectType4   = 7,
	EWET_EngineWeaponEffectType5   = 8,
	EWET_EngineWeaponEffectType6   = 9,
	EWET_EngineWeaponEffectType7   = 10,
	EWET_EngineWeaponEffectType8   = 11,
	EWET_GameWeaponEffectType1     = 12,
	EWET_GameWeaponEffectType2     = 13,
	EWET_GameWeaponEffectType3     = 14,
	EWET_GameWeaponEffectType4     = 15,
	EWET_GameWeaponEffectType5     = 16,
	EWET_GameWeaponEffectType6     = 17,
	EWET_GameWeaponEffectType7     = 18,
	EWET_GameWeaponEffectType8     = 19,
	EWET_GameWeaponEffectType9     = 20,
	EWET_GameWeaponEffectType10    = 21,
	EWET_GameWeaponEffectType11    = 22,
	EWET_GameWeaponEffectType12    = 23,
	EWET_GameWeaponEffectType13    = 24,
	EWET_GameWeaponEffectType14    = 25,
	EWET_GameWeaponEffectType15    = 26,
	EWET_MAX                       = 27
};


// Enum GbxWeapon.EWeaponFireRateState
enum class EWeaponFireRateState : uint8_t
{
	None                           = 0,
	Accelerating                   = 1,
	Decelerating                   = 2,
	EWeaponFireRateState_MAX       = 3
};


// Enum GbxWeapon.EWeaponHeatComparisonOperatorType
enum class EWeaponHeatComparisonOperatorType : uint8_t
{
	LessThan                       = 0,
	LessThanOrEqual                = 1,
	GreaterThan                    = 2,
	GreaterThanOrEqual             = 3,
	EWeaponHeatComparisonOperatorType_MAX = 4
};


// Enum GbxWeapon.EWeaponShotDamageModifierType
enum class EWeaponShotDamageModifierType : uint8_t
{
	Scale                          = 0,
	Add                            = 1,
	SimpleScale                    = 2,
	EWeaponShotDamageModifierType_MAX = 3
};


// Enum GbxWeapon.ESimpleMotionInputHandler
enum class ESimpleMotionInputHandler : uint8_t
{
	None                           = 0,
	Set                            = 1,
	ESimpleMotionInputHandler_MAX  = 2
};


// Enum GbxWeapon.EWeaponTriggerFeedbackMode
enum class EWeaponTriggerFeedbackMode : uint8_t
{
	Off                            = 0,
	Feedback                       = 1,
	Weapon                         = 2,
	Vibration                      = 3,
	EWeaponTriggerFeedbackMode_MAX = 4
};


// Enum GbxWeapon.EWeaponTypeDataTableType
enum class EWeaponTypeDataTableType : uint8_t
{
	BaseWeaponBalance              = 0,
	ManufacturerDamageScale        = 1,
	EWeaponTypeDataTableType_MAX   = 2
};


// Enum GbxWeapon.EWeaponVisibleAmmoUpdateMethod
enum class EWeaponVisibleAmmoUpdateMethod : uint8_t
{
	Auto                           = 0,
	Manual                         = 1,
	AutoAdd                        = 2,
	AutoRemove                     = 3,
	EWeaponVisibleAmmoUpdateMethod_MAX = 4
};


// Enum GbxWeapon.EWeaponVisibleAmmoState
enum class EWeaponVisibleAmmoState : uint8_t
{
	LoadedAmmo                     = 0,
	PendingLoadedAmmo              = 1,
	Disabled                       = 2,
	EWeaponVisibleAmmoState_MAX    = 3
};


// Enum GbxWeapon.EWeaponZoomState
enum class EWeaponZoomState : uint8_t
{
	NotZoomed                      = 0,
	ZoomingIn                      = 1,
	Zoomed                         = 2,
	ZoomingOut                     = 3,
	EWeaponZoomState_MAX           = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GbxWeapon.WeaponAttachState
// 0x0018
struct FWeaponAttachState
{
	uint32_t                                           NetworkID;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Slot;                                                     // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	class APawn*                                       Instigator;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	EWeaponEquipType                                   EquipType;                                                // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	EWeaponPutDownType                                 PutDownType;                                              // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

// ScriptStruct GbxWeapon.WeaponUseModeState
// 0x0048
struct FWeaponUseModeState
{
	int                                                InputChannels;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PrimaryInputChannel;                                      // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bReloadNeeded;                                            // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	class UWeaponUseComponent*                         UseComponent;                                             // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWeaponAmmoComponent*                        AmmoComponent;                                            // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWeaponReloadComponent*                      ReloadComponent;                                          // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWeaponZoomComponent*                        ZoomComponent;                                            // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWeaponAudioProviderComponent*               AudioProviderComponent;                                   // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageModifierComponent*                    DamageModifierComponent;                                  // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UActorComponent*>                     Components;                                               // 0x0038(0x0010) (ExportObject, ZeroConstructor)
};

// ScriptStruct GbxWeapon.WeaponRegisterMaterialEffectData
// 0x00A8
struct FWeaponRegisterMaterialEffectData
{
	TEnumAsByte<EWeaponEffectType>                     Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       MaterialParamName;                                        // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWeaponAttachmentVisibilityType>       Visibility;                                               // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	int                                                UseModeBitmask;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Slot;                                                     // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EWeaponMaterialEffectBlendMode                     BlendMode;                                                // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPlayOnlyOnActiveSlot : 1;                                // 0x001E(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bLoop : 1;                                                // 0x001E(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bApplyAttribute : 1;                                      // 0x001E(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bScaleAttributeByValueOverTime : 1;                       // 0x001E(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bScaleAttributeByDeltaTime : 1;                           // 0x001E(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x1];                                       // 0x001F(0x0001) MISSED OFFSET
	struct FAttributeInitializationData                AttributeValue;                                           // 0x0020(0x0038) (Edit, BlueprintVisible)
	class UCurveFloat*                                 ValueOverTime;                                            // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Impulse;                                                  // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FAttributeInitializationData                Duration;                                                 // 0x0068(0x0038) (Edit, BlueprintVisible)
	float                                              DecayRate;                                                // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxWeapon.WeaponRegisterSkeletalControlData
// 0x0010
struct FWeaponRegisterSkeletalControlData
{
	TEnumAsByte<EWeaponEffectType>                     Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWeaponAttachmentVisibilityType>       Visibility;                                               // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPlayerOnly : 1;                                          // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0003(0x0005) MISSED OFFSET
	class UWeaponSkeletalControlBase*                  Control;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct GbxWeapon.WeaponRegisterAttachmentEffectData
// 0x0060
struct FWeaponRegisterAttachmentEffectData
{
	TEnumAsByte<EWeaponEffectType>                     Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UParticleSystem*                             Effect;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ConditionalEffect;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Socket;                                                   // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ScopedSocket;                                             // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWeaponAttachmentVisibilityType>       Visibility;                                               // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	int                                                UseModeBitmask;                                           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Slot;                                                     // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	int                                                Flags;                                                    // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeLocation;                                         // 0x003C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RelativeRotation;                                         // 0x0048(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              RelativeScale;                                            // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AutoActivateModeBitmask;                                  // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPlayOnlyOnActiveSlot : 1;                                // 0x005C(0x0001) (Deprecated)
	unsigned char                                      bAutoActivate : 1;                                        // 0x005C(0x0001) (Deprecated)
	unsigned char                                      bIgnoredByFXCoordinator : 1;                              // 0x005C(0x0001) (Deprecated)
	unsigned char                                      bHideWhenScoped : 1;                                      // 0x005C(0x0001) (Deprecated)
	unsigned char                                      UnknownData03[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
};

// ScriptStruct GbxWeapon.WeaponEffectQueryData
// 0x0010
struct FWeaponEffectQueryData
{
	TEnumAsByte<EWeaponEffectType>                     Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ID;                                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWeaponAttachmentVisibilityType>       Visibility;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                UseModeBitmask;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxWeapon.WeaponZoomState
// 0x0002
struct FWeaponZoomState
{
	EWeaponZoomState                                   State;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Level;                                                    // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxWeapon.WeaponRegisterTrinketAttachmentData
// 0x0038
struct FWeaponRegisterTrinketAttachmentData
{
	class USkeletalMesh*                               SkeletalMesh;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AnimInstanceClass;                                        // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachSocket;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeLocation;                                         // 0x0018(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RelativeRotation;                                         // 0x0024(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<EWeaponAttachmentVisibilityType>       Visibility;                                               // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct GbxWeapon.WeaponMaterialEffectData
// 0x0060
struct FWeaponMaterialEffectData
{
	struct FName                                       MaterialParamName;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWeaponAttachmentVisibilityType>       Visibility;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EWeaponMaterialEffectBlendMode                     BlendMode;                                                // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPlayOnlyOnActiveSlot : 1;                                // 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bLoop : 1;                                                // 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bApplyAttribute : 1;                                      // 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bScaleAttributeByValueOverTime : 1;                       // 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bScaleAttributeByDeltaTime : 1;                           // 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x5];                                       // 0x000B(0x0005) MISSED OFFSET
	struct FAttributeInitializationData                AttributeValue;                                           // 0x0010(0x0038) (Edit, BlueprintVisible)
	class UCurveFloat*                                 ValueOverTime;                                            // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Impulse;                                                  // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DecayRate;                                                // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxWeapon.LightProjectileParticlePoolData
// 0x0010
struct FLightProjectileParticlePoolData
{
	class UParticleSystemComponent*                    PSC;                                                      // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct GbxWeapon.ReplicatedLightProjectileInitializationData
// 0x00B8
struct FReplicatedLightProjectileInitializationData
{
	unsigned char                                      CreationID;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UClass*                                      DataBlueprint;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       StartLocation;                                            // 0x0010(0x000C)
	struct FVector_NetQuantize10                       EndLocation;                                              // 0x001C(0x000C)
	struct FRotator                                    StartRotationOverride;                                    // 0x0028(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class APawn*                                       Instigator;                                               // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Source;                                                   // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      TargetOffset;                                             // 0x0050(0x000C)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	class AActor*                                      DamageCauser;                                             // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	class UImpactData*                                 ImpactDataOverride;                                       // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              SpeedScale;                                               // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GravityScaleOverride;                                     // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           Flags;                                                    // 0x0078(0x0002) (ZeroConstructor, IsPlainOldData)
	EWeaponShotModifierType                            ModifierType;                                             // 0x007A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      FiringPatternID;                                          // 0x007B(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      FireSocketID;                                             // 0x007C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      RandomSeed;                                               // 0x007D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x007E(0x0002) MISSED OFFSET
	float                                              Damage;                                                   // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageSource;                                             // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              DamageRadius;                                             // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ImpactForce;                                              // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ModifierValue;                                            // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	class UParticleSystem*                             TracerFXOverride;                                         // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 BulletByAdditiveLayer;                                    // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxWeapon.LightProjectileAttachment
// 0x0040
struct FLightProjectileAttachment
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Component;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       Socket;                                                   // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      RelativeLocation;                                         // 0x0018(0x000C) (Edit, BlueprintVisible)
	struct FRotator                                    RelativeRotation;                                         // 0x0024(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   RelativeImpactNormal;                                     // 0x0030(0x000C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxWeapon.LightProjectileExplodeData
// 0x0010
struct FLightProjectileExplodeData
{
	bool                                               bHitActor;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector_NetQuantize                         Location;                                                 // 0x0004(0x000C)
};

// ScriptStruct GbxWeapon.LightProjectileImpactData
// 0x0010
struct FLightProjectileImpactData
{
	bool                                               bPlayEffect;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector_NetQuantize                         Location;                                                 // 0x0004(0x000C)
};

// ScriptStruct GbxWeapon.LightProjectileRingData
// 0x0034
struct FLightProjectileRingData
{
	unsigned char                                      UnknownData00[0x34];                                      // 0x0000(0x0034) MISSED OFFSET
};

// ScriptStruct GbxWeapon.LightProjectileInitializationData
// 0x0140
struct FLightProjectileInitializationData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UClass*                                      DataBlueprint;                                            // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // 0x0010(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     EndLocation;                                              // 0x001C(0x000C) (BlueprintVisible, IsPlainOldData)
	int                                                Flags;                                                    // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    StartRotationOverride;                                    // 0x002C(0x000C) (BlueprintVisible, IsPlainOldData)
	class APawn*                                       Instigator;                                               // 0x0038(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Source;                                                   // 0x0040(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // 0x0048(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetOffset;                                             // 0x0050(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              Damage;                                                   // 0x005C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // 0x0060(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0068(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageSource;                                             // 0x0070(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageRadius;                                             // 0x0078(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FForceSelection                             ImpactForce;                                              // 0x0080(0x0020) (BlueprintVisible)
	class UImpactData*                                 ImpactDataOverride;                                       // 0x00A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedScale;                                               // 0x00A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GravityScaleOverride;                                     // 0x00AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      FiringPatternID;                                          // 0x00B0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      FireSocketID;                                             // 0x00B1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x00B2(0x0006) MISSED OFFSET
	class UDamageModifierComponent*                    DamageModifierComp;                                       // 0x00B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FName                                       NameId;                                                   // 0x00C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EWeaponShotModifierType                            ModifierType;                                             // 0x00C8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x17];                                      // 0x00C9(0x0017) MISSED OFFSET
	float                                              ModifierValue;                                            // 0x00E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FCriticalHitDamageOverrides                 CriticalHitOverrides;                                     // 0x00E4(0x0008) (BlueprintVisible)
	struct FDamageGoreModifiers                        GoreModifiers;                                            // 0x00EC(0x0008) (BlueprintVisible)
	struct FLightProjectileRingData                    RingData;                                                 // 0x00F4(0x0034)
	unsigned char                                      UnknownData04[0x18];                                      // 0x0128(0x0018) MISSED OFFSET
};

// ScriptStruct GbxWeapon.LightProjectileTimedEvent
// 0x0010
struct FLightProjectileTimedEvent
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       CustomEvent;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxWeapon.LightProjectileAudioProperties
// 0x0040
struct FLightProjectileAudioProperties
{
	class UWwiseEvent*                                 BulletByEntrance;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 BulletByBody;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 BulletByExit;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BulletByMaxDistance;                                      // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BulletByChance;                                           // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TravellingAudioFxCollection;                              // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 TravellingAudio;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TravellingAudioComponentSize;                             // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UWwiseRtpc*                                  ListenerApproachSpeedRtpc;                                // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxWeapon.LightProjectileRingSubdivisionSettings
// 0x000C
struct FLightProjectileRingSubdivisionSettings
{
	int                                                MaxSubdivisions;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ELightProjectileSubdivisionMode                    ValueMode;                                                // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0004(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxWeapon.LightProjectileRingSettings
// 0x0030
struct FLightProjectileRingSettings
{
	float                                              InitialRadius;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                InitialProjectileCount;                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bMakeSolidRing;                                           // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseBodyMeshBoundsForCollision;                           // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	struct FLightProjectileRingSubdivisionSettings     Subdivide;                                                // 0x0010(0x000C) (Edit)
	bool                                               bSubdivide;                                               // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	struct FVector                                     RingAxis;                                                 // 0x0020(0x000C) (Edit, IsPlainOldData)
	bool                                               bUseRingAxis;                                             // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct GbxWeapon.LightBeamParticlePoolData
// 0x0010
struct FLightBeamParticlePoolData
{
	class UParticleSystemComponent*                    PSC;                                                      // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct GbxWeapon.LightBeamAttachment
// 0x0028
struct FLightBeamAttachment
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Component;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       Socket;                                                   // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      LocationOffset;                                           // 0x0018(0x000C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct GbxWeapon.ClientLightBeamState
// 0x00C8
struct FClientLightBeamState
{
	unsigned char                                      CreationID;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UClass*                                      DataBlueprint;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FLightBeamAttachment                        Source;                                                   // 0x0010(0x0028)
	struct FLightBeamAttachment                        Target;                                                   // 0x0038(0x0028)
	class APawn*                                       Instigator;                                               // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	class UImpactData*                                 ImpactDataOverride;                                       // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Spread;                                                   // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           Flags;                                                    // 0x007C(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x007E(0x0002) MISSED OFFSET
	class UParticleSystem*                             BeamFXOverride;                                           // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ViewerBeamFXOverride;                                     // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 BeamImpactAudioOverride;                                  // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              LifetimeOverride;                                         // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageSource;                                             // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              DamageRadius;                                             // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 DamageRampCurve;                                          // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              DamageRampScale;                                          // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ImpactForce;                                              // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxWeapon.LightBeamImpactFXTrackingData
// 0x0030
struct FLightBeamImpactFXTrackingData
{
	class USceneComponent*                             Component;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UPhysicalMaterial*                           PhysicalMaterial;                                         // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct GbxWeapon.LightBeamInitializationData
// 0x0128
struct FLightBeamInitializationData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UClass*                                      DataBlueprint;                                            // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLightBeamAttachment                        Source;                                                   // 0x0010(0x0028) (BlueprintVisible)
	struct FLightBeamAttachment                        Target;                                                   // 0x0038(0x0028) (BlueprintVisible)
	int                                                Flags;                                                    // 0x0060(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	class APawn*                                       Instigator;                                               // 0x0068(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // 0x0070(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x0078(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageIntervalOverride;                                   // 0x007C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DamageRampCurve;                                          // 0x0080(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageRampScale;                                          // 0x0088(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0090(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageSource;                                             // 0x0098(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageRadius;                                             // 0x00A0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	struct FForceSelection                             ImpactForce;                                              // 0x00A8(0x0020) (BlueprintVisible)
	class UImpactData*                                 ImpactDataOverride;                                       // 0x00C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       NameId;                                                   // 0x00D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Spread;                                                   // 0x00D8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LifetimeOverride;                                         // 0x00DC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EWeaponShotModifierType                            ModifierType;                                             // 0x00E0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x17];                                      // 0x00E1(0x0017) MISSED OFFSET
	float                                              ModifierValue;                                            // 0x00F8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FCriticalHitDamageOverrides                 CriticalHitOverrides;                                     // 0x00FC(0x0008) (BlueprintVisible)
	struct FDamageGoreModifiers                        GoreModifiers;                                            // 0x0104(0x0008) (BlueprintVisible)
	unsigned char                                      UnknownData05[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	class ULightBeam*                                  ParentBeam;                                               // 0x0110(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x10];                                      // 0x0118(0x0010) MISSED OFFSET
};

// ScriptStruct GbxWeapon.WeaponHeatEventNotify
// 0x0010
struct FWeaponHeatEventNotify
{
	float                                              Threshold;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EWeaponHeatComparisonOperatorType                  Comparision;                                              // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FName                                       EventName;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxWeapon.WeaponZoomLevel
// 0x0010
struct FWeaponZoomLevel
{
	float                                              Duration;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FOVScale;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FOVLerpPct;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ViewModelFOVScale;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxWeapon.ConditionalActionInfo
// 0x0018
struct FConditionalActionInfo
{
	class UGbxCondition*                               Condition;                                                // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      Action;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EGbxActionNetMode                                  ActionNetMode;                                            // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct GbxWeapon.ConditionalWeaponActionSet
// 0x0018
struct FConditionalWeaponActionSet
{
	class UGbxCondition*                               Condition;                                                // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FConditionalActionInfo>              ConditionalActions;                                       // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GbxWeapon.BodyWeaponActionInfo
// 0x0030
struct FBodyWeaponActionInfo
{
	TEnumAsByte<EWeaponActionType>                     WeaponAction;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UGbxCondition*                               Condition;                                                // 0x0008(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FConditionalWeaponActionSet>         ConditionalWeaponActions;                                 // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<struct FConditionalActionInfo>              ConditionalActions;                                       // 0x0020(0x0010) (ZeroConstructor, Deprecated)
};

// ScriptStruct GbxWeapon.FiringPatternSample
// 0x001C
struct FFiringPatternSample
{
	struct FRotator                                    StartRotation;                                            // 0x0000(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    EndRotation;                                              // 0x000C(0x000C) (Edit, IsPlainOldData)
	bool                                               bUseEndRotation;                                          // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseID;                                                   // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ID;                                                       // 0x001A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
};

// ScriptStruct GbxWeapon.GbxTrajectometerTraceData
// 0x0020
struct FGbxTrajectometerTraceData
{
	TEnumAsByte<ECollisionChannel>                     Channel;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EGbxTrajectoryTraceShape                           Shape;                                                    // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              ExtentX;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExtentY;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExtentZ;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct GbxWeapon.LightBeamQueryData
// 0x0028
struct FLightBeamQueryData
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ELightBeamQueryActorType                           ActorType;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class AActor*                                      OtherActor;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BeamClass;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       NameId;                                                   // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxWeapon.LightProjectileQueryData
// 0x0020
struct FLightProjectileQueryData
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ELightProjectileQueryActorType                     ActorType;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UClass*                                      ProjectileClass;                                          // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       NameId;                                                   // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxWeapon.ThrowProjectileAsyncRequest
// 0x0188
struct FThrowProjectileAsyncRequest
{
	class UClass*                                      Class;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Source;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceSocket;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetSocket;                                             // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetOffset;                                             // 0x0028(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              MaxPrediction;                                            // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnglePercent;                                             // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    DirectionOffset;                                          // 0x0040(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                InstanceCount;                                            // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InstanceDelay;                                            // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FGbxExposeOnSpawnValueCache                 ExposeOnSpawnCache;                                       // 0x0058(0x0110) (BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             Spawned;                                                  // 0x0168(0x0014) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             Failed;                                                   // 0x0178(0x0014) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
};

// ScriptStruct GbxWeapon.PredictProjectilePathAsyncRequest
// 0x0020 (0x0080 - 0x0060)
struct FPredictProjectilePathAsyncRequest : public FPredictProjectilePathParams
{
	EGbxTraceAsyncMode                                 TraceMode;                                                // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectTypeQuery>                      ObjectType;                                               // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0062(0x0006) MISSED OFFSET
	struct FName                                       TraceName;                                                // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Finished;                                                 // 0x0070(0x0014) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
};

// ScriptStruct GbxWeapon.WeaponEffectAttachment
// 0x0060
struct FWeaponEffectAttachment
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
	class UParticleSystem*                             Effect;                                                   // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      ConditionalEffect;                                        // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    PSC;                                                      // 0x0058(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct GbxWeapon.WeaponMaterialEffectInstance
// 0x0068
struct FWeaponMaterialEffectInstance
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
	class UCurveFloat*                                 ValueOverTime;                                            // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0050(0x0018) MISSED OFFSET
};

// ScriptStruct GbxWeapon.WeaponSkeletalControlInstance
// 0x0038
struct FWeaponSkeletalControlInstance
{
	class UWeaponSkeletalControlBase*                  Data;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct GbxWeapon.WeaponTrinketAttachment
// 0x0040
struct FWeaponTrinketAttachment
{
	class UGbxSkeletalMeshComponent*                   MeshComponent;                                            // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMesh*                               SkeletalMesh;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      AnimInstanceClass;                                        // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0018(0x0028) MISSED OFFSET
};

// ScriptStruct GbxWeapon.WeaponChargeAttributeEffect
// 0x0060
struct FWeaponChargeAttributeEffect
{
	int                                                StatesBitmask;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyToInstigator;                                       // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FAttributeEffectData                        AttributeEffect;                                          // 0x0008(0x0048) (Edit)
	struct FGbxAttributeModifierHandle                 AttributeModifier;                                        // 0x0050(0x0010) (Transient)
};

// ScriptStruct GbxWeapon.WeaponChargeEventNotify
// 0x0010
struct FWeaponChargeEventNotify
{
	float                                              Threshold;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EWeaponChargeComparisonOperatorType                Comparision;                                              // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EWeaponChargeEventType                             EVENTTYPE;                                                // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FName                                       EventName;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxWeapon.WeaponEffectTypeName
// 0x0020
struct FWeaponEffectTypeName
{
	TEnumAsByte<EWeaponEffectType>                     Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      Tooltip;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxWeapon.WeaponActionTypeName
// 0x0020
struct FWeaponActionTypeName
{
	TEnumAsByte<EWeaponActionType>                     Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      Tooltip;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxWeapon.LightProjectileFlagName
// 0x0020
struct FLightProjectileFlagName
{
	ELightProjectileFlag                               Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      Tooltip;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxWeapon.LightBeamFlagName
// 0x0020
struct FLightBeamFlagName
{
	ELightBeamFlag                                     Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      Tooltip;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxWeapon.WeaponShotModifierTypeName
// 0x0020
struct FWeaponShotModifierTypeName
{
	EWeaponShotModifierType                            Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      Tooltip;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxWeapon.WeaponTriggerFeedbackData
// 0x0008
struct FWeaponTriggerFeedbackData
{
	float                                              Position;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Force;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxWeapon.WeaponTriggerWeaponData
// 0x000C
struct FWeaponTriggerWeaponData
{
	float                                              StartPosition;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndPosition;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Force;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxWeapon.WeaponTriggerVibrationData
// 0x000C
struct FWeaponTriggerVibrationData
{
	float                                              Position;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Frequency;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Amplitude;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxWeapon.WeaponTriggerFireThreasholdData
// 0x0004
struct FWeaponTriggerFireThreasholdData
{
	float                                              Position;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxWeapon.WeaponVisibleAmmoEffectData
// 0x0040
struct FWeaponVisibleAmmoEffectData
{
	class UParticleSystem*                             Effect;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  RelativeTransform;                                        // 0x0010(0x0030) (Edit, IsPlainOldData)
};

// ScriptStruct GbxWeapon.WeaponShotModifierData
// 0x0048
struct FWeaponShotModifierData
{
	EWeaponShotModifierType                            ModifierType;                                             // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Damage;                                                   // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UImpactData*                                 ImpactData;                                               // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ProjectilesPerShot;                                       // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FCriticalHitDamageOverrides                 CriticalHitOverrides;                                     // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly)
	float                                              ModifierValue;                                            // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FDamageGoreModifiers                        GoreModifiers;                                            // 0x002C(0x0008) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x14];                                      // 0x0034(0x0014) MISSED OFFSET
};

// ScriptStruct GbxWeapon.LightBeamTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FLightBeamTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct GbxWeapon.PostLightBeamTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FPostLightBeamTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct GbxWeapon.LightProjectileTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FLightProjectileTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct GbxWeapon.LightProjectileBatchTickFunction
// 0x0010 (0x0060 - 0x0050)
struct FLightProjectileBatchTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
};

// ScriptStruct GbxWeapon.PostLightProjectileTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FPostLightProjectileTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct GbxWeapon.WeaponSkeletalControlState
// 0x0028
struct FWeaponSkeletalControlState
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

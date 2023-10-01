#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Basic.hpp"
#include "RFTA_CoreUObject_classes.hpp"
#include "RFTA_OnlineSubsystemUtils_classes.hpp"
#include "RFTA_Engine_classes.hpp"
#include "RFTA_UMG_classes.hpp"
#include "RFTA_MovieScene_classes.hpp"
#include "RFTA_GunfireTechRequirements_classes.hpp"
#include "RFTA_Slate_classes.hpp"
#include "RFTA_SlateCore_classes.hpp"
#include "RFTA_AnimGraphRuntime_classes.hpp"
#include "RFTA_AIModule_classes.hpp"
#include "RFTA_NavigationSystem_classes.hpp"
#include "RFTA_InputCore_classes.hpp"
#include "RFTA_GunfireSaveSystem_classes.hpp"
#include "RFTA_MovieSceneTracks_classes.hpp"
#include "RFTA_CinematicCamera_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GunfireRuntime.EAffiliation
enum class EAffiliation : uint8_t
{
	SuperFriendly                  = 0,
	Friendly                       = 1,
	Neutral                        = 2,
	Hostile                        = 3,
	All                            = 4,
	EAffiliation_MAX               = 5
};


// Enum GunfireRuntime.EAttackType
enum class EAttackType : uint8_t
{
	AttackType_None                = 0,
	AttackType_Melee               = 1,
	AttackType_Ranged              = 2,
	AttackType_MAX                 = 3
};


// Enum GunfireRuntime.EWoundedState
enum class EWoundedState : uint8_t
{
	None                           = 0,
	Wounded                        = 1,
	Reviving                       = 2,
	EWoundedState_MAX              = 3
};


// Enum GunfireRuntime.EInputDevice
enum class EInputDevice : uint8_t
{
	None                           = 0,
	KeyboardAndMouse               = 1,
	Gamepad                        = 2,
	Touch                          = 3,
	EInputDevice_MAX               = 4
};


// Enum GunfireRuntime.ButtonEvent
enum class EButtonEvent : uint8_t
{
	None                           = 0,
	Pressed                        = 1,
	Released                       = 2,
	ButtonEvent_MAX                = 3
};


// Enum GunfireRuntime.EQuestResult
enum class EQuestResult : uint8_t
{
	Success                        = 0,
	Failure                        = 1,
	EQuestResult_MAX               = 2
};


// Enum GunfireRuntime.EMusicIntensity
enum class EMusicIntensity : uint8_t
{
	Ambient                        = 0,
	Tension                        = 1,
	CombatLow                      = 2,
	CombatMid                      = 3,
	CombatHigh                     = 4,
	EMusicIntensity_MAX            = 5
};


// Enum GunfireRuntime.EItemNotifyReason
enum class EItemNotifyReason : uint8_t
{
	Default                        = 0,
	PickedUp                       = 1,
	Crafted                        = 2,
	Reward                         = 3,
	AccountKeeping                 = 4,
	Custom1                        = 5,
	Custom2                        = 6,
	Custom3                        = 7,
	Custom4                        = 8,
	EItemNotifyReason_MAX          = 9
};


// Enum GunfireRuntime.EHudInteractiveType
enum class EHudInteractiveType : uint8_t
{
	None                           = 0,
	InteractiveState               = 1,
	InteractiveMashState           = 2,
	Item                           = 3,
	Revive                         = 4,
	EHudInteractiveType_MAX        = 5
};


// Enum GunfireRuntime.ESpawnType
enum class ESpawnType : uint8_t
{
	All                            = 0,
	Actor                          = 1,
	Item                           = 2,
	Character                      = 3,
	UserDefined1                   = 4,
	UserDefined2                   = 5,
	UserDefined3                   = 6,
	UserDefined4                   = 7,
	UserDefined5                   = 8,
	EncounterParams                = 9,
	ESpawnType_MAX                 = 10
};


// Enum GunfireRuntime.EAchievementUpdateType
enum class EAchievementUpdateType : uint8_t
{
	Increment                      = 0,
	Set                            = 1,
	EAchievementUpdateType_MAX     = 2
};


// Enum GunfireRuntime.EActorContext
enum class EActorContext : uint8_t
{
	Actor                          = 0,
	Owner                          = 1,
	Target                         = 2,
	Weapon                         = 3,
	EActorContext_MAX              = 4
};


// Enum GunfireRuntime.EActorModifierScope
enum class EActorModifierScope : uint8_t
{
	StatsOnly                      = 0,
	Server                         = 1,
	ServerClient                   = 2,
	EActorModifierScope_MAX        = 3
};


// Enum GunfireRuntime.EAdvButtonType
enum class EAdvButtonType : uint8_t
{
	Normal                         = 0,
	radio                          = 1,
	Push                           = 2,
	EAdvButtonType_MAX             = 3
};


// Enum GunfireRuntime.EAwarenessSignal
enum class EAwarenessSignal : uint8_t
{
	Sound                          = 0,
	Light                          = 1,
	EAwarenessSignal_MAX           = 2
};


// Enum GunfireRuntime.EConvergeToType
enum class EConvergeToType : uint8_t
{
	TacticalPoint                  = 0,
	BlackboardKey                  = 1,
	LocalPlayer                    = 2,
	EConvergeToType_MAX            = 3
};


// Enum GunfireRuntime.EFlockingStyle
enum class EFlockingStyle : uint8_t
{
	ClassicMelee                   = 0,
	Slots                          = 1,
	EFlockingStyle_MAX             = 2
};


// Enum GunfireRuntime.EIntensityState
enum class EIntensityState : uint8_t
{
	BuildUp                        = 0,
	Peak                           = 1,
	PeakSustain                    = 2,
	Relax                          = 3,
	BuildUpSustain                 = 4,
	EIntensityState_MAX            = 5
};


// Enum GunfireRuntime.EIntensityEvent
enum class EIntensityEvent : uint8_t
{
	Hit                            = 0,
	Wounded                        = 1,
	Death                          = 2,
	EnemyHit                       = 3,
	EnemyDeath                     = 4,
	EIntensityEvent_MAX            = 5
};


// Enum GunfireRuntime.EAIDistanceType
enum class EAIDistanceType : uint8_t
{
	XYZ                            = 0,
	XY                             = 1,
	Z                              = 2,
	EAIDistanceType_MAX            = 3
};


// Enum GunfireRuntime.EJumpType
enum class EJumpType : uint8_t
{
	NavLink                        = 0,
	ToTarget                       = 1,
	ToTargetKeepFacing             = 2,
	EJumpType_MAX                  = 3
};


// Enum GunfireRuntime.ENavAreaFlag
enum class ENavAreaFlag : uint8_t
{
	Default                        = 0,
	Jump                           = 1,
	Vault                          = 2,
	Fall                           = 3,
	VaultOn                        = 4,
	Custom1                        = 5,
	Custom2                        = 6,
	Custom3                        = 7,
	Custom4                        = 8,
	ENavAreaFlag_MAX               = 9
};


// Enum GunfireRuntime.ENodePathStatus
enum class ENodePathStatus : uint8_t
{
	Idle                           = 0,
	Pathing                        = 1,
	Waiting                        = 2,
	Complete                       = 3,
	DontCare                       = 4,
	ENodePathStatus_MAX            = 5
};


// Enum GunfireRuntime.EAwarenessState
enum class EAwarenessState : uint8_t
{
	None                           = 0,
	Alert                          = 1,
	Aware                          = 2,
	EAwarenessState_MAX            = 3
};


// Enum GunfireRuntime.EPathState
enum class EPathState : uint8_t
{
	DontCare                       = 0,
	NotValid                       = 1,
	Valid                          = 2,
	EPathState_MAX                 = 3
};


// Enum GunfireRuntime.EVisState
enum class EVisState : uint8_t
{
	Unknown                        = 0,
	DontCare                       = 1,
	Visible                        = 2,
	NotVisible                     = 3,
	LostSight                      = 4,
	EVisState_MAX                  = 5
};


// Enum GunfireRuntime.ECombatSize
enum class ECombatSize : uint8_t
{
	Normal                         = 0,
	Big                            = 1,
	ECombatSize_MAX                = 2
};


// Enum GunfireRuntime.EAITacticalPointType
enum class EAITacticalPointType : uint8_t
{
	Invalid                        = 0,
	LowCover                       = 1,
	CornerCoverLeft                = 2,
	CornerCoverRight               = 3,
	Dynamic                        = 4,
	Custom                         = 5,
	EAITacticalPointType_MAX       = 6
};


// Enum GunfireRuntime.EAmbientSpawnState
enum class EAmbientSpawnState : uint8_t
{
	Unloaded                       = 0,
	Loading                        = 1,
	Loaded                         = 2,
	Spawning                       = 3,
	Spawned                        = 4,
	EAmbientSpawnState_MAX         = 5
};


// Enum GunfireRuntime.EAngleComponent
enum class EAngleComponent : uint8_t
{
	Yaw                            = 0,
	Pitch                          = 1,
	Roll                           = 2,
	EAngleComponent_MAX            = 3
};


// Enum GunfireRuntime.EAngleRef
enum class EAngleRef : uint8_t
{
	Heading                        = 0,
	MoveDir                        = 1,
	InputDir                       = 2,
	ToTargetDir                    = 3,
	TacticalPointDir               = 4,
	CameraDir                      = 5,
	WorldUp                        = 6,
	EAngleRef_MAX                  = 7
};


// Enum GunfireRuntime.ENotifyOptimizationType
enum class ENotifyOptimizationType : uint8_t
{
	None                           = 0,
	Queued                         = 1,
	ENotifyOptimizationType_MAX    = 2
};


// Enum GunfireRuntime.EAwarenessSource
enum class EAwarenessSource : uint8_t
{
	Us                             = 0,
	Target                         = 1,
	EAwarenessSource_MAX           = 2
};


// Enum GunfireRuntime.EAnimImpactTraceDirection
enum class EAnimImpactTraceDirection : uint8_t
{
	Down                           = 0,
	Forward                        = 1,
	EAnimImpactTraceDirection_MAX  = 2
};


// Enum GunfireRuntime.EAnimImpactType
enum class EAnimImpactType : uint8_t
{
	Foot                           = 0,
	FootSprint                     = 1,
	Hand                           = 2,
	HandSprint                     = 3,
	Land                           = 4,
	Body                           = 5,
	Slam                           = 6,
	EAnimImpactType_MAX            = 7
};


// Enum GunfireRuntime.EAssetCachePreloadMethod
enum class EAssetCachePreloadMethod : uint8_t
{
	OnGameInstanceInit             = 0,
	OnPostLogin                    = 1,
	OnPostLoad                     = 2,
	Blueprint                      = 3,
	EAssetCachePreloadMethod_MAX   = 4
};


// Enum GunfireRuntime.EBreakableState
enum class EBreakableState : uint8_t
{
	Unbroken                       = 0,
	Breaking                       = 1,
	Broken                         = 2,
	EBreakableState_MAX            = 3
};


// Enum GunfireRuntime.ButtonState
enum class EButtonState : uint8_t
{
	Pressed                        = 0,
	Released                       = 1,
	Down                           = 2,
	Up                             = 3,
	ButtonState_MAX                = 4
};


// Enum GunfireRuntime.ECincematicMode
enum class ECincematicMode : uint8_t
{
	None                           = 0,
	Complete                       = 1,
	ECincematicMode_MAX            = 2
};


// Enum GunfireRuntime.CharacterFacing
enum class ECharacterFacing : uint8_t
{
	MoveDir                        = 0,
	Camera                         = 1,
	Target                         = 2,
	TargetOnly                     = 3,
	TargetOnStart                  = 4,
	ImpactDirOnStart               = 5,
	MoveDirOnStart                 = 6,
	TargetOrMoveDirOnStart         = 7,
	TargetOrCameraOnStart          = 8,
	RootRotation                   = 9,
	TargetOrNone                   = 10,
	Fixed                          = 11,
	MoveDirOnStartThenTarget       = 12,
	NavLinkDirection               = 13,
	Velocity                       = 14,
	DamageOwner                    = 15,
	DamageOwnerOnStart             = 16,
	CameraOnStart                  = 17,
	Current                        = 18,
	CharacterFacing_MAX            = 19
};


// Enum GunfireRuntime.EDecalReceiverType
enum class EDecalReceiverType : uint8_t
{
	Inherit                        = 0,
	Enabled                        = 1,
	Disabled                       = 2,
	EDecalReceiverType_MAX         = 3
};


// Enum GunfireRuntime.ENavigationType
enum class ENavigationType : uint8_t
{
	Unknown                        = 0,
	Ground                         = 1,
	Air                            = 2,
	Water                          = 3,
	ENavigationType_MAX            = 4
};


// Enum GunfireRuntime.ERootMotionVelocityMethod
enum class ERootMotionVelocityMethod : uint8_t
{
	RootMotionOnly                 = 0,
	IgnoreRootMotion               = 1,
	AccumulativeRootMotion         = 2,
	ERootMotionVelocityMethod_MAX  = 3
};


// Enum GunfireRuntime.ESpawnDelayType
enum class ESpawnDelayType : uint8_t
{
	DelayedSpawn                   = 0,
	DelayedTriggers                = 1,
	DelayedSpawnAndTriggers        = 2,
	Disabled                       = 3,
	ESpawnDelayType_MAX            = 4
};


// Enum GunfireRuntime.EChargeableActivateType
enum class EChargeableActivateType : uint8_t
{
	Press                          = 0,
	Hold                           = 1,
	EChargeableActivateType_MAX    = 2
};


// Enum GunfireRuntime.EChargeState
enum class EChargeState : uint8_t
{
	None                           = 0,
	Charging                       = 1,
	Success                        = 2,
	Fail                           = 3,
	EChargeState_MAX               = 4
};


// Enum GunfireRuntime.ECustomCollisionEnabled
enum class ECustomCollisionEnabled : uint8_t
{
	Enabled                        = 0,
	Disabled                       = 1,
	ECustomCollisionEnabled_MAX    = 2
};


// Enum GunfireRuntime.EFireOutExec
enum class EFireOutExec : uint8_t
{
	Hit                            = 0,
	Destroyed                      = 1,
	EFireOutExec_MAX               = 2
};


// Enum GunfireRuntime.EAutoArcType
enum class EAutoArcType : uint8_t
{
	None                           = 0,
	ArcHeight                      = 1,
	ArcSpeed                       = 2,
	EAutoArcType_MAX               = 3
};


// Enum GunfireRuntime.CooldownScope
enum class ECooldownScope : uint8_t
{
	Local                          = 0,
	Target                         = 1,
	CooldownScope_MAX              = 2
};


// Enum GunfireRuntime.ERecipeType
enum class ERecipeType : uint8_t
{
	Craft                          = 0,
	Decompose                      = 1,
	Upgrade                        = 2,
	Infusion                       = 3,
	ERecipeType_MAX                = 4
};


// Enum GunfireRuntime.EInvincibleHandlingMethod
enum class EInvincibleHandlingMethod : uint8_t
{
	DamageFails                    = 0,
	ZeroDamage                     = 1,
	EInvincibleHandlingMethod_MAX  = 2
};


// Enum GunfireRuntime.EDeadReason
enum class EDeadReason : uint8_t
{
	Damage                         = 0,
	Fall                           = 1,
	GameSpecific1                  = 2,
	EDeadReason_MAX                = 3
};


// Enum GunfireRuntime.EDamageNumbersVisibility
enum class EDamageNumbersVisibility : uint8_t
{
	Hidden                         = 0,
	Shown                          = 1,
	IgnoresPower                   = 2,
	EDamageNumbersVisibility_MAX   = 3
};


// Enum GunfireRuntime.EDialogType
enum class EDialogType : uint8_t
{
	Default                        = 0,
	DialogInterrupt                = 1,
	DialogOption                   = 2,
	EDialogType_MAX                = 3
};


// Enum GunfireRuntime.EEncounterFlags
enum class EEncounterFlags : uint8_t
{
	ShuffleSpawns                  = 0,
	EEncounterFlags_MAX            = 1
};


// Enum GunfireRuntime.EEquipAttachType
enum class EEquipAttachType : uint8_t
{
	Active                         = 0,
	Inactive                       = 1,
	Stowed                         = 2,
	EEquipAttachType_MAX           = 3
};


// Enum GunfireRuntime.EActionType
enum class EActionType : uint8_t
{
	Dialog                         = 0,
	Action                         = 1,
	Flow                           = 2,
	Trigger                        = 3,
	EActionType_MAX                = 4
};


// Enum GunfireRuntime.EDialogSpeakerGender
enum class EDialogSpeakerGender : uint8_t
{
	Male                           = 0,
	Female                         = 1,
	EDialogSpeakerGender_MAX       = 2
};


// Enum GunfireRuntime.EQuestSwitchResult
enum class EQuestSwitchResult : uint8_t
{
	QuestNotStarted                = 0,
	QuestInProgress                = 1,
	QuestCompleteSuccess           = 2,
	QuestCompleteFailure           = 3,
	All                            = 4,
	EQuestSwitchResult_MAX         = 5
};


// Enum GunfireRuntime.EStageAction
enum class EStageAction : uint8_t
{
	Push                           = 0,
	Set                            = 1,
	Pop                            = 2,
	EStageAction_MAX               = 3
};


// Enum GunfireRuntime.EFallConditionCheck
enum class EFallConditionCheck : uint8_t
{
	IsNotFalling                   = 0,
	IsSafeFall                     = 1,
	IsUnsafeFall                   = 2,
	IsFatalFall                    = 3,
	IsUnsafeOrFatalFall            = 4,
	EFallConditionCheck_MAX        = 5
};


// Enum GunfireRuntime.EAutoFocusTraversal
enum class EAutoFocusTraversal : uint8_t
{
	None                           = 0,
	Auto                           = 1,
	EAutoFocusTraversal_MAX        = 2
};


// Enum GunfireRuntime.EFadeDirection
enum class EFadeDirection : uint8_t
{
	FD_In                          = 0,
	FD_Out                         = 1,
	FD_MAX                         = 2
};


// Enum GunfireRuntime.EInputConflictGroup
enum class EInputConflictGroup : uint8_t
{
	Gameplay                       = 0,
	UI                             = 1,
	EInputConflictGroup_MAX        = 2
};


// Enum GunfireRuntime.ESettingsPlatforms
enum class ESettingsPlatforms : uint8_t
{
	PC                             = 0,
	XboxOne                        = 1,
	XboxOneX                       = 2,
	PS4                            = 3,
	PS4Pro                         = 4,
	PCExcludingEpic                = 5,
	XboxOneSeries                  = 6,
	PS5                            = 7,
	ESettingsPlatforms_MAX         = 8
};


// Enum GunfireRuntime.ELocalizationLanguage
enum class ELocalizationLanguage : uint8_t
{
	en                             = 0,
	es                             = 1,
	de                             = 2,
	fr                             = 3,
	ja                             = 4,
	ko                             = 5,
	zh                             = 6,
	ar                             = 7,
	fa                             = 8,
	it                             = 9,
	pl                             = 10,
	ru                             = 11,
	pt                             = 12,
	ELocalizationLanguage_MAX      = 13
};


// Enum GunfireRuntime.EBuildType
enum class EBuildType : uint8_t
{
	Debug                          = 0,
	Development                    = 1,
	Test                           = 2,
	Shipping                       = 3,
	EBuildType_MAX                 = 4
};


// Enum GunfireRuntime.EPlatform
enum class EPlatform : uint8_t
{
	Unknown                        = 0,
	PC                             = 1,
	XboxOne                        = 2,
	XboxOneS                       = 3,
	XboxOneX                       = 4,
	PS4                            = 5,
	PS4Pro                         = 6,
	PS5                            = 7,
	XboxSeriesS                    = 8,
	XboxSeriesX                    = 9,
	EPlatform_MAX                  = 10
};


// Enum GunfireRuntime.ELevelContextFallback
enum class ELevelContextFallback : uint8_t
{
	Instigator                     = 0,
	Root                           = 1,
	WorldContext                   = 2,
	Owner                          = 3,
	ELevelContextFallback_MAX      = 4
};


// Enum GunfireRuntime.EMsgCategory
enum class EMsgCategory : uint8_t
{
	Loading                        = 0,
	PreRuntime                     = 1,
	Runtime                        = 2,
	EMsgCategory_MAX               = 3
};


// Enum GunfireRuntime.EMsgSeverity
enum class EMsgSeverity : uint8_t
{
	Fatal                          = 0,
	Error                          = 1,
	Warning                        = 2,
	Info                           = 3,
	EMsgSeverity_MAX               = 4
};


// Enum GunfireRuntime.ECullCategory
enum class ECullCategory : uint8_t
{
	Tracers                        = 0,
	SoundsAttached                 = 1,
	EmitterAttached                = 2,
	EmitterAtLocation              = 3,
	ImpactEffect                   = 4,
	Decal                          = 5,
	ECullCategory_MAX              = 6
};


// Enum GunfireRuntime.EAmbientPriorityPolicy
enum class EAmbientPriorityPolicy : uint8_t
{
	FullyNested                    = 0,
	ManualLevelDepth               = 1,
	EAmbientPriorityPolicy_MAX     = 2
};


// Enum GunfireRuntime.ERedloadInteractiveMode
enum class ERedloadInteractiveMode : uint8_t
{
	Actors                         = 0,
	MashableActors                 = 1,
	Items                          = 2,
	Revive                         = 3,
	ERedloadInteractiveMode_MAX    = 4
};


// Enum GunfireRuntime.EHitPauseMode
enum class EHitPauseMode : uint8_t
{
	AnyDamage                      = 0,
	DamagedCharactersOnly          = 1,
	EHitPauseMode_MAX              = 2
};


// Enum GunfireRuntime.EHeuristicBoundsShape
enum class EHeuristicBoundsShape : uint8_t
{
	Disc                           = 0,
	Box                            = 1,
	EHeuristicBoundsShape_MAX      = 2
};


// Enum GunfireRuntime.EHeuristicBoundsTraceResult
enum class EHeuristicBoundsTraceResult : uint8_t
{
	Fail_OutOfRange                = 0,
	Fail_OutsideFoV                = 1,
	Fail_OutsideBounds             = 2,
	Success                        = 3,
	EHeuristicBoundsTraceResult_MAX = 4
};


// Enum GunfireRuntime.EHeuristicBoundsPanelAlignment
enum class EHeuristicBoundsPanelAlignment : uint8_t
{
	TopLeft                        = 0,
	Top                            = 1,
	TopRight                       = 2,
	Right                          = 3,
	BottomRight                    = 4,
	Bottom                         = 5,
	BottomLeft                     = 6,
	Left                           = 7,
	Center                         = 8,
	EHeuristicBoundsPanelAlignment_MAX = 9
};


// Enum GunfireRuntime.EHitReactionInsertRule
enum class EHitReactionInsertRule : uint8_t
{
	Above                          = 0,
	Below                          = 1,
	EHitReactionInsertRule_MAX     = 2
};


// Enum GunfireRuntime.EHitResult
enum class EHitResult : uint8_t
{
	Hit                            = 0,
	Evade                          = 1,
	Block                          = 2,
	EHitResult_MAX                 = 3
};


// Enum GunfireRuntime.HitReactionType
enum class EHitReactionType : uint8_t
{
	Flinch                         = 0,
	Impact                         = 1,
	HitLocationDestroyed           = 2,
	KnockBack                      = 3,
	Death                          = 4,
	DeathKnockBack                 = 5,
	None                           = 6,
	HitReactionType_MAX            = 7
};


// Enum GunfireRuntime.EImpactEffectEvent
enum class EImpactEffectEvent : uint8_t
{
	Animation_Blocking             = 0,
	Animation_Water                = 1,
	Animation_Editor               = 2,
	Melee_Environment              = 3,
	Melee_Impact                   = 4,
	Ragdoll                        = 5,
	Combat_Block                   = 6,
	Combat_Trace                   = 7,
	Combat_Projectile              = 8,
	Combat_AOE                     = 9,
	EImpactEffectEvent_MAX         = 10
};


// Enum GunfireRuntime.InputFilterMethod
enum class EInputFilterMethod : uint8_t
{
	Both                           = 0,
	ControllerOnly                 = 1,
	KeyboardOnly                   = 2,
	InputFilterMethod_MAX          = 3
};


// Enum GunfireRuntime.ShiftButtonType
enum class EShiftButtonType : uint8_t
{
	ShiftKey                       = 0,
	MultiKey                       = 1,
	ShiftButtonType_MAX            = 2
};


// Enum GunfireRuntime.EInspectableConditionCheck
enum class EInspectableConditionCheck : uint8_t
{
	IsOccupied                     = 0,
	IsInTransition                 = 1,
	IsInteractingActorLocal        = 2,
	EInspectableConditionCheck_MAX = 3
};


// Enum GunfireRuntime.EInspectStatType
enum class EInspectStatType : uint8_t
{
	Standard                       = 0,
	Modifier                       = 1,
	PerSecond                      = 2,
	Scalar                         = 3,
	Seconds                        = 4,
	Requirement                    = 5,
	Affinity                       = 6,
	Custom                         = 7,
	Bar                            = 8,
	EInspectStatType_MAX           = 9
};


// Enum GunfireRuntime.EInteractiveResult
enum class EInteractiveResult : uint8_t
{
	NoResult                       = 0,
	Success                        = 1,
	Failure                        = 2,
	EInteractiveResult_MAX         = 3
};


// Enum GunfireRuntime.EAnchorFaceOtherMethod
enum class EAnchorFaceOtherMethod : uint8_t
{
	Instant                        = 0,
	InstantTeleportPhysics         = 1,
	UseConvergeTime                = 2,
	EAnchorFaceOtherMethod_MAX     = 3
};


// Enum GunfireRuntime.EInteractArcValidationType
enum class EInteractArcValidationType : uint8_t
{
	Ignore                         = 0,
	AngleOnly                      = 1,
	AngleAndPosition               = 2,
	FacingOnly                     = 3,
	PositionOnly                   = 4,
	FacingAndPosition              = 5,
	EInteractArcValidationType_MAX = 6
};


// Enum GunfireRuntime.EInteractiveType
enum class EInteractiveType : uint8_t
{
	Info                           = 0,
	Action                         = 1,
	Event                          = 2,
	EInteractiveType_MAX           = 3
};


// Enum GunfireRuntime.EInteractiveInitiator
enum class EInteractiveInitiator : uint8_t
{
	Us                             = 0,
	Other                          = 1,
	EInteractiveInitiator_MAX      = 2
};


// Enum GunfireRuntime.EInventoryAccess
enum class EInventoryAccess : uint8_t
{
	Private                        = 0,
	Public                         = 1,
	EInventoryAccess_MAX           = 2
};


// Enum GunfireRuntime.EDropState
enum class EDropState : uint8_t
{
	Idle                           = 0,
	Dropping                       = 1,
	Bounce                         = 2,
	SecondBounce                   = 3,
	EDropState_MAX                 = 4
};


// Enum GunfireRuntime.EItemGenTableType
enum class EItemGenTableType : uint8_t
{
	Standard                       = 0,
	IndividualChance               = 1,
	EItemGenTableType_MAX          = 2
};


// Enum GunfireRuntime.EItemQuerySortMethod
enum class EItemQuerySortMethod : uint8_t
{
	Unsorted                       = 0,
	Sort                           = 1,
	SortPrioritizeEquipped         = 2,
	SortPrioritizeHtLPrice         = 3,
	SortPrioritizeLtHPrice         = 4,
	EItemQuerySortMethod_MAX       = 5
};


// Enum GunfireRuntime.ELastAttackCondition
enum class ELastAttackCondition : uint8_t
{
	AttackHitCharacter             = 0,
	AttackHitEnvironment           = 1,
	AttackWasBlocked               = 2,
	AttackWasBlockCountered        = 3,
	AttackWasEvaded                = 4,
	ELastAttackCondition_MAX       = 5
};


// Enum GunfireRuntime.ELedgeGrabType
enum class ELedgeGrabType : uint8_t
{
	Solid                          = 0,
	Inset                          = 1,
	Hanging                        = 2,
	Cling                          = 3,
	ELedgeGrabType_MAX             = 4
};


// Enum GunfireRuntime.EPlayableVisibleState
enum class EPlayableVisibleState : uint8_t
{
	None                           = 0,
	Show                           = 1,
	Hide                           = 2,
	EPlayableVisibleState_MAX      = 3
};


// Enum GunfireRuntime.EPlayableLoadState
enum class EPlayableLoadState : uint8_t
{
	None                           = 0,
	Preload                        = 1,
	Load                           = 2,
	Unload                         = 3,
	UnloadAndRemove                = 4,
	EPlayableLoadState_MAX         = 5
};


// Enum GunfireRuntime.ELevelVisibilityState
enum class ELevelVisibilityState : uint8_t
{
	Hidden                         = 0,
	Shown                          = 1,
	Showing                        = 2,
	Hiding                         = 3,
	ELevelVisibilityState_MAX      = 4
};


// Enum GunfireRuntime.ELevelLoadState
enum class ELevelLoadState : uint8_t
{
	Unloaded                       = 0,
	LoadRequested                  = 1,
	Loaded                         = 2,
	Loading                        = 3,
	Unloading                      = 4,
	PreUnloaded                    = 5,
	ELevelLoadState_MAX            = 6
};


// Enum GunfireRuntime.ELevelTransition
enum class ELevelTransition : uint8_t
{
	Load                           = 0,
	Unload                         = 1,
	Show                           = 2,
	Hide                           = 3,
	Remove                         = 4,
	ELevelTransition_MAX           = 5
};


// Enum GunfireRuntime.ELODVolumeFilterType
enum class ELODVolumeFilterType : uint8_t
{
	SubString                      = 0,
	Class                          = 1,
	Reference                      = 2,
	ELODVolumeFilterType_MAX       = 3
};


// Enum GunfireRuntime.ELODVolumeFilterClass
enum class ELODVolumeFilterClass : uint8_t
{
	StaticMesh                     = 0,
	Decal                          = 1,
	Blueprints                     = 2,
	ELODVolumeFilterClass_MAX      = 3
};


// Enum GunfireRuntime.ELODVolumeRangeType
enum class ELODVolumeRangeType : uint8_t
{
	Invalid                        = 0,
	NearRange                      = 1,
	MidRange                       = 2,
	OutOfRange                     = 3,
	ELODVolumeRangeType_MAX        = 4
};


// Enum GunfireRuntime.ELODVolumeVisibility
enum class ELODVolumeVisibility : uint8_t
{
	All                            = 0,
	None                           = 1,
	Near                           = 2,
	Distant                        = 3,
	ELODVolumeVisibility_MAX       = 4
};


// Enum GunfireRuntime.ELogicalOperator
enum class ELogicalOperator : uint8_t
{
	And                            = 0,
	Or                             = 1,
	Xor                            = 2,
	ELogicalOperator_MAX           = 3
};


// Enum GunfireRuntime.EYesNo
enum class EYesNo : uint8_t
{
	Yes                            = 0,
	No                             = 1,
	DontCare                       = 2,
	EYesNo_MAX                     = 3
};


// Enum GunfireRuntime.CompareOp
enum class ECompareOp : uint8_t
{
	GreaterThan                    = 0,
	LessThan                       = 1,
	GreaterThanEqual               = 2,
	LessThanEqual                  = 3,
	Equal                          = 4,
	CompareOp_MAX                  = 5
};


// Enum GunfireRuntime.EMapGenState
enum class EMapGenState : uint8_t
{
	Uninitialized                  = 0,
	WaitForServer                  = 1,
	LoadingTemplate                = 2,
	Loading                        = 3,
	ProcessingInitialTiles         = 4,
	Initialized                    = 5,
	Failed                         = 6,
	EMapGenState_MAX               = 7
};


// Enum GunfireRuntime.EMiniMapStyle
enum class EMiniMapStyle : uint8_t
{
	Is2D                           = 0,
	Is3D                           = 1,
	EMiniMapStyle_MAX              = 2
};


// Enum GunfireRuntime.EMiniMapMode
enum class EMiniMapMode : uint8_t
{
	Mini                           = 0,
	Full                           = 1,
	Hidden                         = 2,
	EMiniMapMode_MAX               = 3
};


// Enum GunfireRuntime.EMiniMapLevelRegionType
enum class EMiniMapLevelRegionType : uint8_t
{
	Volume                         = 0,
	Plane                          = 1,
	EMiniMapLevelRegionType_MAX    = 2
};


// Enum GunfireRuntime.EMiniMapActorType
enum class EMiniMapActorType : uint8_t
{
	Default                        = 0,
	Indicator                      = 1,
	EMiniMapActorType_MAX          = 2
};


// Enum GunfireRuntime.EMiniMapPanelScalingMethod
enum class EMiniMapPanelScalingMethod : uint8_t
{
	NonUniform                     = 0,
	Maxima                         = 1,
	Minima                         = 2,
	EMiniMapPanelScalingMethod_MAX = 3
};


// Enum GunfireRuntime.ECameraTurnDir
enum class ECameraTurnDir : uint8_t
{
	None                           = 0,
	Left                           = 1,
	Right                          = 2,
	ECameraTurnDir_MAX             = 3
};


// Enum GunfireRuntime.ECameraFollow
enum class ECameraFollow : uint8_t
{
	Stationary                     = 0,
	FollowXYZ                      = 1,
	FollowZ                        = 2,
	ECameraFollow_MAX              = 3
};


// Enum GunfireRuntime.EMoveInputType
enum class EMoveInputType : uint8_t
{
	Full                           = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	EMoveInputType_MAX             = 3
};


// Enum GunfireRuntime.ENavModifierGunfireShape
enum class ENavModifierGunfireShape : uint8_t
{
	Box                            = 0,
	Cylinder                       = 1,
	ENavModifierGunfireShape_MAX   = 2
};


// Enum GunfireRuntime.ETrackingMode
enum class ETrackingMode : uint8_t
{
	LookTargets                    = 0,
	Viewpoint                      = 1,
	ETrackingMode_MAX              = 2
};


// Enum GunfireRuntime.ELookTargetType
enum class ELookTargetType : uint8_t
{
	Simple                         = 0,
	OnlyIfTargeted                 = 1,
	OnlyWithLOS                    = 2,
	ELookTargetType_MAX            = 3
};


// Enum GunfireRuntime.EGroundCheckType
enum class EGroundCheckType : uint8_t
{
	OnGround                       = 0,
	NearGround                     = 1,
	EGroundCheckType_MAX           = 2
};


// Enum GunfireRuntime.EPhysicsBoundsForceType
enum class EPhysicsBoundsForceType : uint8_t
{
	Push                           = 0,
	Pull                           = 1,
	EPhysicsBoundsForceType_MAX    = 2
};


// Enum GunfireRuntime.EPhysicsBoundsForceDirection
enum class EPhysicsBoundsForceDirection : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	EPhysicsBoundsForceDirection_MAX = 3
};


// Enum GunfireRuntime.EPositionSource
enum class EPositionSource : uint8_t
{
	Target                         = 0,
	Property                       = 1,
	Blackboard                     = 2,
	EPositionSource_MAX            = 3
};


// Enum GunfireRuntime.EExperienceReason
enum class EExperienceReason : uint8_t
{
	Default                        = 0,
	Kill                           = 1,
	Reward                         = 2,
	EExperienceReason_MAX          = 3
};


// Enum GunfireRuntime.EProjectileBounceMode
enum class EProjectileBounceMode : uint8_t
{
	DoFullSimulation               = 0,
	StopAfterValidHit              = 1,
	StopAfterHitTarget             = 2,
	EProjectileBounceMode_MAX      = 3
};


// Enum GunfireRuntime.EProjectileSimMode
enum class EProjectileSimMode : uint8_t
{
	HitsOnly                       = 0,
	HitsAndOverlaps                = 1,
	HitsAndOverlapsForcePawn       = 2,
	EProjectileSimMode_MAX         = 3
};


// Enum GunfireRuntime.EQuestEntityOwnerContext
enum class EQuestEntityOwnerContext : uint8_t
{
	Quest                          = 0,
	Actor                          = 1,
	EQuestEntityOwnerContext_MAX   = 2
};


// Enum GunfireRuntime.EQuestEventTreeType
enum class EQuestEventTreeType : uint8_t
{
	Default                        = 0,
	Interrupt                      = 1,
	DialogOption                   = 2,
	EQuestEventTreeType_MAX        = 3
};


// Enum GunfireRuntime.EQuestState
enum class EQuestState : uint8_t
{
	None                           = 0,
	Active                         = 1,
	Complete                       = 2,
	EQuestState_MAX                = 3
};


// Enum GunfireRuntime.ERangedWeaponTrajectoryMode
enum class ERangedWeaponTrajectoryMode : uint8_t
{
	Socket                         = 0,
	SocketToAimTarget              = 1,
	Camera                         = 2,
	ERangedWeaponTrajectoryMode_MAX = 3
};


// Enum GunfireRuntime.EResourceDistribution
enum class EResourceDistribution : uint8_t
{
	Quantity                       = 0,
	Per10Tiles                     = 1,
	Per100SpawnPoints              = 2,
	EResourceDistribution_MAX      = 3
};


// Enum GunfireRuntime.EReticulePieceDisableMode
enum class EReticulePieceDisableMode : uint8_t
{
	Always                         = 0,
	WithConditions                 = 1,
	Never                          = 2,
	OnlyWhileDisabled              = 3,
	EReticulePieceDisableMode_MAX  = 4
};


// Enum GunfireRuntime.EReticuleAlignment
enum class EReticuleAlignment : uint8_t
{
	Outside                        = 0,
	Centered                       = 1,
	EReticuleAlignment_MAX         = 2
};


// Enum GunfireRuntime.ESilhouetteVisibility
enum class ESilhouetteVisibility : uint8_t
{
	WhenNotVisible                 = 0,
	WhenVisible                    = 1,
	Always                         = 2,
	ESilhouetteVisibility_MAX      = 3
};


// Enum GunfireRuntime.ESilhouetteType
enum class ESilhouetteType : uint8_t
{
	Default                        = 0,
	Wounded                        = 1,
	ESilhouetteType_MAX            = 2
};


// Enum GunfireRuntime.ESpawnPointType
enum class ESpawnPointType : uint8_t
{
	Player                         = 0,
	Enemy                          = 1,
	ESpawnPointType_MAX            = 2
};


// Enum GunfireRuntime.ESpawnTableType
enum class ESpawnTableType : uint8_t
{
	List                           = 0,
	Table                          = 1,
	TableGroup                     = 2,
	IndividualChance               = 3,
	ESpawnTableType_MAX            = 4
};


// Enum GunfireRuntime.ESpawnThrottling
enum class ESpawnThrottling : uint8_t
{
	NoThrottling                   = 0,
	ThrottleWeightOnPlayers        = 1,
	ThrottleWeightFromAllSpawns    = 2,
	ThrottleWeightFromEncounter    = 3,
	ESpawnThrottling_MAX           = 4
};


// Enum GunfireRuntime.ESpawnFrom
enum class ESpawnFrom : uint8_t
{
	Random                         = 0,
	Cardinal                       = 1,
	Front                          = 2,
	Behind                         = 3,
	ESpawnFrom_MAX                 = 4
};


// Enum GunfireRuntime.ESpawnVisibility
enum class ESpawnVisibility : uint8_t
{
	DontCare                       = 0,
	OutOfSight                     = 1,
	InView                         = 2,
	InFieldOfView_OutOfSight       = 3,
	ESpawnVisibility_MAX           = 4
};


// Enum GunfireRuntime.ESpawnFlags
enum class ESpawnFlags : uint8_t
{
	NavMesh                        = 0,
	NavAccessible                  = 1,
	OutOfSight                     = 2,
	InView                         = 3,
	InFieldOfView                  = 4,
	ESpawnFlags_MAX                = 5
};


// Enum GunfireRuntime.ESplineAttachType
enum class ESplineAttachType : uint8_t
{
	LocationOnly                   = 0,
	RotationOnly                   = 1,
	LocationAndRotation            = 2,
	ESplineAttachType_MAX          = 3
};


// Enum GunfireRuntime.ESplineMovementDirection
enum class ESplineMovementDirection : uint8_t
{
	Forward                        = 0,
	Backward                       = 1,
	ESplineMovementDirection_MAX   = 2
};


// Enum GunfireRuntime.ESplineAttachmentRule
enum class ESplineAttachmentRule : uint8_t
{
	Start                          = 0,
	End                            = 1,
	Closest                        = 2,
	CustomTime                     = 3,
	ESplineAttachmentRule_MAX      = 4
};


// Enum GunfireRuntime.ESwimmingStateMethod
enum class ESwimmingStateMethod : uint8_t
{
	CurrentState                   = 0,
	Calculated                     = 1,
	ESwimmingStateMethod_MAX       = 2
};


// Enum GunfireRuntime.ESwimmingType
enum class ESwimmingType : uint8_t
{
	Surface                        = 0,
	Underwater                     = 1,
	None                           = 2,
	ESwimmingType_MAX              = 3
};


// Enum GunfireRuntime.ETagLocation
enum class ETagLocation : uint8_t
{
	Character                      = 0,
	Anim                           = 1,
	ETagLocation_MAX               = 2
};


// Enum GunfireRuntime.ETargetType
enum class ETargetType : uint8_t
{
	Any                            = 0,
	Camera                         = 1,
	ETargetType_MAX                = 2
};


// Enum GunfireRuntime.EAdhesionActivateMode
enum class EAdhesionActivateMode : uint8_t
{
	Always                         = 0,
	CameraInput                    = 1,
	CameraOrMoveInput              = 2,
	EAdhesionActivateMode_MAX      = 3
};


// Enum GunfireRuntime.ETPSAimType
enum class ETPSAimType : uint8_t
{
	None                           = 0,
	Aim                            = 1,
	Scope                          = 2,
	ETPSAimType_MAX                = 3
};


// Enum GunfireRuntime.ETPSCameraOrientation
enum class ETPSCameraOrientation : uint8_t
{
	Undefined                      = 0,
	Left                           = 1,
	Right                          = 2,
	ETPSCameraOrientation_MAX      = 3
};


// Enum GunfireRuntime.EMapGenAttributeScope
enum class EMapGenAttributeScope : uint8_t
{
	Tile                           = 0,
	Region                         = 1,
	World                          = 2,
	EMapGenAttributeScope_MAX      = 3
};


// Enum GunfireRuntime.ETileDirection
enum class ETileDirection : uint8_t
{
	None                           = 0,
	North                          = 1,
	East                           = 2,
	South                          = 3,
	West                           = 4,
	ETileDirection_MAX             = 5
};


// Enum GunfireRuntime.ETileFlags
enum class ETileFlags : uint8_t
{
	AllowSpawns                    = 0,
	AllowQuests                    = 1,
	NoNavValidate                  = 2,
	ETileFlags_MAX                 = 3
};


// Enum GunfireRuntime.ETileLODType
enum class ETileLODType : uint8_t
{
	None                           = 0,
	Near                           = 1,
	Distant                        = 2,
	ETileLODType_MAX               = 3
};


// Enum GunfireRuntime.ETweenRoot
enum class ETweenRoot : uint8_t
{
	ActorPosition                  = 0,
	RootNodePosition               = 1,
	ETweenRoot_MAX                 = 2
};


// Enum GunfireRuntime.EEaseType
enum class EEaseType : uint8_t
{
	EaseIn                         = 0,
	EaseOut                        = 1,
	EaseInOut                      = 2,
	EEaseType_MAX                  = 3
};


// Enum GunfireRuntime.EDialogBeginMethod
enum class EDialogBeginMethod : uint8_t
{
	AddDuplicates                  = 0,
	AddIfNotOnTop                  = 1,
	AddIfNotOnStack                = 2,
	EDialogBeginMethod_MAX         = 3
};


// Enum GunfireRuntime.EDialogLocation
enum class EDialogLocation : uint8_t
{
	None                           = 0,
	Center                         = 1,
	CameraCenter                   = 2,
	HMDAnchor                      = 3,
	EDialogLocation_MAX            = 4
};


// Enum GunfireRuntime.EDisabledWeaponVisuals
enum class EDisabledWeaponVisuals : uint8_t
{
	ShowDefaultReticule            = 0,
	ShowReticule                   = 1,
	ShowReticuleWithDisabledColor  = 2,
	EDisabledWeaponVisuals_MAX     = 3
};


// Enum GunfireRuntime.EUIEaseType
enum class EUIEaseType : uint8_t
{
	EaseIn                         = 0,
	EaseOut                        = 1,
	EaseInOut                      = 2,
	SmoothCD                       = 3,
	EUIEaseType_MAX                = 4
};


// Enum GunfireRuntime.EUsableActivationType
enum class EUsableActivationType : uint8_t
{
	Press                          = 0,
	PressAndNoHold                 = 1,
	Hold                           = 2,
	EUsableActivationType_MAX      = 3
};


// Enum GunfireRuntime.EVarType
enum class EVarType : uint8_t
{
	Bool                           = 0,
	Number                         = 1,
	Name                           = 2,
	Object                         = 3,
	EVarType_MAX                   = 4
};


// Enum GunfireRuntime.EBlackboardVariableType
enum class EBlackboardVariableType : uint8_t
{
	Object                         = 0,
	Class                          = 1,
	Int                            = 2,
	Float                          = 3,
	Bool                           = 4,
	String                         = 5,
	Name                           = 6,
	EBlackboardVariableType_MAX    = 7
};


// Enum GunfireRuntime.EVaultType
enum class EVaultType : uint8_t
{
	VaultOver                      = 0,
	VaultUp                        = 1,
	EVaultType_MAX                 = 2
};


// Enum GunfireRuntime.EVelocityType
enum class EVelocityType : uint8_t
{
	Full                           = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	EVelocityType_MAX              = 3
};


// Enum GunfireRuntime.EParamApply
enum class EParamApply : uint8_t
{
	ApplyOnAdd                     = 0,
	ApplyOnRemove                  = 1,
	ApplyOnAddAndReverseOnRemove   = 2,
	EParamApply_MAX                = 3
};


// Enum GunfireRuntime.EVisualMaterialParameterType
enum class EVisualMaterialParameterType : uint8_t
{
	Scalar                         = 0,
	Color                          = 1,
	Texture                        = 2,
	Tween                          = 3,
	EVisualMaterialParameterType_MAX = 4
};


// Enum GunfireRuntime.EVitalityInitialValue
enum class EVitalityInitialValue : uint8_t
{
	Zero                           = 0,
	Max                            = 1
};


// Enum GunfireRuntime.EWallCheckType
enum class EWallCheckType : uint8_t
{
	Full                           = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	None                           = 3,
	EWallCheckType_MAX             = 4
};


// Enum GunfireRuntime.EWaterSurfaceDirection
enum class EWaterSurfaceDirection : uint8_t
{
	On                             = 0,
	Above                          = 1,
	Below                          = 2,
	EWaterSurfaceDirection_MAX     = 3
};


// Enum GunfireRuntime.EWaterSurfaceTraversalType
enum class EWaterSurfaceTraversalType : uint8_t
{
	Emerge                         = 0,
	Submerge                       = 1,
	EWaterSurfaceTraversalType_MAX = 2
};


// Enum GunfireRuntime.EWeaponAffinityType
enum class EWeaponAffinityType : uint8_t
{
	Bonus                          = 0,
	Modifier                       = 1,
	EWeaponAffinityType_MAX        = 2
};


// Enum GunfireRuntime.EEffectSpawnDirection
enum class EEffectSpawnDirection : uint8_t
{
	ImpactNormal                   = 0,
	PhantomDirection               = 1,
	NegativePhantomDirection       = 2,
	RandomDirection                = 3,
	SpecificDirection              = 4,
	EEffectSpawnDirection_MAX      = 5
};


// Enum GunfireRuntime.EWeaponPhantomType
enum class EWeaponPhantomType : uint8_t
{
	Dynamic                        = 0,
	Discrete                       = 1,
	EWeaponPhantomType_MAX         = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GunfireRuntime.DamageInfoVariable
// 0x0014
struct FDamageInfoVariable
{
	bool                                               bVal;                                                     // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                iVal;                                                     // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              fVal;                                                     // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UObject>                      oVal;                                                     // 0x000C(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.DamageInfo
// 0x0150 (0x0160 - 0x0010)
struct FDamageInfo : public FDamageEvent
{
	class UClass*                                      DamageType;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Damage;                                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageMod;                                                // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageScalar;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ImpactScalar;                                             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CritChance;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CritDamageMod;                                            // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WeakSpotDamageMod;                                        // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PowerOverride;                                            // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DifficultyDamageScalar;                                   // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                       Owner;                                                    // 0x003C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                       Cause;                                                    // 0x0044(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                       Target;                                                   // 0x004C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  HitInfo;                                                  // 0x0054(0x0088) (BlueprintVisible, Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FName                                       HitLocation;                                              // 0x00DC(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ImpactDirection;                                          // 0x00E4(0x000C) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ImpactDirectionTag;                                       // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UnmodifiedDamage;                                         // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HealthDelta;                                              // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SprayCount;                                               // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalSprayCount;                                          // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      NoImpacts : 1;                                            // 0x0108(0x0001) (BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SecondaryDamage : 1;                                      // 0x0108(0x0001) (BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Critical : 1;                                             // 0x0108(0x0001) (BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      AllowsCrits : 1;                                          // 0x0108(0x0001) (BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      WeakSpot : 1;                                             // 0x0108(0x0001) (BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Resisted : 1;                                             // 0x0108(0x0001) (BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      HitLocationDestroyed : 1;                                 // 0x0108(0x0001) (BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Wounded : 1;                                              // 0x0108(0x0001) (BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Killed : 1;                                               // 0x0109(0x0001) (BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Blockable : 1;                                            // 0x0109(0x0001) (BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Evadable : 1;                                             // 0x0109(0x0001) (BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Blocked : 1;                                              // 0x0109(0x0001) (BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      BlockCounter : 1;                                         // 0x0109(0x0001) (BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Evaded : 1;                                               // 0x0109(0x0001) (BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Spray : 1;                                                // 0x0109(0x0001) (BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x010A(0x0006) MISSED OFFSET
	TMap<struct FName, struct FDamageInfoVariable>     Variables;                                                // 0x0110(0x0050) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.InspectStat
// 0x0060
struct FInspectStat
{
	struct FName                                       NameID;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Category;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Label;                                                    // 0x0010(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       CustomDescription;                                        // 0x0028(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UTexture2D*                                  Icon;                                                     // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EInspectStatType                                   Type;                                                     // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Bonus;                                                    // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Range;                                                    // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Primary;                                                  // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Hidden;                                                   // 0x0059(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Modifier;                                                 // 0x005A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x5];                                       // 0x005B(0x0005) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.InspectMod
// 0x0060
struct FInspectMod
{
	class UObject*                                     InspectObject;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Slot;                                                     // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                Level;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRemoveable;                                              // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FText                                       Label;                                                    // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                              // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UTexture2D*                                  Icon;                                                     // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FInspectStat>                        Stats;                                                    // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.InspectInfo
// 0x0080
struct FInspectInfo
{
	class UObject*                                     InspectObject;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     InspectData;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Level;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Quantity;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Value;                                                    // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ValueInc;                                                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PickupValue;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SellScalar;                                               // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Label;                                                    // 0x0028(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                              // 0x0040(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UTexture2D*                                  Icon;                                                     // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FInspectStat>                        Stats;                                                    // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FInspectMod>                         Mods;                                                     // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.EquipmentAttachment
// 0x0060
struct FEquipmentAttachment
{
	EEquipAttachType                                   AttachType;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       MeshName;                                                 // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachParent;                                             // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachPoint;                                              // 0x0014(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FTransform                                  AttachRelativeTransform;                                  // 0x0020(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class USceneComponent*                             Component;                                                // 0x0050(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             Parent;                                                   // 0x0058(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.EquipmentModSlot
// 0x0020
struct FEquipmentModSlot
{
	struct FText                                       Label;                                                    // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UClass*                                      Type;                                                     // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.AnimationHandle
// 0x0020
struct FAnimationHandle
{
	class UAnimInstanceGunfire*                        AnimInstance;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	class UAnimMontage*                                Montage;                                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnimLength;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.EquipmentModData
// 0x0018
struct FEquipmentModData
{
	unsigned char                                      ModSlot;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UClass*                                      Mod;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ModLevel;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.EquipmentMods
// 0x0010
struct FEquipmentMods
{
	TArray<struct FEquipmentModData>                   Mods;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.ItemQueryFilter
// 0x0048
struct FItemQueryFilter
{
	TArray<class UClass*>                              RequiredTypes;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              RequiredCategories;                                       // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                               bModableItemsOnly;                                        // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreCurrency;                                          // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreHidden;                                            // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0023(0x0005) MISSED OFFSET
	TArray<struct FName>                               IgnoreSlots;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               IgnoreTags;                                               // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.InventoryItem
// 0x0028
struct FInventoryItem
{
	int                                                ID;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      ItemBP;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      New : 1;                                                  // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Hidden : 1;                                               // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                EquipmentSlotIndex;                                       // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UItemInstanceData*                           InstanceData;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, SaveGame, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AEquipment*                                  EquippedActor;                                            // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.ItemQueryResult
// 0x0030
struct FItemQueryResult
{
	struct FInventoryItem                              Item;                                                     // 0x0000(0x0028) (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UInventoryComponent*                         Inventory;                                                // 0x0028(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.AnimationEntry
// 0x0030
struct FAnimationEntry
{
	TArray<struct FName>                               Tags;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UAnimSequenceBase*>                   Animations;                                               // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UAnimSequenceBase*>                   SlaveAnimations;                                          // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.AnimationID
// 0x0038
struct FAnimationID
{
	struct FName                                       NameID;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartTime;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendTime;                                                // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendOut;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Loop;                                                     // 0x0014(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ResetOnReplay;                                            // 0x0015(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	struct FName                                       SyncGroupName;                                            // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AutoBlendOutMontage;                                      // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TArray<struct FAnimationEntry>                     Entries;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.AnimationLayer
// 0x00A0
struct FAnimationLayer
{
	struct FName                                       NameID;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimationSet*                               AnimationSet;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AnimationMontageSlot;                                     // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       CurrentAnimationID;                                       // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnimationTime;                                            // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnimationTimeFraction;                                    // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimationID                                Animation;                                                // 0x0028(0x0038) (Transient, NativeAccessSpecifierPublic)
	TArray<class UAnimMontage*>                        Montages;                                                 // 0x0060(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0070(0x0030) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.LegIkEffector
// 0x0040
struct FLegIkEffector
{
	struct FName                                       IkBone;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FTransform                                  ComponentSpaceTransform;                                  // 0x0010(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.TraitSlot
// 0x0008
struct FTraitSlot
{
	class UClass*                                      Type;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.TraitInfo
// 0x0018
struct FTraitInfo
{
	int                                                Level;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SlotIndex;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      TraitBP;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTrait*                                      TraitInstance;                                            // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.ProjectileVisualizationParams
// 0x0020
struct FProjectileVisualizationParams
{
	EProjectileSimMode                                 SimMode;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EProjectileBounceMode                              BounceMode;                                               // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                MaxBounces;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FinalBounceMaximumDistance;                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpeedOverride;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxSimulationTime;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UClass*                                      ProjectileVisualization;                                  // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.CustomWeaponSpread
// 0x0028
struct FCustomWeaponSpread
{
	bool                                               bRandomBetweenPoints;                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FVector2D>                           Points;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   Jitter;                                                   // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Twist;                                                    // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.ProjectileVisualizationContext
// 0x0028
struct FProjectileVisualizationContext
{
	bool                                               bIsValid;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     EndLocation;                                              // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWillHitTarget;                                           // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAffiliation                                       TargetAffiliation;                                        // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	float                                              ColorAlpha;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUsesTargetColors;                                        // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              ElapsedTime;                                              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AProjectileVisualization*                    ProjectileVisualization;                                  // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.RangedWeaponMode
// 0x0120
struct FRangedWeaponMode
{
	struct FName                                       IdleAnim;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       FireStartAnim;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       FireAnim;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       FireEndAnim;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Range;                                                    // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PrimaryFalloff;                                           // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SecondaryFalloff;                                         // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinCritRange;                                             // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxCritRange;                                             // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RateOfFire;                                               // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BurstCount;                                               // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BurstRateOfFire;                                          // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SprayCount;                                               // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasScope;                                                 // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              ScopeFOV;                                                 // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Profile;                                                  // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UReticule*                                   Reticule;                                                 // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UReticule*                                   ScopeReticule;                                            // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ScopeWidget;                                              // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>           ScopePostProcess;                                         // 0x0078(0x0028) (Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  ScopeInSound;                                             // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  ScopeOutSound;                                            // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimumAimDelayForScope;                                  // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	class UParticleSystem*                             MuzzleFX;                                                 // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowReload;                                              // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReloadAfterStartLoop;                                     // 0x00C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERangedWeaponTrajectoryMode                        TrajectoryMode;                                           // 0x00C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x1];                                       // 0x00C3(0x0001) MISSED OFFSET
	struct FVector                                     ProjectileExtent;                                         // 0x00C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MuzzleObstructionDistance;                                // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	class UClass*                                      ProjectileToVisualize;                                    // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FProjectileVisualizationParams              VisualizationParams;                                      // 0x00E0(0x0020) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0100(0x0010) MISSED OFFSET
	class UMaterialInterface*                          ScopePostProcessReference;                                // 0x0110(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.ReplicatedLocation
// 0x0018
struct FReplicatedLocation
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.ReplicatedHits
// 0x0010
struct FReplicatedHits
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.ActiveRagdollInfo
// 0x0030
struct FActiveRagdollInfo
{
	class USoundBase*                                  FoleySound;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinVolumeSpeed;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxVolumeSpeed;                                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDistance;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class USoundBase*                                  DeathVocalization;                                        // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DeathVocalizationSocketName;                              // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.ActiveWeaponPhantom
// 0x0200
struct FActiveWeaponPhantom
{
	unsigned char                                      UnknownData00[0x1F0];                                     // 0x0000(0x01F0) MISSED OFFSET
	class AActor*                                      Cause;                                                    // 0x01F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01F8(0x0008) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.WeaponPhantomProvider
// 0x0040
struct FWeaponPhantomProvider
{
	class UClass*                                      DefaultDamageType;                                        // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DefaultImpactEffect;                                      // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
	TArray<struct FActiveWeaponPhantom>                ActiveWeaponPhantoms;                                     // 0x0028(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.CheatCommandDetails
// 0x0030
struct FCheatCommandDetails
{
	class FString                                      Command;                                                  // 0x0000(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                              // 0x0010(0x0018) (Transient, NativeAccessSpecifierPublic)
	uint32_t                                           ArgumentCount;                                            // 0x0028(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.CheatCommands
// 0x0060
struct FCheatCommands
{
	TMap<class FString, struct FCheatCommandDetails>   CheatCommandDetails;                                      // 0x0000(0x0050) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class FString>                              CheatCommands;                                            // 0x0050(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.CheatInputAction
// 0x0038
struct FCheatInputAction
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Category;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Description;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                      Command;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FInputActionKeyMapping>              Keys;                                                     // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.VisibleCoordinate
// 0x0004
struct FVisibleCoordinate
{
	uint16_t                                           X;                                                        // 0x0000(0x0002) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           Y;                                                        // 0x0002(0x0002) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.TileCoord
// 0x000C
struct FTileCoord
{
	int                                                X;                                                        // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Y;                                                        // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Z;                                                        // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.TileBase
// 0x0090
struct FTileBase
{
	int                                                _ID;                                                      // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ID;                                                       // 0x0004(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RegionID;                                                 // 0x000C(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTileCoord                                  Coord;                                                    // 0x0014(0x000C) (BlueprintVisible, BlueprintReadOnly, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Edges;                                                    // 0x0020(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETileDirection                                     Direction;                                                // 0x0021(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	struct FName                                       Tag;                                                      // 0x0024(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SpawnTag;                                                 // 0x002C(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Style;                                                    // 0x0034(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class FString                                      TileLevelName;                                            // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TileRotation;                                             // 0x0050(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TileRating;                                               // 0x0054(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TileSeed;                                                 // 0x0058(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Flags;                                                    // 0x005C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Overlay;                                                  // 0x0060(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	TSoftObjectPtr<class UTexture2D>                   Image;                                                    // 0x0068(0x0028) (SaveGame, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.Tile
// 0x0078 (0x0108 - 0x0090)
struct FTile : public FTileBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0090(0x0020) MISSED OFFSET
	class ULevelStreaming*                             Level;                                                    // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevel*                                      LoadedLevel;                                              // 0x00B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMapTileTemplate*                            Template;                                                 // 0x00C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTileSet*                                    TileSet;                                                  // 0x00C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTileInfo*                                   TileInfo;                                                 // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ATileLOD*                                    TileLOD;                                                  // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMapTileInfo*                                MapTileInfo;                                              // 0x00E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AMapTileEdge*>                        TileEdges;                                                // 0x00E8(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<int>                                        AdjacentTiles;                                            // 0x00F8(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.MapGenAttribute
// 0x0040
struct FMapGenAttribute
{
	EMapGenAttributeScope                              Scope;                                                    // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       TileOrRegionID;                                           // 0x0004(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Key;                                                      // 0x000C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class FString                                      Value;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       LocalizedString;                                          // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.MiniMapEntry
// 0x0048
struct FMiniMapEntry
{
	int                                                ID;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Context;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MiniMapLevel;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class AActor*                                      Actor;                                                    // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMiniMapActorType                                  Type;                                                     // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	class UClass*                                      WidgetClass;                                              // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class UMiniMapPanelSlot>>    RegisteredSlots;                                          // 0x0028(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FVector2D                                   DynamicSize;                                              // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   CullBounds;                                               // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.MiniMapActorRef
// 0x0018
struct FMiniMapActorRef
{
	class AActor*                                      RefActor;                                                 // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMiniMapDisplayActor*                        MiniMap;                                                  // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Context;                                                  // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.MiniMapActorInfo
// 0x0070
struct FMiniMapActorInfo
{
	int                                                ID;                                                       // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMiniMapActorType                                  Type;                                                     // 0x0004(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	class AActor*                                      RefActor;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               AbsoluteScale;                                            // 0x0040(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              Scale;                                                    // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Context;                                                  // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ContextType;                                              // 0x004C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ActorClass;                                               // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      WidgetClass;                                              // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MiniMapLevel;                                             // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0064(0x000C) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.EquipmentAttachPointOverride
// 0x0018
struct FEquipmentAttachPointOverride
{
	struct FName                                       AttachPoint;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachParentOverride;                                     // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachPointOverride;                                      // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.EquipmentSlot
// 0x0048
struct FEquipmentSlot
{
	struct FName                                       NameID;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Type;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ActivationType;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       VisualSlot;                                               // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       HotKey;                                                   // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AnimationTag;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEquipmentAttachPointOverride>       AttachPointOverrides;                                     // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UClass*                                      DefaultEquipmentBP;                                       // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.InventoryScalingInfo
// 0x0010
struct FInventoryScalingInfo
{
	class UClass*                                      ScaledItemBP;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemAmount;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.InventoryResult
// 0x0028
struct FInventoryResult
{
	int                                                DeltaQuantity;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      ItemBP;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        AffectedItems;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                               bDoNotify;                                                // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.QuestDebugProperty
// 0x0020
struct FQuestDebugProperty
{
	class FString                                      Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                      Value;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.QuestEntityEventTree
// 0x0038
struct FQuestEntityEventTree
{
	EQuestEventTreeType                                Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       NameID;                                                   // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UEventTree*                                  EventTree;                                                // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ActiveForObjective;                                       // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Label;                                                    // 0x0020(0x0018) (Edit, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.SequencerPlayerSettings
// 0x0088
struct FSequencerPlayerSettings
{
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         // 0x0000(0x0014) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<class APlayerGunfire*>                      RelevantPlayers;                                          // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               HideOtherPlayers;                                         // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ResetNonMVPs;                                             // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ResetCameraOnComplete;                                    // 0x002A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShowSkipCinematic;                                        // 0x002B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DefaultToPlayerCameraOnFinish;                            // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	TMap<class FString, class FString>                 CachedSequenceSettings;                                   // 0x0030(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class APawn*                                       InstigatorPawn;                                           // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.AchievementId
// 0x0008
struct FAchievementId
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.Conditions
// 0x0018
struct FConditions
{
	TArray<class UCondition*>                          Conditions;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	ELogicalOperator                                   LogicalOperator;                                          // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.ActorStateID
// 0x0010
struct FActorStateID
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.ActorStateDecorators
// 0x0010
struct FActorStateDecorators
{
	TArray<class UActorStateDecorator*>                Decorators;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.FontStyleConfigEntry
// 0x003C
struct FFontStyleConfigEntry
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Template;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Font;                                                     // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Typeface;                                                 // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Size;                                                     // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Color;                                                    // 0x0024(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ShadowOffset;                                             // 0x002C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ShadowColor;                                              // 0x0034(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.AITacticalPoint
// 0x0020
struct FAITacticalPoint
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	EAITacticalPointType                               Type;                                                     // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FVector                                     Position;                                                 // 0x0008(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     Direction;                                                // 0x0014(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// ScriptStruct GunfireRuntime.AINavigationLink
// 0x0018 (0x0050 - 0x0038)
struct FAINavigationLink : public FNavigationLinkBase
{
	struct FVector                                     Left;                                                     // 0x0038(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Right;                                                    // 0x0044(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.SpawnPointTransform
// 0x0018
struct FSpawnPointTransform
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Direction;                                                // 0x000C(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.SpawnPointList
// 0x0018
struct FSpawnPointList
{
	class UClass*                                      SpawnPointBP;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSpawnPointTransform>                Points;                                                   // 0x0008(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.OwnedAIData
// 0x0014
struct FOwnedAIData
{
	uint32_t                                           OwnerId;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumTacticalPoints;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FirstTacticalPoint;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumNavLinks;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FirstNavLink;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.SpawnGenerator
// 0x0050
struct FSpawnGenerator
{
	TSoftObjectPtr<class UEnvQuery>                    EnvironmentQuery;                                         // 0x0000(0x0028) (Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UClass>                       SpawnPointBP;                                             // 0x0028(0x0028) (Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.EncounterGroup
// 0x0060
struct FEncounterGroup
{
	struct FName                                       NameID;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WarmupTime;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CooldownMin;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CooldownMax;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AggroCooldownMin;                                         // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AggroCooldownMax;                                         // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class AActor*                                      Target;                                                   // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USpawnTable*                                 SpawnTable;                                               // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               SpawnTags;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                MaxEncounters;                                            // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RequireAggro;                                             // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseIntensity;                                             // 0x0045(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PerpetualSpawns;                                          // 0x0046(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               EnableSpawnNotifications;                                 // 0x0047(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DisableWhenFullyExplored;                                 // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IgnoreAllowSpawnsFlag;                                    // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x004A(0x0002) MISSED OFFSET
	int                                                MinRating;                                                // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxRating;                                                // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Stopped;                                                  // 0x0054(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	struct FName                                       AggroGroup;                                               // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.AIDirectorParams
// 0x0040 (0x0048 - 0x0008)
struct FAIDirectorParams : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.AIDirectorPlayer
// 0x0010
struct FAIDirectorPlayer
{
	class APlayerController*                           Controller;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Intensity;                                                // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IntensityLastEventTime;                                   // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.EnvQueryQuery
// 0x0008 (0x0050 - 0x0048)
struct FEnvQueryQuery : public FEQSParametrizedQueryExecutionRequest
{
	class UEnvQuery*                                   RetestQuery;                                              // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.StatValue
// 0x000C
struct FStatValue
{
	struct FName                                       StatName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.PositionValue
// 0x000C
struct FPositionValue
{
	EPositionSource                                    Source;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       Value;                                                    // 0x0004(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.AmbientSoundMix
// 0x0010
struct FAmbientSoundMix
{
	class UInterpolatedSoundMix*                       InterpolatedMix;                                          // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.SpawnEntry
// 0x0078
struct FSpawnEntry
{
	ESpawnType                                         Type;                                                     // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TSoftObjectPtr<class UClass>                       ActorBP;                                                  // 0x0008(0x0028) (BlueprintVisible, BlueprintReadOnly, SaveGame, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               ActorTags;                                                // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	class UClass*                                      SpawnFaction;                                             // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      CachedActorBP;                                            // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Level;                                                    // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Quantity;                                                 // 0x0054(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               SpawnPointTags;                                           // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	int                                                SpawnFlags;                                               // 0x0068(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	class USpawnTableEntry*                            Entry;                                                    // 0x0070(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.AmbientSpawn
// 0x0098
struct FAmbientSpawn
{
	struct FSpawnEntry                                 SpawnEntry;                                               // 0x0000(0x0078) (SaveGame, NativeAccessSpecifierPublic)
	struct FPersistenceKey                             Key;                                                      // 0x0078(0x0010) (SaveGame, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               Destroyed;                                                // 0x0088(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x008C(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.TileAmbientSpawnRegion
// 0x0020
struct FTileAmbientSpawnRegion
{
	struct FVector                                     TileRelativePosition;                                     // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FAmbientSpawn>                       Spawns;                                                   // 0x0010(0x0010) (ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.TileAmbientSpawns
// 0x0030
struct FTileAmbientSpawns
{
	int                                                TileID;                                                   // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FAmbientSpawn>                       Spawns;                                                   // 0x0008(0x0010) (ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FTileAmbientSpawnRegion>             Regions;                                                  // 0x0018(0x0010) (ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	bool                                               HasBeenActivated;                                         // 0x0028(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAmbientSpawnState                                 State;                                                    // 0x0029(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.TagParticleEffectPair
// 0x0018
struct FTagParticleEffectPair
{
	class UClass*                                      EquipmentType;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       VisualTag;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             PSTemplate;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.PhantomKeyframe
// 0x0040
struct FPhantomKeyframe
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.Attribute
// 0x0048
struct FAttribute
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Label;                                                    // 0x0008(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                              // 0x0020(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int                                                Level;                                                    // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class UDataTable*                                  StatsTable;                                               // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.AttributeLevel
// 0x000C
struct FAttributeLevel
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Value;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.WorldSound
// 0x0030
struct FWorldSound
{
	class USoundBase*                                  SoundCue;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundClass*                                 SoundClassOverride;                                       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDelay;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDelay;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinRadius;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxRadius;                                                // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ZOffset;                                                  // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0024(0x000C) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.AudioState
// 0x0080
struct FAudioState
{
	class UClass*                                      StateID;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   OnEnterSoundCue;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   PrimarySoundCue;                                          // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   OnExitSoundCue;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundClass*                                 SoundClass;                                               // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FReverbSettings                             Reverb;                                                   // 0x0028(0x0020) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FInteriorSettings                           AmbientZone;                                              // 0x0048(0x0024) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<struct FWorldSound>                         WorldSounds;                                              // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.DeployableAttributes
// 0x0028
struct FDeployableAttributes
{
	float                                              RotateIncrementDegrees;                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinPlaceDistance;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxPlaceDistance;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HeightTolerance;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngleTolerance;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BuildAnimationID;                                         // 0x0014(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UClass*                                      BuilderToUse;                                             // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.CustomCameraBlend
// 0x000C
struct FCustomCameraBlend
{
	struct FName                                       PreviousState;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendTime;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.ChallengeRank
// 0x0020
struct FChallengeRank
{
	TArray<class UChallengeObjective*>                 Objectives;                                               // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UChallengeReward*>                    Rewards;                                                  // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.ChallengeRankInstance
// 0x0010
struct FChallengeRankInstance
{
	TArray<int>                                        ObjectiveCounters;                                        // 0x0000(0x0010) (ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.ChallengeInstance
// 0x0020
struct FChallengeInstance
{
	struct FName                                       ChallengeID;                                              // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FChallengeRankInstance>              Ranks;                                                    // 0x0008(0x0010) (ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	class UChallenge*                                  Challenge;                                                // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.AttachedChild
// 0x0010
struct FAttachedChild
{
	class USceneComponent*                             SceneComponent;                                           // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TickAdded;                                                // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LastTickUpdated;                                          // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.ProjectileParams
// 0x0058
struct FProjectileParams
{
	class AActor*                                      Cause;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Origin;                                                   // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OrientToTarget;                                           // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FRotator                                    Rotation;                                                 // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Target;                                                   // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Spread;                                                   // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class AActor*                                      TargetActor;                                              // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TargetLead;                                               // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Speed;                                                    // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GravityScale;                                             // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAutoArcType                                       AutoArc;                                                  // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	float                                              AutoArcHeight;                                            // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDeferred;                                                // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.ContextualDialogResponse
// 0x0030 (0x0038 - 0x0008)
struct FContextualDialogResponse : public FTableRowBase
{
	struct FName                                       NameID;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Text;                                                     // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FName                                       FollowupTarget;                                           // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       FollowupTrigger;                                          // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.RecipeList
// 0x0010
struct FRecipeList
{
	TArray<class UCraftingRecipe_Base*>                Recipes;                                                  // 0x0000(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.IngredientInfo
// 0x0018
struct FIngredientInfo
{
	class UClass*                                      ItemBP;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Quantity;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RequiredQuantity;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RequiredLevel;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.RecipeInfo
// 0x0028
struct FRecipeInfo
{
	class AActor*                                      Source;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCraftingRecipe_Base*                        Recipe;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CanCraft;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsHidden;                                                 // 0x0011(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	int                                                CraftQuantity;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FIngredientInfo>                     Ingredients;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.EventTreeAttrib
// 0x0028
struct FEventTreeAttrib
{
	struct FName                                       Key;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Value;                                                    // 0x0008(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UEventTreeAsset*                             Asset;                                                    // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.EventTreeStage
// 0x0020
struct FEventTreeStage
{
	struct FName                                       NameID;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlyTargetInstigator;                                    // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<struct FEventTreeAttrib>                    Attributes;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.EventTreeContext
// 0x00B8
struct FEventTreeContext
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<class UEventTreeNode*>                      Events;                                                   // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0018(0x0050) MISSED OFFSET
	TMap<struct FName, class UBranch*>                 Subroutines;                                              // 0x0068(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.DialogInfo
// 0x0068
struct FDialogInfo
{
	struct FName                                       Speaker;                                                  // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Text;                                                     // 0x0008(0x0018) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FName                                       Emote;                                                    // 0x0020(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      TextCounter;                                              // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TSoftObjectPtr<class USoundBase>                   Dialog;                                                   // 0x0030(0x0028) (BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IgnoreVocalRange;                                         // 0x0058(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	class UClass*                                      VocalRange;                                               // 0x0060(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.DialogOption
// 0x0040
struct FDialogOption
{
	unsigned char                                      ID;                                                       // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       NameID;                                                   // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FText                                       Label;                                                    // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                               Valid;                                                    // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Visited;                                                  // 0x0029(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               LastVisited;                                              // 0x002A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Hidden;                                                   // 0x002B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FEventTreeAttrib>                    Attributes;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.DialogTokenValuePair
// 0x0020
struct FDialogTokenValuePair
{
	struct FName                                       NameID;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Value;                                                    // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.DissolveMaterial
// 0x0020
struct FDissolveMaterial
{
	class UMaterialInterface*                          Material;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          DissolveMaterial;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInstanceDynamic*>            MaterialInstances;                                        // 0x0010(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.SpawnList
// 0x0010
struct FSpawnList
{
	TArray<struct FSpawnEntry>                         Spawns;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.EncounterSpawn
// 0x00A8
struct FEncounterSpawn
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
	struct FSpawnEntry                                 Spawn;                                                    // 0x0028(0x0078) (NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                    // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.EventTreeNodeCondition
// 0x0020
struct FEventTreeNodeCondition
{
	struct FName                                       ContextActor;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConditions                                 Conditions;                                               // 0x0008(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.FactionAffiliation
// 0x0018
struct FFactionAffiliation
{
	class UClass*                                      Faction1;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Faction2;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAffiliation                                       Affiliation;                                              // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.FactionOverride
// 0x0010
struct FFactionOverride
{
	class UClass*                                      Faction;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAffiliation                                       Affiliation;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.FactionDamageTracker
// 0x0010
struct FFactionDamageTracker
{
	class UClass*                                      Faction;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamagePercent;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.AdvButtonStyle
// 0x0430 (0x0438 - 0x0008)
struct FAdvButtonStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 Normal;                                                   // 0x0008(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Hovered;                                                  // 0x0090(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Pressed;                                                  // 0x0118(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Disabled;                                                 // 0x01A0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Focus;                                                    // 0x0228(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 FocusHovered;                                             // 0x02B0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 InactiveFocus;                                            // 0x0338(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                                     NormalPadding;                                            // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                     PressedPadding;                                           // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                     FocusedPadding;                                           // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                                 PressedSlateSound;                                        // 0x03F0(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                                 HoveredSlateSound;                                        // 0x0408(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                                 FocusedSlateSound;                                        // 0x0420(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.FocusInfo
// 0x0010
struct FFocusInfo
{
	class UPanelWidget*                                Group;                                                    // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFocusButtonWidget*                          Widget;                                                   // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.TabGroup
// 0x0018
struct FTabGroup
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UPanelWidget*                                Group;                                                    // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTabButton*                                  Widget;                                                   // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.TabFocusInfo
// 0x0010
struct FTabFocusInfo
{
	TArray<struct FTabGroup>                           Groups;                                                   // 0x0000(0x0010) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.GenericInput
// 0x0020
struct FGenericInput
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShift;                                                   // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCtrl;                                                    // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlt;                                                     // 0x001A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCmd;                                                     // 0x001B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.EnumUserSettingEntry
// 0x0020
struct FEnumUserSettingEntry
{
	struct FText                                       Label;                                                    // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int                                                Value;                                                    // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.EnumCVDUserSettingEntry
// 0x0020
struct FEnumCVDUserSettingEntry
{
	struct FText                                       Label;                                                    // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	EColorVisionDeficiency                             Value;                                                    // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              Intensity;                                                // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.CachedMaterialState
// 0x0020
struct FCachedMaterialState
{
	class UMaterialInterface*                          OriginalMaterial;                                         // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          NewMaterial;                                              // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OriginalMaterialIndex;                                    // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UMeshComponent*                              Component;                                                // 0x0018(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.ActorQueryFilter
// 0x0028
struct FActorQueryFilter
{
	struct FName                                       Tag;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAffiliation                                       Affiliation;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class AActor*                                      RefActor;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IgnoreRefActor;                                           // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SortResultsByDistance;                                    // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SolveIn2D;                                                // 0x001A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TestLineOfSight;                                          // 0x001B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TestCollision;                                            // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TestHealth;                                               // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECompareOp                                         HealthCompare;                                            // 0x001E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x1];                                       // 0x001F(0x0001) MISSED OFFSET
	float                                              HealthValue;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.ActorQueryResult
// 0x0018
struct FActorQueryResult
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TestLocation;                                             // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Distance;                                                 // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.SimplePoolPrecache
// 0x0030
struct FSimplePoolPrecache
{
	TSoftObjectPtr<class UClass>                       SoftClass;                                                // 0x0000(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinCache;                                                 // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxCache;                                                 // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.HitLocationInfo
// 0x0040
struct FHitLocationInfo
{
	struct FName                                       NameID;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                           PhysMat;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCollisionInitiallyEnabled;                               // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              DamageScalar;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HealthRatio;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       EventOnDestroyed;                                         // 0x001C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               KillOnDestroyed;                                          // 0x0024(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bResistSpot;                                              // 0x0025(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsWeakSpot;                                              // 0x0026(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Destroyed;                                                // 0x0027(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               BoneNamesToActivateCollision;                             // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                              DamageTaken;                                              // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.ImpactFXDecalCurves
// 0x0010
struct FImpactFXDecalCurves
{
	class UCurveFloat*                                 DecalEmissiveCurve;                                       // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 DecalOpacityCurve;                                        // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.ImpactFX
// 0x0048
struct FImpactFX
{
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UParticleSystem*                             ImpactFX;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   ImpactSound;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                                   DecalMaterial;                                            // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DecalSize;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DecalDepth;                                               // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DecalLifeSpan;                                            // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DecalFadeScreenSize;                                      // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DecalRandomizeRotation;                                   // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Reflect;                                                  // 0x0031(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
	struct FImpactFXDecalCurves                        Curves;                                                   // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.RebindedInputAction
// 0x0028
struct FRebindedInputAction
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FInputActionKeyMapping>              AddedKeys;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FInputActionKeyMapping>              RemovedKeys;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.RebindedInputAxis
// 0x0028
struct FRebindedInputAxis
{
	struct FName                                       AxisName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FInputAxisKeyMapping>                AddedKeys;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FInputAxisKeyMapping>                RemovedKeys;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.InputButton
// 0x0040
struct FInputButton
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       InputName;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ShiftInputName;                                           // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EShiftButtonType                                   ShiftType;                                                // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EInputFilterMethod                                 Filter;                                                   // 0x0019(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x26];                                      // 0x001A(0x0026) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.StatInfo
// 0x0058
struct FStatInfo
{
	struct FName                                       NameID;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Category;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Label;                                                    // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       CustomDescription;                                        // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UTexture2D*                                  Icon;                                                     // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EInspectStatType                                   Type;                                                     // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Primary;                                                  // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Hidden;                                                   // 0x004A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Modifier;                                                 // 0x004B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ForceInspect;                                             // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ApplyMod;                                                 // 0x004D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
	float                                              Range;                                                    // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.InterpolatedSoundClassAdjuster
// 0x0018
struct FInterpolatedSoundClassAdjuster
{
	class USoundClass*                                 SoundClassObject;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VolumeAdjusterBegin;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VolumeAdjusterEnd;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PitchAdjusterBegin;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PitchAdjusterEnd;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.ItemGenRequest
// 0x0018
struct FItemGenRequest
{
	int                                                Level;                                                    // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class AActor*                                      Cause;                                                    // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                   // 0x0010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.ItemGenResult
// 0x0038
struct FItemGenResult
{
	TSoftObjectPtr<class UClass>                       Item;                                                     // 0x0000(0x0028) (BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Quantity;                                                 // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class UItemInstanceData*                           InstanceData;                                             // 0x0030(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.ItemSocketSlot
// 0x0028
struct FItemSocketSlot
{
	class UClass*                                      ItemType;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowItemInSocket;                                        // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FName                                       SocketName;                                               // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFull;                                                    // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanAddItem;                                              // 0x0015(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanRemoveItem;                                           // 0x0016(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0017(0x0001) MISSED OFFSET
	class AItem*                                       VisualInstance;                                           // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SlottedType;                                              // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.LevelInstanceInfo
// 0x0090
struct FLevelInstanceInfo
{
	int                                                ID;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       LevelInstanceName;                                        // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       LevelPackageName;                                         // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
	struct FTransform                                  LevelTransform;                                           // 0x0020(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bBlockOnLoad;                                             // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldBeLoaded;                                          // 0x0051(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldBeVisible;                                         // 0x0052(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldLoadChildLevels;                                   // 0x0053(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<int>                                        ChildLevelsID;                                            // 0x0058(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0068(0x0028) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.LevelInstanceStatus
// 0x0010
struct FLevelInstanceStatus
{
	class ULevelInstance*                              LevelInstance;                                            // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.LODVolumeSubFilter
// 0x00A0
struct FLODVolumeSubFilter
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<class FString>                              SubStrings;                                               // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UClass>>               Classes;                                                  // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UBlueprint>>           blueprints;                                               // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UStaticMesh>>          StaticMeshes;                                             // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UMaterialInstance>>    Decals;                                                   // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0058(0x0048) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.LODVolumeDistanceFilter
// 0x0010 (0x00B0 - 0x00A0)
struct FLODVolumeDistanceFilter : public FLODVolumeSubFilter
{
	float                                              Distance;                                                 // 0x00A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceMultiplier;                                       // 0x00A4(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldApplyDistanceFade;                                 // 0x00A8(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.LODVolumeInfo
// 0x0018
struct FLODVolumeInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class ALODVolume*                                  Volume;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ELODVolumeVisibility                               State;                                                    // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              Distance;                                                 // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.TileSpawnList
// 0x0028
struct FTileSpawnList
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Enabled;                                                  // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class USpawnTable*                                 SpawnTable;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               Tags;                                                     // 0x0018(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.MapSettings
// 0x0010
struct FMapSettings
{
	class UClass*                                      Map;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBlockLoad;                                               // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bServeAsTransition;                                       // 0x0009(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.EventTreePayload
// 0x0008
struct FEventTreePayload
{
	struct FName                                       EventName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.MovieSceneEventTreeSectionData
// 0x0080 (0x0088 - 0x0008)
struct FMovieSceneEventTreeSectionData : public FMovieSceneChannel
{
	TArray<struct FFrameNumber>                        Times;                                                    // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FEventTreePayload>                   KeyValues;                                                // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.MusicState
// 0x0028
struct FMusicState
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       IntroStinger;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   Music;                                                    // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeInTime;                                               // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeOutTime;                                              // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RestartOnEntry;                                           // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.MusicStinger
// 0x0010
struct FMusicStinger
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   Stinger;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.ActiveMusicSet
// 0x0058
struct FActiveMusicSet
{
	class UMusicSet*                                   MusicSet;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReferenceCount;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       CurrentState;                                             // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DestinationState;                                         // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UAudioComponent*                             IntroAudio;                                               // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAudioComponent*>                     ActiveAudio;                                              // 0x0028(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UMusicManager*                               MusicManager;                                             // 0x0038(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0040(0x0018) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.LookTarget
// 0x0018
struct FLookTarget
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.PhysicsImpactSoundInfo
// 0x0040
struct FPhysicsImpactSoundInfo
{
	class USoundBase*                                  FoleySound;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  RollingSound;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 VelocityVolumeCurve;                                      // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 PitchVelocityCurve;                                       // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               StopSoundManually;                                        // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	class UCurveFloat*                                 VelocityDurationCurve;                                    // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDistance;                                              // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FoleySoundThreshold;                                      // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RollingSoundThreshold;                                    // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.CachedPhysicsComponent
// 0x0020
struct FCachedPhysicsComponent
{
	class UPrimitiveComponent*                         CachedComponent;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CachedLinearVelocity;                                     // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CachedAngularVelocity;                                    // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.PlayStateContext
// 0x0018
struct FPlayStateContext
{
	struct FName                                       StateName;                                                // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Context;                                                  // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Reason;                                                   // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.ReplicatedTrace
// 0x0014 (0x002C - 0x0018)
struct FReplicatedTrace : public FReplicatedLocation
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0018(0x0014) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.ReplicatedHit
// 0x0028 (0x0054 - 0x002C)
struct FReplicatedHit : public FReplicatedTrace
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x002C(0x0028) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.TargetingColorParams
// 0x0014
struct FTargetingColorParams
{
	bool                                               OverrideProjectDefaultColors;                             // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FColor                                      NoTargetColor;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      HostileColor;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      FriendlyColor;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      NeutralColor;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.ReceptacleSlot
// 0x0028
struct FReceptacleSlot
{
	class UClass*                                      ItemType;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SocketName;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFull;                                                    // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanAddItem;                                              // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanRemoveItem;                                           // 0x0012(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0013(0x0005) MISSED OFFSET
	class AItem*                                       VisualInstance;                                           // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SlottedType;                                              // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.ReplicatedMovementInfo
// 0x0030
struct FReplicatedMovementInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.ResourceType
// 0x0030
struct FResourceType
{
	EResourceDistribution                              Distribution;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Min;                                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Max;                                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class USpawnTable*                                 SpawnTable;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               SpawnTags;                                                // 0x0018(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FName                                       SpawnPointTag;                                            // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.TileResources
// 0x0028
struct FTileResources
{
	int                                                TileID;                                                   // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FSpawnList                                  Resources;                                                // 0x0008(0x0010) (SaveGame, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.LevelSequencePossession
// 0x0130
struct FLevelSequencePossession
{
	class AActor*                                      Avatar;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Possessor;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneObjectBindingID                  BindingID;                                                // 0x0010(0x0018) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneSequenceID                       SequenceID;                                               // 0x0028(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TMap<class UPrimitiveComponent*, TEnumAsByte<ECollisionEnabled>> CachedCollisionMap;                                       // 0x0030(0x0050) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TMap<class UPrimitiveComponent*, bool>             CachedMipStreamingMap;                                    // 0x0080(0x0050) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                                     CachedNegativeBoundsExtension;                            // 0x00D0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CachedPositiveBoundsExtension;                            // 0x00DC(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsRestricted;                                             // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET
	struct FTransform                                  CachedTransform;                                          // 0x00F0(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               CachedTargetability;                                      // 0x0120(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EMovementMode>                         CachedMovementMode;                                       // 0x0121(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0xE];                                       // 0x0122(0x000E) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.QueuedSpawn
// 0x0180
struct FQueuedSpawn
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
	class AActor*                                      Owner;                                                    // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASpawnPointBase*                             SpawnPoint;                                               // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ActorBP;                                                  // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                    // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSpawnEntry                                 SpawnEntry;                                               // 0x0060(0x0078) (NativeAccessSpecifierPublic)
	class ULevel*                                      OwningLevel;                                              // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x00E0(0x00A0) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.SpawnPointInfo
// 0x0060
struct FSpawnPointInfo
{
	int                                                ID;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                      SpawnPointBP;                                             // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASpawnPoint*                                 SpawnPoint;                                               // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.InteractiveInfo
// 0x0010
struct FInteractiveInfo
{
	class AActor*                                      InteractiveOther;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               InteractiveSlave;                                         // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      InteractiveState;                                         // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              InteractiveMashValue;                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.StateID
// 0x0004
struct FStateID
{
	uint16_t                                           StateID;                                                  // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           StateRuntimeID;                                           // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.StatDecoratorStat
// 0x0010
struct FStatDecoratorStat
{
	struct FName                                       Stat;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scalar;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.SubtitleInfo
// 0x0060
struct FSubtitleInfo
{
	int                                                ID;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class AActor*                                      Source;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Emote;                                                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Text;                                                     // 0x0018(0x0018) (NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USoundBase>                   Audio;                                                    // 0x0030(0x0028) (UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AutoRemove;                                               // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.SurfaceOrientFeeler
// 0x0010
struct FSurfaceOrientFeeler
{
	struct FName                                       FeelerNode;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       IkVirtualBone;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.HeuristicBoundsTraceParams
// 0x0010
struct FHeuristicBoundsTraceParams
{
	float                                              MinDistance;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDistance;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FieldOfView;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckForLoS;                                             // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckForHitComponent;                                    // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x000E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.TargetTraceParams
// 0x0024
struct FTargetTraceParams
{
	struct FHeuristicBoundsTraceParams                 BoundsTraceParams;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                              ClosenessToBoundsCenterWeight;                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceFromTraceOriginWeight;                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BestTargetScorePadding;                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStickyTarget;                                            // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCalculateSnapTarget;                                     // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
	float                                              MaxSnapAngle;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.HeuristicBoundsHitResult
// 0x0040
struct FHeuristicBoundsHitResult
{
	EHeuristicBoundsTraceResult                        Result;                                                   // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UHeuristicBoundsComponent*                   Component;                                                // 0x0008(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceToTarget;                                         // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     DirectionToTarget;                                        // 0x0014(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     BoundsLocation;                                           // 0x0020(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ClosenessToCenter;                                        // 0x002C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngleFromCenter;                                          // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasLOS;                                                  // 0x0034(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UPrimitiveComponent>          HitComponent;                                             // 0x0038(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.TileEdges
// 0x0008
struct FTileEdges
{
	bool                                               North;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               East;                                                     // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               South;                                                    // 0x0002(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               West;                                                     // 0x0003(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               NorthWest;                                                // 0x0004(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               NorthEast;                                                // 0x0005(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SouthEast;                                                // 0x0006(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SouthWest;                                                // 0x0007(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.TimeDilationEffectHandle
// 0x0004
struct FTimeDilationEffectHandle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.DamageNumberParameters
// 0x0078
struct FDamageNumberParameters
{
	struct FSlateFontInfo                              Font;                                                     // 0x0000(0x0050) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   PopScale;                                                 // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPopToWhite;                                              // 0x0058(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	class UCurveFloat*                                 PopCurve;                                                 // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Speed;                                                    // 0x0068(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Gravity;                                                  // 0x006C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LifeSpan;                                                 // 0x0070(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.HudInteractive
// 0x0030
struct FHudInteractive
{
	EHudInteractiveType                                Type;                                                     // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class AActor*                                      Actor;                                                    // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInteractiveState*                           InteractiveState;                                         // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0018(0x0018) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.TutorialPrompt
// 0x0038 (0x0040 - 0x0008)
struct FTutorialPrompt : public FTableRowBase
{
	struct FText                                       Text;                                                     // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UTexture2D*                                  Icon;                                                     // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Node;                                                     // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                 // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Priority;                                                 // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideEnabled;                                          // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.VariableInfo
// 0x0028
struct FVariableInfo
{
	struct FName                                       NameID;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FConditions                                 Conditions;                                               // 0x0010(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.BlackboardNumValue
// 0x0008
struct FBlackboardNumValue
{
	ECompareOp                                         Compare;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.BlackboardBoolValue
// 0x0001
struct FBlackboardBoolValue
{
	bool                                               Value;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.BlackboardStringValue
// 0x0010
struct FBlackboardStringValue
{
	class FString                                      Value;                                                    // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.BlackboardObjectValue
// 0x0010
struct FBlackboardObjectValue
{
	class UClass*                                      Type;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CheckForNull;                                             // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.BlackboardClassValue
// 0x0008
struct FBlackboardClassValue
{
	class UClass*                                      Value;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.VisualSlot
// 0x0040
struct FVisualSlot
{
	struct FName                                       NameID;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DefaultVisualID;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       VisualID;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVisualID*                                   PendingVisual;                                            // 0x0018(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVisualID*                                   CachedVisual;                                             // 0x0020(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	bool                                               IsTransient;                                              // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.VisualMaterialParam
// 0x0050
struct FVisualMaterialParam
{
	bool                                               AllMaterials;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllMeshes;                                                // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FName                                       SlotName;                                                 // 0x0004(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ParamenterName;                                           // 0x000C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EVisualMaterialParameterType                       ParameterType;                                            // 0x0014(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              ScalarValue;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ColorValue;                                               // 0x001C(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UTexture*                                    TextureValue;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EEaseType                                          EaseValue;                                                // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EParamApply                                        ApplyValue;                                               // 0x0039(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	float                                              TweenFrom;                                                // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TweenTo;                                                  // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                 // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Exponent;                                                 // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.VisualMaterialReplacement
// 0x0018
struct FVisualMaterialReplacement
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          Material;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllMeshes;                                               // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.RandomSkinMesh
// 0x0068
struct FRandomSkinMesh
{
	TSoftObjectPtr<class USkeletalMesh>                Mesh;                                                     // 0x0000(0x0028) (Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               VisualTags;                                               // 0x0028(0x0010) (ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	TArray<struct FName>                               AnimSoundTags;                                            // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FVisualMaterialReplacement>          MaterialReplacements;                                     // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FVisualMaterialParam>                MaterialParams;                                           // 0x0058(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.RandomStaticMesh
// 0x0068
struct FRandomStaticMesh
{
	TSoftObjectPtr<class UStaticMesh>                  Mesh;                                                     // 0x0000(0x0028) (Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               VisualTags;                                               // 0x0028(0x0010) (ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	TArray<struct FName>                               AnimSoundTags;                                            // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FVisualMaterialReplacement>          MaterialReplacements;                                     // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FVisualMaterialParam>                MaterialParams;                                           // 0x0058(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.WaterFXEntry
// 0x0018
struct FWaterFXEntry
{
	float                                              VelocityRef;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SubmergeDepth;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  SFX;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             VFX;                                                      // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.WaterFXOverride
// 0x0040
struct FWaterFXOverride
{
	TArray<class UClass*>                              WaterTypes;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FWaterFXEntry>                       WaterEnterFX;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FWaterFXEntry>                       WaterWakeFX;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FWaterFXEntry>                       WaterExitFX;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.WeaponAffinity
// 0x0048
struct FWeaponAffinity
{
	struct FText                                       Label;                                                    // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                              // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FName                                       DamageBonusStat;                                          // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AffinityStat;                                             // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EWeaponAffinityType                                AffinityType;                                             // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.WorldSoundList
// 0x0010
struct FWorldSoundList
{
	TArray<class UWorldSoundEntry*>                    Entries;                                                  // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.StatData
// 0x0000 (0x0008 - 0x0008)
struct FStatData : public FTableRowBase
{

};

// ScriptStruct GunfireRuntime.RelevantActor
// 0x0054
struct FRelevantActor
{
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAffiliation                                       Affiliation;                                              // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAwarenessState                                    AwarenessState;                                           // 0x0009(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              AwarenessStateTimer;                                      // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LastKnownPosition;                                        // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LastKnownVisiblePosition;                                 // 0x001C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Distance;                                                 // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPathState                                         PathState;                                                // 0x002C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xB];                                       // 0x002D(0x000B) MISSED OFFSET
	EVisState                                          VisState;                                                 // 0x0038(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0xB];                                       // 0x0039(0x000B) MISSED OFFSET
	unsigned char                                      bHasPreviouslyBeenVisible : 1;                            // 0x0044(0x0001) (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bHasSphereLOS : 1;                                        // 0x0044(0x0001) (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bHasLOS : 1;                                              // 0x0044(0x0001) (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bHasLOF : 1;                                              // 0x0044(0x0001) (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bHasDirectPath : 1;                                       // 0x0044(0x0001) (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPersistent : 1;                                          // 0x0044(0x0001) (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAlwaysRelevant : 1;                                      // 0x0044(0x0001) (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bHasFullWeight : 1;                                       // 0x0044(0x0001) (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              Threat;                                                   // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SightAwareness;                                           // 0x004C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BonusLostSightRange;                                      // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.AmbientAudioChannel
// 0x0030
struct FAmbientAudioChannel
{
	unsigned char                                      UnknownData00[0x24];                                      // 0x0000(0x0024) MISSED OFFSET
	TWeakObjectPtr<class UAmbientAudioComponent>       PrimaryComponent;                                         // 0x0024(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.GunfireAnimInstanceProxy
// 0x0020 (0x06C0 - 0x06A0)
struct FGunfireAnimInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x06A0(0x0020) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.AnimNode_3DBlend
// 0x00B0 (0x00C0 - 0x0010)
struct FAnimNode_3DBlend : public FAnimNode_Base
{
	float                                              Z;                                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<float>                                      Heights;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPoseLink>                           Samples;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FInterpolationParameter                     InputInterpolation;                                       // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              TargetWeightInterpolationSpeedPerSec;                     // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x5C];                                      // 0x0044(0x005C) MISSED OFFSET
	TArray<float>                                      BlendWeights;                                             // 0x00A0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.AnimNode_BlendByAnimationID_Animation
// 0x000C
struct FAnimNode_BlendByAnimationID_Animation
{
	struct FName                                       AnimationID;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendTime;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.AnimNode_PlayAnimSetAnim
// 0x0040 (0x0070 - 0x0030)
struct FAnimNode_PlayAnimSetAnim : public FAnimNode_AssetPlayerBase
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET
	class UAnimSequenceBase*                           Sequence;                                                 // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// ScriptStruct GunfireRuntime.AnimNode_BlendByAnimationID_Anim
// 0x00D0
struct FAnimNode_BlendByAnimationID_Anim
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	struct FAnimNode_PlayAnimSetAnim                   AssetPlayer;                                              // 0x0010(0x0070) (NativeAccessSpecifierPublic)
	float                                              BlendTime;                                                // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4C];                                      // 0x0084(0x004C) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.AnimNode_BlendByAnimationID
// 0x03B0 (0x03C0 - 0x0010)
struct FAnimNode_BlendByAnimationID : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                 // 0x0010(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FPoseLink>                           BlendPose;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAnimNode_BlendByAnimationID_Animation> Animations;                                               // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FName                                       AnimationLayerID;                                         // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAlphaBlendOption                                  BlendType;                                                // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	struct FAnimNode_BlendByAnimationID_Anim           ActiveAnims[0x4];                                         // 0x0050(0x00D0) (Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0390(0x0010) MISSED OFFSET
	TArray<struct FBlendSampleData>                    PerBoneSampleData;                                        // 0x03A0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x10];                                      // 0x03B0(0x0010) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.AnimNode_BlendByAnimTags_Entry
// 0x0018
struct FAnimNode_BlendByAnimTags_Entry
{
	TArray<struct FName>                               AnimTags;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              BlendTime;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.AnimNode_BlendByAnimTags
// 0x00B8 (0x00C8 - 0x0010)
struct FAnimNode_BlendByAnimTags : public FAnimNode_Base
{
	TArray<struct FPoseLink>                           BlendPose;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAnimNode_BlendByAnimTags_Entry>     Entries;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	EAlphaBlendOption                                  BlendType;                                                // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class UCurveFloat*                                 CustomBlendCurve;                                         // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendProfile*                               BlendProfile;                                             // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAlphaBlend>                         Blends;                                                   // 0x0048(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      BlendWeights;                                             // 0x0058(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<float>                                      RemainingBlendTimes;                                      // 0x0068(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int                                                LastActiveChildIndex;                                     // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	TArray<struct FBlendSampleData>                    PerBoneSampleData;                                        // 0x0080(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0090(0x0010) MISSED OFFSET
	bool                                               bReinitializeOnBecomingRelevant;                          // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bResetOnActivation;                                       // 0x00A1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bDynamicEvaluateActivePose;                               // 0x00A2(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x25];                                      // 0x00A3(0x0025) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.AnimNode_CompositeBlendSpacePlayer
// 0x0278 (0x0288 - 0x0010)
struct FAnimNode_CompositeBlendSpacePlayer : public FAnimNode_Base
{
	float                                              InitialX;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InitialY;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InitialZ;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LoopingX;                                                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LoopingY;                                                 // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LoopingZ;                                                 // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpaceBase*                             InitialBlendSpace;                                        // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpaceBase*                             LoopingBlendSpace;                                        // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InitialBlendSpaceStopTime;                                // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAlphaBlendOption                                  BlendType;                                                // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	class UCurveFloat*                                 CustomBlendCurve;                                         // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendProfile*                               BlendProfile;                                             // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendTime;                                                // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GroupIndex;                                               // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EAnimGroupRole>                        GroupRole;                                                // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	struct FAnimNode_BlendSpacePlayer                  InitialBlendSpacePlayer;                                  // 0x0060(0x00E0) (Transient, Protected, NativeAccessSpecifierProtected)
	struct FAnimNode_BlendSpacePlayer                  LoopingBlendSpacePlayer;                                  // 0x0140(0x00E0) (Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0220(0x0008) MISSED OFFSET
	struct FAlphaBlend                                 InitialBlend;                                             // 0x0228(0x0030) (NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FAlphaBlend>                         Blends;                                                   // 0x0258(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<float>                                      BlendWeights;                                             // 0x0268(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<int>                                        PosesToEvaluate;                                          // 0x0278(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// ScriptStruct GunfireRuntime.AnimNode_PlayAnimByAnimTags_AnimEntry
// 0x0020
struct FAnimNode_PlayAnimByAnimTags_AnimEntry
{
	TArray<struct FName>                               AnimTags;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequenceBase*>                   Animations;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.AnimNode_PlayAnimByAnimTags
// 0x0028 (0x0058 - 0x0030)
struct FAnimNode_PlayAnimByAnimTags : public FAnimNode_AssetPlayerBase
{
	TArray<struct FAnimNode_PlayAnimByAnimTags_AnimEntry> Entries;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bLoopAnimation;                                           // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bApplyRootMotion;                                         // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	float                                              PlayRate;                                                 // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Sequence;                                                 // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.AnimNode_RandomBlend
// 0x0048 (0x00E0 - 0x0098)
struct FAnimNode_RandomBlend : public FAnimNode_BlendListBase
{
	float                                              MinPlayDuration;                                          // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxPlayDuration;                                          // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NodeSeed;                                                 // 0x00A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	TArray<float>                                      PlayChanaces;                                             // 0x00A8(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00B8(0x0010) MISSED OFFSET
	int                                                CurrentPlayIndex;                                         // 0x00C8(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              NextUpdateDelay;                                          // 0x00CC(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.Cooldown
// 0x0008 (0x0010 - 0x0008)
struct FCooldown : public FStatData
{
	float                                              StartTime;                                                // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndTime;                                                  // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.CharacterData
// 0x0050 (0x0058 - 0x0008)
struct FCharacterData : public FStatData
{
	int                                                ExperienceValue;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HealthMax;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HealthRegen;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StaminaMax;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StaminaRegen;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StaminaRegenDelay;                                        // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StaminaEmptyDelay;                                        // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Damage;                                                   // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DamageMod;                                                // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Defense;                                                  // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PhysicalResistance;                                       // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ArcaneResistance;                                         // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FireResistance;                                           // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EarthResistance;                                          // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AirResistance;                                            // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IceResistance;                                            // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WrathResistance;                                          // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ChaosResistance;                                          // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttackSpeed;                                              // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.Recipe
// 0x0058 (0x0060 - 0x0008)
struct FRecipe : public FTableRowBase
{
	ERecipeType                                        Type;                                                     // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UClass*                                      Item;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemLevel;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemQuantity;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Ingredient1;                                              // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Ingredient1Quantity;                                      // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UClass*                                      Ingredient2;                                              // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Ingredient2Quantity;                                      // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class UClass*                                      Ingredient3;                                              // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Ingredient3Quantity;                                      // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class UClass*                                      Ingredient4;                                              // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Ingredient4Quantity;                                      // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.Dialog
// 0x0028
struct FDialog
{
	struct FText                                       Label;                                                    // 0x0000(0x0018) (BlueprintVisible, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	class UEventTree*                                  EventTree;                                                // 0x0020(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.DifficultyScalingData
// 0x0018 (0x0020 - 0x0008)
struct FDifficultyScalingData : public FTableRowBase
{
	float                                              EnemyHealthScalar;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EnemyDamageScalar;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpawnQuantityScalar;                                      // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CurrencyScalar;                                           // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExperienceScalar;                                         // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.ColorMapping
// 0x0018
struct FColorMapping
{
	struct FName                                       TagName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.NodeDisplayData
// 0x0028
struct FNodeDisplayData
{
	TEnumAsByte<EActionType>                           ActionType;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class FString                                      ActionName;                                               // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                      ActionText;                                               // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.VisitedCoordinates
// 0x0010
struct FVisitedCoordinates
{
	TArray<struct FVisibleCoordinate>                  Coordinates;                                              // 0x0000(0x0010) (ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.MultiplayerScalingData
// 0x0010 (0x0018 - 0x0008)
struct FMultiplayerScalingData : public FTableRowBase
{
	float                                              EnemyDamageScalar;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayerDamageScalar;                                       // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpawnQuantityScalar;                                      // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.InputActivity
// 0x0008
struct FInputActivity
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.ItemStatInfo
// 0x0030
struct FItemStatInfo
{
	struct FName                                       NameID;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Label;                                                    // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UTexture2D*                                  Icon;                                                     // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EInspectStatType                                   Type;                                                     // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Primary;                                                  // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Hidden;                                                   // 0x002A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CharacterStat;                                            // 0x002B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.TransformWithSnapResults
// 0x0040
struct FTransformWithSnapResults
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.MiniMapMeshMapIndex
// 0x0048 (0x0050 - 0x0008)
struct FMiniMapMeshMapIndex : public FTableRowBase
{
	TArray<class UClass*>                              MatchingActors;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UStaticMesh>>          MatchingMeshes;                                           // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UStaticMesh>                  ResultMesh;                                               // 0x0028(0x0028) (Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.MovieSceneDialogSectionTemplateData
// 0x0060
struct FMovieSceneDialogSectionTemplateData
{
	class USoundWave*                                  Dialog;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       DialogText;                                               // 0x0008(0x0018) (NativeAccessSpecifierPublic)
	class UClass*                                      Emote;                                                    // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IgnoreVocalRange;                                         // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FFloatRange                                 DialogTimeRange;                                          // 0x002C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDialogFinished;                                         // 0x0040(0x0010) (ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDialogPlaybackPercent;                                  // 0x0050(0x0010) (ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.MovieSceneDialogSectionTemplate
// 0x0060 (0x0080 - 0x0020)
struct FMovieSceneDialogSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneDialogSectionTemplateData        DialogData;                                               // 0x0020(0x0060) (ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.MovieSceneEventTreeSectionTemplate
// 0x00A8 (0x00C8 - 0x0020)
struct FMovieSceneEventTreeSectionTemplate : public FMovieSceneEvalTemplate
{
	TArray<struct FMovieSceneObjectBindingID>          EventReceivers;                                           // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FMovieSceneEventTreeSectionData             EventData;                                                // 0x0030(0x0088) (NativeAccessSpecifierPublic)
	unsigned char                                      bFireEventsWhenForwards : 1;                              // 0x00B8(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFireEventsWhenBackwards : 1;                             // 0x00B8(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
	class UMovieSceneEventTreeTrack*                   ParentTrack;                                              // 0x00C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.MovieSceneSoundSetSectionTemplateData
// 0x0048
struct FMovieSceneSoundSetSectionTemplateData
{
	struct FName                                       SoundIDName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Emote;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IgnoreVocalRange;                                         // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FFloatRange                                 SoundSetTimeRange;                                        // 0x0014(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSoundSetFinished;                                       // 0x0028(0x0010) (ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSoundSetPlaybackPercent;                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.MovieSceneSoundSetSectionTemplate
// 0x0048 (0x0068 - 0x0020)
struct FMovieSceneSoundSetSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneSoundSetSectionTemplateData      SoundSetData;                                             // 0x0020(0x0048) (ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.PerNodePathSharingData
// 0x000C
struct FPerNodePathSharingData
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.ExperienceData
// 0x0008 (0x0010 - 0x0008)
struct FExperienceData : public FTableRowBase
{
	int                                                RequiredExperience;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.WeaponStatData
// 0x0008 (0x0010 - 0x0008)
struct FWeaponStatData : public FStatData
{
	int                                                Damage;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.RangedWeaponData
// 0x0038 (0x0048 - 0x0010)
struct FRangedWeaponData : public FWeaponStatData
{
	float                                              Range;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PrimaryFalloff;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SecondaryFalloff;                                         // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SprayCount;                                               // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Spread;                                                   // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxAmmo;                                                  // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AmmoPerClip;                                              // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AmmoPerReload;                                            // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RateOfFire;                                               // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BurstCount;                                               // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BurstRateOfFire;                                          // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasScope;                                                 // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	float                                              ScopeFOV;                                                 // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.RuleData
// 0x0030 (0x0038 - 0x0008)
struct FRuleData : public FTableRowBase
{
	struct FName                                       Trigger;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                      Criteria;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                      Store;                                                    // 0x0020(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Response;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.SpawnedActor
// 0x0080
struct FSpawnedActor
{
	struct FSpawnEntry                                 SpawnEntry;                                               // 0x0000(0x0078) (Transient, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GunfireRuntime.StateMachineSubobjectArray
// 0x0001
struct FStateMachineSubobjectArray
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.StateMachineSubobjectArrayElement
// 0x0001
struct FStateMachineSubobjectArrayElement
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.TargetAlignRequest
// 0x0020
struct FTargetAlignRequest
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.TraitPointsPerLevelData
// 0x0008 (0x0010 - 0x0008)
struct FTraitPointsPerLevelData : public FTableRowBase
{
	int                                                TraitPoints;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.VisualSceneComponent
// 0x0020
struct FVisualSceneComponent
{
	class USceneComponent*                             SceneComponent;                                           // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorVisual*                                Visual;                                                   // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                    // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct GunfireRuntime.WeaponPhantomShape
// 0x0050
struct FWeaponPhantomShape
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

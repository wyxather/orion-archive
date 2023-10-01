#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_GbxInventory_classes.hpp"
#include "BL3_GbxUI_classes.hpp"
#include "BL3_EngineSettings_classes.hpp"
#include "BL3_GbxGameSystemCore_classes.hpp"
#include "BL3_Engine_classes.hpp"
#include "BL3_GbxWeapon_classes.hpp"
#include "BL3_GbxRuntime_classes.hpp"
#include "BL3_GbxDialog_classes.hpp"
#include "BL3_CoreUObject_classes.hpp"
#include "BL3_GbxAI_classes.hpp"
#include "BL3_GbxNav_classes.hpp"
#include "BL3_AIModule_classes.hpp"
#include "BL3_GbxCameraModes_classes.hpp"
#include "BL3_GbxDynamicRoom_classes.hpp"
#include "BL3_UMG_classes.hpp"
#include "BL3_GbxMission_classes.hpp"
#include "BL3_OnlineSubsystemUtils_classes.hpp"
#include "BL3_GameplayTags_classes.hpp"
#include "BL3_WwiseAudio_classes.hpp"
#include "BL3_PhysXVehicles_classes.hpp"
#include "BL3_GbxAnimRuntime_classes.hpp"
#include "BL3_GameplayTasks_classes.hpp"
#include "BL3_ScaleformUI_classes.hpp"
#include "BL3_SlateCore_classes.hpp"
#include "BL3_InputCore_classes.hpp"
#include "BL3_GbxAbilities_classes.hpp"
#include "BL3_GbxSpawn_classes.hpp"
#include "BL3_GbxInput_classes.hpp"
#include "BL3_GbxAudio_classes.hpp"
#include "BL3_GbxStreamingInteraction_classes.hpp"
#include "BL3_GbxTravelStation_classes.hpp"
#include "BL3_OnlineSubsystem_classes.hpp"
#include "BL3_ReplicationGraph_classes.hpp"
#include "BL3_GbxTimeOfDay_classes.hpp"
#include "BL3_GbxVehicle_classes.hpp"
#include "BL3_AnimGraphRuntime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum OakGame.EExitDownStateReason
enum class EExitDownStateReason : uint8_t
{
	ExitDownStateReason_None       = 0,
	ExitDownStateReason_Revived    = 1,
	ExitDownStateReason_SecondWind = 2,
	ExitDownStateReason_TimerExpired = 3,
	ExitDownStateReason_Interrupted = 4,
	ExitDownStateReason_Instant    = 5,
	ExitDownStateReason_Custom     = 6,
	ExitDownStateReason_MAX        = 7
};


// Enum OakGame.EDownState
enum class EDownState : uint8_t
{
	DownState_Healthy              = 0,
	DownState_Down                 = 1,
	DownState_DownAndExerting      = 2,
	DownState_Resurrecting         = 3,
	DownState_GivingUp             = 4,
	DownState_MAX                  = 5
};


// Enum OakGame.EReviveState
enum class EReviveState : uint8_t
{
	ReviveState_None               = 0,
	ReviveState_BeingRevived       = 1,
	ReviveState_Reviving           = 2,
	ReviveState_MAX                = 3
};


// Enum OakGame.EOakElementalType
enum class EOakElementalType : uint8_t
{
	None                           = 0,
	Corrosive                      = 1,
	Cryo                           = 2,
	Fire                           = 3,
	Shock                          = 4,
	Radiation                      = 5,
	MAX                            = 6
};


// Enum OakGame.EKilledEnemyFriendEventType
enum class EKilledEnemyFriendEventType : uint8_t
{
	None                           = 0,
	Enemy                          = 1,
	NamedEnemy                     = 2,
	Boss                           = 3,
	EKilledEnemyFriendEventType_MAX = 4
};


// Enum OakGame.EMatchmakingState
enum class EMatchmakingState : uint8_t
{
	Idle                           = 0,
	PreparingToSearch              = 1,
	Searching                      = 2,
	ConfirmingPlayers              = 3,
	StartingGameplay               = 4,
	Canceling                      = 5,
	EMatchmakingState_MAX          = 6
};


// Enum OakGame.EBossbarEventType
enum class EBossbarEventType : uint8_t
{
	Intro_Event                    = 0,
	Enable_Invulnerable_Event      = 1,
	Disable_Invulnerable_Event     = 2,
	Shake_Event                    = 3,
	Destroy_Event                  = 4,
	NONE                           = 5,
	EBossbarEventType_MAX          = 6
};


// Enum OakGame.EOakLeague
enum class EOakLeague : uint8_t
{
	OL_None                        = 0,
	OL_BloodyHarvest               = 1,
	OL_ValentinesDay               = 2,
	OL_TheCartels                  = 3,
	OL_SummerOfGreed               = 4,
	OL_MAX                         = 5
};


// Enum OakGame.EEffectivePlayerCountSetting
enum class EEffectivePlayerCountSetting : uint8_t
{
	GameForced                     = 0,
	UserRequested                  = 1,
	Actual                         = 2,
	EEffectivePlayerCountSetting_MAX = 3
};


// Enum OakGame.EOakGameStateUIGroupMode
enum class EOakGameStateUIGroupMode : uint8_t
{
	Unknown                        = 0,
	Cooperation                    = 1,
	Coopetition                    = 2,
	EOakGameStateUIGroupMode_MAX   = 3
};


// Enum OakGame.EMultiplayerLootMode
enum class EMultiplayerLootMode : uint8_t
{
	Standard                       = 0,
	Instanced                      = 1,
	EMultiplayerLootMode_MAX       = 2
};


// Enum OakGame.ENewGameState
enum class ENewGameState : uint8_t
{
	None                           = 0,
	IntroMovie                     = 1,
	CharacterSelect                = 2,
	WaitingForPlayerPawns          = 3,
	ENewGameState_MAX              = 4
};


// Enum OakGame.EPlayerExperienceType
enum class EPlayerExperienceType : uint8_t
{
	Generic                        = 0,
	Combat                         = 1,
	Mission                        = 2,
	EPlayerExperienceType_MAX      = 3
};


// Enum OakGame.EPlayerExperienceSource
enum class EPlayerExperienceSource : uint8_t
{
	XPUnknown                      = 0,
	XPCombat                       = 1,
	PlotMissionAward               = 2,
	Discovery                      = 3,
	SideMissionAward               = 4,
	SaveGame                       = 5,
	EPlayerExperienceSource_MAX    = 6
};


// Enum OakGame.ECommandRingLocationType
enum class ECommandRingLocationType : uint8_t
{
	Default                        = 0,
	Ground                         = 1,
	Feet                           = 2,
	ECommandRingLocationType_MAX   = 3
};


// Enum OakGame.ECommandRingAlignmentType
enum class ECommandRingAlignmentType : uint8_t
{
	Default                        = 0,
	SurfaceWorld                   = 1,
	SurfaceView                    = 2,
	View                           = 3,
	View2D                         = 4,
	Actor                          = 5,
	ECommandRingAlignmentType_MAX  = 6
};


// Enum OakGame.ECommandRingReferenceActorType
enum class ECommandRingReferenceActorType : uint8_t
{
	Target                         = 0,
	Owner                          = 1,
	Custom                         = 2,
	ECommandRingReferenceActorType_MAX = 3
};


// Enum OakGame.EOakStatusEffectResourceEffectType
enum class EOakStatusEffectResourceEffectType : uint8_t
{
	Cryo                           = 0,
	EOakStatusEffectResourceEffectType_MAX = 1
};


// Enum OakGame.EHealthAdded
enum class EHealthAdded : uint8_t
{
	Success                        = 0,
	Falure                         = 1,
	EHealthAdded_MAX               = 2
};


// Enum OakGame.EValidIndex
enum class EValidIndex : uint8_t
{
	Valid                          = 0,
	Invalid                        = 1,
	EValidIndex_MAX                = 2
};


// Enum OakGame.EHealthState
enum class EHealthState : uint8_t
{
	Healthy                        = 0,
	Low                            = 1,
	VeryLow                        = 2,
	Injured                        = 3,
	Dead                           = 4,
	EHealthState_MAX               = 5
};


// Enum OakGame.EWeaponActionChannel
enum class EWeaponActionChannel : uint8_t
{
	Use                            = 0,
	Zoom                           = 1,
	Reload                         = 2,
	Other                          = 3,
	EWeaponActionChannel_MAX       = 4
};


// Enum OakGame.EZoomEventType
enum class EZoomEventType : uint8_t
{
	None                           = 0,
	ZoomingIn                      = 1,
	ZoomingOut                     = 2,
	EZoomEventType_MAX             = 3
};


// Enum OakGame.EDeathType
enum class EDeathType : uint8_t
{
	None                           = 0,
	HealthDepleted                 = 1,
	Suicide                        = 2,
	ScriptedInstantDeath           = 3,
	FellOutOfWorld                 = 4,
	Ragdoll                        = 5,
	EDeathType_MAX                 = 6
};


// Enum OakGame.EOakGender
enum class EOakGender : uint8_t
{
	Male                           = 0,
	Female                         = 1,
	Random                         = 2,
	EOakGender_MAX                 = 3
};


// Enum OakGame.EWeaponHolsteredSizeType
enum class EWeaponHolsteredSizeType : uint8_t
{
	Small                          = 0,
	Medium                         = 1,
	Large                          = 2,
	ExtraLarge                     = 3,
	EWeaponHolsteredSizeType_MAX   = 4
};


// Enum OakGame.ETargetedNameplateType
enum class ETargetedNameplateType : uint8_t
{
	Standard                       = 0,
	NPC                            = 1,
	Boss                           = 2,
	None                           = 3,
	ETargetedNameplateType_MAX     = 4
};


// Enum OakGame.EA9KSawState
enum class EA9KSawState : uint8_t
{
	NotStarted                     = 0,
	Cooldown                       = 1,
	PickTarget                     = 2,
	TryToReachTarget               = 3,
	ReachedTarget                  = 4,
	EquipSaw                       = 5,
	WaitForQuipAnimDone            = 6,
	Anticipation                   = 7,
	PrepareToShootAndShoot         = 8,
	WaitForBPCallback              = 9,
	FollowingTarget                = 10,
	Resting                        = 11,
	EA9KSawState_MAX               = 12
};


// Enum OakGame.EVaultRewardType
enum class EVaultRewardType : uint8_t
{
	None                           = 0,
	EridianAnalyser                = 1,
	EridianResonator               = 2,
	ArtifactSlot                   = 3,
	EridianFabricator              = 4,
	MayhemMode                     = 5,
	EVaultRewardType_MAX           = 6
};


// Enum OakGame.ETrackedIconOwner
enum class ETrackedIconOwner : uint8_t
{
	Unknown                        = 0,
	Released                       = 1,
	Minimap_Clamped                = 2,
	Minimap_Interior3D             = 3,
	InWorldContainer               = 4,
	ETrackedIconOwner_MAX          = 5
};


// Enum OakGame.EAnointedDeathState
enum class EAnointedDeathState : uint8_t
{
	PreFreeze                      = 0,
	Freezing                       = 1,
	Frozen                         = 2,
	ShatterKilled                  = 3,
	TimedOut                       = 4,
	EAnointedDeathState_MAX        = 5
};


// Enum OakGame.EVehicleDeathType
enum class EVehicleDeathType : uint8_t
{
	None                           = 0,
	HealthDepleted                 = 1,
	FellOutOfWorld                 = 2,
	DigistuctOut                   = 3,
	InstantDeath                   = 4,
	EVehicleDeathType_MAX          = 5
};


// Enum OakGame.EClearInputFilter
enum class EClearInputFilter : uint8_t
{
	ClearWeapons                   = 0,
	ClearInputComponent            = 1,
	DisableHover                   = 2,
	ClearAll                       = 3,
	EClearInputFilter_MAX          = 4
};


// Enum OakGame.ENavPainterLayer
enum class ENavPainterLayer : uint8_t
{
	Default                        = 0,
	Driver                         = 1,
	Scripted                       = 2,
	ENavPainterLayer_MAX           = 3
};


// Enum OakGame.EVehicleEffectEvent
enum class EVehicleEffectEvent : uint8_t
{
	None                           = 0,
	Boost                          = 1,
	BoostChargeCountChanged        = 2,
	BoostPoolEmpty                 = 3,
	BoostPoolFull                  = 4,
	StartEngine                    = 5,
	Braking                        = 6,
	Hover                          = 7,
	Horn                           = 8,
	Digithrust                     = 9,
	ShieldBreak                    = 10,
	ShieldHealthEvent_Normal       = 11,
	ShieldHealthEvent_Low          = 12,
	ShieldHealthEvent_VeryLow      = 13,
	ShieldFullHealth               = 14,
	Backfire                       = 15,
	MaxRPMBackfire                 = 16,
	HealthEvent_Healthy            = 17,
	HealthEvent_Low                = 18,
	HealthEvent_VeryLow            = 19,
	HealthEvent_Dead               = 20,
	StatusEffect_CryoFrozen        = 21,
	StatusEffect_CryoThawing       = 22,
	StatusEffect_Cryo              = 23,
	StatusEffect_Corrosive         = 24,
	StatusEffect_Shock             = 25,
	StatusEffect_Fire              = 26,
	StatusEffect_Radiation         = 27,
	EVehicleEffectEvent_MAX        = 28
};


// Enum OakGame.ENavCorrectionSetting
enum class ENavCorrectionSetting : uint8_t
{
	Default                        = 0,
	Enabled                        = 1,
	Disabled                       = 2,
	ENavCorrectionSetting_MAX      = 3
};


// Enum OakGame.EVehicleHealthState
enum class EVehicleHealthState : uint8_t
{
	Healthy                        = 0,
	Low                            = 1,
	VeryLow                        = 2,
	Dead                           = 3,
	EVehicleHealthState_MAX        = 4
};


// Enum OakGame.EIronBearExitReason
enum class EIronBearExitReason : uint8_t
{
	Undefined                      = 0,
	ActionSkillStopped             = 1,
	ManualExit                     = 2,
	Died                           = 3,
	FellOutOfWorld                 = 4,
	EmergencyExit                  = 5,
	EIronBearExitReason_MAX        = 6
};


// Enum OakGame.EIronBearHardPointOrientation
enum class EIronBearHardPointOrientation : uint8_t
{
	None                           = 0,
	Left                           = 1,
	Right                          = 2,
	EIronBearHardPointOrientation_MAX = 3
};


// Enum OakGame.EIronBearCoreType
enum class EIronBearCoreType : uint8_t
{
	None                           = 0,
	GundamBear                     = 1,
	StrengthThroughBalance         = 2,
	GunnersNest                    = 3,
	SurpriseforYou                 = 4,
	VeryIronBear                   = 5,
	HighVoltage                    = 6,
	IronCub                        = 7,
	EIronBearCoreType_MAX          = 8
};


// Enum OakGame.EIronBearDamageLevel
enum class EIronBearDamageLevel : uint8_t
{
	None                           = 0,
	Light                          = 1,
	Moderate                       = 2,
	Heavy                          = 3,
	EIronBearDamageLevel_MAX       = 4
};


// Enum OakGame.EIronBearSpawnStyle
enum class EIronBearSpawnStyle : uint8_t
{
	Full                           = 0,
	Quick                          = 1,
	EIronBearSpawnStyle_MAX        = 2
};


// Enum OakGame.EJumpType
enum class EJumpType : uint8_t
{
	None                           = 0,
	Default                        = 1,
	Sprint                         = 2,
	Slide                          = 3,
	UpwardLadderJump               = 4,
	EJumpType_MAX                  = 5
};


// Enum OakGame.EGameModeNotificationType
enum class EGameModeNotificationType : uint8_t
{
	None                           = 0,
	Raid_RaidSurvived              = 1,
	Raid_TeleporterActivated       = 2,
	Raid_Defeat                    = 3,
	Raid_PlayerIsOut               = 4,
	Raid_Start                     = 5,
	Raid_CountDown                 = 6,
	COS_Victory                    = 7,
	COS_Defeat                     = 8,
	COS_Wave                       = 9,
	COS_NotAllPlayersAssembled     = 10,
	GearUp_Victory                 = 11,
	GearUp_Defeat                  = 12,
	GearUp_Respawn                 = 13,
	GearUp_Start                   = 14,
	GearUp_Countdown               = 15,
	GearUp_SupplyDrop              = 16,
	GearUp_CircleClosing           = 17,
	GearUp_NewCircle               = 18,
	Off                            = 19,
	EGameModeNotificationType_MAX  = 20
};


// Enum OakGame.EDeathCircleStatus
enum class EDeathCircleStatus : uint8_t
{
	DCS_None                       = 0,
	DCS_Stable                     = 1,
	DCS_Transitioning              = 2,
	DCS_Complete                   = 3,
	DCS_MAX                        = 4
};


// Enum OakGame.EOakReticleFeedbackGameEvent
enum class EOakReticleFeedbackGameEvent : uint8_t
{
	None                           = 0,
	DamageCaused                   = 1,
	DeathCaused                    = 2,
	EOakReticleFeedbackGameEvent_MAX = 3
};


// Enum OakGame.ECanReRollInventoryResult
enum class ECanReRollInventoryResult : uint8_t
{
	Yes                            = 0,
	CantAfford                     = 1,
	No                             = 2,
	ECanReRollInventoryResult_MAX  = 3
};


// Enum OakGame.EPOIActivationResult
enum class EPOIActivationResult : uint8_t
{
	Success                        = 0,
	Failure_Generic                = 1,
	Failure_PlayerInMenu           = 2,
	Failure_AllyDown               = 3,
	Failure_FastTravelDisabled     = 4,
	Failure_PlayerInVehicle        = 5,
	Failure_ClientJoining          = 6,
	Failure_PlayerDueling          = 7,
	Failure_PhotoModeActive        = 8,
	EPOIActivationResult_MAX       = 9
};


// Enum OakGame.EKickReason
enum class EKickReason : uint8_t
{
	None                           = 0,
	Kicked                         = 1,
	Invite                         = 2,
	QuitGame                       = 3,
	SessionEnd                     = 4,
	TitleScreen                    = 5,
	IncompatibleMission            = 6,
	EKickReason_MAX                = 7
};


// Enum OakGame.EInventoryListType
enum class EInventoryListType : uint8_t
{
	IL_Primary                     = 0,
	IL_Bank                        = 1,
	IL_LostLoot                    = 2,
	IL_GearUp                      = 3,
	IL_MAX                         = 4
};


// Enum OakGame.EPlayerDifficultySetting
enum class EPlayerDifficultySetting : uint8_t
{
	Normal                         = 0,
	StoryMode                      = 1,
	MAX                            = 2
};


// Enum OakGame.ELateJoinState
enum class ELateJoinState : uint8_t
{
	NotLateJoining                 = 0,
	SelectingCharacter             = 1,
	ApplyingSaveGame               = 2,
	ELateJoinState_MAX             = 3
};


// Enum OakGame.ETradeRequestReceptionType
enum class ETradeRequestReceptionType : uint8_t
{
	All                            = 0,
	FriendsOnly                    = 1,
	Off                            = 2,
	MAX                            = 3
};


// Enum OakGame.EHyperHoopState
enum class EHyperHoopState : uint8_t
{
	Invalid                        = 0,
	NotStarted                     = 1,
	AttachingPawn                  = 2,
	Accelerating                   = 3,
	Moving                         = 4,
	Deccelerating                  = 5,
	DetachingPawn                  = 6,
	EHyperHoopState_MAX            = 7
};


// Enum OakGame.EVendingMachineBuyType
enum class EVendingMachineBuyType : uint8_t
{
	Regular                        = 0,
	BuyBack                        = 1,
	GearSoldByFriend               = 2,
	ItemOfTheDay                   = 3,
	EVendingMachineBuyType_MAX     = 4
};


// Enum OakGame.EVendingMachineScrollDirection
enum class EVendingMachineScrollDirection : uint8_t
{
	Forward                        = 0,
	Backward                       = 1,
	EVendingMachineScrollDirection_MAX = 2
};


// Enum OakGame.EGrenadeThrowFailureReason
enum class EGrenadeThrowFailureReason : uint8_t
{
	UnknownError                   = 0,
	ActionsLocked                  = 1,
	NotHealthy                     = 2,
	InternalCooldown               = 3,
	NotEnoughAmmo                  = 4,
	EGrenadeThrowFailureReason_MAX = 5
};


// Enum OakGame.EDuelClassification
enum class EDuelClassification : uint8_t
{
	Standard1v1                    = 0,
	FreeForAll                     = 1,
	EDuelClassification_MAX        = 2
};


// Enum OakGame.EDuelLoseReason
enum class EDuelLoseReason : uint8_t
{
	None                           = 0,
	PlayerKilled                   = 1,
	PlayerQuit                     = 2,
	OutOfBounds                    = 3,
	EDuelLoseReason_MAX            = 4
};


// Enum OakGame.EVehicleImpactForce
enum class EVehicleImpactForce : uint8_t
{
	Unknown                        = 0,
	Grinding                       = 1,
	VerySmall                      = 2,
	Small                          = 3,
	Medium                         = 4,
	Heavy                          = 5,
	Count                          = 6,
	EVehicleImpactForce_MAX        = 7
};


// Enum OakGame.EEffectStateType
enum class EEffectStateType : uint8_t
{
	Play                           = 0,
	Stop                           = 1,
	Count                          = 2,
	EEffectStateType_MAX           = 3
};


// Enum OakGame.EFreezeType
enum class EFreezeType : uint8_t
{
	Cryo                           = 0,
	Anointed                       = 1,
	MAX                            = 2
};


// Enum OakGame.EShieldEffectState
enum class EShieldEffectState : uint8_t
{
	Full                           = 0,
	Damaged                        = 1,
	Depleted                       = 2,
	EShieldEffectState_MAX         = 3
};


// Enum OakGame.EFreezeState
enum class EFreezeState : uint8_t
{
	None                           = 0,
	Freezing                       = 1,
	Frozen                         = 2,
	Thawing                        = 3,
	EFreezeState_MAX               = 4
};


// Enum OakGame.EOakUIInventoryItemUseType
enum class EOakUIInventoryItemUseType : uint8_t
{
	Unknown                        = 0,
	EquippableInternal             = 1,
	UsableInternal                 = 2,
	EOakUIInventoryItemUseType_MAX = 3
};


// Enum OakGame.EInteractiveObjectInteractiveState
enum class EInteractiveObjectInteractiveState : uint8_t
{
	None                           = 0,
	Interactive                    = 1,
	NonInteractive                 = 2,
	Uninitialized                  = 3,
	EInteractiveObjectInteractiveState_MAX = 4
};


// Enum OakGame.EInteractiveObjectLockState
enum class EInteractiveObjectLockState : uint8_t
{
	None                           = 0,
	Unlocked                       = 1,
	Locked                         = 2,
	Uninitialized                  = 3,
	EInteractiveObjectLockState_MAX = 4
};


// Enum OakGame.EInteractiveObjectState
enum class EInteractiveObjectState : uint8_t
{
	None                           = 0,
	Enabling                       = 1,
	Enabled                        = 2,
	Disabling                      = 3,
	Disabled                       = 4,
	Locked                         = 5,
	Uninitialized                  = 6,
	EInteractiveObjectState_MAX    = 7
};


// Enum OakGame.EPlayerAlertType
enum class EPlayerAlertType : uint8_t
{
	Location                       = 0,
	Neutral                        = 1,
	Friendly                       = 2,
	Hostile                        = 3,
	Loot                           = 4,
	Chest                          = 5,
	Max                            = 6
};


// Enum OakGame.EInteractiveObjectTrapActivationType
enum class EInteractiveObjectTrapActivationType : uint8_t
{
	ActivateTrap                   = 0,
	DeactivateTrap                 = 1,
	EInteractiveObjectTrapActivationType_MAX = 2
};


// Enum OakGame.EManagedWidgetType
enum class EManagedWidgetType : uint8_t
{
	Basic                          = 0,
	OnlineMessageAnimation         = 1,
	EManagedWidgetType_MAX         = 2
};


// Enum OakGame.EZoneMapChallengeStatus
enum class EZoneMapChallengeStatus : uint8_t
{
	ZMC_AvailableChallenge         = 0,
	ZMC_CompletedChallenge         = 1,
	ZMC_Unknown                    = 2,
	ZMC_MAX                        = 3
};


// Enum OakGame.EZoneMapMissionStatus
enum class EZoneMapMissionStatus : uint8_t
{
	ZMM_AvailableMission           = 0,
	ZMM_TrackedObjective           = 1,
	ZMM_OptionalObjective          = 2,
	ZMM_NotTrackedObjective        = 3,
	ZMM_OutOfMap                   = 4,
	ZMM_Unknown                    = 5,
	ZMM_MAX                        = 6
};


// Enum OakGame.EZoneMapViewerState
enum class EZoneMapViewerState : uint8_t
{
	Level                          = 0,
	Planet                         = 1,
	Galaxy                         = 2,
	Invalid                        = 3,
	EZoneMapViewerState_MAX        = 4
};


// Enum OakGame.EZoneMapMovementMode
enum class EZoneMapMovementMode : uint8_t
{
	Direct                         = 0,
	Interpolate                    = 1,
	Animate                        = 2,
	EZoneMapMovementMode_MAX       = 3
};


// Enum OakGame.EMissionDeliveryMenuDisplayState
enum class EMissionDeliveryMenuDisplayState : uint8_t
{
	Description                    = 0,
	Friends                        = 1,
	EMissionDeliveryMenuDisplayState_MAX = 2
};


// Enum OakGame.EOakMessageType
enum class EOakMessageType : uint8_t
{
	MessageType_PlayerJoined       = 0,
	MessageType_PlayerChangedName  = 1,
	MessageType_PlayerLeft         = 2,
	MessageType_PlayerUnableToJoin = 3,
	MessageType_SpectatorJoined    = 4,
	MessageType_MAX                = 5
};


// Enum OakGame.EMessageSpecialType
enum class EMessageSpecialType : uint8_t
{
	MST_None                       = 0,
	MST_TradeOffer                 = 1,
	MST_SeatSwapOffer              = 2,
	MST_MAX                        = 3
};


// Enum OakGame.EMainMenuViewpointType
enum class EMainMenuViewpointType : uint8_t
{
	TitleScreen                    = 0,
	OptionsMenu                    = 1,
	PlaythroughMode                = 2,
	NewGameSettings                = 3,
	MainMenuGroup                  = 4,
	CharacterSelect                = 5,
	BehindTheScenes                = 6,
	MAX                            = 7
};


// Enum OakGame.EActivityFeedImageAspectRatio
enum class EActivityFeedImageAspectRatio : uint8_t
{
	FEED_IMAGE_ASPECT_RATIO_1_X    = 0,
	FEED_IMAGE_ASPECT_RATIO_1_51_X = 1,
	FEED_IMAGE_ASPECT_RATIO_2_08_X = 2,
	FEED_IMAGE_ASPECT_RATIO_16_X   = 3,
	FEED_IMAGE_ASPECT_RATIO_4_X    = 4,
	FEED_IMAGE_ASPECT_RATIO_MAX    = 5
};


// Enum OakGame.EAIOOrientedParticleTargetType
enum class EAIOOrientedParticleTargetType : uint8_t
{
	None                           = 0,
	DefaultPosition                = 1,
	UIObject                       = 2,
	EAIOOrientedParticleTargetType_MAX = 3
};


// Enum OakGame.EA9KFightPhase
enum class EA9KFightPhase : uint8_t
{
	NotStarted                     = 0,
	Phase1                         = 1,
	Phase2                         = 2,
	Phase3                         = 3,
	Phase4                         = 4,
	Dead                           = 5,
	EA9KFightPhase_MAX             = 6
};


// Enum OakGame.EVehicleAchetypeNative
enum class EVehicleAchetypeNative : uint8_t
{
	Null                           = 0,
	Technical                      = 1,
	Outrunner                      = 2,
	Revolver                       = 3,
	Emperor                        = 4,
	Num                            = 5,
	EVehicleAchetypeNative_MAX     = 6
};


// Enum OakGame.EHeldActorPreset
enum class EHeldActorPreset : uint8_t
{
	Explosive                      = 0,
	Melee                          = 1,
	Shield                         = 2,
	EHeldActorPreset_MAX           = 3
};


// Enum OakGame.ECarnivoraBones
enum class ECarnivoraBones : uint8_t
{
	Root                           = 0,
	RW_Root                        = 1,
	RW_SuspensionR0                = 2,
	RW_SuspensionR1                = 3,
	RW_Wheel0                      = 4,
	RW_Tire0                       = 5,
	RW_Wheel1                      = 6,
	RW_Tire1                       = 7,
	RW_Wheel2                      = 8,
	RW_Tire2                       = 9,
	RW_SuspensionB0                = 10,
	RW_SuspensionB1                = 11,
	TrackShaft3                    = 12,
	TrackSuspension3               = 13,
	TrackTire3                     = 14,
	TrackShaft3_T                  = 15,
	SideAxle                       = 16,
	TrackShaft0                    = 17,
	TrackSuspension2               = 18,
	TrackTire2                     = 19,
	TrackShaft0_T                  = 20,
	SideAxle1                      = 21,
	TrackShaft1                    = 22,
	SideAxleSecondary              = 23,
	TrackSuspension1               = 24,
	TrackTire1                     = 25,
	TrackShaft1_T                  = 26,
	SideAxleSecondary1             = 27,
	SideAxle2                      = 28,
	TrackShaft2                    = 29,
	TrackSuspension0               = 30,
	TrackTire0                     = 31,
	TrackShaft2_T                  = 32,
	TunnelDoor                     = 33,
	MainAxle                       = 34,
	MainAxle_Part1                 = 35,
	MainAxle_Part2                 = 36,
	Count                          = 37,
	ECarnivoraBones_MAX            = 38
};


// Enum OakGame.EEmperorBones
enum class EEmperorBones : uint8_t
{
	Body                           = 0,
	Cannon_Yaw                     = 1,
	Cannon_Pitch                   = 2,
	Cannon_Recoil                  = 3,
	EntropyCore                    = 4,
	CannonTurret_Main              = 5,
	CannonTurret_Pitch             = 6,
	L_Turret_Yaw                   = 7,
	L_Turret_Pitch                 = 8,
	R_Turret_Yaw                   = 9,
	R_Turret_Pitch                 = 10,
	F_R_Wheel                      = 11,
	F_R_Wheel1                     = 12,
	F_R_Wheel2                     = 13,
	F_L_Wheel                      = 14,
	F_L_Wheel1                     = 15,
	F_L_Wheel2                     = 16,
	R_R_Wheel                      = 17,
	R_L_Wheel                      = 18,
	R_L_Wheel1                     = 19,
	R_R_Wheel1                     = 20,
	F_L_ThreadSuspension           = 21,
	F_R_ThreadSuspension           = 22,
	F_L_BigWheel_Suspension        = 23,
	F_R_BigWheel_Suspension        = 24,
	F_R_Hover01                    = 25,
	F_R_Hover02                    = 26,
	F_R_Hover03                    = 27,
	F_L_Hover01                    = 28,
	F_L_Hover02                    = 29,
	F_L_Hover03                    = 30,
	R_R_Hover01                    = 31,
	R_R_Hover02                    = 32,
	R_L_Hover01                    = 33,
	R_L_Hover02                    = 34,
	Count                          = 35,
	EEmperorBones_MAX              = 36
};


// Enum OakGame.EOutrunnerBoosterBones
enum class EOutrunnerBoosterBones : uint8_t
{
	Body                           = 0,
	L_Muffler                      = 1,
	R_Muffler                      = 2,
	M_Turbine                      = 3,
	L_Turbine                      = 4,
	R_Turbine                      = 5,
	L_Top_Muffler                  = 6,
	L_Bot_Muffler                  = 7,
	R_Top_Muffler                  = 8,
	R_Bot_Muffler                  = 9,
	L_Razor_Wing                   = 10,
	R_Razor_Wing                   = 11,
	Count                          = 12,
	EOutrunnerBoosterBones_MAX     = 13
};


// Enum OakGame.EOutrunnerBones
enum class EOutrunnerBones : uint8_t
{
	Body                           = 0,
	F_L_SuspensionArm              = 1,
	F_L_Steering                   = 2,
	F_L_Wheel                      = 3,
	F_R_SuspensionArm              = 4,
	F_R_Steering                   = 5,
	F_R_Wheel                      = 6,
	R_L_SuspensionArm              = 7,
	R_L_Steering                   = 8,
	R_L_Wheel                      = 9,
	R_R_SuspensionArm              = 10,
	R_R_Steering                   = 11,
	R_R_Wheel                      = 12,
	Turret_Yaw                     = 13,
	F_Cannon                       = 14,
	F_Cannon_Visual                = 15,
	Turret_Pitch                   = 16,
	SteeringWheel                  = 17,
	F_L_Spring01                   = 18,
	F_L_Spring02                   = 19,
	F_R_Spring01                   = 20,
	F_R_Spring02                   = 21,
	R_L_Spring01                   = 22,
	R_L_Spring02                   = 23,
	R_R_Spring01                   = 24,
	R_R_Spring02                   = 25,
	SeatMain                       = 26,
	Count                          = 27,
	EOutrunnerBones_MAX            = 28
};


// Enum OakGame.ERevolverBoosterBones
enum class ERevolverBoosterBones : uint8_t
{
	Root                           = 0,
	Main                           = 1,
	Muffler                        = 2,
	Helix                          = 3,
	Count                          = 4,
	ERevolverBoosterBones_MAX      = 5
};


// Enum OakGame.ERevolverBones
enum class ERevolverBones : uint8_t
{
	Body_Banking                   = 0,
	Body_Pitch                     = 1,
	Wheels                         = 2,
	SteeringWheel                  = 3,
	Count                          = 4,
	ERevolverBones_MAX             = 5
};


// Enum OakGame.ETechnicalBones
enum class ETechnicalBones : uint8_t
{
	Body                           = 0,
	LeftMuffler                    = 1,
	RightMuffler                   = 2,
	Engine                         = 3,
	R_Axle                         = 4,
	R_R_Wheel                      = 5,
	R_L_Wheel                      = 6,
	F_R_Wheel                      = 7,
	F_L_Wheel                      = 8,
	F_L_Axle                       = 9,
	F_L_Steering                   = 10,
	F_L_Steering_T                 = 11,
	F_L_SteeringShaft              = 12,
	F_L_SuspensionUp               = 13,
	F_L_SuspensionBodyUp_T         = 14,
	F_L_SuspensionBodyDn           = 15,
	F_L_SuspensionDn_T             = 16,
	F_L_SuspensionSprings          = 17,
	F_L_SuspensionSpringsBody      = 18,
	F_R_Axle                       = 19,
	F_R_Steering                   = 20,
	F_R_Steering_T                 = 21,
	F_R_SteeringShaft              = 22,
	F_R_SuspensionUp               = 23,
	F_R_SuspensionBodyUp_T         = 24,
	F_R_SuspensionBodyDn           = 25,
	F_R_SuspensionDn_T             = 26,
	F_R_SuspensionSprings          = 27,
	F_R_SuspensionSpringsBody      = 28,
	F_Cannon                       = 29,
	F_Cannon_Visual                = 30,
	Turret                         = 31,
	Player2                        = 32,
	R_DriveShaftPole               = 33,
	R_DriveShaftBodyPole           = 34,
	R_DriveShaftAttach             = 35,
	R_DriveShaftBodyAttach         = 36,
	F_R_DriveShaft00               = 37,
	F_R_DriveShaft01               = 38,
	F_R_DriveShaft02               = 39,
	F_L_DriveShaft00               = 40,
	F_L_DriveShaft01               = 41,
	F_L_DriveShaft02               = 42,
	SteeringWheel                  = 43,
	F_R_Wheel_Hover                = 44,
	F_L_Wheel_Hover                = 45,
	R_R_Wheel_Hover                = 46,
	R_L_Wheel_Hover                = 47,
	F_DriveShaftAttach             = 48,
	F_DriveShaftPole               = 49,
	F_DriveShaftBodyAttach         = 50,
	R_L_Suspension_Body            = 51,
	R_L_Suspension_Axle            = 52,
	R_R_Suspension_Body            = 53,
	R_R_Suspension_Axle            = 54,
	EngineShaft                    = 55,
	EngineBelt                     = 56,
	Seat                           = 57,
	Count                          = 58,
	ETechnicalBones_MAX            = 59
};


// Enum OakGame.ETrailerBones
enum class ETrailerBones : uint8_t
{
	F_Axle                         = 0,
	F_R_Wheel                      = 1,
	F_L_Wheel                      = 2,
	R_Axle                         = 3,
	R_R_Wheel                      = 4,
	R_L_Wheel                      = 5,
	R_R_Spring_Axle                = 6,
	R_L_Spring_Axle                = 7,
	R_R_Spring_Body                = 8,
	R_L_Spring_Body                = 9,
	Count                          = 10,
	ETrailerBones_MAX              = 11
};


// Enum OakGame.EDualWeaponBones
enum class EDualWeaponBones : uint8_t
{
	Root                           = 0,
	Main                           = 1,
	Base                           = 2,
	L_Base                         = 3,
	L_Shoulder                     = 4,
	L_Elbow                        = 5,
	L_End                          = 6,
	L_Elbow_Piston                 = 7,
	L_Shoulder_Piston              = 8,
	L_Pitch                        = 9,
	L_Projectile                   = 10,
	R_Base                         = 11,
	R_Shoulder                     = 12,
	R_Elbow                        = 13,
	R_End                          = 14,
	R_Elbow_Piston                 = 15,
	R_Shoulder_Piston              = 16,
	R_Pitch                        = 17,
	R_Projectile                   = 18,
	L_BaseAttach                   = 19,
	R_BaseAttach                   = 20,
	Count                          = 21,
	EDualWeaponBones_MAX           = 22
};


// Enum OakGame.EWeaponBones
enum class EWeaponBones : uint8_t
{
	None                           = 0,
	Root                           = 1,
	Main                           = 2,
	Turret_Yaw                     = 3,
	Turret_Pitch                   = 4,
	Cannon_Yaw                     = 5,
	Cannon_Pitch                   = 6,
	Projectile                     = 7,
	Count                          = 8,
	EWeaponBones_MAX               = 9
};


// Enum OakGame.EPetRespawnCooldownRefundType
enum class EPetRespawnCooldownRefundType : uint8_t
{
	PetProfileChanged              = 0,
	EPetRespawnCooldownRefundType_MAX = 1
};


// Enum OakGame.EPetReleaseReason
enum class EPetReleaseReason : uint8_t
{
	SpawnCheckFailed               = 0,
	PetProfileChanged              = 1,
	PetDied                        = 2,
	PlayerDied                     = 3,
	EPetReleaseReason_MAX          = 4
};


// Enum OakGame.EBehindTheScenesItemType
enum class EBehindTheScenesItemType : uint8_t
{
	Video                          = 0,
	Slideshow                      = 1,
	EBehindTheScenesItemType_MAX   = 2
};


// Enum OakGame.EIntroType
enum class EIntroType : uint8_t
{
	EnterFromGround                = 0,
	EnterFromSwapSeat              = 1,
	HijackFromGround               = 2,
	HijackFromSwapSeat             = 3,
	EIntroType_MAX                 = 4
};


// Enum OakGame.ECARStatus
enum class ECARStatus : uint8_t
{
	Locked                         = 0,
	Unfolding                      = 1,
	Active                         = 2,
	Inactive                       = 3,
	ECARStatus_MAX                 = 4
};


// Enum OakGame.ECarnivoraFakeTurretShootingStyle
enum class ECarnivoraFakeTurretShootingStyle : uint8_t
{
	TARGET_AROUND_PLAYER           = 0,
	CONE_IN_DIRECTION              = 1,
	ECarnivoraFakeTurretShootingStyle_MAX = 2
};


// Enum OakGame.ECarnivoraAverageLocation
enum class ECarnivoraAverageLocation : uint8_t
{
	FRONT_RIGHT                    = 0,
	FRONT_LEFT                     = 1,
	BACK_RIGHT                     = 2,
	BACK_LEFT                      = 3,
	NUM                            = 4,
	ECarnivoraAverageLocation_MAX  = 5
};


// Enum OakGame.ECarnivoraPartName
enum class ECarnivoraPartName : uint8_t
{
	FRONT_WHEEL                    = 0,
	FRONT_WHEEL01                  = 1,
	FRONT_WHEEL02                  = 2,
	TIRE_TRACK                     = 3,
	TIRE_TRACK01                   = 4,
	TIRE_TRACK02                   = 5,
	TIRE_TRACK03                   = 6,
	NUM                            = 7,
	ECarnivoraPartName_MAX         = 8
};


// Enum OakGame.ECharacterEchoDataMediaPlaybackType
enum class ECharacterEchoDataMediaPlaybackType : uint8_t
{
	PlayAndClose                   = 0,
	LoopUntilAudioEnds             = 1,
	ECharacterEchoDataMediaPlaybackType_MAX = 2
};


// Enum OakGame.ECrosshairColorsEnum
enum class ECrosshairColorsEnum : uint8_t
{
	NONE                           = 0,
	WHITE                          = 1,
	GREEN                          = 2,
	RED                            = 3,
	TEAL                           = 4,
	ORANGE                         = 5,
	PURPLE                         = 6,
	MAX                            = 7
};


// Enum OakGame.EDamagePresentationLevel
enum class EDamagePresentationLevel : uint8_t
{
	Negligible                     = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	MAX                            = 4
};


// Enum OakGame.EDiscoveryAreaDrawStyle
enum class EDiscoveryAreaDrawStyle : uint8_t
{
	None                           = 0,
	Wire                           = 1,
	Solid                          = 2,
	SolidAndWire                   = 3,
	EDiscoveryAreaDrawStyle_MAX    = 4
};


// Enum OakGame.EDuelTotemDestroyReason
enum class EDuelTotemDestroyReason : uint8_t
{
	None                           = 0,
	TimedOut                       = 1,
	Canceled                       = 2,
	DuelFinished                   = 3,
	EDuelTotemDestroyReason_MAX    = 4
};


// Enum OakGame.EPotentialDuelState
enum class EPotentialDuelState : uint8_t
{
	None                           = 0,
	WaitingToBeAccepted            = 1,
	WaitingToStart                 = 2,
	Started                        = 3,
	EPotentialDuelState_MAX        = 4
};


// Enum OakGame.EActiveDuelStatus
enum class EActiveDuelStatus : uint8_t
{
	WaitingToStart                 = 0,
	InProgress                     = 1,
	Finished                       = 2,
	EActiveDuelStatus_MAX          = 3
};


// Enum OakGame.EDuelMode
enum class EDuelMode : uint8_t
{
	OnFoot                         = 0,
	Vehicle                        = 1,
	EDuelMode_MAX                  = 2
};


// Enum OakGame.ECanSprintResult
enum class ECanSprintResult : uint8_t
{
	Yes                            = 0,
	No                             = 1,
	Cancel                         = 2,
	ECanSprintResult_MAX           = 3
};


// Enum OakGame.EEchoDeviceButton
enum class EEchoDeviceButton : uint8_t
{
	Button1                        = 0,
	Button2                        = 1,
	Button3                        = 2,
	Count                          = 3,
	EEchoDeviceButton_MAX          = 4
};


// Enum OakGame.EEchoLogBlockedStartMethod
enum class EEchoLogBlockedStartMethod : uint8_t
{
	Cancel                         = 0,
	PlayInWorldOnly                = 1,
	Queue                          = 2,
	Interrupt                      = 3,
	EEchoLogBlockedStartMethod_MAX = 4
};


// Enum OakGame.EEchoLogDisplayCategory
enum class EEchoLogDisplayCategory : uint8_t
{
	EchoLog                        = 0,
	EridianLog                     = 1,
	TyphonLog                      = 2,
	EEchoLogDisplayCategory_MAX    = 3
};


// Enum OakGame.EDamagePresentationModifier
enum class EDamagePresentationModifier : uint8_t
{
	Default                        = 0,
	Increase                       = 1,
	Decrease                       = 2,
	EDamagePresentationModifier_MAX = 3
};


// Enum OakGame.EElementalEffectSizeComputationType
enum class EElementalEffectSizeComputationType : uint8_t
{
	BoundsSphereRadius             = 0,
	BoundsBoxExtentMaxAxis         = 1,
	EElementalEffectSizeComputationType_MAX = 2
};


// Enum OakGame.EElementalInteractionMode
enum class EElementalInteractionMode : uint8_t
{
	Default                        = 0,
	OnlyTransmit                   = 1,
	OnlyReceive                    = 2,
	EElementalInteractionMode_MAX  = 3
};


// Enum OakGame.EElementalInteractionSourceMode
enum class EElementalInteractionSourceMode : uint8_t
{
	Default                        = 0,
	Always                         = 1,
	Never                          = 2,
	OnlyThroughBlueprint           = 3,
	EElementalInteractionSourceMode_MAX = 4
};


// Enum OakGame.EPuddleState
enum class EPuddleState : uint8_t
{
	Spawning                       = 0,
	Idle                           = 1,
	CleaningUp                     = 2,
	CleanedUp                      = 3,
	EPuddleState_MAX               = 4
};


// Enum OakGame.ENativeEnemyExperienceType
enum class ENativeEnemyExperienceType : uint8_t
{
	Chump                          = 0,
	Normal                         = 1,
	NormalHigh                     = 2,
	Tough                          = 3,
	ToughHigh                      = 4,
	Badass                         = 5,
	SuperBadass                    = 6,
	UltimateBadass                 = 7,
	Boss                           = 8,
	ENativeEnemyExperienceType_MAX = 9
};


// Enum OakGame.EWeaponInputChannel
enum class EWeaponInputChannel : uint8_t
{
	Channel1                       = 0,
	Channel2                       = 1,
	EWeaponInputChannel_MAX        = 2
};


// Enum OakGame.EWeaponUseMode
enum class EWeaponUseMode : uint8_t
{
	Mode1                          = 0,
	Mode2                          = 1,
	Mode3                          = 2,
	EWeaponUseMode_MAX             = 3
};


// Enum OakGame.EFriendEventPriority
enum class EFriendEventPriority : uint8_t
{
	Highest                        = 0,
	High                           = 1,
	Normal                         = 2,
	Low                            = 3,
	EFriendEventPriority_MAX       = 4
};


// Enum OakGame.EFriendEventType
enum class EFriendEventType : uint8_t
{
	None                           = 0,
	LevelUp                        = 1,
	GearSold                       = 2,
	GearReceived                   = 3,
	PlotMissionCompletion          = 4,
	SideMissionCompletion          = 5,
	PropagateRareSpawnMission      = 6,
	KilledEnemy                    = 7,
	KilledNamedEnemy               = 8,
	KilledBoss                     = 9,
	GuardianRankMilestone          = 10,
	ChallengeUpdate                = 11,
	ChallengeCompletion            = 12,
	ProvingGroundCompletion        = 13,
	CircleOfSlaughterCompletion    = 14,
	RaidCompletion                 = 15,
	UnlockedTrueVaultHunterMode    = 16,
	SlotMachineJackpot             = 17,
	OpenedGoldenChest              = 18,
	SentMail                       = 19,
	FriendGearPurchased            = 20,
	LookingForHelp                 = 21,
	AchievementUnlocked            = 22,
	ChallengeUpdatesMerged         = 23,
	LikedEvent                     = 24,
	CustomizationAcquired          = 25,
	Max                            = 26
};


// Enum OakGame.EFriendEventNotificationLifetime
enum class EFriendEventNotificationLifetime : uint8_t
{
	Normal                         = 0,
	Long                           = 1,
	VeryLong                       = 2,
	EFriendEventNotificationLifetime_MAX = 3
};


// Enum OakGame.EFriendEventNotificationFrequency
enum class EFriendEventNotificationFrequency : uint8_t
{
	Off                            = 0,
	VeryLow                        = 1,
	Low                            = 2,
	Normal                         = 3,
	High                           = 4,
	VeryHigh                       = 5,
	EFriendEventNotificationFrequency_MAX = 6
};


// Enum OakGame.EFrontendStandInAnimType
enum class EFrontendStandInAnimType : uint8_t
{
	Default                        = 0,
	CharacterSelect                = 1,
	CharacterCreate                = 2,
	RnRCharaterCreate              = 3,
	EFrontendStandInAnimType_MAX   = 4
};


// Enum OakGame.EOakCharacterMovementConditionType
enum class EOakCharacterMovementConditionType : uint8_t
{
	IsGroundSlamming               = 0,
	IsLandingFromGroundSlam        = 1,
	EOakCharacterMovementConditionType_MAX = 2
};


// Enum OakGame.EBoostChargeCountComparisonMode
enum class EBoostChargeCountComparisonMode : uint8_t
{
	Equal                          = 0,
	NotEqual                       = 1,
	GreaterThan                    = 2,
	GreaterThanOrEqual             = 3,
	SmallerThan                    = 4,
	SmallerThanOrEqual             = 5,
	FullCharges                    = 6,
	EBoostChargeCountComparisonMode_MAX = 7
};


// Enum OakGame.EBoostPoolValueComparisonMode
enum class EBoostPoolValueComparisonMode : uint8_t
{
	Equal                          = 0,
	NotEqual                       = 1,
	GreaterThan                    = 2,
	GreaterThanOrEqual             = 3,
	SmallerThan                    = 4,
	SmallerThanOrEqual             = 5,
	EBoostPoolValueComparisonMode_MAX = 6
};


// Enum OakGame.EGbxGFxDialogBoxButtonType
enum class EGbxGFxDialogBoxButtonType : uint8_t
{
	ListButtons                    = 0,
	HintBox                        = 1,
	EGbxGFxDialogBoxButtonType_MAX = 2
};


// Enum OakGame.EGbxGFxDialogBoxStyle
enum class EGbxGFxDialogBoxStyle : uint8_t
{
	Default                        = 0,
	Warning                        = 1,
	Error                          = 2,
	Keybinding                     = 3,
	EGbxGFxDialogBoxStyle_MAX      = 4
};


// Enum OakGame.EShiftReportReason
enum class EShiftReportReason : uint8_t
{
	Username                       = 0,
	Sportsmanship                  = 1,
	Abuse                          = 2,
	HateSpeech                     = 3,
	LeavingOrAfk                   = 4,
	Cheating                       = 5,
	UserGeneratedContent           = 6,
	IllicitBehavior                = 7,
	EShiftReportReason_MAX         = 8
};


// Enum OakGame.EGbxInputEvent_OakUIAxis_Events
enum class EGbxInputEvent_OakUIAxis_Events : uint8_t
{
	Pressed                        = 0,
	Held                           = 1,
	Released                       = 2,
	EGbxInputEvent_OakUIAxis_MAX   = 3
};


// Enum OakGame.EGeyserBehavior
enum class EGeyserBehavior : uint8_t
{
	None                           = 0,
	Intermittent                   = 1,
	AlwaysOn                       = 2,
	EGeyserBehavior_MAX            = 3
};


// Enum OakGame.EGeyserState
enum class EGeyserState : uint8_t
{
	None                           = 0,
	SteamOn                        = 1,
	SteamOff                       = 2,
	SteamAnticipationOn            = 3,
	SteamAnticipationOff           = 4,
	EGeyserState_MAX               = 5
};


// Enum OakGame.EAmmoBarMode
enum class EAmmoBarMode : uint8_t
{
	None                           = 0,
	NoMode                         = 1,
	ModeSwitch                     = 2,
	COV                            = 3,
	EridianFabricator              = 4,
	EAmmoBarMode_MAX               = 5
};


// Enum OakGame.EMovieFFRWState
enum class EMovieFFRWState : uint8_t
{
	RegularPlayback                = 0,
	FastForward                    = 1,
	Rewind                         = 2,
	EMovieFFRWState_MAX            = 3
};


// Enum OakGame.EBuddyWidgetFanfareState
enum class EBuddyWidgetFanfareState : uint8_t
{
	None                           = 0,
	LevelUp                        = 1,
	SecondWind                     = 2,
	EBuddyWidgetFanfareState_MAX   = 3
};


// Enum OakGame.EBuddyWidgetState
enum class EBuddyWidgetState : uint8_t
{
	Healthy                        = 0,
	Healthy_JustRespawned          = 1,
	Dying                          = 2,
	BeingRevived                   = 3,
	Respawning                     = 4,
	RespawnTimer                   = 5,
	Spectating                     = 6,
	EBuddyWidgetState_MAX          = 7
};


// Enum OakGame.EBuddyWidgetContainerAnimState
enum class EBuddyWidgetContainerAnimState : uint8_t
{
	Inactive                       = 0,
	SlideIn                        = 1,
	SlideOut                       = 2,
	SlideDown                      = 3,
	EBuddyWidgetContainerAnimState_MAX = 4
};


// Enum OakGame.EGFxCARMenuPage
enum class EGFxCARMenuPage : uint8_t
{
	Loadout                        = 0,
	Customize                      = 1,
	Deploy                         = 2,
	EGFxCARMenuPage_MAX            = 3
};


// Enum OakGame.EGFxCARMenuPartCellType
enum class EGFxCARMenuPartCellType : uint8_t
{
	None                           = 0,
	LoadoutButton                  = 1,
	CustomizeCell                  = 2,
	EGFxCARMenuPartCellType_MAX    = 3
};


// Enum OakGame.EGFxChallegeProgressWidgetState
enum class EGFxChallegeProgressWidgetState : uint8_t
{
	Off                            = 0,
	On                             = 1,
	Out                            = 2,
	EGFxChallegeProgressWidgetState_MAX = 3
};


// Enum OakGame.ECheckpointWidgetState
enum class ECheckpointWidgetState : uint8_t
{
	None                           = 0,
	Hidden                         = 1,
	Intro                          = 2,
	Idle                           = 3,
	Exit                           = 4,
	ECheckpointWidgetState_MAX     = 5
};


// Enum OakGame.EColorPickerMode
enum class EColorPickerMode : uint8_t
{
	All                            = 0,
	PrimarySecondary               = 1,
	PrimaryOnly                    = 2,
	EColorPickerMode_MAX           = 3
};


// Enum OakGame.EColorSelectionType
enum class EColorSelectionType : uint8_t
{
	TopColor                       = 0,
	BottomColor                    = 1,
	ResetBothToDefault             = 2,
	EColorSelectionType_MAX        = 3
};


// Enum OakGame.ECrosshairType
enum class ECrosshairType : uint8_t
{
	NORMAL                         = 0,
	IRONBEAR                       = 1,
	ECrosshairType_MAX             = 2
};


// Enum OakGame.ECrosshairState
enum class ECrosshairState : uint8_t
{
	NORMAL                         = 0,
	ACTION_SKILL                   = 1,
	SPRINTING                      = 2,
	MELEE                          = 3,
	ECrosshairState_MAX            = 4
};


// Enum OakGame.EGFxCurrencyCounterState
enum class EGFxCurrencyCounterState : uint8_t
{
	Off                            = 0,
	AnimatingToValue               = 1,
	HoldingOnValue                 = 2,
	EGFxCurrencyCounterState_MAX   = 3
};


// Enum OakGame.EGFxDuelingTimerState
enum class EGFxDuelingTimerState : uint8_t
{
	TimerOnly                      = 0,
	TimerAndMatch                  = 1,
	Challenger                     = 2,
	TimeOut                        = 3,
	Hidden                         = 4,
	EGFxDuelingTimerState_MAX      = 5
};


// Enum OakGame.EECHOLOGWidgetState
enum class EECHOLOGWidgetState : uint8_t
{
	Inactive                       = 0,
	Activating                     = 1,
	Displayed                      = 2,
	Deactivating                   = 3,
	EECHOLOGWidgetState_MAX        = 4
};


// Enum OakGame.EGFxMailboxMenuMailSort
enum class EGFxMailboxMenuMailSort : uint8_t
{
	Date                           = 0,
	Unread                         = 1,
	Friend                         = 2,
	System                         = 3,
	EGFxMailboxMenuMailSort_MAX    = 4
};


// Enum OakGame.EGFxMailboxMenuState
enum class EGFxMailboxMenuState : uint8_t
{
	None                           = 0,
	Receive                        = 1,
	Send_ChooseItem                = 2,
	Send_ChooseFriend              = 3,
	Send_Confirm                   = 4,
	EGFxMailboxMenuState_MAX       = 5
};


// Enum OakGame.EGFxRosterCellType
enum class EGFxRosterCellType : uint8_t
{
	EmptyCell                      = 0,
	FindShiftFriendButton          = 1,
	ManageShiftFriendsButton       = 2,
	OnlineFriendInThisGame         = 3,
	OnlineFriend                   = 4,
	OfflineFriend                  = 5,
	EGFxRosterCellType_MAX         = 6
};


// Enum OakGame.EECHOWidgetState
enum class EECHOWidgetState : uint8_t
{
	Inactive                       = 0,
	Activating                     = 1,
	Displayed                      = 2,
	Deactivating                   = 3,
	EECHOWidgetState_MAX           = 4
};


// Enum OakGame.EGFxExperienceBarState
enum class EGFxExperienceBarState : uint8_t
{
	None                           = 0,
	ExperienceAddedAnimation       = 1,
	LevelUpAnimation               = 2,
	FadingOut                      = 3,
	EGFxExperienceBarState_MAX     = 4
};


// Enum OakGame.EGFxFeedWidgetState
enum class EGFxFeedWidgetState : uint8_t
{
	Off                            = 0,
	On                             = 1,
	Out                            = 2,
	EGFxFeedWidgetState_MAX        = 3
};


// Enum OakGame.EFFYLBarState
enum class EFFYLBarState : uint8_t
{
	Dying                          = 0,
	BeingRevived                   = 1,
	Reviving                       = 2,
	EFFYLBarState_MAX              = 3
};


// Enum OakGame.EGFxFrontendLandingPageType
enum class EGFxFrontendLandingPageType : uint8_t
{
	WantsOnline                    = 0,
	WantsLan                       = 1,
	WantsInGameForMail             = 2,
	EGFxFrontendLandingPageType_MAX = 3
};


// Enum OakGame.EGFxFrontendMenuFocusAnim
enum class EGFxFrontendMenuFocusAnim : uint8_t
{
	Standard                       = 0,
	MainMenuFocus                  = 1,
	Focused                        = 2,
	EGFxFrontendMenuFocusAnim_MAX  = 3
};


// Enum OakGame.EGFxFrontendMenuMode
enum class EGFxFrontendMenuMode : uint8_t
{
	Unknown                        = 0,
	MainMenu                       = 1,
	EchoNetMenus                   = 2,
	SettingsMenus                  = 3,
	NewGameMenu                    = 4,
	EGFxFrontendMenuMode_MAX       = 5
};


// Enum OakGame.EGFxGrenadeIndicatorMode
enum class EGFxGrenadeIndicatorMode : uint8_t
{
	Hidden                         = 0,
	Safe                           = 1,
	Danger                         = 2,
	EGFxGrenadeIndicatorMode_MAX   = 3
};


// Enum OakGame.EGFxGuardianRankMenuState
enum class EGFxGuardianRankMenuState : uint8_t
{
	None                           = 0,
	MenuLocked                     = 1,
	GuardianRankDisabled           = 2,
	Information_RedeemButtonSelected = 3,
	Information_PerkSelected       = 4,
	TokenRedemption                = 5,
	TokenRedemption_WaitingForPurchase = 6,
	EGFxGuardianRankMenuState_MAX  = 7
};


// Enum OakGame.ECalibrationOptionSourceType
enum class ECalibrationOptionSourceType : uint8_t
{
	COST_FromPlayerController      = 0,
	COST_FromRecent                = 1,
	COST_FromDefaults              = 2,
	COST_MAX                       = 3
};


// Enum OakGame.EHUDInitAnimWidgetTarget
enum class EHUDInitAnimWidgetTarget : uint8_t
{
	None                           = 0,
	HealthBar                      = 1,
	XPBar                          = 2,
	Minimap                        = 3,
	MissionTracker                 = 4,
	AmmoBar                        = 5,
	ShieldBar                      = 6,
	GrenadeBar                     = 7,
	EHUDInitAnimWidgetTarget_MAX   = 8
};


// Enum OakGame.EPromptLinesLayouts
enum class EPromptLinesLayouts : uint8_t
{
	INVALID                        = 0,
	PrimaryPress                   = 1,
	PrimaryHold                    = 2,
	PrimaryPress_PrimaryHold       = 3,
	PrimaryPress_SecondaryPress    = 4,
	PrimaryPress_SecondaryHold     = 5,
	PrimaryHold_SecondaryPress     = 6,
	PrimaryHold_SecondaryHold      = 7,
	EPromptLinesLayouts_MAX        = 8
};


// Enum OakGame.EInteractionPromptGlyphMode
enum class EInteractionPromptGlyphMode : uint8_t
{
	InvalidForUseDef               = 0,
	Normal                         = 1,
	CantUse                        = 2,
	Locked                         = 3,
	EInteractionPromptGlyphMode_MAX = 4
};


// Enum OakGame.EGFxInventoryMenuBackpackSize
enum class EGFxInventoryMenuBackpackSize : uint8_t
{
	TwoColumns                     = 0,
	OneColumn                      = 1,
	EGFxInventoryMenuBackpackSize_MAX = 2
};


// Enum OakGame.EGFxInventoryMenuFocusSide
enum class EGFxInventoryMenuFocusSide : uint8_t
{
	None                           = 0,
	PaperDoll                      = 1,
	Backpack                       = 2,
	EGFxInventoryMenuFocusSide_MAX = 3
};


// Enum OakGame.EGFxInWorldIconClampUpdate
enum class EGFxInWorldIconClampUpdate : uint8_t
{
	Unknown                        = 0,
	NotClamped                     = 1,
	ClampedInFront                 = 2,
	ClampedBehind                  = 3,
	EGFxInWorldIconClampUpdate_MAX = 4
};


// Enum OakGame.EInWorldIconRange
enum class EInWorldIconRange : uint8_t
{
	None                           = 0,
	Near                           = 1,
	Far                            = 2,
	EInWorldIconRange_MAX          = 3
};


// Enum OakGame.EGFxItemInspectionPages
enum class EGFxItemInspectionPages : uint8_t
{
	None                           = 0,
	Inspect                        = 1,
	Manufacturer                   = 2,
	Elemental                      = 3,
	Parts                          = 4,
	Skins                          = 5,
	EGFxItemInspectionPages_MAX    = 6
};


// Enum OakGame.EBackButtonHint
enum class EBackButtonHint : uint8_t
{
	Back                           = 0,
	Cancel                         = 1,
	Exit                           = 2,
	EBackButtonHint_MAX            = 3
};


// Enum OakGame.ETradingMenuState
enum class ETradingMenuState : uint8_t
{
	Offering                       = 0,
	Backpack                       = 1,
	Done                           = 2,
	ETradingMenuState_MAX          = 3
};


// Enum OakGame.ELeaguesMenuLayout
enum class ELeaguesMenuLayout : uint8_t
{
	None                           = 0,
	Overview                       = 1,
	Challenges                     = 2,
	ELeaguesMenuLayout_MAX         = 3
};


// Enum OakGame.EGFxMainAndPauseMenuType
enum class EGFxMainAndPauseMenuType : uint8_t
{
	Unknown                        = 0,
	Main                           = 1,
	Pause                          = 2,
	EGFxMainAndPauseMenuType_MAX   = 3
};


// Enum OakGame.EGFxMapMenuProgressPanelState
enum class EGFxMapMenuProgressPanelState : uint8_t
{
	None                           = 0,
	Progress                       = 1,
	List                           = 2,
	EGFxMapMenuProgressPanelState_MAX = 3
};


// Enum OakGame.EDetailsPanelMode
enum class EDetailsPanelMode : uint8_t
{
	Unknown                        = 0,
	NoTarget                       = 1,
	POIInfo                        = 2,
	Challenge                      = 3,
	Mission                        = 4,
	PlanetOverview                 = 5,
	LevelOverview                  = 6,
	POIInfoPlayer                  = 7,
	EDetailsPanelMode_MAX          = 8
};


// Enum OakGame.EGFxMapMenuState
enum class EGFxMapMenuState : uint8_t
{
	None                           = 0,
	Tutorial_Stage1                = 1,
	Tutorial_Stage2                = 2,
	Tutorial_Stage3                = 3,
	Tutorial_Stage4                = 4,
	Tutorial_Stage5                = 5,
	Progress                       = 6,
	FastTravel                     = 7,
	Challenges                     = 8,
	Friends                        = 9,
	EGFxMapMenuState_MAX           = 10
};


// Enum OakGame.EGFxMapMenuMapState
enum class EGFxMapMenuMapState : uint8_t
{
	None                           = 0,
	Level                          = 1,
	Planet                         = 2,
	Galaxy                         = 3,
	EGFxMapMenuMapState_MAX        = 4
};


// Enum OakGame.EGFxMenuTutorialFocusDirection
enum class EGFxMenuTutorialFocusDirection : uint8_t
{
	Center                         = 0,
	Left                           = 1,
	Right                          = 2,
	SameAsStardard                 = 3,
	EGFxMenuTutorialFocusDirection_MAX = 4
};


// Enum OakGame.EGFxMenuTutorialDialogSize
enum class EGFxMenuTutorialDialogSize : uint8_t
{
	Large                          = 0,
	Medium                         = 1,
	Small                          = 2,
	EGFxMenuTutorialDialogSize_MAX = 3
};


// Enum OakGame.EGFxMinimapWidgetIconTrackedType
enum class EGFxMinimapWidgetIconTrackedType : uint8_t
{
	Unused                         = 0,
	Mission                        = 1,
	MinimapIconComponent           = 2,
	CustomWaypoint                 = 3,
	PlayerIcon                     = 4,
	EGFxMinimapWidgetIconTrackedType_MAX = 5
};


// Enum OakGame.EGFxMissionLogMissionItemType
enum class EGFxMissionLogMissionItemType : uint8_t
{
	Mission                        = 0,
	EchoLog                        = 1,
	Header                         = 2,
	EGFxMissionLogMissionItemType_MAX = 3
};


// Enum OakGame.EGFxMissionLogFilterType
enum class EGFxMissionLogFilterType : uint8_t
{
	None                           = 0,
	MissionLogMissionType          = 1,
	MissionLogByExpansion          = 2,
	MissionLogByRegion             = 3,
	EGFxMissionLogFilterType_MAX   = 4
};


// Enum OakGame.EGFxMissionLogNavType
enum class EGFxMissionLogNavType : uint8_t
{
	None                           = 0,
	Missions                       = 1,
	EchoLog                        = 2,
	TyphonLog                      = 3,
	EridianLog                     = 4,
	EGFxMissionLogNavType_MAX      = 5
};


// Enum OakGame.EGFxMissionLogMissionIconType
enum class EGFxMissionLogMissionIconType : uint8_t
{
	Normal                         = 0,
	Plot                           = 1,
	Side                           = 2,
	Contract                       = 3,
	EchoLog                        = 4,
	EridianWriting                 = 5,
	TyphonLog                      = 6,
	Complete                       = 7,
	Ignored                        = 8,
	Failed                         = 9,
	HardMission                    = 10,
	EGFxMissionLogMissionIconType_MAX = 11
};


// Enum OakGame.EGFxMissionTrackerAnimationType
enum class EGFxMissionTrackerAnimationType : uint8_t
{
	None                           = 0,
	Active                         = 1,
	SlideIn                        = 2,
	SlideInChecked                 = 3,
	SlideOut                       = 4,
	SlideInFromAbove               = 5,
	SlideInFromAboveChecked        = 6,
	SlideInFromBelow               = 7,
	SlideInFromBelowChecked        = 8,
	Checked                        = 9,
	CheckedFailed                  = 10,
	Failed                         = 11,
	SlideOutFailed                 = 12,
	EGFxMissionTrackerAnimationType_MAX = 13
};


// Enum OakGame.ETargetedNameplateState
enum class ETargetedNameplateState : uint8_t
{
	NotShowingTarget_Linger        = 0,
	NotShowingTarget               = 1,
	ShowingValidTarget             = 2,
	ShowingDyingTarget             = 3,
	ETargetedNameplateState_MAX    = 4
};


// Enum OakGame.ENameplateStyle
enum class ENameplateStyle : uint8_t
{
	Targeted                       = 0,
	BossBar                        = 1,
	Overhead                       = 2,
	ENameplateStyle_MAX            = 3
};


// Enum OakGame.EDLCMenuItemUsability
enum class EDLCMenuItemUsability : uint8_t
{
	None                           = 0,
	CanUse                         = 1,
	AlreadyStarted                 = 2,
	RequiresMissionProgress        = 3,
	NotInstalled                   = 4,
	NotLicensed                    = 5,
	EDLCMenuItemUsability_MAX      = 6
};


// Enum OakGame.EOverheadNameplateDisplayState
enum class EOverheadNameplateDisplayState : uint8_t
{
	None                           = 0,
	CenteredName_Name              = 1,
	CenteredName_Arrow             = 2,
	State_Name                     = 3,
	State_Arrow                    = 4,
	EOverheadNameplateDisplayState_MAX = 5
};


// Enum OakGame.EOverheadNameplateHealthState
enum class EOverheadNameplateHealthState : uint8_t
{
	Healthy                        = 0,
	Dying                          = 1,
	BeingRevived                   = 2,
	Respawning                     = 3,
	EOverheadNameplateHealthState_MAX = 4
};


// Enum OakGame.EPetCommandWidgetState
enum class EPetCommandWidgetState : uint8_t
{
	Off                            = 0,
	Ready                          = 1,
	Unlocked                       = 2,
	Activated                      = 3,
	BeginCooldown                  = 4,
	CoolingDown                    = 5,
	NowReady                       = 6,
	CantUse                        = 7,
	Initalization                  = 8,
	EPetCommandWidgetState_MAX     = 9
};


// Enum OakGame.EGFxPlayerStorageMenuItemAction
enum class EGFxPlayerStorageMenuItemAction : uint8_t
{
	None                           = 0,
	MoveToBank                     = 1,
	MoveToInventory                = 2,
	Inspect                        = 3,
	EGFxPlayerStorageMenuItemAction_MAX = 4
};


// Enum OakGame.EGFxPlayerStorageMenuState
enum class EGFxPlayerStorageMenuState : uint8_t
{
	None                           = 0,
	BankRetrieve                   = 1,
	BackpackDeposit                = 2,
	CompareBankFocused             = 3,
	CompareBackpackFocused         = 4,
	EGFxPlayerStorageMenuState_MAX = 5
};


// Enum OakGame.EQuickChangeMenuSortMode
enum class EQuickChangeMenuSortMode : uint8_t
{
	Rarity                         = 0,
	Alphabetic                     = 1,
	NewToOld                       = 2,
	EQuickChangeMenuSortMode_MAX   = 3
};


// Enum OakGame.EBaseQuickChangeChoiceType
enum class EBaseQuickChangeChoiceType : uint8_t
{
	Skin                           = 0,
	Head                           = 1,
	Body                           = 2,
	Emote                          = 3,
	Color                          = 4,
	ECHOSkin                       = 5,
	Respec                         = 6,
	WeaponSkin                     = 7,
	WeaponTrinket                  = 8,
	EBaseQuickChangeChoiceType_MAX = 9
};


// Enum OakGame.EBaseQuickChangeMenuState
enum class EBaseQuickChangeMenuState : uint8_t
{
	CategorySelection              = 0,
	BodySelection                  = 1,
	HeadSelection                  = 2,
	SkinSelection                  = 3,
	ColorSelection                 = 4,
	EmoteSelection                 = 5,
	ECHOSelection                  = 6,
	Respec                         = 7,
	TrinketIcon                    = 8,
	WeaponSkinIcon                 = 9,
	DecorationIcon                 = 10,
	None                           = 11,
	MAX                            = 12
};


// Enum OakGame.EReloadWidgetDisplayState
enum class EReloadWidgetDisplayState : uint8_t
{
	Default                        = 0,
	AmmoLow                        = 1,
	NoSpareAmmo                    = 2,
	NoAmmoAtAll                    = 3,
	EReloadWidgetDisplayState_MAX  = 4
};


// Enum OakGame.GFxSHiFT
enum class EGFxSHiFT : uint8_t
{
	None                           = 0,
	NotSignedIn                    = 1,
	SignInAccount                  = 2,
	CreateAccount                  = 3,
	ResetPassword                  = 4,
	CodeRedemption                 = 5,
	RewardHistory                  = 6,
	Offline                        = 7,
	GFxSHiFT_MAX                   = 8
};


// Enum OakGame.ESirenSkillScreenSlotType
enum class ESirenSkillScreenSlotType : uint8_t
{
	None                           = 0,
	ComboAbility                   = 1,
	ComboEffect                    = 2,
	ComboElement                   = 3,
	Passive                        = 4,
	ESirenSkillScreenSlotType_MAX  = 5
};


// Enum OakGame.ESkillItemActionState
enum class ESkillItemActionState : uint8_t
{
	None                           = 0,
	CanEquipPrimary                = 1,
	CanEquipSecondary              = 2,
	CanEquipBoth                   = 3,
	BlockedByTutorial              = 4,
	NoPointsToSpend                = 5,
	Unlock                         = 6,
	AddPoint                       = 7,
	Maxed                          = 8,
	NotEnoughBranchPoints          = 9,
	RequiresTreeUnlock             = 10,
	RequiresOtherSkill             = 11,
	ESkillItemActionState_MAX      = 12
};


// Enum OakGame.ESkillItemUnlockAnimState
enum class ESkillItemUnlockAnimState : uint8_t
{
	Uninitialized                  = 0,
	Unplayed                       = 1,
	Played                         = 2,
	ESkillItemUnlockAnimState_MAX  = 3
};


// Enum OakGame.ESkillScreenItemPurchaseState
enum class ESkillScreenItemPurchaseState : uint8_t
{
	CannotPurchase                 = 0,
	FirstPoint                     = 1,
	AddPoints                      = 2,
	MaxPoints                      = 3,
	ESkillScreenItemPurchaseState_MAX = 4
};


// Enum OakGame.ESkillScreenReceiveHighlightState
enum class ESkillScreenReceiveHighlightState : uint8_t
{
	Off                            = 0,
	Available                      = 1,
	Active                         = 2,
	ESkillScreenReceiveHighlightState_MAX = 3
};


// Enum OakGame.ESkillScreenLoadoutSlotClearability
enum class ESkillScreenLoadoutSlotClearability : uint8_t
{
	CannotClear_Error              = 0,
	CannotClear_SlotEmpty          = 1,
	CannotClear_SlotMustBeFilled   = 2,
	CannotClear_AbilityInUse       = 3,
	CanClear                       = 4,
	ESkillScreenLoadoutSlotClearability_MAX = 5
};


// Enum OakGame.EGFxSkillScreenLoadoutChoiceEquipState
enum class EGFxSkillScreenLoadoutChoiceEquipState : uint8_t
{
	Locked                         = 0,
	Available                      = 1,
	Equipped                       = 2,
	EGFxSkillScreenLoadoutChoiceEquipState_MAX = 3
};


// Enum OakGame.EGFxSkillScreenState
enum class EGFxSkillScreenState : uint8_t
{
	None                           = 0,
	BranchesFocused                = 1,
	LoadoutEdit                    = 2,
	PlayingUnlockAnim              = 3,
	TreeLocked_Info                = 4,
	TreeLocked_Branches            = 5,
	DraggingSkillItem              = 6,
	EGFxSkillScreenState_MAX       = 7
};


// Enum OakGame.ESkillScreenSlotType
enum class ESkillScreenSlotType : uint8_t
{
	None                           = 0,
	Compatible                     = 1,
	All                            = 2,
	ESkillScreenSlotType_MAX       = 3
};


// Enum OakGame.EGFxStatusMenuTransitionReason
enum class EGFxStatusMenuTransitionReason : uint8_t
{
	None                           = 0,
	Pushed                         = 1,
	NextPage                       = 2,
	PrevPage                       = 3,
	Switched                       = 4,
	Popped                         = 5,
	EGFxStatusMenuTransitionReason_MAX = 6
};


// Enum OakGame.EGFxStoreMenuTabType
enum class EGFxStoreMenuTabType : uint8_t
{
	Empty                          = 0,
	Featured                       = 1,
	Expansions                     = 2,
	Customizations                 = 3,
	Purchased                      = 4,
	EGFxStoreMenuTabType_MAX       = 5
};


// Enum OakGame.ESubtitleLayoutType
enum class ESubtitleLayoutType : uint8_t
{
	None                           = 0,
	SubtitlesOnly                  = 1,
	ClosedCaptionsOnly             = 2,
	Both                           = 3,
	ESubtitleLayoutType_MAX        = 4
};


// Enum OakGame.EGbxGFxSpinnerWidgetGoToMethod
enum class EGbxGFxSpinnerWidgetGoToMethod : uint8_t
{
	FromCurrent                    = 0,
	Immediately                    = 1,
	EGbxGFxSpinnerWidgetGoToMethod_MAX = 2
};


// Enum OakGame.EGFxVaultHunterProfileCardView
enum class EGFxVaultHunterProfileCardView : uint8_t
{
	Skill                          = 0,
	Inventory                      = 1,
	Stat                           = 2,
	EGFxVaultHunterProfileCardView_MAX = 3
};


// Enum OakGame.EGFxVaultHunterProfileCardMode
enum class EGFxVaultHunterProfileCardMode : uint8_t
{
	Unknown                        = 0,
	Friend                         = 1,
	Self                           = 2,
	EGFxVaultHunterProfileCardMode_MAX = 3
};


// Enum OakGame.EGFxVehiclePartWidgetState
enum class EGFxVehiclePartWidgetState : uint8_t
{
	On                             = 0,
	Off                            = 1,
	RollOn                         = 2,
	RollOff                        = 3,
	Condensed                      = 4,
	TurnIn                         = 5,
	EGFxVehiclePartWidgetState_MAX = 6
};


// Enum OakGame.UGFxVehiclePartUnlockedWidgetState
enum class EUGFxVehiclePartUnlockedWidgetState : uint8_t
{
	Off                            = 0,
	Playing                        = 1,
	UGFxVehiclePartUnlockedWidgetState_MAX = 2
};


// Enum OakGame.EGFxVehicleWeaponType
enum class EGFxVehicleWeaponType : uint8_t
{
	CHARGE                         = 0,
	MAGAZINE                       = 1,
	HEAT                           = 2,
	RECOVERY                       = 3,
	EGFxVehicleWeaponType_MAX      = 4
};


// Enum OakGame.EGFxVendingMachineMenuBackpackState
enum class EGFxVendingMachineMenuBackpackState : uint8_t
{
	Unknown                        = 0,
	Buy                            = 1,
	Sell                           = 2,
	Compare                        = 3,
	CompareToMachine               = 4,
	EGFxVendingMachineMenuBackpackState_MAX = 5
};


// Enum OakGame.EVendingMachineSocketMapStates
enum class EVendingMachineSocketMapStates : uint8_t
{
	SOCKETMAP_BUY                  = 0,
	SOCKETMAP_SELL                 = 1,
	SOCKETMAP_COMPARE              = 2,
	SOCKETMAP_VENDINGCOMPARE       = 3,
	SOCKETMAP_MAX                  = 4
};


// Enum OakGame.GFxVendingMachineDisplayMode
enum class EGFxVendingMachineDisplayMode : uint8_t
{
	GFXVENDOR_Buy                  = 0,
	GFXVENDOR_Sell                 = 1,
	GFXVENDOR_Buyback              = 2,
	GFXVENDOR_END                  = 3,
	GFXVENDOR_MAX                  = 4
};


// Enum OakGame.EGoreRegionType
enum class EGoreRegionType : uint8_t
{
	Head                           = 0,
	Arm                            = 1,
	Leg                            = 2,
	Torso                          = 3,
	EGoreRegionType_MAX            = 4
};


// Enum OakGame.EChildPayloadType
enum class EChildPayloadType : uint8_t
{
	Payload_Divider                = 0,
	Payload_MiniMirv               = 1,
	Payload_Mirv                   = 2,
	Payload_Rain                   = 3,
	Payload_Spring                 = 4,
	Payload_Sticky                 = 5,
	Payload_MAX                    = 6
};


// Enum OakGame.ELingeringDamageStyle
enum class ELingeringDamageStyle : uint8_t
{
	DamageStyle_Burst              = 0,
	DamageStyle_Beam               = 1,
	DamageStyle_Radius             = 2,
	DamageStyle_MAX                = 3
};


// Enum OakGame.EInstanceDataOperator
enum class EInstanceDataOperator : uint8_t
{
	Add                            = 0,
	Multiply                       = 1,
	EInstanceDataOperator_MAX      = 2
};


// Enum OakGame.ESpinDirection
enum class ESpinDirection : uint8_t
{
	SD_NoSpin                      = 0,
	SD_Clockwise                   = 1,
	SD_Counterclockwise            = 2,
	SD_MAX                         = 3
};


// Enum OakGame.EHolsteredGearState
enum class EHolsteredGearState : uint8_t
{
	None                           = 0,
	FadingIn                       = 1,
	FadingOut                      = 2,
	EHolsteredGearState_MAX        = 3
};


// Enum OakGame.EInWorldIconFadeType
enum class EInWorldIconFadeType : uint8_t
{
	None                           = 0,
	Distance                       = 1,
	TargetedRadius                 = 2,
	EInWorldIconFadeType_MAX       = 3
};


// Enum OakGame.EInWorldIconClassType
enum class EInWorldIconClassType : uint8_t
{
	Icon                           = 0,
	Nameplate                      = 1,
	EInWorldIconClassType_MAX      = 2
};


// Enum OakGame.EInWorldIconEdgeBehavior
enum class EInWorldIconEdgeBehavior : uint8_t
{
	Clamp                          = 0,
	Hide                           = 1,
	EInWorldIconEdgeBehavior_MAX   = 2
};


// Enum OakGame.ELootSpawnTiming
enum class ELootSpawnTiming : uint8_t
{
	OnEnabled                      = 0,
	OnEnabling                     = 1,
	OnAnimNotify                   = 2,
	ELootSpawnTiming_MAX           = 3
};


// Enum OakGame.EMissionDrivenLootableType
enum class EMissionDrivenLootableType : uint8_t
{
	None                           = 0,
	CopyPickupMissionObjective     = 1,
	UseSelfMissionObjective        = 2,
	EMissionDrivenLootableType_MAX = 3
};


// Enum OakGame.ELootableOpenReason
enum class ELootableOpenReason : uint8_t
{
	Use                            = 0,
	Damage                         = 1,
	ELootableOpenReason_MAX        = 2
};


// Enum OakGame.EDebugMatchmakingFailure
enum class EDebugMatchmakingFailure : uint8_t
{
	None                           = 0,
	CreateMatchmakingSession       = 1,
	JoinMatchmakingSession         = 2,
	FindMatchmakingSession         = 3,
	FindGameplaySession            = 4,
	JoinGameplaySession            = 5,
	InitClientMatchmakingBeacon    = 6,
	CreateHostMatchmakingBeacon    = 7,
	EDebugMatchmakingFailure_MAX   = 8
};


// Enum OakGame.EMatchmakingError
enum class EMatchmakingError : uint8_t
{
	None                           = 0,
	StartHostingFailed             = 1,
	StartMatchmakingRoundFailed    = 2,
	StartMatchmakingSearchFailed   = 3,
	CreateClientMatchmakingBeaconFailed = 4,
	SearchFailed                   = 5,
	JoinGameFailed                 = 6,
	RateLimit                      = 7,
	NetworkFailure                 = 8,
	ClientCriticalFailure          = 9,
	UpdateSessionFailed            = 10,
	StartGameplayFailed            = 11,
	SplitscreenJoinFailure         = 12,
	SplitscreenLeaveFailure        = 13,
	NoPlaylistContentAvailable     = 14,
	EMatchmakingError_MAX          = 15
};


// Enum OakGame.EMatchmakingRequirementComparisonOp
enum class EMatchmakingRequirementComparisonOp : uint8_t
{
	None                           = 0,
	Equal                          = 1,
	NotEqual                       = 2,
	LessThan                       = 3,
	GreaterThan                    = 4,
	EMatchmakingRequirementComparisonOp_MAX = 5
};


// Enum OakGame.EMatchmakingRequirementType
enum class EMatchmakingRequirementType : uint8_t
{
	None                           = 0,
	PlayerLevel                    = 1,
	PlotMission                    = 2,
	DlcInstalled                   = 3,
	EMatchmakingRequirementType_MAX = 4
};


// Enum OakGame.EMatchmakingSearchParameterOp
enum class EMatchmakingSearchParameterOp : uint8_t
{
	Invalid                        = 0,
	Equals                         = 1,
	NotEquals                      = 2,
	GreaterThan                    = 3,
	GreaterThanEquals              = 4,
	LessThan                       = 5,
	LessThanEquals                 = 6,
	Max                            = 7
};


// Enum OakGame.EInitialPlayerStatus
enum class EInitialPlayerStatus : uint8_t
{
	NotSelected                    = 0,
	Selected                       = 1,
	EInitialPlayerStatus_MAX       = 2
};


// Enum OakGame.EOakAbilityTimerResult
enum class EOakAbilityTimerResult : uint8_t
{
	Pulsed                         = 0,
	Finished                       = 1,
	Stopped                        = 2,
	Replaced                       = 3,
	EOakAbilityTimerResult_MAX     = 4
};


// Enum OakGame.EOakAbilityTimerTickPolicy
enum class EOakAbilityTimerTickPolicy : uint8_t
{
	AlwaysTick                     = 0,
	OnlyWhenActive                 = 1,
	EOakAbilityTimerTickPolicy_MAX = 2
};


// Enum OakGame.EOakAbilityTimerReplacePolicy
enum class EOakAbilityTimerReplacePolicy : uint8_t
{
	KeepExisting                   = 0,
	ReplaceExisting                = 1,
	EOakAbilityTimerReplacePolicy_MAX = 2
};


// Enum OakGame.ESkillWidgetSlot
enum class ESkillWidgetSlot : uint8_t
{
	None                           = 0,
	ActionSkillWidget              = 1,
	GrenadeActionSkillWidget       = 2,
	ESkillWidgetSlot_MAX           = 3
};


// Enum OakGame.EOakAchievements
enum class EOakAchievements : uint8_t
{
	Invalid                        = 0,
	ReachLevel2                    = 1,
	ReachLevel10                   = 2,
	ReachLevel25                   = 3,
	ReachLevel50                   = 4,
	UnlockHeadsSkins               = 5,
	UnlockVehicleParts             = 6,
	UsePhotoMode                   = 7,
	WinDuel                        = 8,
	ReviveAnotherPlayer            = 9,
	SendItemToFriend               = 10,
	WinLiveGrenadeSlotMachine      = 11,
	PerfectScoreFiringRange        = 12,
	CrazyEarl                      = 13,
	EridianSlabs                   = 14,
	CompleteAllCircleOfSlaughter   = 15,
	DiscoverAllPandoraLocations    = 16,
	DiscoverAllEden6Locations      = 17,
	DiscoverAllPrometheaLocations  = 18,
	DiscoverAllNekrotaphayoLocations = 19,
	DiscoverAllNamedLocations      = 20,
	CompleteSomeSideMissions       = 21,
	CompleteAllSideMissions        = 22,
	ClearAllProvingGrounds         = 23,
	DefeatAllLegendaryHunts        = 24,
	DefeatAllTargetsOfOpportunity  = 25,
	KillEnemyWithExplodingBarrel   = 26,
	KillEnemyWithGunBlade          = 27,
	KillMultipleEnemiesWithStickyGrenade = 28,
	EquipPurpleGear                = 29,
	LoyaltyPackage                 = 30,
	CompleteMission1               = 31,
	CompleteMission2               = 32,
	CompleteMission3               = 33,
	CompleteMission4               = 34,
	CompleteMission5               = 35,
	CompleteMission6               = 36,
	CompleteMission7               = 37,
	CompleteMission8               = 38,
	CompleteMission9               = 39,
	CompleteMission10              = 40,
	CompleteMission11              = 41,
	Suicide                        = 42,
	GoldenKey                      = 43,
	VaultRewards                   = 44,
	CompleteAllAchievements        = 45,
	DLC1_CompleteMissionVIP        = 46,
	DLC1_EmberChallenges           = 47,
	DLC1_MayorChallenges           = 48,
	DLC1_TorgueChallenges          = 49,
	DLC1_Blackjack                 = 50,
	DLC1_Clapstructor              = 51,
	DLC1_DebtCollector             = 52,
	DLC2_CompleteMission1          = 53,
	DLC2_CompleteFinalMission      = 54,
	DLC2_KillWendigo               = 55,
	DLC2_DeathrapKill              = 56,
	DLC2_CrewChallenges            = 57,
	DLC2_CollectECHO               = 58,
	DLC2_RareSpawns                = 59,
	DLC2_FishJokes                 = 60,
	DLC3_CompleteAllAchievements   = 61,
	DLC3_CrewChallenges            = 62,
	DLC3_CompleteSideMissions      = 63,
	DLC3_CompleteMission1          = 64,
	DLC3_CompleteMission2          = 65,
	DLC3_CompleteMission3          = 66,
	DLC3_CompleteMission4          = 67,
	DLC3_CompleteFinalMission      = 68,
	DLC4_CompleteMission1          = 69,
	DLC4_DefeatDarkLilith          = 70,
	DLC4_DestroyTheTrain           = 71,
	DLC4_KillBenedict              = 72,
	DLC4_DefeatPsychodin           = 73,
	DLC4_OpenAllGates              = 74,
	DLC4_SidesAndChallenges        = 75,
	DLC5_WinShootingSpreeRound     = 76,
	DLC5_Extract100PiecesOfGear    = 77,
	DLC5_ExploreEntireWhiteout     = 78,
	DLC6_SolveAllMysteries         = 79,
	DLC6_DefeatHemovorous          = 80,
	DLC6_DestroyMysteriousEridium  = 81,
	EOakAchievements_MAX           = 82
};


// Enum OakGame.EOakAnimActionAbilityEndAction
enum class EOakAnimActionAbilityEndAction : uint8_t
{
	None                           = 0,
	Stop                           = 1,
	Abort                          = 2,
	AbortReset                     = 3,
	EOakAnimActionAbilityEndAction_MAX = 4
};


// Enum OakGame.EHostileAttachState
enum class EHostileAttachState : uint8_t
{
	Loop                           = 0,
	Attack                         = 1,
	GripFeedback                   = 2,
	GetDown                        = 3,
	Ejected                        = 4,
	Completed                      = 5,
	EHostileAttachState_MAX        = 6
};


// Enum OakGame.ELeapOnVehicle_SeatType
enum class ELeapOnVehicle_SeatType : uint8_t
{
	SpecifiedSlot                  = 0,
	Driver                         = 1,
	Gunner                         = 2,
	Passenger                      = 3,
	Hostile                        = 4,
	ELeapOnVehicle_MAX             = 5
};


// Enum OakGame.EOakActionAbilitySecondaryUseActionType
enum class EOakActionAbilitySecondaryUseActionType : uint8_t
{
	None                           = 0,
	Primary                        = 1,
	Secondary                      = 2,
	EOakActionAbilitySecondaryUseActionType_MAX = 3
};


// Enum OakGame.EOakActionAbilityStopAction
enum class EOakActionAbilityStopAction : uint8_t
{
	Normal                         = 0,
	Expidited                      = 1,
	Abort                          = 2,
	EOakActionAbilityStopAction_MAX = 3
};


// Enum OakGame.ECloneSwapReason
enum class ECloneSwapReason : uint8_t
{
	Manual                         = 0,
	NewU                           = 1,
	ECloneSwapReason_MAX           = 2
};


// Enum OakGame.EOakActionAbilityPetModType
enum class EOakActionAbilityPetModType : uint8_t
{
	None                           = 0,
	Mod1                           = 1,
	Mod2                           = 2,
	Mod3                           = 3,
	Mod4                           = 4,
	Mod5                           = 5,
	EOakActionAbilityPetModType_MAX = 6
};


// Enum OakGame.EOakActionAbilityPetEvolutionType
enum class EOakActionAbilityPetEvolutionType : uint8_t
{
	None                           = 0,
	Evolution1                     = 1,
	Evolution2                     = 2,
	EOakActionAbilityPetEvolutionType_MAX = 3
};


// Enum OakGame.EOakActionAbilityPetType
enum class EOakActionAbilityPetType : uint8_t
{
	None                           = 0,
	Spiderant                      = 1,
	Jabbermon                      = 2,
	Skag                           = 3,
	Loader                         = 4,
	EOakActionAbilityPetType_MAX   = 5
};


// Enum OakGame.EPhaseTranceEffectTargetType
enum class EPhaseTranceEffectTargetType : uint8_t
{
	Actor                          = 0,
	Location                       = 1,
	EPhaseTranceEffectTargetType_MAX = 2
};


// Enum OakGame.EPhaseTranceElementalType
enum class EPhaseTranceElementalType : uint8_t
{
	None                           = 0,
	Element1                       = 1,
	Element2                       = 2,
	Element3                       = 3,
	Element4                       = 4,
	EPhaseTranceElementalType_MAX  = 5
};


// Enum OakGame.EPhaseTranceEffectType
enum class EPhaseTranceEffectType : uint8_t
{
	None                           = 0,
	Effect1                        = 1,
	Effect2                        = 2,
	Effect3                        = 3,
	Effect4                        = 4,
	Effect5                        = 5,
	Effect6                        = 6,
	EPhaseTranceEffectType_MAX     = 7
};


// Enum OakGame.EPhaseTranceAttackFamilyType
enum class EPhaseTranceAttackFamilyType : uint8_t
{
	None                           = 0,
	AttackFamily1                  = 1,
	AttackFamily2                  = 2,
	AttackFamily3                  = 3,
	AttackFamily4                  = 4,
	EPhaseTranceAttackFamilyType_MAX = 5
};


// Enum OakGame.EOperativeBarrierModType
enum class EOperativeBarrierModType : uint8_t
{
	Mod1                           = 0,
	Mod2                           = 1,
	Mod3                           = 2,
	Mod4                           = 3,
	Mod5                           = 4,
	Mod6                           = 5,
	EOperativeBarrierModType_MAX   = 6
};


// Enum OakGame.EDigiCloneModType
enum class EDigiCloneModType : uint8_t
{
	Mod1                           = 0,
	Mod2                           = 1,
	Mod3                           = 2,
	Mod4                           = 3,
	Mod5                           = 4,
	Mod6                           = 5,
	Mod7                           = 6,
	Mod8                           = 7,
	Mod9                           = 8,
	EDigiCloneModType_MAX          = 9
};


// Enum OakGame.EGRMLNModType
enum class EGRMLNModType : uint8_t
{
	Mod1                           = 0,
	Mod2                           = 1,
	Mod3                           = 2,
	Mod4                           = 3,
	Mod5                           = 4,
	Mod6                           = 5,
	EGRMLNModType_MAX              = 6
};


// Enum OakGame.EIronBearUIHardpointType
enum class EIronBearUIHardpointType : uint8_t
{
	GRENADE_LAUNCHER               = 0,
	MINIGUN                        = 1,
	BEARFIST                       = 2,
	FALCON_STRIKE                  = 3,
	SALAMANDER_THROWER             = 4,
	BUBBLE_SHIELD                  = 5,
	RAILGUN                        = 6,
	EIronBearUIHardpointType_MAX   = 7
};


// Enum OakGame.EIronBearModType
enum class EIronBearModType : uint8_t
{
	None                           = 0,
	Mod1                           = 1,
	Mod2                           = 2,
	Mod3                           = 3,
	EIronBearModType_MAX           = 4
};


// Enum OakGame.EOakAISwarmRotation
enum class EOakAISwarmRotation : uint8_t
{
	None                           = 0,
	Strafe                         = 1,
	Forward                        = 2,
	EOakAISwarmRotation_MAX        = 3
};


// Enum OakGame.ECARRestrictionType
enum class ECARRestrictionType : uint8_t
{
	Default                        = 0,
	DLC3                           = 1,
	ECARRestrictionType_MAX        = 2
};


// Enum OakGame.ECARPartType
enum class ECARPartType : uint8_t
{
	Wheel                          = 0,
	Armor                          = 1,
	CoreMod                        = 2,
	GunnerWeapon                   = 3,
	DriverWeapon                   = 4,
	Ornament                       = 5,
	MaterialDecal                  = 6,
	Material                       = 7,
	None                           = 8,
	ECARPartType_MAX               = 9
};


// Enum OakGame.EChallengRewardFormattingType
enum class EChallengRewardFormattingType : uint8_t
{
	Cash                           = 0,
	Eridium                        = 1,
	Other                          = 2,
	EChallengRewardFormattingType_MAX = 3
};


// Enum OakGame.ECameraAttachState
enum class ECameraAttachState : uint8_t
{
	CAS_Dettached                  = 0,
	CAS_Attached                   = 1,
	CAS_MAX                        = 2
};


// Enum OakGame.EVehicleArchetype
enum class EVehicleArchetype : uint8_t
{
	Null                           = 0,
	Technical                      = 1,
	Outrunner                      = 2,
	Revolver                       = 3,
	Emperor                        = 4,
	EVehicleArchetype_MAX          = 5
};


// Enum OakGame.ECinematicState
enum class ECinematicState : uint8_t
{
	Inactive                       = 0,
	PlayingIntro                   = 1,
	PlayingSequence                = 2,
	ECinematicState_MAX            = 3
};


// Enum OakGame.EOakMayhemModeConditionType
enum class EOakMayhemModeConditionType : uint8_t
{
	IsMayhemModeActive             = 0,
	CompareMayhemLevel             = 1,
	EOakMayhemModeConditionType_MAX = 2
};


// Enum OakGame.EHealthTypeState
enum class EHealthTypeState : uint8_t
{
	Normal                         = 0,
	Low                            = 1,
	VeryLow                        = 2,
	Depleted                       = 3,
	EHealthTypeState_MAX           = 4
};


// Enum OakGame.EDamageInstigatorClassification
enum class EDamageInstigatorClassification : uint8_t
{
	Other                          = 0,
	PlayerVersusPlayer             = 1,
	PlayerVersusAI                 = 2,
	AIVersusPlayer                 = 3,
	EDamageInstigatorClassification_MAX = 4
};


// Enum OakGame.EOakElementalDeathEffects
enum class EOakElementalDeathEffects : uint8_t
{
	Default                        = 0,
	Custom                         = 1,
	Disabled                       = 2,
	EOakElementalDeathEffects_MAX  = 3
};


// Enum OakGame.EUIDialogCallout
enum class EUIDialogCallout : uint8_t
{
	OutOfGrenades                  = 0,
	EquipAskillFailed              = 1,
	EquipItemFailed                = 2,
	RemoveItemFailed               = 3,
	InsufficientFunds              = 4,
	EUIDialogCallout_MAX           = 5
};


// Enum OakGame.EGRMLNHardpointType
enum class EGRMLNHardpointType : uint8_t
{
	None                           = 0,
	MachineGun                     = 1,
	Mod4                           = 2,
	EGRMLNHardpointType_MAX        = 3
};


// Enum OakGame.EOakDroneFacingMode
enum class EOakDroneFacingMode : uint8_t
{
	None                           = 0,
	FaceMoveDir                    = 1,
	FaceTarget                     = 2,
	FaceMovementTarget             = 3,
	EOakDroneFacingMode_MAX        = 4
};


// Enum OakGame.EOakDroneMovementMode
enum class EOakDroneMovementMode : uint8_t
{
	Projectile                     = 0,
	FlyToTarget                    = 1,
	HoverAtTarget                  = 2,
	HoverAtOwner                   = 3,
	EOakDroneMovementMode_MAX      = 4
};


// Enum OakGame.EOakElementalStackBucketType
enum class EOakElementalStackBucketType : uint8_t
{
	Unknown                        = 0,
	Character                      = 1,
	Weapon                         = 2,
	Grenade                        = 3,
	InteractiveObject              = 4,
	ElementalInteraction           = 5,
	EOakElementalStackBucketType_MAX = 6
};


// Enum OakGame.EInviteType
enum class EInviteType : uint8_t
{
	Public                         = 0,
	InviteOnly                     = 1,
	FriendsOnly                    = 2,
	EInviteType_MAX                = 3
};


// Enum OakGame.EFriendSyncState
enum class EFriendSyncState : uint8_t
{
	Disabled                       = 0,
	Enabled                        = 1,
	EFriendSyncState_MAX           = 2
};


// Enum OakGame.ECrossplayState
enum class ECrossplayState : uint8_t
{
	Disabled                       = 0,
	Enabled                        = 1,
	ECrossplayState_MAX            = 2
};


// Enum OakGame.ENetworkType
enum class ENetworkType : uint8_t
{
	Offline                        = 0,
	Lan                            = 1,
	Online                         = 2,
	ENetworkType_MAX               = 3
};


// Enum OakGame.EPlayerInputLockType
enum class EPlayerInputLockType : uint8_t
{
	None                           = 0,
	All                            = 1,
	Movement                       = 2,
	Looking                        = 3,
	Jumping                        = 4,
	Weapon                         = 5,
	EPlayerInputLockType_MAX       = 6
};


// Enum OakGame.EActivityCompletionFriendEventType
enum class EActivityCompletionFriendEventType : uint8_t
{
	RaidCompletion                 = 0,
	CircleOfSlaughterCompletion    = 1,
	ProvingGroundsCompletion       = 2,
	EActivityCompletionFriendEventType_MAX = 3
};


// Enum OakGame.EBenchmarkDataOutputMode
enum class EBenchmarkDataOutputMode : uint8_t
{
	None                           = 0,
	Summary                        = 1,
	DetailedCSV                    = 2,
	EBenchmarkDataOutputMode_MAX   = 3
};


// Enum OakGame.EAmbientOcclusionQuality
enum class EAmbientOcclusionQuality : uint8_t
{
	Off                            = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	Ultra                          = 4,
	EAmbientOcclusionQuality_MAX   = 5
};


// Enum OakGame.ECharacterDetail
enum class ECharacterDetail : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Ultra                          = 3,
	ECharacterDetail_MAX           = 4
};


// Enum OakGame.ECharacterTextureDetail
enum class ECharacterTextureDetail : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Ultra                          = 3,
	Deprecated                     = 4,
	ECharacterTextureDetail_MAX    = 5
};


// Enum OakGame.EScreenSpaceReflections
enum class EScreenSpaceReflections : uint8_t
{
	Off                            = 0,
	Medium                         = 1,
	High                           = 2,
	Ultra                          = 3,
	EScreenSpaceReflections_MAX    = 4
};


// Enum OakGame.EVolumetricFogType
enum class EVolumetricFogType : uint8_t
{
	Off                            = 0,
	Medium                         = 1,
	High                           = 2,
	Ultra                          = 3,
	EVolumetricFogType_MAX         = 4
};


// Enum OakGame.EFoliageDensity
enum class EFoliageDensity : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Ultra                          = 3,
	EFoliageDensity_MAX            = 4
};


// Enum OakGame.ETerrainType
enum class ETerrainType : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Ultra                          = 3,
	ETerrainType_MAX               = 4
};


// Enum OakGame.EEnvironmentDetail
enum class EEnvironmentDetail : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Ultra                          = 3,
	EEnvironmentDetail_MAX         = 4
};


// Enum OakGame.EDrawDistance
enum class EDrawDistance : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Ultra                          = 3,
	EDrawDistance_MAX              = 4
};


// Enum OakGame.EEnvironmentTextureDetail
enum class EEnvironmentTextureDetail : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Ultra                          = 3,
	Deprecated                     = 4,
	EEnvironmentTextureDetail_MAX  = 5
};


// Enum OakGame.EShadowQuality
enum class EShadowQuality : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Ultra                          = 3,
	EShadowQuality_MAX             = 4
};


// Enum OakGame.EAnisotropicFilteringType
enum class EAnisotropicFilteringType : uint8_t
{
	Trilinear                      = 0,
	TwoX                           = 1,
	FourX                          = 2,
	EightX                         = 3,
	SixteenX                       = 4,
	EAnisotropicFilteringType_MAX  = 5
};


// Enum OakGame.EMaterialQuality
enum class EMaterialQuality : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Ultra                          = 3,
	EMaterialQuality_MAX           = 4
};


// Enum OakGame.ETextureStreamingQuality
enum class ETextureStreamingQuality : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Ultra                          = 3,
	ETextureStreamingQuality_MAX   = 4
};


// Enum OakGame.EGraphicsQuality
enum class EGraphicsQuality : uint8_t
{
	VeryLow                        = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	Ultra                          = 4,
	Badass                         = 5,
	Undefined                      = 6,
	EGraphicsQuality_MAX           = 7
};


// Enum OakGame.EFrameRateLimit
enum class EFrameRateLimit : uint8_t
{
	Smooth22_62FPS                 = 0,
	Capped30FPS                    = 1,
	Capped60FPS                    = 2,
	Capped120FPS                   = 3,
	Unlimited                      = 4,
	Custom                         = 5,
	EFrameRateLimit_MAX            = 6
};


// Enum OakGame.EResolutionScale
enum class EResolutionScale : uint8_t
{
	Scale                          = 0,
	Scale01                        = 1,
	Scale02                        = 2,
	Scale03                        = 3,
	Scale04                        = 4,
	Scale05                        = 5,
	Scale06                        = 6,
	Scale_MAX                      = 7
};


// Enum OakGame.ESupportedAspectRatios
enum class ESupportedAspectRatios : uint8_t
{
	AspectRatio_16                 = 0,
	AspectRatio_1601               = 1,
	AspectRatio_32                 = 2,
	AspectRatio_21                 = 3,
	AspectRatio_Unsupported        = 4,
	AspectRatio_MAX                = 5
};


// Enum OakGame.EHUDType
enum class EHUDType : uint8_t
{
	NoHUD                          = 0,
	StandardPlayerHUD              = 1,
	VehicleHUD                     = 2,
	IronbearHUD                    = 3,
	EHUDType_MAX                   = 4
};


// Enum OakGame.EOakInputActionEventType
enum class EOakInputActionEventType : uint8_t
{
	None                           = 0,
	Button                         = 1,
	Axis                           = 2,
	EOakInputActionEventType_MAX   = 3
};


// Enum OakGame.EPickupFlyToSettingsType
enum class EPickupFlyToSettingsType : uint8_t
{
	Dropped                        = 0,
	Container                      = 1,
	AutoLootContainer              = 2,
	EPickupFlyToSettingsType_MAX   = 3
};


// Enum OakGame.EOakInventoryItemFlags
enum class EOakInventoryItemFlags : uint8_t
{
	HasBeenSeenInInventoryMenu     = 0,
	MarkedAsFavorite               = 1,
	MarkedAsJunk                   = 2,
	EOakInventoryItemFlags_MAX     = 3
};


// Enum OakGame.EOakInventoryMenuPaperDollSlotAdjacency
enum class EOakInventoryMenuPaperDollSlotAdjacency : uint8_t
{
	Mid                            = 0,
	Left                           = 1,
	Right                          = 2,
	EOakInventoryMenuPaperDollSlotAdjacency_MAX = 3
};


// Enum OakGame.EOakInventoryMenuAmmoState
enum class EOakInventoryMenuAmmoState : uint8_t
{
	Default                        = 0,
	Highlighted                    = 1,
	HighlightedEmpty               = 2,
	Low                            = 3,
	Empty                          = 4,
	Full                           = 5,
	EOakInventoryMenuAmmoState_MAX = 6
};


// Enum OakGame.EOakInventoryMenuWhatChanged
enum class EOakInventoryMenuWhatChanged : uint8_t
{
	Initial                        = 0,
	RefreshAll                     = 1,
	SortChanged                    = 2,
	AddedItem                      = 3,
	RemovedItem                    = 4,
	UnequippedItem                 = 5,
	EquippedItem                   = 6,
	EOakInventoryMenuWhatChanged_MAX = 7
};


// Enum OakGame.EOakInventoryMenuSortMode
enum class EOakInventoryMenuSortMode : uint8_t
{
	NewestFirst                    = 0,
	Type                           = 1,
	Level                          = 2,
	Manufacturer                   = 3,
	Rarity                         = 4,
	EOakInventoryMenuSortMode_MAX  = 5
};


// Enum OakGame.EOakInventoryItemWidgetSelectType
enum class EOakInventoryItemWidgetSelectType : uint8_t
{
	Normal                         = 0,
	HideWhenSelected               = 1,
	PopoutSelection                = 2,
	EOakInventoryItemWidgetSelectType_MAX = 3
};


// Enum OakGame.EOakInventoryItemWidgetDisabledReason
enum class EOakInventoryItemWidgetDisabledReason : uint8_t
{
	NotDisabled                    = 0,
	SlotLocked                     = 1,
	BrowsingAnotherPanel           = 2,
	CantEquipInSlot                = 3,
	EOakInventoryItemWidgetDisabledReason_MAX = 4
};


// Enum OakGame.EOakStatusMenuInventoryEvent
enum class EOakStatusMenuInventoryEvent : uint8_t
{
	PaperDollItemHighlighted       = 0,
	BackpackItemHighlighted        = 1,
	BackpackHighlighted            = 2,
	PaperDollHighlighted           = 3,
	EOakStatusMenuInventoryEvent_MAX = 4
};


// Enum OakGame.EOakInventoryRarityBalanceTableType
enum class EOakInventoryRarityBalanceTableType : uint8_t
{
	Weapon                         = 0,
	EOakInventoryRarityBalanceTableType_MAX = 1
};


// Enum OakGame.EMailItemType
enum class EMailItemType : uint8_t
{
	None                           = 0,
	GearboxMail                    = 1,
	PlayerMail                     = 2,
	StreamerMail                   = 3,
	NPCMail                        = 4,
	DownloadableEntitlement        = 5,
	EMailItemType_MAX              = 6
};


// Enum OakGame.EReapOrder
enum class EReapOrder : uint8_t
{
	OldestFirst                    = 0,
	NewestFirst                    = 1,
	Random                         = 2,
	EReapOrder_MAX                 = 3
};


// Enum OakGame.EOakManufacturerBalanceTableType
enum class EOakManufacturerBalanceTableType : uint8_t
{
	Weapon                         = 0,
	EOakManufacturerBalanceTableType_MAX = 1
};


// Enum OakGame.EOakMinimapIconComponentType
enum class EOakMinimapIconComponentType : uint8_t
{
	Manual                         = 0,
	TargetingComponentDriven       = 1,
	WhileAlive                     = 2,
	EOakMinimapIconComponentType_MAX = 3
};


// Enum OakGame.EOakMissionType
enum class EOakMissionType : uint8_t
{
	Default                        = 0,
	Plot                           = 1,
	Side                           = 2,
	ProvingGrounds                 = 3,
	CircleOfSlaughter              = 4,
	Raid                           = 5,
	RareSpawn                      = 6,
	Count                          = 7,
	EOakMissionType_MAX            = 8
};


// Enum OakGame.EOakMusicLayer
enum class EOakMusicLayer : uint8_t
{
	Aux                            = 0,
	Bass                           = 1,
	Chord                          = 2,
	Melody                         = 3,
	Perc_Kick                      = 4,
	Perc_Large                     = 5,
	Perc_Small                     = 6,
	MAX                            = 7
};


// Enum OakGame.EOakMusicPart
enum class EOakMusicPart : uint8_t
{
	Part_None                      = 0,
	Part                           = 1,
	Part01                         = 2,
	Part02                         = 3,
	Part03                         = 4,
	Part04                         = 5,
	Part05                         = 6,
	Part06                         = 7,
	Part07                         = 8,
	Part08                         = 9,
	Part09                         = 10,
	Part10                         = 11,
	Part11                         = 12,
	Part12                         = 13,
	Part13                         = 14,
	Part14                         = 15,
	Part15                         = 16,
	Part16                         = 17,
	Part17                         = 18,
	Part18                         = 19,
	Part19                         = 20,
	Part_SparseAmbiance            = 21,
	Part_MAX                       = 22
};


// Enum OakGame.EOakMusicSection
enum class EOakMusicSection : uint8_t
{
	Section_None                   = 0,
	Section                        = 1,
	Section01                      = 2,
	Section02                      = 3,
	Section03                      = 4,
	Section04                      = 5,
	Section05                      = 6,
	Section06                      = 7,
	Section07                      = 8,
	Section08                      = 9,
	Section09                      = 10,
	Section_MAX                    = 11
};


// Enum OakGame.EDrivingOverridePriority
enum class EDrivingOverridePriority : uint8_t
{
	AINode                         = 0,
	Aspect                         = 1,
	Scripted                       = 2,
	Count                          = 3,
	Invalid                        = 4,
	EDrivingOverridePriority_MAX   = 5
};


// Enum OakGame.ESpeedModifierOverridePriority
enum class ESpeedModifierOverridePriority : uint8_t
{
	AINode                         = 0,
	Aspect                         = 1,
	Scripted                       = 2,
	Escort                         = 3,
	UserEdge                       = 4,
	Count                          = 5,
	Invalid                        = 6,
	ESpeedModifierOverridePriority_MAX = 7
};


// Enum OakGame.EOakOnlineLobbyTalkingState
enum class EOakOnlineLobbyTalkingState : uint8_t
{
	NotTalking                     = 0,
	Talking                        = 1,
	Muted                          = 2,
	EOakOnlineLobbyTalkingState_MAX = 3
};


// Enum OakGame.EOakOnlineLobbyPlayerPlateState
enum class EOakOnlineLobbyPlayerPlateState : uint8_t
{
	Offline                        = 0,
	WaitingForPlayers              = 1,
	Invite                         = 2,
	SplitPlayerToJoin              = 3,
	PlayerListed                   = 4,
	EOakOnlineLobbyPlayerPlateState_MAX = 5
};


// Enum OakGame.EOakOnlineLobbyConnectivityState
enum class EOakOnlineLobbyConnectivityState : uint8_t
{
	Unknown                        = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	None                           = 4,
	EOakOnlineLobbyConnectivityState_MAX = 5
};


// Enum OakGame.EOakPassiveAbilityHUDIconActivationType
enum class EOakPassiveAbilityHUDIconActivationType : uint8_t
{
	TriggeredEffect                = 0,
	StatusEffect                   = 1,
	AbilityTimer                   = 2,
	Manual                         = 3,
	ActiveState                    = 4,
	EOakPassiveAbilityHUDIconActivationType_MAX = 5
};


// Enum OakGame.EAdditionalTriggeredEffectTargets
enum class EAdditionalTriggeredEffectTargets : uint8_t
{
	None                           = 0,
	MyCompanions                   = 1,
	MyAllies                       = 2,
	EAdditionalTriggeredEffectTargets_MAX = 3
};


// Enum OakGame.EOakPassiveAbilitySirenArmDurationType
enum class EOakPassiveAbilitySirenArmDurationType : uint8_t
{
	None                           = 0,
	AbilityState                   = 1,
	AbilityTimer                   = 2,
	StatusEffect                   = 3,
	EOakPassiveAbilitySirenArmDurationType_MAX = 4
};


// Enum OakGame.ESkillItemRealType
enum class ESkillItemRealType : uint8_t
{
	None                           = 0,
	PlayerAbility                  = 1,
	Augment                        = 2,
	AugmentSlot                    = 3,
	CharacterAugment               = 4,
	ESkillItemRealType_MAX         = 5
};


// Enum OakGame.ESkillItemDisplayType
enum class ESkillItemDisplayType : uint8_t
{
	None                           = 0,
	ActionSkill                    = 1,
	ModPrimary                     = 2,
	ModSecondary                   = 3,
	Passive                        = 4,
	ClassAbility                   = 5,
	ESkillItemDisplayType_MAX      = 6
};


// Enum OakGame.ESkillItemLayoutInfo
enum class ESkillItemLayoutInfo : uint8_t
{
	Left                           = 0,
	Center                         = 1,
	Right                          = 2,
	LeftWing                       = 3,
	RightWing                      = 4,
	ESkillItemLayoutInfo_MAX       = 5
};


// Enum OakGame.EScreenCalibrationMode
enum class EScreenCalibrationMode : uint8_t
{
	Off                            = 0,
	HDRBrightness                  = 1,
	StandardBrightnessAndBlackLevel = 2,
	EScreenCalibrationMode_MAX     = 3
};


// Enum OakGame.EJoystickScheme
enum class EJoystickScheme : uint8_t
{
	Classic                        = 0,
	SouthPaw                       = 1,
	OldSchool                      = 2,
	OldSchool_Southpaw             = 3,
	Count                          = 4,
	EJoystickScheme_MAX            = 5
};


// Enum OakGame.EDrivingButtonScheme
enum class EDrivingButtonScheme : uint8_t
{
	Classic                        = 0,
	CameraRelative                 = 1,
	VehicleRelative                = 2,
	VehicleRelativeStick           = 3,
	Count                          = 4,
	EDrivingButtonScheme_MAX       = 5
};


// Enum OakGame.EWalkingButtonScheme
enum class EWalkingButtonScheme : uint8_t
{
	Default                        = 0,
	Classic                        = 1,
	Count                          = 2,
	EWalkingButtonScheme_MAX       = 3
};


// Enum OakGame.EGameJoinNotificationState
enum class EGameJoinNotificationState : uint8_t
{
	EGJNS_None                     = 0,
	EGJNS_PlayerStateReplicated    = 1,
	EGJNS_SyncLevelReplicated      = 2,
	EGJNS_PlayerNotified           = 3,
	EGJNS_MAX                      = 4
};


// Enum OakGame.EPresentableStatusEffectValueStrategy
enum class EPresentableStatusEffectValueStrategy : uint8_t
{
	PercentOfMaxHealth             = 0,
	InstanceCount                  = 1,
	EPresentableStatusEffectValueStrategy_MAX = 2
};


// Enum OakGame.ERadiateMovementType
enum class ERadiateMovementType : uint8_t
{
	FollowInitialDirection         = 0,
	SimpleMoveOnGround             = 1,
	ERadiateMovementType_MAX       = 2
};


// Enum OakGame.ERadiateMethod
enum class ERadiateMethod : uint8_t
{
	Velocity                       = 0,
	MinMaxDistance                 = 1,
	ERadiateMethod_MAX             = 2
};


// Enum OakGame.EClassRepNodeMapping
enum class EClassRepNodeMapping : uint8_t
{
	NotRouted                      = 0,
	RelevantForConnections         = 1,
	Spatialize_Static              = 2,
	Spatialize_Dynamic             = 3,
	Spatialize_Dormancy            = 4,
	EClassRepNodeMapping_MAX       = 5
};


// Enum OakGame.EEventTriggerType
enum class EEventTriggerType : uint8_t
{
	StreamingEvent_DirectorTriggered = 0,
	StreamingEvent_WorldTriggered  = 1,
	StreamingEvent_ViewerTriggered = 2,
	StreamingEvent_MAX             = 3
};


// Enum OakGame.EStreamingInteractionEventState
enum class EStreamingInteractionEventState : uint8_t
{
	StreamingEvent_Disabled        = 0,
	StreamingEvent_Preliminary     = 1,
	StreamingEvent_Standby         = 2,
	StreamingEvent_Active          = 3,
	StreamingEvent_MAX             = 4
};


// Enum OakGame.ECharacterProfileUpdateStep
enum class ECharacterProfileUpdateStep : uint8_t
{
	Step_MainCharacterInfo         = 0,
	Step_MainCharacterInfo2        = 1,
	Step_Inventory                 = 2,
	Step_MAX                       = 3
};


// Enum OakGame.EStreamingManagerState
enum class EStreamingManagerState : uint8_t
{
	StreamingManager_Off           = 0,
	StreamingManager_Initialized   = 1,
	StreamingManager_Active        = 2,
	StreamingManager_Paused        = 3,
	StreamingManager_MAX           = 4
};


// Enum OakGame.EEndEventReasons
enum class EEndEventReasons : uint8_t
{
	Unknown                        = 0,
	Success                        = 1,
	NoParticipants                 = 2,
	Timeout                        = 3,
	Error                          = 4,
	Win                            = 5,
	Draw                           = 6,
	Lose                           = 7,
	MapExited                      = 8,
	EEndEventReasons_MAX           = 9
};


// Enum OakGame.EOakTriggerComponentEventType
enum class EOakTriggerComponentEventType : uint8_t
{
	Touch                          = 0,
	UnTouch                        = 1,
	EOakTriggerComponentEventType_MAX = 2
};


// Enum OakGame.EOakUIChallengeDataProviderPopulateType
enum class EOakUIChallengeDataProviderPopulateType : uint8_t
{
	UNKNOWN                        = 0,
	Galaxy                         = 1,
	Planet                         = 2,
	Level                          = 3,
	EOakUIChallengeDataProviderPopulateType_MAX = 4
};


// Enum OakGame.EVehicleInputMode
enum class EVehicleInputMode : uint8_t
{
	CameraRelative_Classic         = 0,
	CameraRelative_ThirdPerson     = 1,
	VehicleRelative_LeftSide       = 2,
	VehicleRelative_StickOnly      = 3,
	Count                          = 4,
	EVehicleInputMode_MAX          = 5
};


// Enum OakGame.EVehiclePropertyValueType
enum class EVehiclePropertyValueType : uint8_t
{
	Speed_KPH                      = 0,
	PlanarSpeed_KPH                = 1,
	ForwardSpeed_KPH               = 2,
	Speed_MPH                      = 3,
	PlanarSpeed_MPH                = 4,
	ForwardSpeed_MPH               = 5,
	Mass                           = 6,
	IsPlayerDriven                 = 7,
	IsAIDriven                     = 8,
	EVehiclePropertyValueType_MAX  = 9
};


// Enum OakGame.EVoGDisplayState
enum class EVoGDisplayState : uint8_t
{
	None                           = 0,
	Inactive                       = 1,
	FadingIn                       = 2,
	Displayed                      = 3,
	FadingOut                      = 4,
	EVoGDisplayState_MAX           = 5
};


// Enum OakGame.EOakWeaponPartType
enum class EOakWeaponPartType : uint8_t
{
	Grip                           = 0,
	Foregrip                       = 1,
	Mag                            = 2,
	Mode                           = 3,
	ModeSwitch                     = 4,
	Barrel                         = 5,
	Scope                          = 6,
	Reload                         = 7,
	Melee                          = 8,
	Bolt                           = 9,
	Trigger                        = 10,
	Hammer                         = 11,
	CustomA                        = 12,
	CustomB                        = 13,
	EOakWeaponPartType_MAX         = 14
};


// Enum OakGame.VehicleWeapons
enum class EVehicleWeapons : uint8_t
{
	Technical_BarrelLauncher       = 0,
	Technical_StickyBombs          = 1,
	Technical_TireBombs            = 2,
	Outrunner_HeavyMissile         = 3,
	Outrunner_SwarmerMissile       = 4,
	Outrunner_ShotgunMissile       = 5,
	Emperor_Entropy                = 6,
	Emperor_Hellfire               = 7,
	Outrunner_FlameThrower         = 8,
	Outrunner_TeslaCoil            = 9,
	Technical_MachineGun           = 10,
	Technical_FlakCannon           = 11,
	Revolver_SpikeLauncher         = 12,
	Revolver_SawBladeLauncher      = 13,
	Revolver_GrenadeLauncher       = 14,
	Emperor_PulseRifle             = 15,
	Emperor_BouncingLaser          = 16,
	VehicleWeapons_MAX             = 17
};


// Enum OakGame.EWeaponAudioBodyLoopState
enum class EWeaponAudioBodyLoopState : uint8_t
{
	Active                         = 0,
	Equipping                      = 1,
	Reloading                      = 2,
	Invalid                        = 3,
	EWeaponAudioBodyLoopState_MAX  = 4
};


// Enum OakGame.EWeaponAudioBodyLoopType
enum class EWeaponAudioBodyLoopType : uint8_t
{
	PlayerOnly                     = 0,
	BothPlayersAndNPCs             = 1,
	NPCOnly                        = 2,
	EWeaponAudioBodyLoopType_MAX   = 3
};


// Enum OakGame.EOnlineMessageAnimationEnum
enum class EOnlineMessageAnimationEnum : uint8_t
{
	NONE                           = 0,
	EXIT_ANIMATION                 = 1,
	INTRO_ANIMATION                = 2,
	EOnlineMessageAnimationEnum_MAX = 3
};


// Enum OakGame.EOperativeBarrierState
enum class EOperativeBarrierState : uint8_t
{
	Activating                     = 0,
	Carried                        = 1,
	Deployed                       = 2,
	ShuttingDown                   = 3,
	EOperativeBarrierState_MAX     = 4
};


// Enum OakGame.EOptionType
enum class EOptionType : uint8_t
{
	Option_TODO                    = 0,
	Option_Title                   = 1,
	Option_Keybinding              = 2,
	Gameplay_InvertMapPitchControls = 3,
	Gameplay_InvertMapYawControls  = 4,
	Audio_MasterVolume             = 5,
	Audio_MusicVolume              = 6,
	Audio_SoundEffectVolume        = 7,
	Audio_VoiceVolume              = 8,
	Audio_SoundMode                = 9,
	Audio_PlayerCallouts           = 10,
	Audio_MuteAudioOnFocusLost     = 11,
	Audio_ControllerAudio          = 12,
	Audio_PushToTalk               = 13,
	Audio_VoiceChatVolume          = 14,
	Audio_EnableMicrosoftSpatial_Available = 15,
	Audio_EnableMicrosoftSpatial_Unavailable = 16,
	Gameplay_ResetTutorials        = 17,
	Gameplay_IndividualDifficulty  = 18,
	Gameplay_EnableTrainingMessages = 19,
	Gameplay_MPHOrKPH              = 20,
	Gameplay_CenterCrosshair       = 21,
	Gameplay_FixedMinimapRotation  = 22,
	Gameplay_CensorGore            = 23,
	Gameplay_MinimapLegendaries    = 24,
	Network_NetworkConnection      = 25,
	Network_CrossplayState         = 26,
	Network_FriendSync             = 27,
	Network_MatchmakingRegion      = 28,
	Network_HideTextChat           = 29,
	Network_TradeRequest           = 30,
	Network_PlayerToasts           = 31,
	Network_ToastsDuration         = 32,
	Network_StreamingService       = 33,
	Network_IncreasedSubscribersChance = 34,
	Network_RareChestEventEnabled  = 35,
	Network_BadassEventEnabled     = 36,
	Network_BadassEventCooldown    = 37,
	Network_PinataEventEnabled     = 38,
	Network_MoxxisDrinkEventEnabled = 39,
	Network_MoxxisDrinkEventBitsProductId = 40,
	Network_ExtractionEventEnabled = 41,
	Graphics_WindowMode            = 42,
	Graphics_Resolutions           = 43,
	Graphics_VSync                 = 44,
	Graphics_FieldOfView           = 45,
	Graphics_EnableMotionBlur      = 46,
	Graphics_TargetDisplay         = 47,
	Graphics_GraphicsMode          = 48,
	Graphics_CalibrateSafeArea     = 49,
	Graphics_CalibrateDisplay      = 50,
	Graphics_VehicleFieldOfView    = 51,
	Graphics_FramerateLimiter      = 52,
	Graphics_EnableCAS             = 53,
	Graphics_PreferredAPI          = 54,
	Graphics_AspectRatio           = 55,
	Graphics_RefreshRate           = 56,
	Graphics_FramerateLimitCustom  = 57,
	Graphics_ResolutionScale       = 58,
	Graphics_HUDScaleMultiplier    = 59,
	Graphics_SplitScreenConfig     = 60,
	AdvancedGraphics_GraphicsQuality = 61,
	AdvancedGraphics_AntialiasingMode = 62,
	AdvancedGraphics_AnisotropicFiltering = 63,
	AdvancedGraphics_DisplayPerformanceStats = 64,
	AdvancedGraphics_TextureDetail = 65,
	AdvancedGraphics_DrawDistance  = 66,
	AdvancedGraphics_Clutter       = 67,
	AdvancedGraphics_Tessellation  = 68,
	AdvancedGraphics_Foliage       = 69,
	AdvancedGraphics_VolumetricFog = 70,
	AdvancedGraphics_ScreenSpaceReflections = 71,
	AdvancedGraphics_CharacterTextureDetail = 72,
	AdvancedGraphics_CharacterDetail = 73,
	AdvancedGraphics_ShadowQuality = 74,
	AdvancedGraphics_AmbientOcclusionQuality = 75,
	AdvancedGraphics_CameraMotionBlur = 76,
	AdvancedGraphics_ObjectMotionBlur = 77,
	AdvancedGraphics_TextureStreaming = 78,
	AdvancedGraphics_MaterialQuality = 79,
	AdvancedGraphics_SystemInfo    = 80,
	Benchmark_Run                  = 81,
	Benchmark_Type                 = 82,
	Benchmark_DataOutput           = 83,
	Benchmark_Results              = 84,
	Benchmark_Uncapped             = 85,
	Benchmark_ResultPhase          = 86,
	Benchmark_ResultMeasurementType = 87,
	Benchmark_ResultDateTime       = 88,
	Benchmark_ResultFPS            = 89,
	Benchmark_ResultFrameTime      = 90,
	Benchmark_ResultLoadTime       = 91,
	Benchmark_ResultDataOutputPath = 92,
	Benchmark_ResultDetails0       = 93,
	Benchmark_ResultDetails1       = 94,
	Benchmark_ResultDetails2       = 95,
	Benchmark_ResultDetails3       = 96,
	Benchmark_ResultDetails4       = 97,
	Controls_MouseInvertLook       = 98,
	Controls_MouseSmoothing        = 99,
	Controls_LookSensitivity       = 100,
	Controls_MouseWeaponZoomSensitivity = 101,
	Controls_MouseVehicleSpensitivity = 102,
	Controls_GamepadInvertVerticalLook = 103,
	Controls_GamepadInvertHorizontalLook = 104,
	Controls_GamepadLookSensitivity = 105,
	Controls_GamepadWeaponZoomSensitivity = 106,
	Controls_GamepadVehicleSensitivity = 107,
	Controls_Vibration             = 108,
	Controls_TriggerFeedback       = 109,
	Controls_GamepadInvertMapVerticalLook = 110,
	Controls_GamepadInvertMapHorizontalLook = 111,
	Controls_MouseAcceleration     = 112,
	Controls_EnableGamepad         = 113,
	Controls_GamepadAimingInputStyle = 114,
	Controls_InvertIronBearHardpoints = 115,
	Controls_GlyphMode             = 116,
	Controls_AllowWindowsKey       = 117,
	ControlsAdvanced_InvertForwardMovement = 118,
	ControlsAdvanced_InvertStrafeMovement = 119,
	ControlsAdvanced_LeftDeadZoneCenter = 120,
	ControlsAdvanced_LeftDeadZoneOuter = 121,
	ControlsAdvanced_LeftAxialDeadZone = 122,
	ControlsAdvanced_RightDeadZoneCenter = 123,
	ControlsAdvanced_RightDeadZoneOuter = 124,
	ControlsAdvanced_RightAxialDeadZone = 125,
	Bindings_Move                  = 126,
	Bindings_Look                  = 127,
	Bindings_PCMoveForward         = 128,
	Bindings_PCMoveBackward        = 129,
	Bindings_PCStrafeLeft          = 130,
	Bindings_PCStrafeRight         = 131,
	Bindings_Jump                  = 132,
	Bindings_Crouch                = 133,
	Bindings_Sprint                = 134,
	Bindings_Fire                  = 135,
	Bindings_Reload                = 136,
	Bindings_Melee                 = 137,
	Bindings_ActionSkill           = 138,
	Bindings_GrenadeActionSkill2   = 139,
	Bindings_NextWeapon            = 140,
	Bindings_PrevWeapon            = 141,
	Bindings_NextWeaponCycleModeUseAlt = 142,
	Bindings_SelectWeapon1         = 143,
	Bindings_SelectWeapon2         = 144,
	Bindings_SelectWeapon3         = 145,
	Bindings_SelectWeapon4         = 146,
	Bindings_DropWeapon            = 147,
	Bindings_SecondaryUseQuickMenu = 148,
	Bindings_UseGiveUp             = 149,
	Bindings_UseGiveUpReload       = 150,
	Bindings_WeaponToggle          = 151,
	Bindings_Zoom                  = 152,
	Bindings_Emote1                = 153,
	Bindings_Emote2                = 154,
	Bindings_Emote3                = 155,
	Bindings_Emote4                = 156,
	Bindings_UnrebindableButton    = 157,
	Bindings_Vehicle_SteerForward  = 158,
	Bindings_Vehicle_SteerBackward = 159,
	Bindings_Vehicle_WeaponPrimary = 160,
	Bindings_Vehicle               = 161,
	ControlSchemes_Driving         = 162,
	ControlSchemes_DrivingJoystick = 163,
	ControlSchemes_Walking         = 164,
	ControlSchemes_WalkingJoystick = 165,
	Accessibility_CrosshairFriendlyColor = 166,
	Accessibility_CrosshairNeutralColor = 167,
	Accessibility_CrosshairHostileColor = 168,
	Accessibility_Subtitles        = 169,
	Accessibility_ClosedCaptioning = 170,
	Accessibility_CCTextSize       = 171,
	Accessibility_CCBackgroundOpacity = 172,
	Accessibility_AimAssist        = 173,
	Accessibility_GamepadAimAssist = 174,
	Accessibility_ZoomSnap         = 175,
	Accessibility_GamepadZoomSnap  = 176,
	Accessibility_MouseZoomSnap    = 177,
	Accessibility_WeaponZoom       = 178,
	Accessibility_AutoCenter       = 179,
	Accessibility_HeadBobScale     = 180,
	Accessibility_Sprint           = 181,
	Accessibility_Crouch           = 182,
	Accessibility_MantleStyle      = 183,
	Accessibility_MovementRecenters = 184,
	Accessibility_ShowDamageNumberElementalIcons = 185,
	EOptionType_MAX                = 186
};


// Enum OakGame.EOptionItemType
enum class EOptionItemType : uint8_t
{
	Title                          = 0,
	Slider                         = 1,
	Spinner                        = 2,
	BooleanSpinner                 = 3,
	Button                         = 4,
	Controls                       = 5,
	Keybinding_Button              = 6,
	KeyBinding_Axis                = 7,
	TodoItem                       = 8,
	DropDownList                   = 9,
	EOptionItemType_MAX            = 10
};


// Enum OakGame.EEchoPerformanceMode
enum class EEchoPerformanceMode : uint8_t
{
	EchoCommunication              = 0,
	EchoLog                        = 1,
	VoG                            = 2,
	EridianWriting                 = 3,
	EEchoPerformanceMode_MAX       = 4
};


// Enum OakGame.EPhotoModeOptionEffect
enum class EPhotoModeOptionEffect : uint8_t
{
	None                           = 0,
	FieldOfView                    = 1,
	CameraRoll                     = 2,
	Target                         = 3,
	FocusDistance                  = 4,
	FocusRegion                    = 5,
	DOFIntensity                   = 6,
	Contrast                       = 7,
	Saturation                     = 8,
	Gamma                          = 9,
	Gain                           = 10,
	TimeOfDay                      = 11,
	HideCharacters                 = 12,
	FilmGrain                      = 13,
	Filter                         = 14,
	FilterIntensity                = 15,
	VignetteIntensity              = 16,
	VignetteFeathering             = 17,
	HideDamageNumbers              = 18,
	OverrideDOF                    = 19,
	Border                         = 20,
	Tag                            = 21,
	EPhotoModeOptionEffect_MAX     = 22
};


// Enum OakGame.EEchoDeviceFXPositionMode
enum class EEchoDeviceFXPositionMode : uint8_t
{
	None                           = 0,
	UIObject                       = 1,
	ViewportPosition               = 2,
	EEchoDeviceFXPositionMode_MAX  = 3
};


// Enum OakGame.ETransactionType
enum class ETransactionType : uint8_t
{
	Buy                            = 0,
	Sell                           = 1,
	BuyBack                        = 2,
	SellAllJunk                    = 3,
	PurchaseCustomization          = 4,
	ETransactionType_MAX           = 5
};


// Enum OakGame.EPlayerStandInType
enum class EPlayerStandInType : uint8_t
{
	Unspecified                    = 0,
	FrontendLobby                  = 1,
	CharacterSelect                = 2,
	CharacterCreate                = 3,
	SkillScreen                    = 4,
	RnRCharacterSelect             = 5,
	EPlayerStandInType_MAX         = 6
};


// Enum OakGame.EFrontendStandInSpecialAnimType
enum class EFrontendStandInSpecialAnimType : uint8_t
{
	PlayerArrival                  = 0,
	PrimaryPlayerFlourish          = 1,
	CharacterSelectSelection       = 2,
	CharacterSelectSelection_NoActionSkill = 3,
	CharacterCreationSelection     = 4,
	MAX                            = 5
};


// Enum OakGame.EPlayerTradingStance
enum class EPlayerTradingStance : uint8_t
{
	Deciding                       = 0,
	TradeReady                     = 1,
	DuelReady                      = 2,
	Disconnected                   = 3,
	EPlayerTradingStance_MAX       = 4
};


// Enum OakGame.EPlayerTradeManagerStatus
enum class EPlayerTradeManagerStatus : uint8_t
{
	Uninitialized                  = 0,
	Trading                        = 1,
	Dueling                        = 2,
	ResolvingTrade                 = 3,
	ResolvingDuel                  = 4,
	EPlayerTradeManagerStatus_MAX  = 5
};


// Enum OakGame.EPlayThroughType
enum class EPlayThroughType : uint8_t
{
	CurrentPlayThrough             = 0,
	EffectivePlayThrough           = 1,
	EPlayThroughType_MAX           = 2
};


// Enum OakGame.EProjectedMeshShape
enum class EProjectedMeshShape : uint8_t
{
	Circle                         = 0,
	Square                         = 1,
	EProjectedMeshShape_MAX        = 2
};


// Enum OakGame.EShieldState
enum class EShieldState : uint8_t
{
	Uninitialized                  = 0,
	Empty                          = 1,
	PartiallyFilled                = 2,
	Filled                         = 3,
	EShieldState_MAX               = 4
};


// Enum OakGame.EShieldAttributeModificationSource
enum class EShieldAttributeModificationSource : uint8_t
{
	Other                          = 0,
	Equipped                       = 1,
	Filled                         = 2,
	Depleted                       = 3,
	NotDepleted                    = 4,
	EShieldAttributeModificationSource_MAX = 5
};


// Enum OakGame.EStackOperator
enum class EStackOperator : uint8_t
{
	Add                            = 0,
	Multiply                       = 1,
	EStackOperator_MAX             = 2
};


// Enum OakGame.EShieldDamageModifierApplicationTarget
enum class EShieldDamageModifierApplicationTarget : uint8_t
{
	InstigatorCausedDamage         = 0,
	InstigatorReceivedDamage       = 1,
	EShieldDamageModifierApplicationTarget_MAX = 2
};


// Enum OakGame.EAugmentTriggerOn
enum class EAugmentTriggerOn : uint8_t
{
	TriggerOn_Filled               = 0,
	TriggerOn_NotFilled            = 1,
	TriggerOn_Depleted             = 2,
	TriggerOn_NotDepleted          = 3,
	TriggerOn_MAX                  = 4
};


// Enum OakGame.ESirenGhostArmConfigurationType
enum class ESirenGhostArmConfigurationType : uint8_t
{
	None                           = 0,
	FirstPerson                    = 1,
	ThirdPerson                    = 2,
	FirstAndThirdPerson            = 3,
	GhostArmsLocked                = 4,
	ESirenGhostArmConfigurationType_MAX = 5
};


// Enum OakGame.EItemDropOnDeathType
enum class EItemDropOnDeathType : uint8_t
{
	DropOnDeath_All                = 0,
	DropOnDeath_FirstDeath         = 1,
	DropOnDeath_LastDeath          = 2,
	DropOnDeath_RandomDeath        = 3,
	DropOnDeath_MAX                = 4
};


// Enum OakGame.ELootInstancingPolicy
enum class ELootInstancingPolicy : uint8_t
{
	Instance                       = 0,
	DontInstance                   = 1,
	InstanceForPlayer              = 2,
	ELootInstancingPolicy_MAX      = 3
};


// Enum OakGame.ESpawnDroppedPickupLootRequestType
enum class ESpawnDroppedPickupLootRequestType : uint8_t
{
	Drop                           = 0,
	Attach                         = 1,
	ESpawnDroppedPickupLootRequestType_MAX = 2
};


// Enum OakGame.EStandInAutoScaleMode
enum class EStandInAutoScaleMode : uint8_t
{
	None                           = 0,
	ScaleDown                      = 1,
	ScaleUpOrDown                  = 2,
	EStandInAutoScaleMode_MAX      = 3
};


// Enum OakGame.EStandInActorType
enum class EStandInActorType : uint8_t
{
	None                           = 0,
	Player                         = 1,
	PlayerSkillScreen              = 2,
	WeaponSkin                     = 3,
	WeaponTrinket                  = 4,
	CrewQuartersDecoration         = 5,
	CustomActor                    = 6,
	EStandInActorType_MAX          = 7
};


// Enum OakGame.EBehaviorOutput
enum class EBehaviorOutput : uint8_t
{
	Found                          = 0,
	NotFound                       = 1,
	EBehaviorOutput_MAX            = 2
};


// Enum OakGame.ETinkPileUseState
enum class ETinkPileUseState : uint8_t
{
	None                           = 0,
	NotUsed                        = 1,
	InUse                          = 2,
	WasUsed                        = 3,
	Resetting                      = 4,
	ETinkPileUseState_MAX          = 5
};


// Enum OakGame.ETinkPileBuildOption
enum class ETinkPileBuildOption : uint8_t
{
	None                           = 0,
	TurretBasic                    = 1,
	RocketPodBasic                 = 2,
	TurretPlaceholder1             = 3,
	TurretPlaceholder2             = 4,
	TurretPlaceholder3             = 5,
	TurretPlaceholder4             = 6,
	ETinkPileBuildOption_MAX       = 7
};


// Enum OakGame.ETransporterCraneState
enum class ETransporterCraneState : uint8_t
{
	Deactivated                    = 0,
	Stopped                        = 1,
	MoveForward                    = 2,
	MoveBackward                   = 3,
	ETransporterCraneState_MAX     = 4
};


// Enum OakGame.ETrophyCaseViewingState
enum class ETrophyCaseViewingState : uint8_t
{
	ViewingNone                    = 0,
	ViewingSet                     = 1,
	ViewingGroup                   = 2,
	ViewingTrophy                  = 3,
	ETrophyCaseViewingState_MAX    = 4
};


// Enum OakGame.EGroundTurretType
enum class EGroundTurretType : uint8_t
{
	Seated                         = 0,
	Standing                       = 1,
	EGroundTurretType_MAX          = 2
};


// Enum OakGame.EUIManagerState
enum class EUIManagerState : uint8_t
{
	NONE                           = 0,
	PLAYING_ANIMATION              = 1,
	EUIManagerState_MAX            = 2
};


// Enum OakGame.UIManagerMessages
enum class EUIManagerMessages : uint8_t
{
	Critical                       = 0,
	High                           = 1,
	Normal                         = 2,
	Low                            = 3,
	Lowest                         = 4,
	UIManagerMessages_MAX          = 5
};


// Enum OakGame.EChallengeCategoryID
enum class EChallengeCategoryID : uint8_t
{
	GameCompletion                 = 0,
	Enemy                          = 1,
	Weapon                         = 2,
	Crew                           = 3,
	Exploration                    = 4,
	Slaughter                      = 5,
	Raid                           = 6,
	ProvingGround                  = 7,
	Max                            = 8
};


// Enum OakGame.ERevolverOffsetMode
enum class ERevolverOffsetMode : uint8_t
{
	None                           = 0,
	Left                           = 1,
	Right                          = 2,
	ERevolverOffsetMode_MAX        = 3
};


// Enum OakGame.EWheelAudioType
enum class EWheelAudioType : uint8_t
{
	Standard                       = 0,
	MultiPosition2Wheels           = 1,
	MultiPosition1Wheel            = 2,
	SingleWheel                    = 3,
	EWheelAudioType_MAX            = 4
};


// Enum OakGame.EVehiclePlaySingleAnimMode
enum class EVehiclePlaySingleAnimMode : uint8_t
{
	PlayOnStart                    = 0,
	PlayOnStop                     = 1,
	EVehiclePlaySingleAnimMode_MAX = 2
};


// Enum OakGame.EEmitterEnableMode
enum class EEmitterEnableMode : uint8_t
{
	EnableOnStart                  = 0,
	EnableOnStartDisableOnStop     = 1,
	EnableOnStop                   = 2,
	DisableOnStart                 = 3,
	DisableOnStartEnableOnStop     = 4,
	DisableOnStop                  = 5,
	EEmitterEnableMode_MAX         = 6
};


// Enum OakGame.EFollowVehicleRotation
enum class EFollowVehicleRotation : uint8_t
{
	None                           = 0,
	Yaw                            = 1,
	YawAndPitch                    = 2,
	EFollowVehicleRotation_MAX     = 3
};


// Enum OakGame.EVendingMachineType
enum class EVendingMachineType : uint8_t
{
	Guns                           = 0,
	Ammo                           = 1,
	Health                         = 2,
	CrazyEarl                      = 3,
	EVendingMachineType_MAX        = 4
};


// Enum OakGame.VendingMachineDisplayMode
enum class EVendingMachineDisplayMode : uint8_t
{
	EVMDM_Buy                      = 0,
	EVMDM_Sell                     = 1,
	EVMDM_Buyback                  = 2,
	EVMDM_MAX                      = 3
};


// Enum OakGame.EVendingMachineTilesMode
enum class EVendingMachineTilesMode : uint8_t
{
	Purchase                       = 0,
	BuyBack                        = 1,
	Sell                           = 2,
	MAX                            = 3
};


// Enum OakGame.EVendingMachineInteractionMode
enum class EVendingMachineInteractionMode : uint8_t
{
	Purchase                       = 0,
	BuyBack                        = 1,
	Sell                           = 2,
	EVendingMachineInteractionMode_MAX = 3
};


// Enum OakGame.EVendingMachineAnimType
enum class EVendingMachineAnimType : uint8_t
{
	Idle                           = 0,
	Back                           = 1,
	BackTwice                      = 2,
	BackThrice                     = 3,
	BackJiggle                     = 4,
	Forward                        = 5,
	ForwardTwice                   = 6,
	ForwardThrice                  = 7,
	ForwardJiggle                  = 8,
	Purchase                       = 9,
	PurchaseInPlace                = 10,
	TurnOn                         = 11,
	TurnOff                        = 12,
	ErrorJiggle                    = 13,
	SlideInFromTop                 = 14,
	SlideInFromBottom              = 15,
	MAX                            = 16
};


// Enum OakGame.EVendingMachineTrayTileType
enum class EVendingMachineTrayTileType : uint8_t
{
	Regular                        = 0,
	Featured                       = 1,
	GearSoldByFriend               = 2,
	VisibleDummy                   = 3,
	EndOfListDummy                 = 4,
	EVendingMachineTrayTileType_MAX = 5
};


// Enum OakGame.EWeaponShieldActivationTrigger
enum class EWeaponShieldActivationTrigger : uint8_t
{
	Zoom                           = 0,
	Attach                         = 1,
	Custom                         = 2,
	EWeaponShieldActivationTrigger_MAX = 3
};


// Enum OakGame.EWeaponShieldState
enum class EWeaponShieldState : uint8_t
{
	Normal                         = 0,
	Depleted                       = 1,
	EWeaponShieldState_MAX         = 2
};


// Enum OakGame.EWeaponWearValueType
enum class EWeaponWearValueType : uint8_t
{
	Wear                           = 0,
	Rust                           = 1,
	Dirt                           = 2,
	EWeaponWearValueType_MAX       = 3
};


// Enum OakGame.EZoneMapTargetType
enum class EZoneMapTargetType : uint8_t
{
	None                           = 0,
	POI                            = 1,
	Player                         = 2,
	CrewChallenge                  = 3,
	MissionWaypoint                = 4,
	DeployedVehicle                = 5,
	EZoneMapTargetType_MAX         = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OakGame.SectorFromBP
// 0x0078
struct FSectorFromBP
{
	class USceneComponent*                             SectorRoot;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        FakeEmissiveWholeFloor;                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        PropaneAudioComponent;                                    // 0x0010(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                HeatingElements;                                          // 0x0018(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	TArray<class UStaticMeshComponent*>                FakeEmissives;                                            // 0x0028(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	TArray<class UStaticMeshComponent*>                DamageZones;                                              // 0x0038(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	TArray<class UParticleSystemComponent*>            Bursts;                                                   // 0x0048(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	TArray<class UParticleSystemComponent*>            HeatHazes;                                                // 0x0058(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	TArray<class UParticleSystemComponent*>            Anticipations;                                            // 0x0068(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
};

// ScriptStruct OakGame.Ring
// 0x0070
struct FRing
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct OakGame.Sector
// 0x0068
struct FSector
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct OakGame.WeaponSlotEntry
// 0x00F8
struct FWeaponSlotEntry
{
	class UWeaponSlotData*                             SlotData;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AWeapon*                                     AttachedWeapon;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class AWeapon*                                     PendingAttachedWeapon;                                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class AWeapon*                                     ClientPredictedPendingAttachedWeapon;                     // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     RestoreSlotData;                                          // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0028(0x00B8) MISSED OFFSET
	struct FGameResourcePoolReference                  AccuracyPool;                                             // 0x00E0(0x0018)
};

// ScriptStruct OakGame.WeaponSlotContainer
// 0x05B8
struct FWeaponSlotContainer
{
	TArray<struct FWeaponSlotEntry>                    WeaponSlots;                                              // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x5A8];                                     // 0x0010(0x05A8) MISSED OFFSET
};

// ScriptStruct OakGame.ZoneMapPOIEntry
// 0x0060
struct FZoneMapPOIEntry
{
	class UZoneMapPOITypeData*                         PointOfInterestType;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      PointOfInterestObjectName;                                // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FTransform                                  PointOfInterestTransform;                                 // 0x0020(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FIntPoint                                   PointOfInterestFODTexelCoords;                            // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     CustomPOIData;                                            // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct OakGame.InteractiveObjectTrapEntry
// 0x0010
struct FInteractiveObjectTrapEntry
{
	class AInteractiveObject*                          TrapActor;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	EInteractiveObjectTrapActivationType               ActivationType;                                           // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              InstructionDelay;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
};

// ScriptStruct OakGame.AIOOrientedParticleTarget
// 0x000C
struct FAIOOrientedParticleTarget
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct OakGame.AIOOrientedParticleData
// 0x0040
struct FAIOOrientedParticleData
{
	class UParticleSystem*                             ParticleSystem;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       OriginSocket;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParticleBeamTargetParameterName;                          // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DefaultBeamTargetPosition;                                // 0x0018(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    ParticleComponent;                                        // 0x0028(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FAIOOrientedParticleTarget                  Target;                                                   // 0x0030(0x000C) (Transient)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.CharacterCorpseState
// 0x00E8
struct FCharacterCorpseState
{
	unsigned char                                      bEnableCorpseCleanup : 1;                                 // 0x0000(0x0001) (Edit)
	unsigned char                                      bShouldTearOff : 1;                                       // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverrideVisibleCorpseRemovalTime : 1;                    // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              OverrideVisibleCorpseRemovalTime;                         // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ContactWithVehiclesTime;                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xDC];                                      // 0x000C(0x00DC) MISSED OFFSET
};

// ScriptStruct OakGame.HolsteredWeaponData
// 0x0018
struct FHolsteredWeaponData
{
	EWeaponHolsteredSizeType                           WeaponSizeType;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EPickupLootAttachmentMode                          AttachMode;                                               // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FName                                       SocketName;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bVisibleInFirstPerson;                                    // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.InventorySlotEntry
// 0x0034 (0x0040 - 0x000C)
struct FInventorySlotEntry : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class AActor*                                      EquippedInventory;                                        // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               Selected;                                                 // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
	class UInventorySlotData*                          SlotData;                                                 // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	class UWeaponTrinketPartData*                      EquippedTrinket;                                          // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      ClientCachedEquippedInventory;                            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWeaponTrinketPartData*                      ClientCachedEquippedTrinket;                              // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct OakGame.InventorySlotContainer
// 0x0038 (0x00E8 - 0x00B0)
struct FInventorySlotContainer : public FFastArraySerializer
{
	TArray<struct FInventorySlotEntry>                 InventorySlots;                                           // 0x00B0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x00C0(0x0028) MISSED OFFSET
};

// ScriptStruct OakGame.OakGenderData
// 0x0098
struct FOakGenderData
{
	class USkeletalMesh*                               Mesh;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MeshOffset;                                               // 0x0008(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UGestaltPartListData*                        GestaltPartList;                                          // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AnimBlueprint;                                            // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               AnimSetGenericNames_Enable;                               // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               AnimSetGenericNames_Disable;                              // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<class UGbxAnimSet*>                         AnimSets_Enable;                                          // 0x0048(0x0010) (Edit, ZeroConstructor)
	TArray<class UGbxAnimSet*>                         AnimSets_Disable;                                         // 0x0058(0x0010) (Edit, ZeroConstructor)
	TArray<class UMaterialInstance*>                   Materials;                                                // 0x0068(0x0010) (Edit, ZeroConstructor)
	TArray<class UDialogNameTag*>                      DialogNameTags;                                           // 0x0078(0x0010) (Edit, ZeroConstructor)
	class UDestructibleMesh*                           CryoMesh;                                                 // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                GoreSourceMaterialIndex;                                  // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.ColorRandomizer
// 0x0010
struct FColorRandomizer
{
	float                                              Hue;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Saturation;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNumericRange                               Scale;                                                    // 0x0008(0x0008) (Edit)
};

// ScriptStruct OakGame.OakCharacterCustomization
// 0x0014
struct FOakCharacterCustomization
{
	bool                                               bRandomizeColor;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FColorRandomizer                            ColorRandomizer;                                          // 0x0004(0x0010) (Edit)
};

// ScriptStruct OakGame.OakCharacterColorization
// 0x0078 (0x008C - 0x0014)
struct FOakCharacterColorization : public FOakCharacterCustomization
{
	struct FLinearColor                                Primary1;                                                 // 0x0014(0x0010) (Edit, IsPlainOldData)
	bool                                               bOverridePrimary1;                                        // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FLinearColor                                Primary2;                                                 // 0x0028(0x0010) (Edit, IsPlainOldData)
	bool                                               bOverridePrimary2;                                        // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FLinearColor                                Secondary1;                                               // 0x003C(0x0010) (Edit, IsPlainOldData)
	bool                                               bOverrideSecondary1;                                      // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	struct FLinearColor                                Secondary2;                                               // 0x0050(0x0010) (Edit, IsPlainOldData)
	bool                                               bOverrideSecondary2;                                      // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	struct FLinearColor                                Tertiary1;                                                // 0x0064(0x0010) (Edit, IsPlainOldData)
	bool                                               bOverrideTertiary1;                                       // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	struct FLinearColor                                Tertiary2;                                                // 0x0078(0x0010) (Edit, IsPlainOldData)
	bool                                               bOverrideTertiary2;                                       // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
};

// ScriptStruct OakGame.OakCharacterTexturePair
// 0x0010
struct FOakCharacterTexturePair
{
	class UTexture*                                    Comp;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    Normal;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakCharacterPattern
// 0x0038
struct FOakCharacterPattern
{
	float                                              Primary;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverridePrimary;                                         // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              Secondary;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideSecondary;                                       // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              Tertiary;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideTertiary;                                        // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              Skin;                                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideSkin;                                            // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRandomizeUse;                                            // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
	float                                              Chance;                                                   // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRandomizeTexture;                                        // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	TArray<struct FOakCharacterTexturePair>            Textures;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.OakCharacterSkinTone
// 0x0014 (0x0028 - 0x0014)
struct FOakCharacterSkinTone : public FOakCharacterCustomization
{
	struct FLinearColor                                SkinTone;                                                 // 0x0014(0x0010) (Edit, IsPlainOldData)
	bool                                               bOverrideSkinTone;                                        // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct OakGame.OakCharacterTattoos
// 0x0014 (0x0028 - 0x0014)
struct FOakCharacterTattoos : public FOakCharacterCustomization
{
	struct FLinearColor                                TattooColor;                                              // 0x0014(0x0010) (Edit, IsPlainOldData)
	bool                                               bOverrideTattooColor;                                     // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct OakGame.OakCharacterHair
// 0x003C (0x0050 - 0x0014)
struct FOakCharacterHair : public FOakCharacterCustomization
{
	struct FLinearColor                                InnerColor;                                               // 0x0014(0x0010) (Edit, IsPlainOldData)
	bool                                               bOverrideInnerColor;                                      // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FLinearColor                                OuterColor;                                               // 0x0028(0x0010) (Edit, IsPlainOldData)
	bool                                               bOverrideOuterColor;                                      // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FLinearColor                                SSSColor;                                                 // 0x003C(0x0010) (Edit, IsPlainOldData)
	bool                                               bOverrideSSSColor;                                        // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
};

// ScriptStruct OakGame.OakCharacterEyes
// 0x0018
struct FOakCharacterEyes
{
	TArray<struct FColor>                              RandomEyeColors;                                          // 0x0000(0x0010) (Edit, ZeroConstructor)
	bool                                               bOverrideEyeColor;                                        // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.OakCharacterDecal
// 0x005C (0x0070 - 0x0014)
struct FOakCharacterDecal : public FOakCharacterCustomization
{
	float                                              DecalStrength;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideDecalStrength;                                   // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FLinearColor                                DecalColor;                                               // 0x001C(0x0010) (Edit, IsPlainOldData)
	bool                                               bOverrideDecalColor;                                      // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	struct FLinearColor                                DecalColorHighlight;                                      // 0x0030(0x0010) (Edit, IsPlainOldData)
	bool                                               bOverrideDecalColorHighlight;                             // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	class UTexture*                                    Texture_Comp;                                             // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    Texture_Normal;                                           // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    Texture_BaseColor;                                        // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FOakCharacterTexturePair>            Textures;                                                 // 0x0060(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.OakCharacterCustomizationData
// 0x0248
struct FOakCharacterCustomizationData
{
	TArray<struct FOakCharacterColorization>           Customization_Colorizations;                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	bool                                               bApplyCustomization_Colorization;                         // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FOakCharacterPattern                        Customization_Pattern;                                    // 0x0018(0x0038) (Edit)
	bool                                               bApplyCustomization_Pattern;                              // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	struct FOakCharacterSkinTone                       Customization_SkinTone;                                   // 0x0054(0x0028) (Edit)
	bool                                               bApplyCustomization_SkinTone;                             // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	struct FOakCharacterTattoos                        Customization_Tattoos;                                    // 0x0080(0x0028) (Edit)
	bool                                               bApplyCustomization_Tattoos;                              // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	TArray<struct FOakCharacterHair>                   Customization_Hairs;                                      // 0x00B0(0x0010) (Edit, ZeroConstructor)
	bool                                               bApplyCustomization_Hair;                                 // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	struct FOakCharacterEyes                           Customization_Eyes;                                       // 0x00C8(0x0018) (Edit)
	bool                                               bApplyCustomization_Eyes;                                 // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET
	TArray<struct FOakCharacterDecal>                  Customization_Decals;                                     // 0x00E8(0x0010) (Edit, ZeroConstructor)
	bool                                               bApplyCustomization_Decal;                                // 0x00F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x00F9(0x0003) MISSED OFFSET
	struct FOakCharacterColorization                   Customization_Colorization;                               // 0x00FC(0x008C)
	struct FOakCharacterHair                           Customization_Hair;                                       // 0x0188(0x0050)
	struct FOakCharacterDecal                          Customization_Decal;                                      // 0x01D8(0x0070)
};

// ScriptStruct OakGame.OakCoordinatedEffectSwitchState
// 0x0020
struct FOakCoordinatedEffectSwitchState
{
	class FString                                      DisplayName;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FName                                       Name;                                                     // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      Effect;                                                   // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakCoordinatedEffectSwitch
// 0x0058
struct FOakCoordinatedEffectSwitch
{
	class UEnum*                                       Enum;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FName                                       NativeEnumName;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               bNativeEnum;                                              // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      InitialState;                                             // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	TArray<struct FOakCoordinatedEffectSwitchState>    States;                                                   // 0x0018(0x0010) (Edit, EditFixedSize, ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      CurrentState;                                             // 0x0028(0x0001) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class AActor*                                      Owner;                                                    // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UGbxActionComponent*                         ActionComp;                                               // 0x0038(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
	unsigned char                                      ReplicatedState;                                          // 0x0050(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.HUDInWorldIconTargetInfo
// 0x0058
struct FHUDInWorldIconTargetInfo
{
	class UInWorldIconData*                            IconData;                                                 // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             LocationComponent;                                        // 0x0010(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationOffset;                                           // 0x0020(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              Radius;                                                   // 0x002C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       Guid;                                                     // 0x0030(0x0010) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET
};

// ScriptStruct OakGame.FloorSectorRing
// 0x0068
struct FFloorSectorRing
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct OakGame.FloorSector
// 0x0068
struct FFloorSector
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct OakGame.PathSegmentSetting
// 0x0034
struct FPathSegmentSetting
{
	float                                              ReachDistance;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ReachHeight;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SnapGroundDistance;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGbxNavGoalModifiers                        GoalModifiers;                                            // 0x000C(0x0028) (Edit)
};

// ScriptStruct OakGame.AIAspectSettings_MovePath
// 0x0040
struct FAIAspectSettings_MovePath
{
	struct FName                                       NodeTag;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowPathSegment;                                        // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FPathSegmentSetting                         IntermediatePath;                                         // 0x000C(0x0034) (Edit)
};

// ScriptStruct OakGame.AIAspectSettings_Revive
// 0x0090
struct FAIAspectSettings_Revive
{
	struct FGbxBlackboardKeySelector                   Target;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FGbxParam                                   ReviveDistance;                                           // 0x0010(0x0080) (Edit)
};

// ScriptStruct OakGame.EscortPathValidation
// 0x0014
struct FEscortPathValidation
{
	float                                              RotateAngleToSearchPath;                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ValidatePathAnticipationTime;                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ValidatePathFowardDistance;                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ValidatePathIteration;                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanGoIfValidationFailed;                                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct OakGame.AIAspectSettings_VehicleEscortSpeed
// 0x01A0
struct FAIAspectSettings_VehicleEscortSpeed
{
	struct FGbxParam                                   NearDistance;                                             // 0x0000(0x0080) (Edit, BlueprintVisible)
	struct FGbxParam                                   FarDistance;                                              // 0x0080(0x0080) (Edit, BlueprintVisible)
	struct FGbxParam                                   CatchUpSpeed;                                             // 0x0100(0x0080) (Edit, BlueprintVisible)
	float                                              GoalUpdateDistance;                                       // 0x0180(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnticipationTime;                                         // 0x0184(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bValidatePath;                                            // 0x0188(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0189(0x0003) MISSED OFFSET
	struct FEscortPathValidation                       EscortPathValidation;                                     // 0x018C(0x0014) (Edit, BlueprintVisible)
};

// ScriptStruct OakGame.AIAspectSettings_DialogCondition
// 0x0088
struct FAIAspectSettings_DialogCondition
{
	struct FGbxParam                                   Condition;                                                // 0x0000(0x0080) (Edit)
	class UDialogEvent*                                DialogEvent;                                              // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.AIAspectSettings_Dialog
// 0x0140
struct FAIAspectSettings_Dialog
{
	TArray<struct FAIAspectSettings_DialogCondition>   ConditionalDialogEvents;                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	class UDialogEvent*                                DialogEvent;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FGbxNamedParam>                      DialogParams;                                             // 0x0018(0x0010) (Edit, EditFixedSize, ZeroConstructor, NoClear)
	TArray<class UDialogParameter*>                    DialogParamAssets;                                        // 0x0028(0x0010) (ZeroConstructor)
	struct FGbxParam                                   DialogStartDelay;                                         // 0x0038(0x0080) (Edit)
	struct FGbxParam                                   DialogCooldownTime;                                       // 0x00B8(0x0080) (Edit)
	bool                                               bUseDialogCooldownTime;                                   // 0x0138(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayOnStop;                                              // 0x0139(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x013A(0x0006) MISSED OFFSET
};

// ScriptStruct OakGame.AIAspectSettings_VehicleArchetype
// 0x0002
struct FAIAspectSettings_VehicleArchetype
{
	TEnumAsByte<EVehicleAchetypeNative>                VehicleArchetype;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInverted;                                                // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.AIAspectSettings_VehicleAttitude
// 0x0002
struct FAIAspectSettings_VehicleAttitude
{
	TEnumAsByte<ETeamAttitude>                         Attitude;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Inverted;                                                 // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.AIAspectSettings_VehicleDriverLeaves
// 0x0001
struct FAIAspectSettings_VehicleDriverLeaves
{
	bool                                               bInverted;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.AIAspectSettings_VehicleDriving
// 0x0080
struct FAIAspectSettings_VehicleDriving
{
	struct FGbxParam                                   DisableTurnHandBrake;                                     // 0x0000(0x0080) (Edit, BlueprintVisible)
};

// ScriptStruct OakGame.HornSequenceEntry
// 0x0008
struct FHornSequenceEntry
{
	float                                              StartTime;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.AIAspectSettings_VehicleHorn
// 0x0018
struct FAIAspectSettings_VehicleHorn
{
	TArray<struct FHornSequenceEntry>                  HornSequence;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bStopWithAction;                                          // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.AIAspectSettings_VehicleParts
// 0x0018
struct FAIAspectSettings_VehicleParts
{
	TArray<TSoftObjectPtr<class UVehiclePartData>>     Parts;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bInverted;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.RubberbandSpeed
// 0x0218
struct FRubberbandSpeed
{
	struct FGbxBlackboardKeySelector                   RubberbandTargetKey;                                      // 0x0000(0x0010) (Edit)
	struct FGbxParam                                   MinDistance;                                              // 0x0010(0x0080) (Edit, BlueprintVisible)
	struct FGbxParam                                   MaxDistance;                                              // 0x0090(0x0080) (Edit, BlueprintVisible)
	struct FGbxParam                                   MaxSpeed;                                                 // 0x0110(0x0080) (Edit, BlueprintVisible)
	struct FGbxParam                                   MinSpeed;                                                 // 0x0190(0x0080) (Edit, BlueprintVisible)
	bool                                               bBehindOnly;                                              // 0x0210(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0211(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.AIAspectSettings_VehicleSpeed
// 0x06B8
struct FAIAspectSettings_VehicleSpeed
{
	struct FGbxParam                                   WantedSpeed;                                              // 0x0000(0x0080) (Edit, BlueprintVisible)
	bool                                               bUseWantedSpeed;                                          // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	struct FGbxParam                                   WantedSteering;                                           // 0x0088(0x0080) (Edit, BlueprintVisible)
	bool                                               bUseWantedSteering;                                       // 0x0108(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0109(0x0007) MISSED OFFSET
	struct FGbxParam                                   MaxSpeed;                                                 // 0x0110(0x0080) (Edit, BlueprintVisible)
	struct FGbxParam                                   UseBoost;                                                 // 0x0190(0x0080) (Edit, BlueprintVisible)
	struct FGbxParam                                   ForceReverse;                                             // 0x0210(0x0080) (Edit, BlueprintVisible)
	struct FGbxParam                                   GoBackward;                                               // 0x0290(0x0080) (Edit, BlueprintVisible)
	struct FGbxParam                                   ForceHandbrake;                                           // 0x0310(0x0080) (Edit, BlueprintVisible)
	struct FGbxParam                                   SpeedHack;                                                // 0x0390(0x0080) (Edit, BlueprintVisible)
	struct FRubberbandSpeed                            RubberbandSpeed;                                          // 0x0410(0x0218) (Edit, BlueprintVisible)
	bool                                               bUseRubberbandSpeed;                                      // 0x0628(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0629(0x0007) MISSED OFFSET
	struct FGbxParam                                   Duration;                                                 // 0x0630(0x0080) (Edit, BlueprintVisible)
	bool                                               bUseDuration;                                             // 0x06B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x06B1(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.AIPlayThroughData
// 0x00B0
struct FAIPlayThroughData
{
	unsigned char                                      bOverrideUIDisplayName : 1;                               // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverrideDisplayName : 1;                                 // 0x0000(0x0001)
	unsigned char                                      bOverrideDropOnDeathItemPools : 1;                        // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverrideEquippedItems : 1;                               // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverrideHealthInformation : 1;                           // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UGbxUIName*                                  DisplayUIName;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0010(0x0028)
	struct FItemPoolCollection                         DropOnDeathItemPools;                                     // 0x0028(0x0020) (Edit)
	struct FItemPoolCollection                         EquippedItemPoolCollection;                               // 0x0048(0x0020) (Deprecated)
	TArray<struct FItemPoolCollection>                 EquippedItemPoolCollections;                              // 0x0068(0x0010) (Edit, ZeroConstructor)
	bool                                               bEquipSingleItemFromCollection;                           // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	TArray<struct FAttributeBaseValueData>             AttributeStartingValues;                                  // 0x0080(0x0010) (Edit, ZeroConstructor)
	struct FDataTableRowHandle                         BalanceTableRow;                                          // 0x0090(0x0010) (Edit)
	TArray<struct FHealthType>                         HealthInformation;                                        // 0x00A0(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.AILootDropOverride
// 0x0018
struct FAILootDropOverride
{
	unsigned char                                      bOverrideDropPattern : 1;                                 // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverrideSocketName : 1;                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      bDisabledByDefault : 1;                                   // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       SocketName;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class ULootSpawnPatternData*                       OverrideDropPattern;                                      // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.AnointedEnemyData
// 0x0010
struct FAnointedEnemyData
{
	class UClass*                                      PreFreezeAction;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FailsafeDestroyDelay;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSuppressItemPoolsForFailsafeShatter;                     // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct OakGame.DodgeVOInfo
// 0x0010
struct FDodgeVOInfo
{
	class UDialogEvent*                                DialogEvent;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCharacterSoundTag*                          VocalizationTag;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.AIOCameraStatePostProcessOverrides
// 0x0020
struct FAIOCameraStatePostProcessOverrides
{
	unsigned char                                      bOverrideFocalDistance : 1;                               // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverrideFarTransitionRegion : 1;                         // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverrideNearTransitionRegion : 1;                        // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverrideFocalRegion : 1;                                 // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverrideFarBlurSize : 1;                                 // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverrideNearBlurSize : 1;                                // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverrideVignetteIntensity : 1;                           // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              FocalDistanceOverride;                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FarTransitionRegionOverride;                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NearTransitionRegionOverride;                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FocalRegionOverride;                                      // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FarBlurSizeOverride;                                      // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NearBlurSizeOverride;                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VignetteIntensityOverride;                                // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.AIOCameraStateInfo
// 0x0098
struct FAIOCameraStateInfo
{
	struct FName                                       StateName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x0008(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     TargetLocationSplitscreen;                                // 0x0014(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     TargetLocationVerticalSplitscreen;                        // 0x0020(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     TargetLocationQuadSplitscreen;                            // 0x002C(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     TargetLookAtLocation;                                     // 0x0038(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     TargetLookAtLocationSplitscreen;                          // 0x0044(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     TargetLookAtLocationVerticalSplitscreen;                  // 0x0050(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     TargetLookAtLocationQuadSplitscreen;                      // 0x005C(0x000C) (Edit, IsPlainOldData)
	struct FGbxEasingFunc                              Easing;                                                   // 0x0068(0x000C) (Edit)
	float                                              TransitionDuration;                                       // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAIOCameraStatePostProcessOverrides         PostProcessOverrides;                                     // 0x0078(0x0020) (Edit, IsPlainOldData)
};

// ScriptStruct OakGame.AIOCameraEntryTransition
// 0x0030
struct FAIOCameraEntryTransition
{
	struct FName                                       TransitionName;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNumericRange                               AngleRange;                                               // 0x0008(0x0008) (Edit)
	struct FVector                                     StartLocation;                                            // 0x0010(0x000C) (Edit, IsPlainOldData)
	bool                                               bOverrideLocationDuration;                                // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              LocationDurationOverride;                                 // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideRotationDuration;                                // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	float                                              RotationDurationOverride;                                 // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.ReplicatedStolenProjectileData
// 0x0010
struct FReplicatedStolenProjectileData
{
	struct FName                                       Socket;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Projectile;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakPlayerCharacterSlotItem
// 0x0014 (0x0020 - 0x000C)
struct FOakPlayerCharacterSlotItem : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UPlayerCharacterComponentSlotData*           SlotData;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayerCharacterComponentAugmentData*        AugmentData;                                              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakPlayerCharacterSlotItemList
// 0x0018 (0x00C8 - 0x00B0)
struct FOakPlayerCharacterSlotItemList : public FFastArraySerializer
{
	class UPlayerCharacterComponent*                   Owner;                                                    // 0x00B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FOakPlayerCharacterSlotItem>         Items;                                                    // 0x00B8(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.BeastmasterPetStencilData
// 0x0014
struct FBeastmasterPetStencilData
{
	struct FLinearColor                                OutlineColor;                                             // 0x0000(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	int                                                OutlineThickness;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct OakGame.MeleeWeaponAttachmentData
// 0x0040
struct FMeleeWeaponAttachmentData
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       Socket;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeLocation;                                         // 0x0010(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    RelativeRotation;                                         // 0x001C(0x000C) (Edit, IsPlainOldData)
	TArray<class UGbxCustomizationTargetData*>         CustomizationTargets;                                     // 0x0028(0x0010) (Edit, ZeroConstructor)
	class UGbxStaticMeshComponent*                     Component;                                                // 0x0038(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct OakGame.BeastmasterStandInPetData
// 0x0058
struct FBeastmasterStandInPetData
{
	TSoftObjectPtr<class UOakPlayerCharacterAugmentData_Pet> PetAugmentData;                                           // 0x0000(0x0028) (Edit)
	class UClass*                                      PetBlueprint;                                             // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CustomPetSpawnCE;                                         // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EnrageScale;                                              // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Translation;                                              // 0x003C(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0048(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.BeastmasterStandInActionSkillData
// 0x00D8
struct FBeastmasterStandInActionSkillData
{
	TSoftObjectPtr<class UClass>                       ActionSkillClass;                                         // 0x0000(0x0028) (Edit)
	class UClass*                                      CustomActor;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CustomActorTranslationOffset;                             // 0x0030(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class UClass*                                      CustomCE;                                                 // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SkillAnimation;                                           // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PetAnimation;                                             // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PetAnimationDelay;                                        // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          PetScaleCurve;                                            // 0x0060(0x0078) (Edit)
};

// ScriptStruct OakGame.BehindTheScenesItem
// 0x0050
struct FBehindTheScenesItem
{
	class UBehindTheScenesMediaContainer*              Content;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       MediaLabelText;                                           // 0x0008(0x0028) (Edit)
	TSoftObjectPtr<class UTexture>                     ThumbnailTexture;                                         // 0x0020(0x0028) (Edit)
	EBehindTheScenesItemType                           ItemType;                                                 // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.BehindTheScenesCategory
// 0x0028
struct FBehindTheScenesCategory
{
	struct FText                                       CategoryName;                                             // 0x0000(0x0028) (Edit)
	TArray<struct FBehindTheScenesItem>                Items;                                                    // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.BlackJackCardDefinition
// 0x0020
struct FBlackJackCardDefinition
{
	class FString                                      DebugString;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                CardValue;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SuitIndex;                                                // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CardIndex;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.LadderBehaviorGoalParams
// 0x0068
struct FLadderBehaviorGoalParams
{
	unsigned char                                      bControlPitch : 1;                                        // 0x0000(0x0001) (Edit)
	unsigned char                                      bControlYaw : 1;                                          // 0x0000(0x0001) (Edit)
	unsigned char                                      bInterruptedByInput : 1;                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      bDisableInput : 1;                                        // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FInitialRotationAxisParams                  Pitch;                                                    // 0x0008(0x0030) (Edit)
	struct FInitialRotationAxisParams                  Yaw;                                                      // 0x0038(0x0030) (Edit)
};

// ScriptStruct OakGame.VehicleOverrideData
// 0x0030
struct FVehicleOverrideData
{
	TArray<class FString>                              PartSelections;                                           // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<class FString>                              Property;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UObject*                                     Data;                                                     // 0x0020(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      DataType;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OakGame.CameraKeyOffset
// 0x002C
struct FCameraKeyOffset
{
	bool                                               TeleportFromStart;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     LookAtLocationOffset;                                     // 0x0004(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     LocalCameraLocationOffset;                                // 0x0010(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    LocalCameraRotationOffset;                                // 0x001C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              AddedFOV;                                                 // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.CameraPitchOffset
// 0x0014
struct FCameraPitchOffset
{
	float                                              KeyYawAngle;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ForwardOffset;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              UpwardOffset;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DampingBankingRatio;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               CloneSymmetricalKey;                                      // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct OakGame.CameraIntroBlend
// 0x0098
struct FCameraIntroBlend
{
	float                                              TimeBeforeAllowingMovingCamera;                           // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StartBlend;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EndBlend;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseACurve;                                               // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FRuntimeFloatCurve                          BlendByCurve;                                             // 0x0010(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              DampingLocation;                                          // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DampingRotation;                                          // 0x008C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.CarnivoraFakeTurrets
// 0x0060
struct FCarnivoraFakeTurrets
{
	ECarnivoraFakeTurretShootingStyle                  ShootingStyle;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MinDelayBetweenBurstWave;                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDelayInsideBurstShot;                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NbBulletPerBurst;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      LightProjectileData;                                      // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ProjectileSpeed;                                          // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxPrediction;                                            // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Range;                                                    // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DistanceFromPoint;                                        // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngle;                                                 // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DirectHitPct;                                             // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpreadAngle;                                              // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DrawDebugProjectileLine;                                  // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	class AActor*                                      CurrentTargetActor;                                       // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.SplineTriggers
// 0x0058
struct FSplineTriggers
{
	TSoftObjectPtr<class AOakTriggerBox>               Trigger;                                                  // 0x0000(0x0028) (Edit)
	TSoftObjectPtr<class ACarnivoraTrackBuilder>       Spline;                                                   // 0x0028(0x0028) (Edit)
	bool                                               bIsReverse;                                               // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	int                                                NextSplineTriggerId;                                      // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.CarnivoraDamageZoneInfo
// 0x000C
struct FCarnivoraDamageZoneInfo
{
	float                                              FrontDamageMultiplier;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SideDamageMultiplier;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BackDamageMultiplier;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.WheelState
// 0x000C
struct FWheelState
{
	float                                              RelativeSpeed;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.OakCARMenuVehicleConfig
// 0x0188
struct FOakCARMenuVehicleConfig
{
	class FString                                      LoadoutSaveName;                                          // 0x0000(0x0010) (Edit, ZeroConstructor)
	TSoftObjectPtr<class UOakCARVehicleData>           Body;                                                     // 0x0010(0x0028) (Edit)
	TSoftObjectPtr<class UOakCARVehiclePartData>       Wheel;                                                    // 0x0038(0x0028) (Edit)
	TSoftObjectPtr<class UOakCARVehiclePartData>       Armor;                                                    // 0x0060(0x0028) (Edit)
	TSoftObjectPtr<class UOakCARVehiclePartData>       CoreMod;                                                  // 0x0088(0x0028) (Edit)
	TSoftObjectPtr<class UOakCARVehiclePartData>       GunnerWeapon;                                             // 0x00B0(0x0028) (Edit)
	TSoftObjectPtr<class UOakCARVehiclePartData>       DriverWeapon;                                             // 0x00D8(0x0028) (Edit)
	TSoftObjectPtr<class UOakCARVehiclePartData>       Ornament;                                                 // 0x0100(0x0028) (Edit)
	TSoftObjectPtr<class UOakCARVehiclePartData>       MaterialDecal;                                            // 0x0128(0x0028) (Edit)
	TSoftObjectPtr<class UOakCARVehiclePartData>       Material;                                                 // 0x0150(0x0028) (Edit)
	int                                                ColorIndex1;                                              // 0x0178(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ColorIndex2;                                              // 0x017C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ColorIndex3;                                              // 0x0180(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0184(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.CharacterGroundSlamGradeData
// 0x0028
struct FCharacterGroundSlamGradeData
{
	float                                              MinimumHeight;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      ControlledMove;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      StartAction;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LandingDistance;                                          // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UClass*                                      LandingAction;                                            // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.CharacterItemPoolExpansionInfo
// 0x0020
struct FCharacterItemPoolExpansionInfo
{
	TArray<struct FItemPoolInfo>                       DropOnDeathItemPools;                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<TSoftObjectPtr<class UItemPoolExpansionData>> ItemPoolExpansions;                                       // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.ElementalSlideEffect
// 0x0150
struct FElementalSlideEffect
{
	struct FImpactResponseEffect                       DefaultResponse;                                          // 0x0000(0x0140) (Edit)
	TArray<struct FImpactResponseInfo>                 ImpactResponses;                                          // 0x0140(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.CharacterJumpGoalSetting
// 0x000C
struct FCharacterJumpGoalSetting
{
	float                                              InitialZVelocity;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GoalHeight;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseInitialZVelocity : 1;                                 // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseGoalHeight : 1;                                       // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct OakGame.LastCollisionDamageInfo
// 0x0018
struct FLastCollisionDamageInfo
{
	class AActor*                                      HitActor;                                                 // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOwnerIsCollider;                                         // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FVector                                     RelativeVelocity;                                         // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct OakGame.CommandRingTarget
// 0x0028
struct FCommandRingTarget
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             BaseComponent;                                            // 0x0008(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x001C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct OakGame.TextElementCondition
// 0x0020
struct FTextElementCondition
{
	class UGbxCondition*                               Condition;                                                // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       TextToAdd;                                                // 0x0008(0x0028) (Edit)
};

// ScriptStruct OakGame.CorpseRecord
// 0x0010
struct FCorpseRecord
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              CorpseStartTime;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.CosmeticDamageEventDetails
// 0x0038
struct FCosmeticDamageEventDetails
{
	float                                              Damage;                                                   // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // 0x0004(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     HitDirection;                                             // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class AActor*                                      Instigator;                                               // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageSource;                                             // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.PlayerItemDisplayInfo
// 0x0018
struct FPlayerItemDisplayInfo
{
	class AOakPlayerController*                        AssociatedPlayer;                                         // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      AssociatedItem;                                           // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      AssociatedDisplayItem;                                    // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OakGame.CrewQuartersRoomAssignment
// 0x0010
struct FCrewQuartersRoomAssignment
{
	class UPlayerClassIdentifier*                      AssociatedPlayerClass;                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDynamicRoomBaseData*                        AssociatedRoom;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.CSBoosterInfo
// 0x0090
struct FCSBoosterInfo
{
	struct FName                                       NameId;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      AnimName;                                                 // 0x0008(0x0010) (ZeroConstructor, Deprecated)
	class FString                                      BoosterTextureName;                                       // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       DisplayName;                                              // 0x0028(0x0028) (Edit, DisableEditOnInstance)
	struct FText                                       Description;                                              // 0x0040(0x0028) (Edit, DisableEditOnInstance)
	struct FText                                       UnlockDescription;                                        // 0x0058(0x0028) (Edit, DisableEditOnInstance)
	int                                                Price;                                                    // 0x0070(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	class UStatusEffectData*                           StatusEffectData;                                         // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EffectDuration;                                           // 0x0080(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	class UTexture*                                    Icon;                                                     // 0x0088(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct OakGame.DebugMenuCommandItemData
// 0x0048
struct FDebugMenuCommandItemData
{
	struct FName                                       Category;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FText                                       Label;                                                    // 0x0008(0x0028)
	struct FText                                       Description;                                              // 0x0020(0x0028)
	class FString                                      ExecCommand;                                              // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.DebugMenuGradebox
// 0x0028
struct FDebugMenuGradebox
{
	class UCanvasPanel*                                Panel;                                                    // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UImage*                                      Image;                                                    // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  Description;                                              // 0x0010(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UTextBlock*>                          Atts;                                                     // 0x0018(0x0010) (ExportObject, ZeroConstructor, Transient)
};

// ScriptStruct OakGame.GbxReportTag
// 0x0030
struct FGbxReportTag
{
	bool                                               bShowInMenu;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class FString                                      Tag;                                                      // 0x0008(0x0010) (ZeroConstructor)
	struct FText                                       Description;                                              // 0x0018(0x0028)
};

// ScriptStruct OakGame.DefaultCrosshairData
// 0x0010
struct FDefaultCrosshairData
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              XSpread;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              YSpread;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.DiscoveredAreaInfo
// 0x0010
struct FDiscoveredAreaInfo
{
	struct FName                                       DiscoveredAreaName;                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlaythroughBits;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.DiscoveredLevelInfo
// 0x0020
struct FDiscoveredLevelInfo
{
	struct FName                                       DiscoveredLevelName;                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FDiscoveredAreaInfo>                 DiscoveredAreas;                                          // 0x0008(0x0010) (ZeroConstructor)
	uint32_t                                           PlaythroughBits;                                          // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.DiscoveredPlanetInfo
// 0x0030
struct FDiscoveredPlanetInfo
{
	TSoftObjectPtr<class UPlanetData>                  DiscoveredPlanet;                                         // 0x0000(0x0028)
	bool                                               bIsNewPlanet;                                             // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.DlcLevelTravelPair
// 0x0010
struct FDlcLevelTravelPair
{
	class UTravelStationData*                          NonDlcStationData;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTravelStationData*                          DlcStationData;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct OakGame.LevelTravelDataListPatch
// 0x0020
struct FLevelTravelDataListPatch
{
	class ULevelTravelStationData*                     LevelTravelData;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGbxCondition*                               LevelTravelDataCondition;                                 // 0x0008(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               MissionIconCondition;                                     // 0x0010(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                MovieToPlayDuringTravelMap;                               // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.LevelTravelDataListStationPatch
// 0x0020
struct FLevelTravelDataListStationPatch
{
	class FString                                      AssociatedTravelStationName;                              // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FLevelTravelDataListPatch>           PatchedTravelData;                                        // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.ChallengeFilterType
// 0x0028
struct FChallengeFilterType
{
	struct FText                                       FilterName;                                               // 0x0000(0x0028) (Edit)
	TArray<class UChallengeCategoryData*>              IncludedCategories;                                       // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.LevelledSaveGameData
// 0x00B0
struct FLevelledSaveGameData
{
	int                                                Level;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TSoftObjectPtr<class UTravelStationData>           InitialTravelStation;                                     // 0x0008(0x0028) (Edit)
	TSoftObjectPtr<class UClass>                       ActiveMissionClass;                                       // 0x0030(0x0028) (Edit)
	TSoftObjectPtr<class UMissionObjectiveSet>         ActiveMissionObjectiveSet;                                // 0x0058(0x0028) (Edit)
	uint32_t                                           CreditsAmount;                                            // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           EridiumAmount;                                            // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<TSoftObjectPtr<class UItemPoolData>>        DefaultInventory;                                         // 0x0088(0x0010) (Edit, ZeroConstructor)
	uint32_t                                           RandomRolls;                                              // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	TArray<TSoftObjectPtr<class UItemPoolData>>        RandomInventory;                                          // 0x00A0(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.PlayerDuelArenaState
// 0x0010
struct FPlayerDuelArenaState
{
	class AOakCharacter_Player*                        Player;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.DuelingNumParticipantsInfo
// 0x000C
struct FDuelingNumParticipantsInfo
{
	int                                                NumPlayers;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              MaxArenaSize;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DuelLength;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.DuelModeSettings
// 0x0030
struct FDuelModeSettings
{
	float                                              DuelArenaTimeout;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DuelChallengeTimeout;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDuelStartDelay;                                       // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              DuelStartDelay;                                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FDuelingNumParticipantsInfo>         NumParticipantsInfo;                                      // 0x0010(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	float                                              DuelTotemSpawnTraceVertOffset;                            // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DuelTotemSpawnInFrontDistance;                            // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DuelTotemSpawnFindGroundDistance;                         // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.DuelTeamGroup
// 0x0010
struct FDuelTeamGroup
{
	TArray<class UTeam*>                               PlayerIndexToTeam;                                        // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.PlayerDueling_SavedInfo
// 0x0008
struct FPlayerDueling_SavedInfo
{
	class UTeam*                                       Team;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.PlayerActiveDuelState
// 0x0020
struct FPlayerActiveDuelState
{
	class AOakCharacter_Player*                        PlayerCharacter;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsMainPlayer;                                            // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UTeam*                                       DuelTeam;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FPlayerDueling_SavedInfo                    SavedInfo;                                                // 0x0018(0x0008)
};

// ScriptStruct OakGame.TeamActiveDuelState
// 0x0018
struct FTeamActiveDuelState
{
	class UTeam*                                       DuelTeam;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FPlayerActiveDuelState>              Players;                                                  // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.DuelLoserState
// 0x0020
struct FDuelLoserState
{
	class AOakCharacter_Player*                        Player;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	EDuelLoseReason                                    LoseReason;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0009(0x0017) MISSED OFFSET
};

// ScriptStruct OakGame.ActiveDuelState
// 0x0050
struct FActiveDuelState
{
	TArray<struct FTeamActiveDuelState>                ParticipatingTeams;                                       // 0x0000(0x0010) (ZeroConstructor)
	class ADuelArena*                                  DuelArena;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADuelTotem*                                  DuelTotem;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class AOakCharacter_Player*                        DuelInstigator;                                           // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTeam*                                       WinningTeam;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FDuelLoserState>                     DuelLosers;                                               // 0x0030(0x0010) (ZeroConstructor)
	class APlayerTradeManager*                         TradeManager;                                             // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ActiveIndex;                                              // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	EDuelClassification                                Classification;                                           // 0x004C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
};

// ScriptStruct OakGame.WeaponConfigurationEvent
// 0x0010
struct FWeaponConfigurationEvent
{
	int                                                Priority;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UWwiseEvent*                                 WwiseEvent;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.WeaponConfigurationRtpc
// 0x0010
struct FWeaponConfigurationRtpc
{
	class UWwiseRtpc*                                  RtpcParam;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PriorityAveragingSum;                                     // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OakGame.EchoInfo
// 0x0060
struct FEchoInfo
{
	int                                                DialogPlayingID;                                          // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UGbxDialogComponent*                         Caller;                                                   // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UCharacterEchoData*                          CharacterData;                                            // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPerformanceEchoData*                        PerformanceData;                                          // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FWwisePlaybackInstance                      AudioInstance;                                            // 0x0020(0x0018) (Transient)
	class FString                                      MoodKeyframeToUse;                                        // 0x0038(0x0010) (ZeroConstructor, Transient)
	class FString                                      VoGMoodKeyToUse;                                          // 0x0048(0x0010) (ZeroConstructor, Transient)
	EVoiceOfGodSpeaker                                 VoGSpeakerID;                                             // 0x0058(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bForceEchoOnly;                                           // 0x0059(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
};

// ScriptStruct OakGame.SupportedElementalInteractionData
// 0x00F8
struct FSupportedElementalInteractionData
{
	class UElementalInteractionData*                   State;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TransitionTimeScale;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageTriggeredTransitionTimeScale;                       // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OverrideDamageTriggeredSourceDuration;                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOverrideDamageAmount : 1;                                // 0x0014(0x0001) (Edit)
	unsigned char                                      bOverrideBaseStatusEffectChance : 1;                      // 0x0014(0x0001) (Edit)
	unsigned char                                      bOverrideBaseStatusEffectDamage : 1;                      // 0x0014(0x0001) (Edit)
	unsigned char                                      bOverrideBaseStatusEffectDuration : 1;                    // 0x0014(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FAttributeInitializationData                OverrideDamageAmount;                                     // 0x0018(0x0038) (Edit)
	struct FAttributeInitializationData                OverrideBaseStatusEffectChance;                           // 0x0050(0x0038) (Edit)
	struct FAttributeInitializationData                OverrideBaseStatusEffectDamage;                           // 0x0088(0x0038) (Edit)
	struct FAttributeInitializationData                OverrideBaseStatusEffectDuration;                         // 0x00C0(0x0038) (Edit)
};

// ScriptStruct OakGame.ElementalInteractionDamageOverlapData
// 0x0008
struct FElementalInteractionDamageOverlapData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.ElementalDamageTriggeredInteractionData
// 0x0028
struct FElementalDamageTriggeredInteractionData
{
	class UElementalInteractionData*                   Interaction;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // 0x0008(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class AController*                                 InstigatorController;                                     // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.ElementalInteractionTransitionData
// 0x0018
struct FElementalInteractionTransitionData
{
	class UElementalInteractionData*                   SourceInteraction;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UElementalInteractionData*                   TargetInteraction;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TransitionTime;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageTriggeredTransitionTime;                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.ElementalInteractionManagerPostPhysicsTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FElementalInteractionManagerPostPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.ElementalInteractionDamageValuesData
// 0x0014
struct FElementalInteractionDamageValuesData
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct OakGame.ActorElementalInteractionDamageData
// 0x0088
struct FActorElementalInteractionDamageData
{
	TMap<class UElementalInteractionComponent*, struct FElementalInteractionDamageValuesData> DamageMap;                                                // 0x0000(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0050(0x0028) MISSED OFFSET
	class AController*                                 InstigatorController;                                     // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0080(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.ActorElementalDamageData
// 0x0058
struct FActorElementalDamageData
{
	TMap<class UClass*, struct FActorElementalInteractionDamageData> DamageInteractions;                                       // 0x0000(0x0050) (ZeroConstructor, Transient)
	int                                                DamageCount;                                              // 0x0050(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.ProjectedMeshOptions
// 0x0048
struct FProjectedMeshOptions
{
	EProjectedMeshShape                                Shape;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Size;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Scale2D;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                Complexity;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumRings;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFlipNormals;                                             // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateUVs;                                             // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         // 0x001A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
	float                                              StartTraceDistance;                                       // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EndTraceDistance;                                         // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PushAwayDistance;                                         // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreActor;                                             // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TArray<class AActor*>                              AdditionalIgnoredActors;                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.ElementalPuddleTransitionConfigurationData
// 0x0030
struct FElementalPuddleTransitionConfigurationData
{
	class UMaterialInterface*                          DecalMaterial;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          MeshMaterial;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 AudioLoop;                                                // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           PhysMatOverride;                                          // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               EmitterNames;                                             // 0x0020(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.OakPlayerAbilityAllyQuerySpec
// 0x0010
struct FOakPlayerAbilityAllyQuerySpec
{
	bool                                               bInfiniteRange;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Range;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIncludeCompanions;                                       // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.LevelBasedExpScale
// 0x000C
struct FLevelBasedExpScale
{
	int                                                LevelDifference;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              HigherLevelEnemyExpScale;                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LowerLevelEnemyExpScale;                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.ExpAwardWeight
// 0x000C
struct FExpAwardWeight
{
	int                                                Players;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              KillerExpBonus;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExpWeight;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.PlayerExperienceFormula
// 0x000C
struct FPlayerExperienceFormula
{
	float                                              Multiplier;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Power;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Offset;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.PlayerGuardianRankFormula
// 0x0014
struct FPlayerGuardianRankFormula
{
	float                                              BaseValue;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BaseMultiplier;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Multiplier;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Power;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Offset;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.PlayerVaultCardLevelFormula
// 0x0014
struct FPlayerVaultCardLevelFormula
{
	float                                              BaseValue;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BaseMultiplier;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Multiplier;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Power;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Offset;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.PaintedTarget
// 0x0060
struct FPaintedTarget
{
	TWeakObjectPtr<class AActor>                       PaintedTarget;                                            // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FHUDInWorldIconTargetInfo                   HUDIconInfo;                                              // 0x0008(0x0058)
};

// ScriptStruct OakGame.ExitDownStateInformation
// 0x0028
struct FExitDownStateInformation
{
	EExitDownStateReason                               ExitReason;                                               // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UHUDNotificationAsset*                       CustomExitNotification;                                   // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       CustomExitMessageText;                                    // 0x0010(0x0028) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct OakGame.DiscoveryIOData
// 0x0060
struct FDiscoveryIOData
{
	class UDownloadableExpansionData*                  DownloadableExpansionData;                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TSoftObjectPtr<class UClass>                       Class;                                                    // 0x0008(0x0028) (Edit)
	struct FTransform                                  Transform;                                                // 0x0030(0x0030) (Edit, IsPlainOldData)
};

// ScriptStruct OakGame.GalaxySkyboxData
// 0x0040
struct FGalaxySkyboxData
{
	TSoftObjectPtr<class UWorld>                       WorldAsset;                                               // 0x0000(0x0028) (Edit)
	unsigned char                                      MapNameEnumIdx;                                           // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ZoneNameEnumIdx;                                          // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	class UGbxLevelSequence*                           ArriveSequence;                                           // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGbxLevelSequence*                           ExitSequence;                                             // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.ZoneIdToMapIdMappingData
// 0x0002
struct FZoneIdToMapIdMappingData
{
	unsigned char                                      ZoneNameEnumIdx;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MapNameEnumIdx;                                           // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.PlanetMapDataToPlanetIdMappingData
// 0x0010
struct FPlanetMapDataToPlanetIdMappingData
{
	class UPlanetData*                                 PlanetData;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlanetID;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.MapIDToPlanetDataMappingData
// 0x0010
struct FMapIDToPlanetDataMappingData
{
	unsigned char                                      MapID;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UPlanetData*                                 PlanetData;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.ZoneIDToMissionEventReferenceData
// 0x0018
struct FZoneIDToMissionEventReferenceData
{
	unsigned char                                      ZoneNameEnumIdx;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FMissionEventReference                      MissionEventReference;                                    // 0x0008(0x0010) (Edit)
};

// ScriptStruct OakGame.AmpedShotSettings
// 0x0018
struct FAmpedShotSettings
{
	class UClass*                                      AmpedShotTracerFX;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AmpedShotBeamFX;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 AmpedShotSound;                                           // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.PickupEvaluationSettings
// 0x0038
struct FPickupEvaluationSettings
{
	float                                              MinEvaluationHeight;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EvaluationWidth;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BoxExtentZFactor;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SelectedWidthBoost;                                       // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SelectedHeightBoost;                                      // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SelectedBoxZFactorBoost;                                  // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SelectedBoxZFactorBoost_Attached;                         // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttachedPickupPreferredBoxMaxHeight;                      // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttachedPickupTracedMeshPriorityBoost;                    // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PickupStickiness;                                         // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinLookAtTolerance;                                       // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SkipVisibilityTraceTestRange;                             // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ItemCardBottomPickupOffset;                               // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ItemCardUpperLootBeamHeight;                              // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakVehicleManagerSettings
// 0x0020
struct FOakVehicleManagerSettings
{
	float                                              OakVehicleManagerUpdateTime;                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeBeforeStartDamaging;                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamagePercentBySecond;                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeBeforeDigistructOut;                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeBeforeExplode;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DistanceToDigistruct;                                     // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NavCorrecterSearchRadius;                                 // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NavCorrecterDestroyDelay;                                 // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.VaultCardActiveChallengeList
// 0x0018
struct FVaultCardActiveChallengeList
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<uint32_t>                                   VaultCardChallenges;                                      // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.GbxGFxDialogBoxChoiceInfo
// 0x0030
struct FGbxGFxDialogBoxChoiceInfo
{
	struct FText                                       LabelText;                                                // 0x0000(0x0028) (Edit)
	struct FName                                       ActionName;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       InputAction;                                              // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCloseDialogOnSelection;                                  // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPressToHoldChoice;                                       // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
};

// ScriptStruct OakGame.GbxGFxDialogBoxInfo
// 0x00F0
struct FGbxGFxDialogBoxInfo
{
	struct FText                                       HeaderText;                                               // 0x0000(0x0028) (Edit)
	struct FText                                       BodyText;                                                 // 0x0018(0x0028) (Edit)
	TArray<struct FGbxGFxDialogBoxChoiceInfo>          Choices;                                                  // 0x0030(0x0010) (Edit, ZeroConstructor)
	struct FScriptDelegate                             OnChoiceMade;                                             // 0x0040(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
	bool                                               bKeybindingAllowGamepadInputs;                            // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bKeybindingAllowMouseKeyboardInputs;                      // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EGbxGFxDialogBoxStyle                              DialogBoxStyle;                                           // 0x0062(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0063(0x0005) MISSED OFFSET
	struct FText                                       InputText;                                                // 0x0068(0x0028) (Edit)
	bool                                               bCanCloseWhenChoicesArrayIsEmpty;                         // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bInputTextField;                                          // 0x0081(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPasswordTextField;                                       // 0x0082(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAnyUserCanInteract;                                      // 0x0083(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanCancel;                                               // 0x0084(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSuppressSpawnSound;                                      // 0x0085(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0086(0x0002) MISSED OFFSET
	struct FName                                       InitialChoice;                                            // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                InitialChoiceIndex;                                       // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EGbxGFxDialogBoxButtonType                         ButtonType;                                               // 0x0094(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
	class AGbxPlayerController*                        TargetPC;                                                 // 0x0098(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAllowCloseWhenAnotherLocalPlayerLeaves;                  // 0x00A0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	class UGbxGFxDialogBoxData*                        OverrideDefaultTemplate;                                  // 0x00A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x40];                                      // 0x00B0(0x0040) MISSED OFFSET
};

// ScriptStruct OakGame.ReportReason
// 0x0020
struct FReportReason
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0028) (Edit)
	EShiftReportReason                                 Code;                                                     // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0018(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.DeathCircleStageData
// 0x00A8
struct FDeathCircleStageData
{
	struct FAttributeInitializationData                Radius;                                                   // 0x0000(0x0038) (Edit)
	struct FAttributeInitializationData                StableSeconds;                                            // 0x0038(0x0038) (Edit)
	struct FAttributeInitializationData                TransitionSeconds;                                        // 0x0070(0x0038) (Edit)
};

// ScriptStruct OakGame.BossbarEventData
// 0x0010
struct FBossbarEventData
{
	EBossbarEventType                                  Type;                                                     // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class AOakCharacter*                               Boss;                                                     // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OakGame.MayhemDebugOverrides
// 0x0010
struct FMayhemDebugOverrides
{
	TArray<int>                                        ModifierIndexOverrides;                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.MayhemReplicableSetsData
// 0x0004
struct FMayhemReplicableSetsData
{
	int                                                ActiveSetsBits;                                           // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OakGame.MayhemModeState
// 0x0028
struct FMayhemModeState
{
	bool                                               bIsActive;                                                // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                MayhemLevel;                                              // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                PendingMayhemLevel;                                       // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                PendingRandomSeed;                                        // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FMayhemDebugOverrides                       CachedOptionalOverrides;                                  // 0x0010(0x0010) (Transient)
	struct FMayhemReplicableSetsData                   ReplicableSets;                                           // 0x0020(0x0004) (Transient)
	int                                                RandomSeed;                                               // 0x0024(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OakGame.EffectivePlayerCountData
// 0x0008
struct FEffectivePlayerCountData
{
	int                                                EffectiveNumPlayers;                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	EEffectivePlayerCountSetting                       Setting;                                                  // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0004(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct OakGame.MapIDData
// 0x0002
struct FMapIDData
{
	unsigned char                                      ZoneNameID;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MapNameID;                                                // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.GlobalScreenParticleData
// 0x0028
struct FGlobalScreenParticleData
{
	class UParticleSystem*                             StartAndLoopParticle;                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             EndParticle;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ContentDims;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ParticleDepth;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FName                                       Tag;                                                      // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.GearUpAirdropData
// 0x0010
struct FGearUpAirdropData
{
	class AOakMissionSpawner*                          Spawner;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.OakUIInventoryItemDisplayInfo
// 0x0110
struct FOakUIInventoryItemDisplayInfo
{
	struct FText                                       ItemName;                                                 // 0x0000(0x0028) (BlueprintVisible, Transient)
	int                                                ItemLevel;                                                // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FText                                       ItemDescription;                                          // 0x0020(0x0028) (BlueprintVisible, Transient)
	struct FText                                       ManufacturerName;                                         // 0x0038(0x0028) (BlueprintVisible, Transient)
	int                                                ItemScore;                                                // 0x0050(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bNew;                                                     // 0x0054(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bFavorite;                                                // 0x0055(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bTrash;                                                   // 0x0056(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bCanEquip;                                                // 0x0057(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsEquipped;                                              // 0x0058(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bCellLocked;                                              // 0x0059(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bCellUnavailable;                                         // 0x005A(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x005B(0x0001) MISSED OFFSET
	TWeakObjectPtr<class UObject>                      ReferenceObject;                                          // 0x005C(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TSoftObjectPtr<class UTexture>                     ReferencePicture;                                         // 0x0068(0x0028) (Transient)
	int                                                PickupOrderIndex;                                         // 0x0090(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	struct FInventoryListEntry                         ListEntry;                                                // 0x0098(0x0040) (BlueprintVisible, Transient)
	struct FInventoryListEntryHandle                   ItemHandle;                                               // 0x00D8(0x0004) (BlueprintVisible, Transient)
	TWeakObjectPtr<class AActor>                       ItemActor;                                                // 0x00DC(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UInventoryRarityData>         RarityData;                                               // 0x00E4(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UManufacturerData>            ManufacturerData;                                         // 0x00EC(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UGbxDamageType>               DamageType;                                               // 0x00F4(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	struct FName                                       SpecialSortName;                                          // 0x0100(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	EOakUIInventoryItemUseType                         UseType;                                                  // 0x0108(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0108(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bUseCosmeticLabel;                                        // 0x010C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x010D(0x0003) MISSED OFFSET
};

// ScriptStruct OakGame.GFxBackpackWidgetConfig
// 0x0118
struct FGFxBackpackWidgetConfig
{
	class FString                                      GridWidgetPath;                                           // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FGbxGFxListConfig                           GridWidgetConfig;                                         // 0x0010(0x0090) (Edit)
	int                                                ItemBackpackSpaceMinIfInfinite;                           // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumBackpackIconsToKeep;                                   // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ItemBackpackSpaceMinLocked;                               // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinVisibleCells;                                          // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumCellsToPreCreate;                                      // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	class FString                                      BackpackItemScaleformClass;                               // 0x00B8(0x0010) (Edit, ZeroConstructor)
	class FString                                      EmptyBackpackItemScaleformClass;                          // 0x00C8(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      ListItemNativeClass;                                      // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       ButtonHelpText;                                           // 0x00E0(0x0028) (Edit)
	bool                                               bUseTrashButtonStates;                                    // 0x00F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00F9(0x0003) MISSED OFFSET
	TWeakObjectPtr<class AOakPlayerController>         OakPC;                                                    // 0x00FC(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UGbxGFxMovie>                 OwningMovie;                                              // 0x0104(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UGbxGFxObject>                GridWidgetParent;                                         // 0x010C(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.GFxBackpackWidget
// 0x0198
struct FGFxBackpackWidget
{
	struct FScriptMulticastDelegate                    ItemSelectedDelegate;                                     // 0x0000(0x0010) (ZeroConstructor, Transient, InstancedReference)
	struct FScriptMulticastDelegate                    ItemClickedDelegate;                                      // 0x0010(0x0010) (ZeroConstructor, Transient, InstancedReference)
	struct FScriptMulticastDelegate                    ItemPressedDelegate;                                      // 0x0020(0x0010) (ZeroConstructor, Transient, InstancedReference)
	TWeakObjectPtr<class UOakThumbnailManager>         ThumbnailManager;                                         // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bThumbnailMangerIsExternal;                               // 0x0038(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UUIGlobals>                   UIGlobals;                                                // 0x003C(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FGFxBackpackWidgetConfig                    Config;                                                   // 0x0048(0x0118) (Transient)
	TArray<struct FOakUIInventoryItemDisplayInfo>      Items;                                                    // 0x0160(0x0010) (ZeroConstructor, Transient)
	class UGbxGFxGridScrollingList*                    GridWidget;                                               // 0x0170(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGFxBackpackWidgetListener*                  Listener;                                                 // 0x0178(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsInited;                                                // 0x0180(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0181(0x0003) MISSED OFFSET
	int                                                FirstBackpackItemOfInterest;                              // 0x0184(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UGFxBackpackWidgetItem>       LastSelectedBackpackItem;                                 // 0x0188(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bNeedsThumbnailsRefreshed;                                // 0x0190(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDoNotManageThumbnailSweeping;                            // 0x0191(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bNeedsSweep;                                              // 0x0192(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x0193(0x0005) MISSED OFFSET
};

// ScriptStruct OakGame.OakInventoryMenuFilter
// 0x0020
struct FOakInventoryMenuFilter
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0028) (Edit)
	EOakInventoryMenuSortMode                          SortMode;                                                 // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.OakInventoryMenuTypePriorityInfo
// 0x0018
struct FOakInventoryMenuTypePriorityInfo
{
	class UInventoryCategoryData*                      ItemType;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWeaponTypeAsset*                            WeaponTypeData;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PriorityValue;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.GFxDisplayNotificationWidgetTextFields
// 0x0010
struct FGFxDisplayNotificationWidgetTextFields
{
	class FString                                      TextFieldPath;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.GFxSkillScreenBranchContainer
// 0x0040
struct FGFxSkillScreenBranchContainer
{
	class UGbxGFxObject*                               Root;                                                     // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               BranchObject;                                             // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGFxSkillScreenBranch*                       Branch;                                                   // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGFxSkillScreenBranch*                       OriginalBranch;                                           // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0020(0x0020) MISSED OFFSET
};

// ScriptStruct OakGame.GFxSkillScreenInfoCardContainer
// 0x0160
struct FGFxSkillScreenInfoCardContainer
{
	class UGbxGFxObject*                               Root;                                                     // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x110];                                     // 0x0008(0x0110) MISSED OFFSET
	class UGbxGFxButton*                               InfoCardButton;                                           // 0x0118(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               IconArt;                                                  // 0x0120(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               DescriptionText;                                          // 0x0128(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxSlider*                               ScrollBar;                                                // 0x0130(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               ScrollMask;                                               // 0x0138(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FText                                       AvailablePointsString;                                    // 0x0140(0x0028) (Edit)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0158(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.GFxSkillScreenSkillInfo
// 0x00C8
struct FGFxSkillScreenSkillInfo
{
	ESkillItemDisplayType                              ItemType;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       ItemName;                                                 // 0x0008(0x0028) (Edit)
	struct FText                                       ItemDescription;                                          // 0x0020(0x0028) (Edit)
	unsigned char                                      UnknownData01[0x90];                                      // 0x0038(0x0090) MISSED OFFSET
};

// ScriptStruct OakGame.GFxMenuTutorialState
// 0x00D0
struct FGFxMenuTutorialState
{
	EGFxMenuTutorialDialogSize                         DialogSize;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	EGFxMenuTutorialFocusDirection                     FocusDirection;                                           // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0004(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	EGFxMenuTutorialFocusDirection                     SplitScreenFocusDirection;                                // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0008(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	EGFxMenuTutorialFocusDirection                     VerticalSplitScreenFocusDirection;                        // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x000C(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	EGFxMenuTutorialFocusDirection                     QuadSplitScreenFocusDirection;                            // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0010(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FVector2D                                   DialogOffset;                                             // 0x0014(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   SplitScreenDialogOffset;                                  // 0x001C(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   VerticalSplitScreenDialogOffset;                          // 0x0024(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   QuadSplitScreenDialogOffset;                              // 0x002C(0x0008) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FText                                       HeaderText;                                               // 0x0038(0x0028) (Edit)
	struct FText                                       BodyText;                                                 // 0x0050(0x0028) (Edit)
	TArray<struct FName>                               VisibleTintClipsNames;                                    // 0x0068(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               SplitScreenVisibleTintClipsNames;                         // 0x0078(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               VerticalSplitScreenVisibleTintClipsNames;                 // 0x0088(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               QuadSplitScreenVisibleTintClipsNames;                     // 0x0098(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               AllowedInputAxes;                                         // 0x00A8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               AllowedInputActions;                                      // 0x00B8(0x0010) (Edit, ZeroConstructor)
	bool                                               bAdvanceOnKeyPress;                                       // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowTutorialSkip;                                       // 0x00C9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x00CA(0x0006) MISSED OFFSET
};

// ScriptStruct OakGame.GFxMenuTutorialSequence
// 0x0010
struct FGFxMenuTutorialSequence
{
	TArray<struct FGFxMenuTutorialState>               SequenceList;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.GFxMenuTutorial
// 0x0018
struct FGFxMenuTutorial
{
	struct FName                                       TutorialName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGFxMenuTutorialSequence                    TutorialSequence;                                         // 0x0008(0x0010) (Edit)
};

// ScriptStruct OakGame.GFxMenuTutorialTintClipData
// 0x0020
struct FGFxMenuTutorialTintClipData
{
	struct FName                                       TintClipName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      TintClipPath;                                             // 0x0008(0x0010) (Edit, ZeroConstructor)
	class UGbxGFxObject*                               TintClip;                                                 // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OakGame.GFxMenuTutorialCollection
// 0x0020
struct FGFxMenuTutorialCollection
{
	TArray<struct FGFxMenuTutorial>                    Tutorials;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FGFxMenuTutorialTintClipData>        TintClips;                                                // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.HealthTypeDepletedDetails
// 0x0018
struct FHealthTypeDepletedDetails
{
	class UHealthTypeData*                             HealthType;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.GFxBuddyWidgetAnimQueueItem
// 0x0010
struct FGFxBuddyWidgetAnimQueueItem
{
	class AActor*                                      TargetActor;                                              // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.OakCARMenuPartType
// 0x0002
struct FOakCARMenuPartType
{
	bool                                               bIsBody;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ECARPartType                                       PartType;                                                 // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.GFxCARMenuPartInfo
// 0x00E8
struct FGFxCARMenuPartInfo
{
	struct FText                                       PartName;                                                 // 0x0000(0x0028) (Edit)
	struct FOakCARMenuPartType                         PartType;                                                 // 0x0018(0x0002) (Edit)
	unsigned char                                      UnknownData00[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
	class FString                                      StageName;                                                // 0x0020(0x0010) (Edit, ZeroConstructor)
	class FString                                      ListName;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor)
	class FString                                      CustomizePanelFrameName;                                  // 0x0040(0x0010) (Edit, ZeroConstructor)
	struct FGbxFocusableWidgetAdjacencyNames           AdjacentWidgets;                                          // 0x0050(0x0040) (Edit)
	struct FGbxFocusableWidgetAdjacencyNames           AdjacentWidgetsSplitscreen;                               // 0x0090(0x0040) (Edit)
	bool                                               bCanSelectEmpty;                                          // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
	class UGFxCARMenuPartButton*                       BUTTON;                                                   // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGFxCARMenuCustomizePage*                    Page;                                                     // 0x00E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OakGame.GFxCARMenuListData
// 0x0198
struct FGFxCARMenuListData
{
	class FString                                      ListClipName;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FGbxGFxPooledGridListFullConfig             ListConfig;                                               // 0x0010(0x00C0) (Edit)
	struct FGbxGFxPooledGridListFullConfig             ListConfigSplitScreen;                                    // 0x00D0(0x00C0) (Edit)
	class UGbxGFxPooledGridList*                       List;                                                     // 0x0190(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OakGame.EchoDeviceUIController
// 0x0020
struct FEchoDeviceUIController
{
	class UEchoDeviceUIData*                           Config;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEquipEchoDevice;                                         // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	TWeakObjectPtr<class AOakCharacter_Player>         PrimaryCharacter;                                         // 0x000C(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
};

// ScriptStruct OakGame.StandInLightComponentInstance
// 0x0028
struct FStandInLightComponentInstance
{
	class ULightComponent*                             Component;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct OakGame.DesiredStandInActorData
// 0x0050
struct FDesiredStandInActorData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UClass*                                      CustomStandInClass;                                       // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0010(0x0030) MISSED OFFSET
	class UGbxDataAsset*                               DataAsset;                                                // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.StandInUIController
// 0x0390
struct FStandInUIController
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TSoftObjectPtr<class UClass>                       ContainerClass;                                           // 0x0008(0x0028) (Edit)
	float                                              VerticalSplitInVehicleAdjustment;                         // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UObject*                                     OuterObject;                                              // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AOakPlayerController*                        PlayerController;                                         // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AOakUIActorContainer*                        StandInContainer;                                         // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FStandInLightComponentInstance>      LightComponents;                                          // 0x0050(0x0010) (ZeroConstructor, Transient)
	class USceneComponent*                             StandInTransformRoot;                                     // 0x0060(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AActor*                                      CurrentStandInActor;                                      // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class AActor*>                              SecondaryActors;                                          // 0x0070(0x0010) (ZeroConstructor, Transient)
	class AActor*                                      TempInventoryActor;                                       // 0x0080(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UInventoryBalanceStateComponent*             StandInTemplateInventoryBalanceState;                     // 0x0088(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0090(0x0018) MISSED OFFSET
	struct FDesiredStandInActorData                    LastDesiredActorData;                                     // 0x00A8(0x0050) (Transient)
	unsigned char                                      UnknownData03[0x138];                                     // 0x00F8(0x0138) MISSED OFFSET
	struct FDesiredStandInActorData                    DesiredActorData;                                         // 0x0230(0x0050) (Transient)
	TArray<class UObject*>                             StreamedObjects;                                          // 0x0280(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0290(0x0010) MISSED OFFSET
	uint32_t                                           WantedStreamRequest;                                      // 0x02A0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0xEC];                                      // 0x02A4(0x00EC) MISSED OFFSET
};

// ScriptStruct OakGame.OakCARMenuLoadoutCustomizer
// 0x0310
struct FOakCARMenuLoadoutCustomizer
{
	struct FOakCARMenuVehicleConfig                    CurrentConfig;                                            // 0x0000(0x0188) (Transient)
	struct FOakCARMenuVehicleConfig                    PreviewConfig;                                            // 0x0188(0x0188) (Transient)
};

// ScriptStruct OakGame.GFxCARMenuLoadAssetInfo
// 0x0028
struct FGFxCARMenuLoadAssetInfo
{
	struct FSoftObjectPath                             StringAssetRef;                                           // 0x0000(0x0018) (Transient)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.GFxCARPreviewData
// 0x0060
struct FGFxCARPreviewData
{
	class UOakCARVehicleData*                          Vehicle;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UOakCARVehiclePartData*>              Parts;                                                    // 0x0008(0x0010) (ZeroConstructor)
	class UOakCARVehicleData*                          SelectedVehicle;                                          // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class UOakCARVehiclePartData*                      SelectedPart;                                             // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	TSoftObjectPtr<class UClass>                       CEToPlay;                                                 // 0x0028(0x0028)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.GFxChallengeProgressItem
// 0x00B8
struct FGFxChallengeProgressItem
{
	struct FText                                       FirstChallengeName;                                       // 0x0000(0x0028) (Transient)
	struct FText                                       SecondChallengeName;                                      // 0x0018(0x0028) (Transient)
	bool                                               bHasNameTransitioned;                                     // 0x0030(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FText                                       FirstDescription;                                         // 0x0038(0x0028) (Transient)
	struct FText                                       SecondDescription;                                        // 0x0050(0x0028) (Transient)
	bool                                               bHasDescriptionTransitioned;                              // 0x0068(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	class FString                                      FirstTypeIconFrame;                                       // 0x0070(0x0010) (ZeroConstructor, Transient)
	class FString                                      SecondTypeIconFrame;                                      // 0x0080(0x0010) (ZeroConstructor, Transient)
	bool                                               bHasIconTransitioned;                                     // 0x0090(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bViewAsPercent;                                           // 0x0091(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bViewOneOffCompletionNotProgress;                         // 0x0092(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0093(0x0001) MISSED OFFSET
	float                                              ProgressPctToStartAnimFrom;                               // 0x0094(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ProgressOutOfValue;                                       // 0x0098(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ProgressOutOfMax;                                         // 0x009C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bChallengeWasCompleted;                                   // 0x00A0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHasPercentCompleteTransitioned;                          // 0x00A1(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x00A2(0x0006) MISSED OFFSET
	class UClass*                                      ChallengeClass;                                           // 0x00A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAddedAsProgressOfChildChallenge;                         // 0x00B0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	int                                                ParentRanking;                                            // 0x00B4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OakGame.PlayerClassInfo
// 0x0030
struct FPlayerClassInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FName                                       PlayerStandInActorName;                                   // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ActorSocketName;                                          // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   TextOffset;                                               // 0x0018(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   DefaultPosition;                                          // 0x0020(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	class UPlayerClassIdentifier*                      PlayerClassId;                                            // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct OakGame.OakUIControllerConnectedState
// 0x0010
struct FOakUIControllerConnectedState
{
	TWeakObjectPtr<class ULocalPlayer>                 LocalPlayer;                                              // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGFxControllerDisconnectMovie*               DisconnectMovie;                                          // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OakGame.OrganizationInfo
// 0x0028
struct FOrganizationInfo
{
	struct FName                                       OrganizationId;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       TextStyle;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       TextEntry;                                                // 0x0010(0x0028) (Edit)
};

// ScriptStruct OakGame.CreditsImageData
// 0x0020
struct FCreditsImageData
{
	struct FSoftObjectPath                             CreditsImage;                                             // 0x0000(0x0018) (Edit, DisableEditOnInstance)
	float                                              ImageShowTime;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImageMaxTime;                                             // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct OakGame.CreditsSection
// 0x0050
struct FCreditsSection
{
	TArray<class UCreditsDataAsset*>                   CreditsDataAssets;                                        // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCreditsImageData>                   CreditsImageDataList;                                     // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              TransitionTimeBetweenImages;                              // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HorizontalSpacing;                                        // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UserAnimationSpeed;                                       // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultAnimationSpeed;                                    // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PauseTime;                                                // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowScrollingCredits;                                   // 0x0034(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              ScrollingDelay;                                           // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayAfterLastCredit;                                     // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 BackgroundMusicStartEvent;                                // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 BackgroundMusicEndEvent;                                  // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct OakGame.CreditsTextureCache
// 0x0010
struct FCreditsTextureCache
{
	class UTexture2D*                                  CreditsTexture;                                           // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.CreditsLineInfo
// 0x0020
struct FCreditsLineInfo
{
	struct FName                                       StyleId;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FText                                       TextEntry;                                                // 0x0008(0x0028)
};

// ScriptStruct OakGame.CreditsTextFieldInfo
// 0x0010
struct FCreditsTextFieldInfo
{
	struct FName                                       StyleId;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGbxTextField*                               TextField;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.GFxCrewQuartersMoodMenuMoodInfo
// 0x000C
struct FGFxCrewQuartersMoodMenuMoodInfo
{
	TWeakObjectPtr<class UDynamicRoomBaseData>         RoomBaseData;                                             // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsLocked;                                                // 0x0008(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsNew;                                                   // 0x0009(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct OakGame.OakThumbnailManagerIcon
// 0x0028
struct FOakThumbnailManagerIcon
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct OakGame.GFxCurrencyCounterCategoryData
// 0x0010
struct FGFxCurrencyCounterCategoryData
{
	class UInventoryCategoryData*                      ItemCategory;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LastValue;                                                // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.GFxCurrencyCounterQueueInfo
// 0x0028
struct FGFxCurrencyCounterQueueInfo
{
	class UInventoryCategoryData*                      ItemCategory;                                             // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                DeltaValue;                                               // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                StartTotal;                                               // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                FinalTotal;                                               // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FName                                       StartAudioEvent;                                          // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       StopAudioEvent;                                           // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OakGame.GFxDeulingNotificationRewardWin
// 0x00E0
struct FGFxDeulingNotificationRewardWin
{
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0000(0x00E0) MISSED OFFSET
};

// ScriptStruct OakGame.GFxDuelTimerTotemData
// 0x0018
struct FGFxDuelTimerTotemData
{
	class UGFxDuelTimerTotemObject*                    TimerClip;                                                // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UOakDuelingWidgetTotemComponent> AttachedDuelTotemComponent;                               // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               bInUse;                                                   // 0x0010(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.LocalizationStatus
// 0x00A8
struct FLocalizationStatus
{
	struct FText                                       PanelTitle;                                               // 0x0000(0x0028) (Edit)
	struct FText                                       ShiftAccountLabel;                                        // 0x0018(0x0028) (Edit)
	struct FText                                       StreamingServiceLabel;                                    // 0x0030(0x0028) (Edit)
	struct FText                                       AccountNameLabel;                                         // 0x0048(0x0028) (Edit)
	struct FText                                       ExtensionVersionLabel;                                    // 0x0060(0x0028) (Edit)
	struct FText                                       ChannelTitleLabel;                                        // 0x0078(0x0028) (Edit)
	struct FText                                       CurrentViewerLabel;                                       // 0x0090(0x0028) (Edit)
};

// ScriptStruct OakGame.GFxEchoNetMailboxMenu_Adjustment
// 0x0010
struct FGFxEchoNetMailboxMenu_Adjustment
{
	struct FVector2D                                   ContextMenuOffsetExpandingDown;                           // 0x0000(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   ContextMenuOffsetExpandingUp;                             // 0x0008(0x0008) (Edit, IsPlainOldData)
};

// ScriptStruct OakGame.GFxEchoNetMathcmakingActivitySubTypeData
// 0x0058
struct FGFxEchoNetMathcmakingActivitySubTypeData
{
	class FString                                      Guid;                                                     // 0x0000(0x0010) (ZeroConstructor, Transient)
	bool                                               bLocked;                                                  // 0x0010(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bFeatured;                                                // 0x0011(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsHeroic;                                                // 0x0012(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0013(0x0005) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x0018(0x0028) (Transient)
	struct FText                                       Description;                                              // 0x0030(0x0028) (Transient)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0048(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.GFxEchoNetMatchmakingActivityData
// 0x00C8
struct FGFxEchoNetMatchmakingActivityData
{
	struct FGFxEchoNetMathcmakingActivitySubTypeData   NormalData;                                               // 0x0000(0x0058) (Transient)
	struct FGFxEchoNetMathcmakingActivitySubTypeData   HeroicData;                                               // 0x0058(0x0058) (Transient)
	class FString                                      ImageId;                                                  // 0x00B0(0x0010) (ZeroConstructor, Transient)
	bool                                               bLookingAtHeroic;                                         // 0x00C0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.GFxEchoNetRosterMenu_Adjustment
// 0x0010
struct FGFxEchoNetRosterMenu_Adjustment
{
	struct FVector2D                                   ContextMenuOffsetExpandingDown;                           // 0x0000(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   ContextMenuOffsetExpandingUp;                             // 0x0008(0x0008) (Edit, IsPlainOldData)
};

// ScriptStruct OakGame.OakOnlineLobbyPlayerInfo
// 0x0080
struct FOakOnlineLobbyPlayerInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	EOakOnlineLobbyPlayerPlateState                    PlateState;                                               // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLobbyLead;                                             // 0x0011(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	struct FText                                       DisplayName;                                              // 0x0018(0x0028) (BlueprintVisible)
	struct FText                                       MissionDisplayName;                                       // 0x0030(0x0028) (BlueprintVisible)
	struct FText                                       MapDisplayName;                                           // 0x0048(0x0028) (BlueprintVisible)
	struct FText                                       PlayerClassDisplayName;                                   // 0x0060(0x0028) (BlueprintVisible)
	int                                                CharacterLevel;                                           // 0x0078(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EOakOnlineLobbyConnectivityState                   ConnectivityState;                                        // 0x007C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EOakOnlineLobbyTalkingState                        TalkingState;                                             // 0x007D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x007E(0x0002) MISSED OFFSET
};

// ScriptStruct OakGame.GFxFriendsInAreaListMenu_Adjustment
// 0x0010
struct FGFxFriendsInAreaListMenu_Adjustment
{
	struct FVector2D                                   ContextMenuOffsetExpandingDown;                           // 0x0000(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   ContextMenuOffsetExpandingUp;                             // 0x0008(0x0008) (Edit, IsPlainOldData)
};

// ScriptStruct OakGame.GFxGameModeNotificationWidgetInfo
// 0x0060
struct FGFxGameModeNotificationWidgetInfo
{
	EGameModeNotificationType                          NotificationType;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class FString                                      TimelinePosition;                                         // 0x0008(0x0010) (Edit, ZeroConstructor)
	class FString                                      ContentPath;                                              // 0x0018(0x0010) (Edit, ZeroConstructor)
	class FString                                      TextFieldPath;                                            // 0x0028(0x0010) (Edit, ZeroConstructor)
	class FString                                      TextFieldShadowPath;                                      // 0x0038(0x0010) (Edit, ZeroConstructor)
	struct FText                                       DisplayedText;                                            // 0x0048(0x0028) (Edit)
};

// ScriptStruct OakGame.GFxGrenadeIndicatorSortItem
// 0x0010
struct FGFxGrenadeIndicatorSortItem
{
	class AOakProjectile*                              Grenade;                                                  // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DistSq;                                                   // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.GuardianRankPerkEntry
// 0x0018
struct FGuardianRankPerkEntry
{
	class UGuardianRankPerkData*                       RankPerk;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGbxAbility*                                 PerkAbilityInstance;                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bUnlocked;                                                // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bWasJustUnlocked;                                         // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

// ScriptStruct OakGame.OakInventoryMenuItemGrouping
// 0x0018
struct FOakInventoryMenuItemGrouping
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWeaponTypeAsset*                            WeaponTypeData;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UManufacturerData*                           ManufacturerData;                                         // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakInventoryMenuPaperDollSlotInfo
// 0x00A0
struct FOakInventoryMenuPaperDollSlotInfo
{
	class FString                                      WidgetName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      TrinketName;                                              // 0x0010(0x0010) (Edit, ZeroConstructor)
	class UInventorySlotData*                          SlotData;                                                 // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotFilterId;                                             // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      SlotIconWidgetName;                                       // 0x0030(0x0010) (Edit, ZeroConstructor)
	class FString                                      SlotIconFrame;                                            // 0x0040(0x0010) (Edit, ZeroConstructor)
	TSoftObjectPtr<class UGbxInputKeyRebindData_Button> ButtonBinding;                                            // 0x0050(0x0028) (Edit)
	class FString                                      NoKeyBoundFrameName;                                      // 0x0078(0x0010) (Edit, ZeroConstructor)
	struct FName                                       SlotIconInputAction;                                      // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EOakInventoryMenuPaperDollSlotAdjacency            Adjancency;                                               // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0090(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bUnlockedIsBeastmaster;                                   // 0x0094(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUnlockedIsExtraArtifacts;                                // 0x0095(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0096(0x0002) MISSED OFFSET
	int                                                SplitScreenPage;                                          // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.GFxInventoryMenuConfig
// 0x0298
struct FGFxInventoryMenuConfig
{
	class UInventoryCategoryData*                      WeaponCategory;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UInventoryCategoryData*                      GrenadeCategory;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UInventoryCategoryData*                      ShieldCategory;                                           // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UInventoryCategoryData*                      GoldenKeyResourceData;                                    // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UInventoryCategoryData*                      ErediumResourceData;                                      // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UInventoryCategoryData*                      MoneyResourceData;                                        // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UInventoryCategoryData*                      VaultCoinResourceData;                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReturnToBackpackWhenEquippingFromIt;                     // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bClearAllNewnessWhenLeavingMenu;                          // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableInspect;                                           // 0x003A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x003B(0x0001) MISSED OFFSET
	struct FLinearColor                                SelectionHighlightColorForItemCard;                       // 0x003C(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                SelectionComparisonColorForItemCard;                      // 0x004C(0x0010) (Edit, IsPlainOldData)
	float                                              ItemCardLineThickness;                                    // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FOakInventoryMenuFilter>             PageFilters;                                              // 0x0060(0x0010) (Edit, ZeroConstructor)
	TArray<struct FOakInventoryMenuTypePriorityInfo>   ItemTypeSortPriorities;                                   // 0x0070(0x0010) (Edit, ZeroConstructor)
	TArray<struct FOakInventoryMenuItemGrouping>       ItemGroupingsByType;                                      // 0x0080(0x0010) (Edit, ZeroConstructor)
	TArray<struct FOakInventoryMenuItemGrouping>       ItemGroupingsByManufacturer;                              // 0x0090(0x0010) (Edit, ZeroConstructor)
	struct FName                                       InputAction_Drop;                                         // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       InputAction_DropByHolding;                                // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       InputAction_TrashFavorite;                                // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       InputAction_Inspect;                                      // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       InputAction_Unequip;                                      // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FOakInventoryMenuPaperDollSlotInfo>  PaperDollSlotSetup;                                       // 0x00C8(0x0010) (Edit, ZeroConstructor)
	TArray<class UGbxAmmoTypeData*>                    AmmoTypes;                                                // 0x00D8(0x0010) (Edit, ZeroConstructor)
	class UGbxAmmoTypeData*                            GrenadeAmmoType;                                          // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGbxMenuData*                                ItemInspectionMenuData;                                   // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USwfMovie*                                   ItemCardMovie;                                            // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ItemCardOffset;                                           // 0x0100(0x0008) (Edit, IsPlainOldData)
	float                                              ItemCardScale;                                            // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   CompareItemCardOffset;                                    // 0x010C(0x0008) (Edit, IsPlainOldData)
	float                                              CompareItemCardScale;                                     // 0x0114(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGFxBackpackWidgetConfig                    BackpackConfig;                                           // 0x0118(0x0118) (Edit)
	int                                                TrinketIconsReserveCount;                                 // 0x0230(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TotalCurrencySpinnerHeightOverride;                       // 0x0234(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CurrencyWidgetPauseOnNewValueTime;                        // 0x0238(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CurrencyWidgetCostSpinTime;                               // 0x023C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       TrinketsText;                                             // 0x0240(0x0028) (Edit)
	struct FGFxMenuTutorialCollection                  Tutorials;                                                // 0x0258(0x0020) (Edit)
	struct FName                                       FirstBootTutorial;                                        // 0x0278(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       GearUpModeTutorial;                                       // 0x0280(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LargeBackpackVisibleCells;                                // 0x0288(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SmallBackpackVisibleCells;                                // 0x028C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bResortBackpackWhenAddingAndRemovingItems;                // 0x0290(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0291(0x0003) MISSED OFFSET
	float                                              DelayBeforeDragStart;                                     // 0x0294(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.GFxInventoryMenuUnlockLookupItem
// 0x0040
struct FGFxInventoryMenuUnlockLookupItem
{
	TSoftObjectPtr<class UInventoryCategoryData>       InventoryCategory;                                        // 0x0000(0x0028) (Edit)
	struct FText                                       DisplayText;                                              // 0x0028(0x0028) (Edit)
};

// ScriptStruct OakGame.GFxInventoryMenuSwapItem
// 0x0014
struct FGFxInventoryMenuSwapItem
{
	EGFxInventoryMenuFocusSide                         Side;                                                     // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UGFxInventoryItemWidget>      ItemWidget;                                               // 0x0004(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UObject>                      ItemObject;                                               // 0x000C(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OakGame.GFxInventoryMenuEquipToSlot
// 0x00D8
struct FGFxInventoryMenuEquipToSlot
{
	class UGFxInventoryItemWidget*                     ItemWidget;                                               // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGFxInventoryMenuTrinketButton*              TrinketWidget;                                            // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               IconWidget;                                               // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0018(0x0018) MISSED OFFSET
	bool                                               bTrinketEnabled;                                          // 0x0030(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FOakInventoryMenuPaperDollSlotInfo          SlotInfo;                                                 // 0x0038(0x00A0) (Transient)
};

// ScriptStruct OakGame.UIHardpointData
// 0x0070
struct FUIHardpointData
{
	EIronBearUIHardpointType                           Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class FString                                      ProgressBarName;                                          // 0x0008(0x0010) (Edit, ZeroConstructor)
	class FString                                      ProgressBarFrameName;                                     // 0x0018(0x0010) (Edit, ZeroConstructor)
	class FString                                      IconFrameName;                                            // 0x0028(0x0010) (Edit, ZeroConstructor)
	class FString                                      ElementalIconName;                                        // 0x0038(0x0010) (Edit, ZeroConstructor)
	class FString                                      FallbackElementalIconFrameName;                           // 0x0048(0x0010) (Edit, ZeroConstructor)
	struct FText                                       BarText;                                                  // 0x0058(0x0028) (Edit, DisableEditOnInstance)
};

// ScriptStruct OakGame.ItemCardElementalDetails
// 0x0040
struct FItemCardElementalDetails
{
	struct FText                                       EffectText;                                               // 0x0000(0x0028) (Transient)
	struct FText                                       ProcChanceText;                                           // 0x0018(0x0028) (Transient)
	class FString                                      IconFrame;                                                // 0x0030(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct OakGame.GFxItemCardAbbreviatedObject
// 0x01D8
struct FGFxItemCardAbbreviatedObject
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    ElementalUpdatedDelegate;                                 // 0x0008(0x0010) (ZeroConstructor, Transient, InstancedReference)
	TWeakObjectPtr<class AOakPlayerController>         OwningPC;                                                 // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               ItemCardRootClip;                                         // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UInventoryShopComponent*                     CachedInventoryShop;                                      // 0x0028(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0xD8];                                      // 0x0030(0x00D8) MISSED OFFSET
	TArray<class UGFxItemCardMainStat*>                MainStatWidgets;                                          // 0x0108(0x0010) (ZeroConstructor, Transient)
	TArray<class UGFxItemCardMainStat*>                MainStatMirroredWidgets;                                  // 0x0118(0x0010) (ZeroConstructor, Transient)
	class UGbxGFxObject*                               ArtifactRarityIcon;                                       // 0x0128(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               AbbreviatedAmmoIcon;                                      // 0x0130(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              UpdateElementalInfoTime;                                  // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	class UInventoryBalanceStateComponent*             CurrentBalanceComponent;                                  // 0x0140(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0148(0x0008) MISSED OFFSET
	class UInventoryBalanceStateComponent*             CurrentComparisonItem;                                    // 0x0150(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<struct FItemCardElementalDetails>           ElementalEffects;                                         // 0x0158(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0168(0x0010) MISSED OFFSET
	class FString                                      LastElementalFrame;                                       // 0x0178(0x0010) (ZeroConstructor, Transient)
	TArray<class UGFxItemCardArtifactLine*>            ArtifactMainStats;                                        // 0x0188(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0198(0x0008) MISSED OFFSET
	TArray<class UGFxItemCardSkillEntry*>              ClassModSkillEntries;                                     // 0x01A0(0x0010) (ZeroConstructor, Transient)
	class USwfMovie*                                   SkillIconSWF;                                             // 0x01B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FSoftObjectPath                             CurrentSkillIconSWFPath;                                  // 0x01B8(0x0018) (Transient)
	unsigned char                                      UnknownData06[0x8];                                       // 0x01D0(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.GFxItemCardObject
// 0x0360 (0x0538 - 0x01D8)
struct FGFxItemCardObject : public FGFxItemCardAbbreviatedObject
{
	class FString                                      DescriptionHighlightColor;                                // 0x01D8(0x0010) (ZeroConstructor, Transient)
	float                                              TotalSpinnerHeightOverride;                               // 0x01E8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CostSpinTime;                                             // 0x01EC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              PauseOnNewValueTime;                                      // 0x01F0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              SecondaryStatsBottomSpacer;                               // 0x01F4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ClassModSpacingHeight;                                    // 0x01F8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LegendaryArtifactSpacingHeight;                           // 0x01FC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TotalVerticalAdjustment;                                  // 0x0200(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0204(0x0004) MISSED OFFSET
	class UGFxCurrencyCounterClip*                     CurrencyWidget;                                           // 0x0208(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x0210(0x00A0) MISSED OFFSET
	class UGbxTextField*                               ItemName;                                                 // 0x02B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0xE0];                                      // 0x02B8(0x00E0) MISSED OFFSET
	class UGbxGFxObject*                               MainStatBackground;                                       // 0x0398(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               MainStatBackgroundRaritySides;                            // 0x03A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               TextStats;                                                // 0x03A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               SDUTextStats;                                             // 0x03B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               PickupTextStats;                                          // 0x03B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC0];                                      // 0x03C0(0x00C0) MISSED OFFSET
	int                                                MaxNumTextStats;                                          // 0x0480(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1C];                                      // 0x0484(0x001C) MISSED OFFSET
	class UGbxTextField*                               TextStatsTextfieldToUse;                                  // 0x04A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x28];                                      // 0x04A8(0x0028) MISSED OFFSET
	class UGbxGFxObject*                               ManufacturerWrapper;                                      // 0x04D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x18];                                      // 0x04D8(0x0018) MISSED OFFSET
	class UGbxGFxObject*                               ManufacturerFill;                                         // 0x04F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               ManufacturerStats;                                        // 0x04F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               ManufacturerTextTint;                                     // 0x0500(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               ItemCardBottom;                                           // 0x0508(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x28];                                      // 0x0510(0x0028) MISSED OFFSET
};

// ScriptStruct OakGame.GFxItemInspectionPageData
// 0x0038
struct FGFxItemInspectionPageData
{
	EGFxItemInspectionPages                            Page;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       NavId;                                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      FrameName;                                                // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FText                                       PageTitle;                                                // 0x0020(0x0028) (Edit)
};

// ScriptStruct OakGame.GFxItemInspectionCategoryInfo
// 0x0040
struct FGFxItemInspectionCategoryInfo
{
	class UInventoryCategoryData*                      CategoryData;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  BaseTransform;                                            // 0x0010(0x0030) (Edit, IsPlainOldData)
};

// ScriptStruct OakGame.GFxItemInspectionPageBase
// 0x0010
struct FGFxItemInspectionPageBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UGbxGFxObject*                               PageWrapper;                                              // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OakGame.GFxItemInspectionInspectPage
// 0x0080 (0x0090 - 0x0010)
struct FGFxItemInspectionInspectPage : public FGFxItemInspectionPageBase
{
	struct FText                                       SkinTitleText;                                            // 0x0010(0x0028) (Edit)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET
	class UGbxGFxHintWidget*                           SkinsHintClip;                                            // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OakGame.GFxItemInspectManufacturerChallengeInfo
// 0x0008
struct FGFxItemInspectManufacturerChallengeInfo
{
	class UClass*                                      ChallengeClass;                                           // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OakGame.GFxItemInspectionManufacturerPage
// 0x0110 (0x0120 - 0x0010)
struct FGFxItemInspectionManufacturerPage : public FGFxItemInspectionPageBase
{
	struct FText                                       WatchCommericalHintText;                                  // 0x0010(0x0028) (Edit)
	struct FText                                       ChallengesHeaderText;                                     // 0x0028(0x0028) (Edit)
	struct FText                                       ViewChallengeText;                                        // 0x0040(0x0028) (Edit)
	class UGbxGFxObject*                               RootClip;                                                 // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0060(0x0028) MISSED OFFSET
	class UGbxGFxHintWidget*                           PlayCommercialHintClip;                                   // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0090(0x0018) MISSED OFFSET
	class UGbxTextField*                               ManufacturerDescriptionTextClip;                          // 0x00A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxSlider*                               ManufacturerDescriptionScrollbarClip;                     // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               ManufacturerDescriptionMaskClip;                          // 0x00B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x30];                                      // 0x00C0(0x0030) MISSED OFFSET
	TArray<class UGFxItemInspectionManufacturerChallengeObject*> ChallengeClips;                                           // 0x00F0(0x0010) (ZeroConstructor, Transient)
	TArray<struct FGFxItemInspectManufacturerChallengeInfo> ChallengeInfos;                                           // 0x0100(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0110(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.GFxItemInspectionPageElementalStarRatings
// 0x000C
struct FGFxItemInspectionPageElementalStarRatings
{
	float                                              VsFlesh;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VsShield;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VsArmor;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.GFxItemInspectionElementalPage
// 0x0208 (0x0218 - 0x0010)
struct FGFxItemInspectionElementalPage : public FGFxItemInspectionPageBase
{
	struct FText                                       HealthHeaderLabel;                                        // 0x0010(0x0028) (Edit)
	struct FText                                       ShieldHeaderLabel;                                        // 0x0028(0x0028) (Edit)
	struct FText                                       ArmorHeaderLabel;                                         // 0x0040(0x0028) (Edit)
	TArray<struct FText>                               ChangeViewLables;                                         // 0x0058(0x0010) (Edit, ZeroConstructor)
	TMap<EOakElementalType, struct FGFxItemInspectionPageElementalStarRatings> StarRatingMapping;                                        // 0x0068(0x0050) (Edit, ZeroConstructor)
	TSoftObjectPtr<class UClass>                       FallbackDamageType;                                       // 0x00B8(0x0028) (Edit)
	class UGbxGFxObject*                               RootClip;                                                 // 0x00E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x110];                                     // 0x00E8(0x0110) MISSED OFFSET
	class UGbxGFxHintWidget*                           ChangeViewHintClip;                                       // 0x01F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UGbxDamageType*>                      ElementalTypes;                                           // 0x0200(0x0010) (ZeroConstructor, Transient)
	int                                                CurrentElementalIndex;                                    // 0x0210(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0214(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.GFxItemInspectionPartsPage
// 0x01A0 (0x01B0 - 0x0010)
struct FGFxItemInspectionPartsPage : public FGFxItemInspectionPageBase
{
	struct FGbxGFxPooledGridListFullConfig             PartsListConfig;                                          // 0x0010(0x00C0) (Edit)
	int                                                SplitScreenPartsListSize;                                 // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumStatRows;                                              // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       WeaponPartEffectsText;                                    // 0x00D8(0x0028) (Edit)
	struct FText                                       WeaponPartsText;                                          // 0x00F0(0x0028) (Edit)
	class UGbxGFxObject*                               WeaponPartsContainerClip;                                 // 0x0108(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0110(0x0048) MISSED OFFSET
	class UGFxItemInspectionPartList*                  PartsListClip;                                            // 0x0158(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxSlider*                               ScrollBarClip;                                            // 0x0160(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0168(0x0020) MISSED OFFSET
	TArray<class UGFxItemInspectionStatRowObject*>     StatRowClips;                                             // 0x0188(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0198(0x0018) MISSED OFFSET
};

// ScriptStruct OakGame.GFxItemInspectionSkinsPage
// 0x0170 (0x0180 - 0x0010)
struct FGFxItemInspectionSkinsPage : public FGFxItemInspectionPageBase
{
	struct FGbxGFxPooledGridListFullConfig             SkinsListConfig;                                          // 0x0010(0x00C0) (Edit)
	int                                                SplitScreenSkinListRowCount;                              // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	struct FText                                       DefaultSkinName;                                          // 0x00D8(0x0028) (Edit)
	struct FText                                       WeaponSkinTextName;                                       // 0x00F0(0x0028) (Edit)
	class UGFxItemInspectionSkinsList*                 SkinsList;                                                // 0x0108(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxSlider*                               ScrollBarSkinsClip;                                       // 0x0110(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxButton*                               NavArrowLeftButton;                                       // 0x0118(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxButton*                               NavArrowRightButton;                                      // 0x0120(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x58];                                      // 0x0128(0x0058) MISSED OFFSET
};

// ScriptStruct OakGame.ItemInspectionSelectedPartData
// 0x0008
struct FItemInspectionSelectedPartData
{
	class UClass*                                      SelectedPartCE;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.GFxItemInspectionMenuEnumIdMap
// 0x0018
struct FGFxItemInspectionMenuEnumIdMap
{
	class UEnum*                                       EnumType;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              IdValues;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.GFXItemInspectionPartEnumTable
// 0x0010
struct FGFXItemInspectionPartEnumTable
{
	TArray<struct FGFxItemInspectionMenuEnumIdMap>     IdMap;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.GFxItemInspectionLocator
// 0x0120
struct FGFxItemInspectionLocator
{
	float                                              RotateFactor;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PanFactor;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ZoomFactor;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ItemFOV;                                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ReferenceItemScale;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScaleRange;                                               // 0x0014(0x0008) (Edit, IsPlainOldData)
	float                                              MouseToPanFactor;                                         // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MouseToRotateFactor;                                      // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MouseWheelFactor;                                         // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              KeyboardZoomFactor;                                       // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HeightThreshold;                                          // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IntroDuration;                                            // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    IntroRotation;                                            // 0x0034(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    IntroRotationRandomness;                                  // 0x0040(0x000C) (Edit, IsPlainOldData)
	float                                              IntroRotationAlphaPowerRandomness;                        // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UGFxItemInspectionMenu*                      MenuOuter;                                                // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0058(0x00C8) MISSED OFFSET
};

// ScriptStruct OakGame.RebindContextAndDescription
// 0x0050
struct FRebindContextAndDescription
{
	struct FText                                       SchemeName;                                               // 0x0000(0x0028) (Edit)
	TSoftObjectPtr<class UGbxInputRebindContext>       RebindContext;                                            // 0x0018(0x0028) (Edit)
	TArray<class UOptionDescriptionItem*>              Description;                                              // 0x0040(0x0010) (Edit, ExportObject, ZeroConstructor)
};

// ScriptStruct OakGame.GFxLeaguesMenuStandInState
// 0x0080
struct FGFxLeaguesMenuStandInState
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FDesiredStandInActorData                    ActorData;                                                // 0x0008(0x0050) (Transient)
	class UOakCustomizationData*                       Customization;                                            // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWeaponTrinketPartData*                      WeaponTrinket;                                            // 0x0060(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWeaponSkinPartData*                         WeaponSkin;                                               // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       ActorReward;                                              // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       StandInConfig;                                            // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OakGame.LoadGameMenuEntry
// 0x01C8
struct FLoadGameMenuEntry
{
	class FString                                      SaveGameName;                                             // 0x0000(0x0010) (ZeroConstructor)
	int                                                CharacterLevel;                                           // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FName                                       CharacterClassName;                                       // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           SaveGameId;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1A4];                                     // 0x0024(0x01A4) MISSED OFFSET
};

// ScriptStruct OakGame.RecommendedFriendInviteStatus
// 0x0020
struct FRecommendedFriendInviteStatus
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct OakGame.ContextMenuContextInfo
// 0x0018
struct FContextMenuContextInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct OakGame.ContextMenu
// 0x0040
struct FContextMenu
{
	class UGbxGFxObject*                               ContainerWrapper;                                         // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
	class UGbxGFxGridScrollingList*                    MenuList;                                                 // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FContextMenuContextInfo                     ContextInfo;                                              // 0x0020(0x0018) (Transient)
	bool                                               bIsVisible;                                               // 0x0038(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.MenuItemButton
// 0x0038
struct FMenuItemButton
{
	class UGbxGFxButton*                               MenuItem;                                                 // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               LabelDropShadow;                                          // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               SocialWrapper;                                            // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               ListIconContainer;                                        // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               ListIcon;                                                 // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               ListIconText;                                             // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               NeedHelpIcon;                                             // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OakGame.GFxMapMenuStateInfo
// 0x0028
struct FGFxMapMenuStateInfo
{
	struct FText                                       StateName;                                                // 0x0000(0x0028) (Edit)
	class FString                                      StateFrame;                                               // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.GFxMapMenu_Adjustment
// 0x0010
struct FGFxMapMenu_Adjustment
{
	struct FVector2D                                   ContextMenuOffsetExpandingDown;                           // 0x0000(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   ContextMenuOffsetExpandingUp;                             // 0x0008(0x0008) (Edit, IsPlainOldData)
};

// ScriptStruct OakGame.ZoneMapMissionWaypointEntry
// 0x00F0
struct FZoneMapMissionWaypointEntry
{
	class UZoneMapPOITypeData*                         PointOfInterestType;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      MissionWaypointObjectName;                                // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FTransform                                  MissionWaypointTransform;                                 // 0x0020(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	int                                                MissionWaypointRadius;                                    // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<struct FMissionObjectiveReferenceWeak>      MissionObjectives;                                        // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FGbxUIFormattedText                         MissionDirectorName;                                      // 0x0068(0x0068) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	TArray<TSoftObjectPtr<class UClass>>               DirectorMissions;                                         // 0x00D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                BlacklistIndex;                                           // 0x00E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bOutOfMap;                                                // 0x00E4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHideMissionAreaWaypoint;                                 // 0x00E5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00E6(0x0002) MISSED OFFSET
	class UClass*                                      AreaComponentClassOverride;                               // 0x00E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OakGame.ZoneMapChallengeEntry
// 0x0060
struct FZoneMapChallengeEntry
{
	class FString                                      ChallengeActorName;                                       // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FTransform                                  ChallengeWaypointTransform;                               // 0x0010(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FIntPoint                                   ChallengeWaypointFODTexelCoords;                          // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ChallengeClass;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FGuid                                       ChallengeGUID;                                            // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
};

// ScriptStruct OakGame.ZoneMapIconInfo
// 0x0270
struct FZoneMapIconInfo
{
	TWeakObjectPtr<class AActor>                       TargetActor;                                              // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMapIconAnchor*                              IconAnchor;                                               // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         IconPOIComponent;                                         // 0x0010(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class AOakZoneMapIcon_POI>          IconActor;                                                // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      IconClass;                                                // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       IconGuid;                                                 // 0x0028(0x0010) (Transient, IsPlainOldData)
	struct FVector                                     IconLocation;                                             // 0x0038(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    IconRotation;                                             // 0x0044(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class UChallengeLevelActorComponent*               ChallengeComponent;                                       // 0x0050(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0058(0x0028) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0070(0x0028) (BlueprintVisible, BlueprintReadOnly)
	class FString                                      IconFrameName;                                            // 0x0088(0x0010) (ZeroConstructor, Transient)
	bool                                               bIsDynamic;                                               // 0x0098(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShowDynamicInNonCurrentMap;                              // 0x0099(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayer;                                                // 0x009A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShowInMiniMap;                                           // 0x009B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShowInZoneMap;                                           // 0x009C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x009D(0x0003) MISSED OFFSET
	struct FZoneMapPOIEntry                            POIEntry;                                                 // 0x00A0(0x0060) (BlueprintVisible, BlueprintReadOnly)
	struct FZoneMapMissionWaypointEntry                MissionWaypointEntry;                                     // 0x0100(0x00F0) (BlueprintVisible, BlueprintReadOnly)
	struct FZoneMapChallengeEntry                      ChallengeEntry;                                           // 0x01F0(0x0060) (BlueprintVisible, BlueprintReadOnly)
	class AOakVehicle*                                 TargetedVehicle;                                          // 0x0250(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EZoneMapMissionStatus>                 WaypointStatus;                                           // 0x0258(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bMissionTrackerIcon;                                      // 0x0259(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOutOfMapWaypoint;                                        // 0x025A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EZoneMapChallengeStatus>               ChallengeStatus;                                          // 0x025B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ChallengeRadius;                                          // 0x025C(0x0004) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      ChallengeClass;                                           // 0x0260(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0268(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.OakUIChallengeListData
// 0x00C0
struct FOakUIChallengeListData
{
	class UChallengeCategoryData*                      HeaderCategory;                                           // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumHeaderChildren;                                        // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumHeaderChildrenCompleted;                               // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FChallengeInstanceData                      ChallengeInstanceData;                                    // 0x0010(0x0080) (Transient)
	TWeakObjectPtr<class UZoneMapData>                 ZoneMapData;                                              // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumChildren;                                              // 0x0098(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumChildrenComplete;                                      // 0x009C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsUndiscovered;                                          // 0x00A0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	class UClass*                                      ChallengeClass;                                           // 0x00A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UOakUIChallengeDataProvider>  OwnerDataProvider;                                        // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bShowAllChallenges;                                       // 0x00B8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.MayhemModifier
// 0x0030
struct FMayhemModifier
{
	TSoftObjectPtr<class UClass>                       ModifierAbility;                                          // 0x0000(0x0028) (Edit)
	class UGbxAbilityEffectTargetResolutionData*       ModifierTarget;                                           // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.MayhemModifierSet
// 0x0038
struct FMayhemModifierSet
{
	TArray<struct FMayhemModifier>                     Modifiers;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              Weight;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FName>                               MutualExclusionTags;                                      // 0x0018(0x0010) (Edit, ZeroConstructor)
	TArray<class UUIStatData*>                         UIStats;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.GFxMinimapWidgetIcon
// 0x00D0
struct FGFxMinimapWidgetIcon
{
	struct FZoneMapPOIEntry                            ZoneMapPOIData;                                           // 0x0000(0x0060) (Edit)
	bool                                               bIsAreaWaypoint;                                          // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bClampRadarEdge;                                          // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0062(0x0002) MISSED OFFSET
	float                                              MaxClampDistance;                                         // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldBeVisibleIfInRange;                                // 0x0068(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	struct FVector                                     IconLocation;                                             // 0x006C(0x000C) (Transient, IsPlainOldData)
	bool                                               bStaticIconLocation;                                      // 0x0078(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	uint32_t                                           WaypointRadius;                                           // 0x007C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       TargetActor;                                              // 0x0080(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGuid                                       TargetGuid;                                               // 0x0088(0x0010) (Transient, IsPlainOldData)
	TWeakObjectPtr<class UObject>                      TargetMinimapIconComponent;                               // 0x0098(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               IconInstance;                                             // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bCachedVisible;                                           // 0x00A8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	EGFxMinimapWidgetIconTrackedType                   TrackedType;                                              // 0x00A9(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x00AA(0x0002) MISSED OFFSET
	float                                              AreaWaypointIconSize;                                     // 0x00AC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentTransitionTime;                                    // 0x00B0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector2D                                   TransitionStartingLocation;                               // 0x00B4(0x0008) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	class FString                                      IconFrameName;                                            // 0x00C0(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct OakGame.MinimapBoundingCircle
// 0x000C
struct FMinimapBoundingCircle
{
	struct FVector2D                                   CenterPoint;                                              // 0x0000(0x0008) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.MissionLogEchoDeviceSettings
// 0x0040
struct FMissionLogEchoDeviceSettings
{
	EStandInActorType                                  StandInType;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TSoftObjectPtr<class UClass>                       StandInActorClass;                                        // 0x0008(0x0028) (Edit)
	struct FName                                       StandInConfigName;                                        // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       EchoDeviceIdleScreenName;                                 // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.GFxMissionLogMissionItem
// 0x0050
struct FGFxMissionLogMissionItem
{
	bool                                               bValid;                                                   // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       DisplayText;                                              // 0x0008(0x0028) (Transient)
	EGFxMissionLogMissionItemType                      Type;                                                     // 0x0020(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	class UClass*                                      MissionClass;                                             // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UOakMission*                                 AsOakMission;                                             // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UEchoLogData>                 EchoLogData;                                              // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	EOakMissionType                                    MissionType;                                              // 0x0040(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsTracked;                                               // 0x0041(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsBlocked;                                               // 0x0042(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsCompleted;                                             // 0x0043(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsInCurrentZone;                                         // 0x0044(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHasBeenViewed;                                           // 0x0045(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	EGFxMissionLogMissionIconType                      IconType;                                                 // 0x0046(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0047(0x0001) MISSED OFFSET
	int                                                NumFriendsPlayingThisMission;                             // 0x0048(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.GFxMissionTrackerRewardSlot
// 0x0080
struct FGFxMissionTrackerRewardSlot
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct OakGame.GFxMissionTrackerInventoryItemData
// 0x0040
struct FGFxMissionTrackerInventoryItemData
{
	class FString                                      ItemTypeFrameName;                                        // 0x0000(0x0010) (ZeroConstructor, Transient)
	class FString                                      ItemRarityFrameName;                                      // 0x0010(0x0010) (ZeroConstructor, Transient)
	struct FText                                       ItemRarityFrameText;                                      // 0x0020(0x0028) (Transient)
	int                                                ItemScore;                                                // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.GFxMissionTrackerRewardDisplayData
// 0x0020
struct FGFxMissionTrackerRewardDisplayData
{
	int                                                Currency;                                                 // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UInventoryCategoryData*                      CurrencyType;                                             // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FGFxMissionTrackerInventoryItemData> Items;                                                    // 0x0010(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct OakGame.GFxMissionTrackerRewardQueueData
// 0x0030
struct FGFxMissionTrackerRewardQueueData
{
	struct FGFxMissionTrackerRewardDisplayData         RewardData;                                               // 0x0000(0x0020) (Transient)
	class UClass*                                      Mission;                                                  // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.NameplateBarData
// 0x0028
struct FNameplateBarData
{
	class UGbxGFxProgressBar*                          NameplateBar;                                             // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               NameplateBarContainer;                                    // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TScriptInterface<class UNameplateInfoProviderInterface> TargetActorOverride;                                      // 0x0010(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.Transition
// 0x0020
struct FTransition
{
	class UGFxNewsItem*                                Curr;                                                     // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGFxNewsItem*                                Next;                                                     // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.GFxNotificationQueueListItem
// 0x0050
struct FGFxNotificationQueueListItem
{
	class UHUDNotificationAsset*                       AssetData;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGFxDisplayedNotificationWidget*             ActiveWidgetContent;                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FText                                       MessageText;                                              // 0x0018(0x0028)
	struct FName                                       SpawnAudioOverride;                                       // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       DespawnAudioOverride;                                     // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeoutTimeRemaining;                                     // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bCurrentlyDisplayed;                                      // 0x0044(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      NotificationId;                                           // 0x0045(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA];                                       // 0x0046(0x000A) MISSED OFFSET
};

// ScriptStruct OakGame.BrushInfo
// 0x0090
struct FBrushInfo
{
	struct FSlateBrush                                 SlateBrush;                                               // 0x0000(0x0088)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.MessageHandle
// 0x0008
struct FMessageHandle
{
	uint64_t                                           ID;                                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.UIManagerMessage
// 0x0168
struct FUIManagerMessage
{
	struct FText                                       Title;                                                    // 0x0000(0x0028) (Transient)
	struct FText                                       PlayerName;                                               // 0x0018(0x0028) (Transient)
	struct FText                                       Description;                                              // 0x0030(0x0028) (Transient)
	struct FText                                       Glyph;                                                    // 0x0048(0x0028) (Transient)
	struct FText                                       CommandText;                                              // 0x0060(0x0028) (Transient)
	class FString                                      IconFrame;                                                // 0x0078(0x0010) (ZeroConstructor, Transient)
	struct FName                                       IntroSound;                                               // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       OutroSound;                                               // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsBlocking;                                              // 0x0098(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bTimedMessage;                                            // 0x0099(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x009A(0x0002) MISSED OFFSET
	float                                              TimeCreated;                                              // 0x009C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeRemaining;                                            // 0x00A0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDisplaySpinner;                                          // 0x00A4(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	EMessageSpecialType                                SpecialType;                                              // 0x00A5(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA];                                       // 0x00A6(0x000A) MISSED OFFSET
	struct FBrushInfo                                  BrushInfo;                                                // 0x00B0(0x0090)
	struct FMessageHandle                              Handle;                                                   // 0x0140(0x0008)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0148(0x0010) MISSED OFFSET
	class AOakPlayerState*                             OtherPlayerState;                                         // 0x0158(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0160(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.OakLevelSyncMessageText
// 0x0050
struct FOakLevelSyncMessageText
{
	struct FText                                       TitleText;                                                // 0x0000(0x0028) (Edit)
	struct FText                                       PlayerStateDescriptionText;                               // 0x0018(0x0028) (Edit)
	struct FText                                       AnonymousDescriptionText;                                 // 0x0030(0x0028) (Edit)
	float                                              OnScreenDuration;                                         // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.SubtitleBarItems
// 0x0040
struct FSubtitleBarItems
{
	class UGbxGFxGridScrollingList*                    ControlsSubtitlesSL;                                      // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxHintWidget*                           LeftNavButton;                                            // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxListCell*                             BasicTab;                                                 // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxListCell*                             AdvancedTab;                                              // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxListCell*                             BenchmarkTab;                                             // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxListCell*                             KeyboardMappings;                                         // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxListCell*                             GamepadMappings;                                          // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxHintWidget*                           RightNavButton;                                           // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OakGame.GFxPassiveSkillWidgetSlotData
// 0x0010
struct FGFxPassiveSkillWidgetSlotData
{
	class UOakPlayerAbilityHUDItemData*                HUDItemData;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGFxPassiveSkillIcon*                        Icon;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.GFxPlayerStorageBag
// 0x00D0
struct FGFxPlayerStorageBag
{
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0000(0x00B8) MISSED OFFSET
	TArray<struct FOakUIInventoryItemDisplayInfo>      Items;                                                    // 0x00B8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.PlaythroughSelectionModeEntry
// 0x0050
struct FPlaythroughSelectionModeEntry
{
	struct FText                                       ModeName;                                                 // 0x0000(0x0028) (Edit)
	struct FText                                       ModeDescription;                                          // 0x0018(0x0028) (Edit)
	class FString                                      ModeFrameName;                                            // 0x0030(0x0010) (Edit, ZeroConstructor)
	int                                                PlaythroughNum;                                           // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FName                                       ModeSelectionSound;                                       // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.QuickChangeRespecTreeBranchRow
// 0x0020
struct FQuickChangeRespecTreeBranchRow
{
	TArray<class UGbxGFxObject*>                       Entries;                                                  // 0x0000(0x0010) (ZeroConstructor, Transient)
	class UGbxGFxObject*                               RespecAnim;                                               // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.BaseQuickChangeMenuStateData
// 0x0068
struct FBaseQuickChangeMenuStateData
{
	struct FText                                       MenuStateName;                                            // 0x0000(0x0028) (Edit)
	struct FText                                       MenuStateDescription;                                     // 0x0018(0x0028) (Edit)
	class FString                                      ContentFrameName;                                         // 0x0030(0x0010) (Edit, ZeroConstructor)
	class FString                                      IconFrameName;                                            // 0x0040(0x0010) (Edit, ZeroConstructor)
	struct FName                                       StandInConfig;                                            // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bForceProjectionFXOn;                                     // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EBaseQuickChangeMenuState                          MenuState;                                                // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
	class UGbxCustomizationTypeData*                   CustomizationType;                                        // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.SecondaryHealthDamageEventDetails
// 0x0038
struct FSecondaryHealthDamageEventDetails
{
	class UDamageSource*                               DamageSource;                                             // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class APawn*                                       InstigatorPawn;                                           // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWasCrit;                                                 // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FVector                                     HitLocation;                                              // 0x001C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     HitDirection;                                             // 0x0028(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.GFxStatusMenuSubmenuKeyMap
// 0x0010
struct FGFxStatusMenuSubmenuKeyMap
{
	struct FName                                       InputAction;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SubMenuId;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.GFxStatusMenuNavBarInfo
// 0x0018
struct FGFxStatusMenuNavBarInfo
{
	class FString                                      IconFrameName;                                            // 0x0000(0x0010) (ZeroConstructor, Transient)
	struct FName                                       MenuID;                                                   // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OakGame.GFxStoreMenuDLCItem
// 0x0050
struct FGFxStoreMenuDLCItem
{
	EGFxStoreMenuTabType                               Type;                                                     // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x0008(0x0028) (Transient)
	struct FText                                       Description;                                              // 0x0020(0x0028) (Transient)
	class FString                                      PreviewImageUrl;                                          // 0x0038(0x0010) (ZeroConstructor, Transient)
	bool                                               bPurchased;                                               // 0x0048(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDownloaded;                                              // 0x0049(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x004A(0x0002) MISSED OFFSET
	int                                                DiscountPercent;                                          // 0x004C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OakGame.GFxStoreMenuPage
// 0x0068
struct FGFxStoreMenuPage
{
	EGFxStoreMenuTabType                               PageType;                                                 // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FGFxStoreMenuDLCItem                        FeaturedItem;                                             // 0x0008(0x0050) (Transient)
	TArray<struct FGFxStoreMenuDLCItem>                NonFeaturedItems;                                         // 0x0058(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct OakGame.ClosedCaptionEntry
// 0x0020
struct FClosedCaptionEntry
{
	class UGbxTextField*                               LineField;                                                // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
	float                                              RemainingLifetime;                                        // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.SubtitleLine
// 0x0020
struct FSubtitleLine
{
	struct FText                                       TextToDisplay;                                            // 0x0000(0x0028) (Transient)
	float                                              Duration;                                                 // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bForce;                                                   // 0x001C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct OakGame.VendingTabOrder
// 0x0018
struct FVendingTabOrder
{
	EGFxVendingMachineDisplayMode                      BuyTab;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EGFxVendingMachineDisplayMode                      BuyBackTab;                                               // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EGFxVendingMachineDisplayMode                      SellTab;                                                  // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0003(0x0005) MISSED OFFSET
	TArray<EGFxVendingMachineDisplayMode>              TabOrder;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.VendingMachineSocketLocationAndOffset
// 0x0028
struct FVendingMachineSocketLocationAndOffset
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FName                                       SocketName;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Offset;                                                   // 0x0018(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   OffsetSplitScreen;                                        // 0x0020(0x0008) (Edit, IsPlainOldData)
};

// ScriptStruct OakGame.VendingIDToSocketNameMap
// 0x0050
struct FVendingIDToSocketNameMap
{
	TMap<class FString, struct FVendingMachineSocketLocationAndOffset> SocketMap;                                                // 0x0000(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.VendingObjectToSocketLocationMap
// 0x0050
struct FVendingObjectToSocketLocationMap
{
	TMap<class UGbxGFxObject*, struct FVendingMachineSocketLocationAndOffset> SocketMap;                                                // 0x0000(0x0050) (ZeroConstructor, Transient)
};

// ScriptStruct OakGame.OakBackpackCapacityThreshold
// 0x0030
struct FOakBackpackCapacityThreshold
{
	float                                              Percentage;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FSlateColor                                 Color;                                                    // 0x0008(0x0028) (Edit)
};

// ScriptStruct OakGame.GFxVendingMenuConfig
// 0x0070
struct FGFxVendingMenuConfig
{
	class UInventoryCategoryData*                      GoldenKeyResourceData;                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UInventoryCategoryData*                      ErediumResourceData;                                      // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UInventoryCategoryData*>              InventoryCategoriesAllowed;                               // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<struct FOakInventoryMenuFilter>             PageFilters;                                              // 0x0020(0x0010) (Edit, ZeroConstructor)
	TArray<struct FOakInventoryMenuItemGrouping>       ItemGroupingsByType;                                      // 0x0030(0x0010) (Edit, ZeroConstructor)
	TArray<struct FOakInventoryMenuItemGrouping>       ItemGroupingsByManufacturer;                              // 0x0040(0x0010) (Edit, ZeroConstructor)
	TArray<struct FOakInventoryMenuTypePriorityInfo>   ItemTypeSortPriorities;                                   // 0x0050(0x0010) (Edit, ZeroConstructor)
	TArray<struct FOakBackpackCapacityThreshold>       BackpackThresholds;                                       // 0x0060(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.GFxVendingMachineMenuFilter
// 0x0020
struct FGFxVendingMachineMenuFilter
{
	struct FText                                       Name;                                                     // 0x0000(0x0028) (Edit)
	class UInventoryCategoryData*                      DataTypeFilter;                                           // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakThumbnailManagerLightProperties
// 0x0014
struct FOakThumbnailManagerLightProperties
{
	struct FRotator                                    Direction;                                                // 0x0000(0x000C) (Edit, IsPlainOldData)
	float                                              Brightness;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0010(0x0004) (Edit, IsPlainOldData)
};

// ScriptStruct OakGame.OakThumbnailManagerRenderProperties
// 0x0670
struct FOakThumbnailManagerRenderProperties
{
	struct FTransform                                  ItemTransform;                                            // 0x0000(0x0030) (Edit, IsPlainOldData)
	struct FOakThumbnailManagerLightProperties         LightProperties;                                          // 0x0030(0x0014) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<struct FOakThumbnailManagerLightProperties> AdditionalLights;                                         // 0x0048(0x0010) (Edit, ZeroConstructor)
	struct FThumbnailParameters                        ThumbnailParameters;                                      // 0x0058(0x0010) (Edit)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
	struct FPostProcessSettings                        PostProcessSettings;                                      // 0x0070(0x0600) (Edit)
};

// ScriptStruct OakGame.GoreSizeSelectionData
// 0x00A0
struct FGoreSizeSelectionData
{
	unsigned char                                      bSpecifiedMinScale : 1;                                   // 0x0000(0x0001) (Edit)
	unsigned char                                      bSpecifiedMaxScale : 1;                                   // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MinScale;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxScale;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<class UStaticMesh*>                         StumpMeshes;                                              // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<class UParticleSystem*>                     StumpParticles;                                           // 0x0020(0x0010) (Edit, ZeroConstructor)
	TArray<class UMaterialInstanceConstant*>           StumpDecals;                                              // 0x0030(0x0010) (Edit, ZeroConstructor)
	class UWwiseEvent*                                 StumpSound;                                               // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceConstant*                   StumpMaterialOverride;                                    // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             LimbMeshes;                                               // 0x0050(0x0010) (Edit, ZeroConstructor)
	TArray<class UParticleSystem*>                     LimbParticles;                                            // 0x0060(0x0010) (Edit, ZeroConstructor)
	class UMaterialInstanceConstant*                   LimbMaterialOverride;                                     // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FForceSelection                             LimbForce;                                                // 0x0078(0x0020) (Edit)
	bool                                               bScaleLimbToStump;                                        // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	float                                              LimbScale;                                                // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.GoreSelectionResults
// 0x0090
struct FGoreSelectionResults
{
	struct FName                                       StumpSocket;                                              // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StumpBoneScale;                                           // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     StumpDecalSize;                                           // 0x0014(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class UStaticMesh*                                 StumpMesh;                                                // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             StumpParticles;                                           // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceConstant*                   StumpMaterialOverride;                                    // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceConstant*                   StumpDecal;                                               // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StumpSound;                                               // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bStumpReceivesDecal;                                      // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bInheritStumpMaterialParameters;                          // 0x0049(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EMaterialParameterCopyMethod                       InheritStumpMaterialParametersMethod;                     // 0x004A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bInheritLimbMaterialParameters;                           // 0x004B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EMaterialParameterCopyMethod                       InheritLimbMaterialParametersMethod;                      // 0x004C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	struct FName                                       LimbSocket;                                               // 0x0050(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UObject*                                     LimbMesh;                                                 // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             LimbParticles;                                            // 0x0060(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      LimbActorClass;                                           // 0x0068(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceConstant*                   LimbMaterialOverride;                                     // 0x0070(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LimbForce;                                                // 0x0078(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bScaleLimbToStump;                                        // 0x007C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	float                                              LimbScale;                                                // 0x0080(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LimbMassScale;                                            // 0x0084(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SourceMaterialIndex;                                      // 0x0088(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.CauseDamageStatusEffectOverrides
// 0x001C
struct FCauseDamageStatusEffectOverrides
{
	float                                              BaseChance;                                               // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseDuration;                                             // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseDamage;                                               // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBaseDamageAsPercent;                                     // 0x000C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              ChanceScalar;                                             // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DurationScalar;                                           // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageScalar;                                             // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.GrenadeAttachedTrail
// 0x0010
struct FGrenadeAttachedTrail
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.GrenadeChildGenerationData
// 0x0028
struct FGrenadeChildGenerationData
{
	int                                                DividerGrenadeGeneration;                                 // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	int                                                MiniMirvGrenadeGeneration;                                // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	int                                                MirvGrenadeGeneration;                                    // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	int                                                RainGrenadeGeneration;                                    // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	int                                                SpringGrenadeGeneration;                                  // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	int                                                StickyGrenadeGeneration;                                  // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsLingering;                                             // 0x0018(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FVector                                     LongbowTarget;                                            // 0x001C(0x000C) (BlueprintVisible, Transient, IsPlainOldData)
};

// ScriptStruct OakGame.PayloadInstanceData
// 0x0030
struct FPayloadInstanceData
{
	int                                                StackCount;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bInstanceBool;                                            // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              InstanceFloat;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InstanceInt;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InstanceVector;                                           // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class AActor*                                      InstanceActor;                                            // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TriggerCount;                                             // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.DamageTypeParticleProperty
// 0x0060
struct FDamageTypeParticleProperty
{
	struct FName                                       PropertyName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultPropertyValue;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TMap<class UClass*, float>                         DamageTypeValueAssociations;                              // 0x0010(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct OakGame.LingeringDamageTypeInfo
// 0x0048
struct FLingeringDamageTypeInfo
{
	ELingeringDamageStyle                              DamageStyle;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UParticleSystem*                             ElementalEmitter;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      LightBeam;                                                // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BeamSocketName;                                           // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DamageData;                                               // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageScale;                                              // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LingeringRadius;                                          // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MirvChildLingeringRadius;                                 // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RainChildLingeringRadius;                                 // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FAttributeInitializationData>        StackValues;                                              // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct OakGame.MoneyStackValues
// 0x0010
struct FMoneyStackValues
{
	class UWwiseEvent*                                 AudioEvent;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UItemPoolListInterface*                      ItemPool;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct OakGame.SingularityInitializationBase
// 0x0070
struct FSingularityInitializationBase
{
	class UHitReactionTag*                             PullTag;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       IgnoreTags;                                               // 0x0008(0x0020) (Edit, BlueprintVisible)
	float                                              MinPullRadius;                                            // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<class AActor*>                              IgnoreActors;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UWwiseAuxBus*                                EffectAuxBus;                                             // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EffectSize;                                               // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EffectFadeDistance;                                       // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EffectDuration;                                           // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	class UWwiseRtpc*                                  FadeDistanceRtpc;                                         // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 AdditionalStartEvent;                                     // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 AdditionalStopEvent;                                      // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.SingularityInitializationInfo
// 0x0050 (0x00C0 - 0x0070)
struct FSingularityInitializationInfo : public FSingularityInitializationBase
{
	float                                              Duration;                                                 // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForcePerSecond;                                           // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESpinDirection                                     SpinDirection;                                            // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	float                                              SpinMinDistance;                                          // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpinMaxDistance;                                          // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpinHorizontalScalar;                                     // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpinVerticalScalar;                                       // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationOffset;                                           // 0x008C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bAttachToOwnerRoot;                                       // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPersistantComponent;                                     // 0x0099(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x009A(0x0006) MISSED OFFSET
	class UParticleSystem*                             SingularityParticles;                                     // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseDestructibleChunkMass;                                // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	class UClass*                                      SingularitySource;                                        // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinFalloffScalar;                                         // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.DamageDataCustomStatusEffectApplicationSpec
// 0x0050
struct FDamageDataCustomStatusEffectApplicationSpec
{
	class UStatusEffectData*                           StatusEffect;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGbxCondition*                               Condition;                                                // 0x0008(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bApplyToEnemiesOnly;                                      // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FAttributeInitializationData                EffectDuration;                                           // 0x0018(0x0038) (Edit)
};

// ScriptStruct OakGame.SingularityTargetInfo
// 0x0010
struct FSingularityTargetInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.SingularityBurstInfo
// 0x0020 (0x0090 - 0x0070)
struct FSingularityBurstInfo : public FSingularityInitializationBase
{
	struct FVector                                     SingularityLocation;                                      // 0x0070(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              MaxPullRadius;                                            // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SingularityForce;                                         // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	class UExplosionData*                              SingularityExplosion;                                     // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.HolsteredGearSlotOptions
// 0x0010
struct FHolsteredGearSlotOptions
{
	class UInventoryCategoryData*                      InventoryCategory;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.HolsteredGearAttachmentSlot
// 0x0018
struct FHolsteredGearAttachmentSlot
{
	class AHolsteredGearSlot*                          OuterSlot;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMeshComponent*                              Mesh;                                                     // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.InventoryAspectAbilityInfo
// 0x0008
struct FInventoryAspectAbilityInfo
{
	class UClass*                                      Ability;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.ManufacturerWeaponSightData
// 0x0010
struct FManufacturerWeaponSightData
{
	class UManufacturerData*                           Manufacturer;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  RarityTable;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakWeaponNamedNamingAttribute
// 0x0020
struct FOakWeaponNamedNamingAttribute
{
	struct FName                                       AttributeName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseFormula;                                              // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UGbxAttributeData*                           Attribute;                                                // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UUIStatFormulaEvaluator*                     Formula;                                                  // 0x0018(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct OakGame.VendingMachineRefillAmmoData
// 0x0020
struct FVendingMachineRefillAmmoData
{
	class UGbxAttributeData*                           AmmoMax;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGbxAttributeData*                           AmmoCurrent;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGbxAttributeData*                           AmmoStackCount;                                           // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGbxAttributeData*                           AmmoStackCost;                                            // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.LargeLiquidBodySurfaceSectionClippingVolume
// 0x0010
struct FLargeLiquidBodySurfaceSectionClippingVolume
{
	TArray<struct FPlane>                              ClippingPlanes;                                           // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.LargeLiquidBodySurfaceSection
// 0x0018
struct FLargeLiquidBodySurfaceSection
{
	float                                              WorldZ;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FLargeLiquidBodySurfaceSectionClippingVolume> ClippingVolumes;                                          // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.LevelAssetList
// 0x0018
struct FLevelAssetList
{
	struct FName                                       LevelPackage;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               AssetNames;                                               // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.LevelMultiplierDefinedValueRow
// 0x00A8 (0x00B0 - 0x0008)
struct FLevelMultiplierDefinedValueRow : public FAttributeDefinedValueRow
{
	struct FAttributeInitializationData                Multiplier;                                               // 0x0008(0x0038) (Edit)
	struct FAttributeInitializationData                Level;                                                    // 0x0040(0x0038) (Edit)
	struct FAttributeInitializationData                Offset;                                                   // 0x0078(0x0038) (Edit)
};

// ScriptStruct OakGame.LootablePersistenceData
// 0x0008
struct FLootablePersistenceData
{
	float                                              ResetDelay;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStoreInSaveGame;                                         // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct OakGame.LootableInteractionResponse
// 0x0010
struct FLootableInteractionResponse
{
	class UAnimSequence*                               TransitionAnimation;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               IdleAnimation;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.LootableDirectionalResponse
// 0x0018
struct FLootableDirectionalResponse
{
	struct FNumericRange                               AngleRange;                                               // 0x0000(0x0008) (Edit)
	TArray<struct FLootableInteractionResponse>        Interactions;                                             // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.ConditionalLootableInteractionResponse
// 0x0018
struct FConditionalLootableInteractionResponse
{
	class UGbxCondition*                               Condition;                                                // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLootableInteractionResponse                Interaction;                                              // 0x0008(0x0010) (Edit)
};

// ScriptStruct OakGame.LootablePileInteractionResponse
// 0x0010
struct FLootablePileInteractionResponse
{
	class ULootSpawnPatternData*                       LootPatternOverride;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DisturbBoneForce;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.LootablePileDamageInteraction
// 0x0020
struct FLootablePileDamageInteraction
{
	TArray<class UClass*>                              DamageSources;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FLootablePileInteractionResponse            Response;                                                 // 0x0010(0x0010) (Edit, IsPlainOldData)
};

// ScriptStruct OakGame.LootableMeshSwapData
// 0x0020
struct FLootableMeshSwapData
{
	class USkeletalMesh*                               NewMesh;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipRegularOpeningWhenDamaged;                           // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FLootableInteractionResponse                Response;                                                 // 0x0010(0x0010) (Edit)
};

// ScriptStruct OakGame.LootableAnimState
// 0x0010
struct FLootableAnimState
{
	bool                                               bLooping;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UAnimSequence*                               Animation;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.LootableObjectDamageEventDetails
// 0x0040
struct FLootableObjectDamageEventDetails
{
	float                                              Damage;                                                   // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // 0x0004(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     HitDirection;                                             // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     HitForce;                                                 // 0x001C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class AActor*                                      Instigator;                                               // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageSource;                                             // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.MatchmakingSearchParameter
// 0x0018
struct FMatchmakingSearchParameter
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetParamName;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMatchmakingSearchParameterOp>         Op;                                                       // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                ValueRange;                                               // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.MatchmakingSearchParameters
// 0x0028
struct FMatchmakingSearchParameters
{
	class FString                                      SearchName;                                               // 0x0000(0x0010) (ZeroConstructor)
	bool                                               bMatchGameSettings;                                       // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<struct FMatchmakingSearchParameter>         SearchParameters;                                         // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.MatchmakingRequirement
// 0x0030
struct FMatchmakingRequirement
{
	EMatchmakingRequirementType                        Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	EMatchmakingRequirementComparisonOp                ComparisonOp;                                             // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                Value;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	class FString                                      DescriptionKey;                                           // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0018(0x0018) MISSED OFFSET
};

// ScriptStruct OakGame.MatchmakingModifierData
// 0x0020
struct FMatchmakingModifierData
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetResolverName;                                       // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       EffectName;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.MatchmakingModifierSetData
// 0x0048
struct FMatchmakingModifierSetData
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0008(0x0028)
	struct FText                                       DisplayDesc;                                              // 0x0020(0x0028)
	TArray<struct FMatchmakingModifierData>            Modifiers;                                                // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.MatchmakingSearchDefinition
// 0x00B8
struct FMatchmakingSearchDefinition
{
	class FString                                      ActivityGuidString;                                       // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      ParentActivityGuidString;                                 // 0x0010(0x0010) (ZeroConstructor)
	class FString                                      TitleKey;                                                 // 0x0020(0x0010) (ZeroConstructor)
	class FString                                      DescriptionKey;                                           // 0x0030(0x0010) (ZeroConstructor)
	class FString                                      ImageId;                                                  // 0x0040(0x0010) (ZeroConstructor)
	class FString                                      HopperName;                                               // 0x0050(0x0010) (ZeroConstructor)
	class FString                                      Version;                                                  // 0x0060(0x0010) (ZeroConstructor)
	TArray<struct FMatchmakingSearchParameters>        OrderedSearches;                                          // 0x0070(0x0010) (ZeroConstructor)
	TArray<class FString>                              TravelStationPaths;                                       // 0x0080(0x0010) (ZeroConstructor)
	TArray<struct FMatchmakingRequirement>             MatchmakingRequirements;                                  // 0x0090(0x0010) (ZeroConstructor)
	int                                                MinPlayerCount;                                           // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxPlayerCount;                                           // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FMatchmakingModifierSetData>         ModifierSets;                                             // 0x00A8(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.MayhemCoreSetUIStats
// 0x0030
struct FMayhemCoreSetUIStats
{
	class UUIStatData*                                 UIStat_FleshHealthScale;                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UUIStatData*                                 UIStat_ShieldHealthScale;                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UUIStatData*                                 UIStat_ArmorHealthScale;                                  // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UUIStatData*                                 UIStat_ExperienceScale;                                   // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UUIStatData*                                 UIStat_CurrencyScale;                                     // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UUIStatData*                                 UIStat_LootDropRateScale;                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.MayhemCoreModifierSet
// 0x0040
struct FMayhemCoreModifierSet
{
	TArray<struct FMayhemModifier>                     Modifiers;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FMayhemCoreSetUIStats                       UIStats;                                                  // 0x0010(0x0030) (Edit)
};

// ScriptStruct OakGame.MayhemModeTwoLevelOverride
// 0x0068
struct FMayhemModeTwoLevelOverride
{
	int                                                LevelRangeMin;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LevelRangeMax;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideCoreModifierSet;                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FMayhemCoreModifierSet                      CoreModifierSetOverride;                                  // 0x0010(0x0040) (Edit)
	bool                                               bOverrideRandomModifiersSlots;                            // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	TArray<class UMayhemModifierSlotInterface*>        RandomModifierSlotsOverride;                              // 0x0058(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.MainMenuCameraBlendParams
// 0x0010
struct FMainMenuCameraBlendParams
{
	float                                              BlendTime;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGbxEasingFunc                              BlendEasing;                                              // 0x0004(0x000C) (Edit)
};

// ScriptStruct OakGame.MainMenuCameraBlendParamsSet
// 0x0034
struct FMainMenuCameraBlendParamsSet
{
	struct FMainMenuCameraBlendParams                  DefaultParams;                                            // 0x0000(0x0010) (Edit)
	unsigned char                                      bOverrideLocationParams : 1;                              // 0x0010(0x0001) (Edit)
	unsigned char                                      bOverrideRotationParams : 1;                              // 0x0010(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FMainMenuCameraBlendParams                  LocationParams;                                           // 0x0014(0x0010) (Edit)
	struct FMainMenuCameraBlendParams                  RotationParams;                                           // 0x0024(0x0010) (Edit)
};

// ScriptStruct OakGame.MainMenuCameraViewpointBlendPair
// 0x0038
struct FMainMenuCameraViewpointBlendPair
{
	EMainMenuViewpointType                             ViewpointA;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EMainMenuViewpointType                             ViewpointB;                                               // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FMainMenuCameraBlendParamsSet               BlendParamsOverride;                                      // 0x0004(0x0034) (Edit)
};

// ScriptStruct OakGame.MainMenuCameraViewpoint
// 0x0008
struct FMainMenuCameraViewpoint
{
	class ACameraActor*                                CameraActor;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.MainMenuCameraViewpointGroup
// 0x0018
struct FMainMenuCameraViewpointGroup
{
	struct FMainMenuCameraViewpoint                    PrimaryViewpoint;                                         // 0x0000(0x0008) (Edit)
	TArray<struct FMainMenuCameraViewpoint>            SecondaryViewpoints;                                      // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.ClaptrapSkitSublevel
// 0x0010
struct FClaptrapSkitSublevel
{
	struct FName                                       SublevelName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UGbxCondition*                               LoadCondition;                                            // 0x0008(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData)
};

// ScriptStruct OakGame.ReplicatedInteractionInfo
// 0x0020
struct FReplicatedInteractionInfo
{
	TArray<class UMaterialInterface*>                  OriginalMaterials;                                        // 0x0000(0x0010) (ZeroConstructor)
	struct FName                                       HandSocketName;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bGhostedMaterialOn;                                       // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAttractEmitterOn;                                        // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
};

// ScriptStruct OakGame.OakAbilityTimerSpec
// 0x0018
struct FOakAbilityTimerSpec
{
	class UOakAbilityTimerData*                        Timer;                                                    // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInfinite;                                              // 0x0008(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRemoveOnPause;                                           // 0x0009(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              Duration;                                                 // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LoopCount;                                                // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EOakAbilityTimerReplacePolicy                      ReplacePolicy;                                            // 0x0014(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EOakAbilityTimerTickPolicy                         TickPolicy;                                               // 0x0015(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
};

// ScriptStruct OakGame.OakAbilityTimer
// 0x0028
struct FOakAbilityTimer
{
	struct FOakAbilityTimerSpec                        Spec;                                                     // 0x0000(0x0018) (Transient)
	float                                              Value;                                                    // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
};

// ScriptStruct OakGame.OakAbilityTimerResult
// 0x000C
struct FOakAbilityTimerResult
{
	EOakAbilityTimerResult                             Result;                                                   // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                PulsesThisFrame;                                          // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TotalPulseTime;                                           // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakAbilityResourceController_WeaponShotModifier
// 0x0010 (0x0028 - 0x0018)
struct FOakAbilityResourceController_WeaponShotModifier : public FGbxAbilityResourceController
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.OakAbilityResourceSpec_WeaponShotModifier
// 0x0018 (0x0028 - 0x0010)
struct FOakAbilityResourceSpec_WeaponShotModifier : public FGbxAbilityResourceSpec
{
	class UOakDamageCauserComponent*                   DamageCauserComponent;                                    // 0x0010(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWeaponShotModifier*                         ShotModifier;                                             // 0x0018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ContextOverride;                                          // 0x0020(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakAbilityResourceController_SirenRushStack
// 0x0010 (0x0028 - 0x0018)
struct FOakAbilityResourceController_SirenRushStack : public FGbxAbilityResourceController
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.OakAbilityResourceSpec_SirenRushStack
// 0x0010 (0x0020 - 0x0010)
struct FOakAbilityResourceSpec_SirenRushStack : public FGbxAbilityResourceSpec
{
	class USirenCharacterComponent*                    SirenComponent;                                           // 0x0010(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USirenRushStackData*                         RushStackData;                                            // 0x0018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakAnimActionAbilityEndAction
// 0x0010
struct FOakAnimActionAbilityEndAction
{
	EOakAnimActionAbilityEndAction                     EndAction;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UGbxCondition*                               Condition;                                                // 0x0008(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
};

// ScriptStruct OakGame.PhaseTranceActivationComboData
// 0x0018
struct FPhaseTranceActivationComboData
{
	class UOakActionAbilityAugmentData_PhaseTrance_Attack* AttackData;                                               // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UOakActionAbilityAugmentData_PhaseTrance_Effect* EffectData;                                               // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UOakActionAbilityAugmentData_PhaseTrance_Element* ElementData;                                              // 0x0010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.PawnInterpolationInfo
// 0x0008
struct FPawnInterpolationInfo
{
	float                                              TranslationTime;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RotationTime;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakElementalGibData
// 0x0160
struct FOakElementalGibData
{
	unsigned char                                      bOverrideDefaultEffects : 1;                              // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverrideDefaultParticleSystem : 1;                       // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverrideDefaultSound : 1;                                // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverrideDefaultDecal : 1;                                // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
	struct FImpactResponseEffect                       Effect;                                                   // 0x0010(0x0140) (Edit)
	class UParticleSystem*                             Particle;                                                 // 0x0150(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UWwiseEvent*                                 Sound;                                                    // 0x0158(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct OakGame.RandomAnimDef
// 0x0020
struct FRandomAnimDef
{
	struct FAnimActionDef                              AnimAsset3rd;                                             // 0x0000(0x0018)
	float                                              Weight;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.ActionSkillFailureCodeDescription
// 0x0020
struct FActionSkillFailureCodeDescription
{
	unsigned char                                      FailureCode;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       FailureCodeText;                                          // 0x0008(0x0028) (Edit)
};

// ScriptStruct OakGame.OakActionAbilityEnumMaskHelper
// 0x0004
struct FOakActionAbilityEnumMaskHelper
{
	uint32_t                                           Value;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakActionCloak_TrackedTargetState
// 0x0020
struct FOakActionCloak_TrackedTargetState
{
	class AActor*                                      TrackedTarget;                                            // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	int                                                ConsecutiveShotCount;                                     // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ShotsRemaining;                                           // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.OakPhaseTranceEffectSpec
// 0x0030
struct FOakPhaseTranceEffectSpec
{
	int                                                EffectMask;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FPhaseTranceActivationComboData             ComboData;                                                // 0x0008(0x0018) (Edit, BlueprintVisible)
	class AActor*                                      EffectTarget;                                             // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageData;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.OakPhaseTranceLockEffectSpec
// 0x0008
struct FOakPhaseTranceLockEffectSpec
{
	bool                                               bIsLocked;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                EffectMask;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakLightProjectileInitializationData
// 0x0018 (0x0158 - 0x0140)
struct FOakLightProjectileInitializationData : public FLightProjectileInitializationData
{
	float                                              BaseStatusEffectChance;                                   // 0x0140(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseStatusEffectDamage;                                   // 0x0144(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseStatusEffectDuration;                                 // 0x0148(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StatusEffectChanceScalar;                                 // 0x014C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StatusEffectDamageScalar;                                 // 0x0150(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StatusEffectDurationScalar;                               // 0x0154(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakAISwarmMovement
// 0x0188
struct FOakAISwarmMovement
{
	struct FGbxParam                                   MaxSpeed;                                                 // 0x0000(0x0080) (Edit)
	struct FGbxParam                                   Acceleration;                                             // 0x0080(0x0080) (Edit)
	struct FGbxParam                                   RotationRate;                                             // 0x0100(0x0080) (Edit)
	EOakAISwarmRotation                                RotationType;                                             // 0x0180(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0181(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.OakAISwarmActor
// 0x01D0
struct FOakAISwarmActor
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DestinationComponent;                                     // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Destination;                                              // 0x0010(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FOakAISwarmMovement                         Movement;                                                 // 0x0018(0x0188) (Transient)
	unsigned char                                      UnknownData00[0x30];                                      // 0x01A0(0x0030) MISSED OFFSET
};

// ScriptStruct OakGame.SpawnDroppedPickupLootRequest
// 0x00B8
struct FSpawnDroppedPickupLootRequest
{
	class AActor*                                      ContextActor;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FSelectedInventoryInfo>              SelectedInventoryInfos;                                   // 0x0008(0x0010) (ZeroConstructor)
	class UItemPoolListInterface*                      ItemPools;                                                // 0x0018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ELootInstancingPolicy                              InstancingPolicy;                                         // 0x0020(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	class AOakPlayerController*                        PlayerToInstanceFor;                                      // 0x0028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStartHidden;                                             // 0x0030(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRandomizeActivateDelay;                                  // 0x0031(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	float                                              ActivateDelay;                                            // 0x0034(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpawnDelay;                                            // 0x0038(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InitialLootMassScale;                                     // 0x003C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      LootSpawnAction;                                          // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0048(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESpawnDroppedPickupLootRequestType                 RequestType;                                              // 0x0050(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	TArray<struct FAttributeEffectData>                AttributeEffects;                                         // 0x0058(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               bDroppedFromAI;                                           // 0x0068(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	class ULootSpawnPatternData*                       DropPattern;                                              // 0x0070(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0078(0x0010) MISSED OFFSET
	class USceneComponent*                             AttachComponent;                                          // 0x0088(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	EPickupLootAttachmentMode                          AttachmentMode;                                           // 0x0090(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	struct FScriptDelegate                             PickupSpawned;                                            // 0x0098(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData06[0x10];                                      // 0x00A8(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.OakModifierData
// 0x0028 (0x0030 - 0x0008)
struct FOakModifierData : public FTableRowBase
{
	struct FDataTableRowHandle                         TargetResolver;                                           // 0x0008(0x0010) (Edit)
	struct FDataTableRowHandle                         Effect;                                                   // 0x0018(0x0010) (Edit)
	float                                              MinValue;                                                 // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.ZoneMapDisplayInfo
// 0x0038
struct FZoneMapDisplayInfo
{
	struct FName                                       LevelName;                                                // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0008(0x0028) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0020(0x0028) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct OakGame.ProjectedMeshResults
// 0x0040
struct FProjectedMeshResults
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct OakGame.OakProjectedShield
// 0x0010
struct FOakProjectedShield
{
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0000(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0008(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct OakGame.BodyMeshLinkedParameters
// 0x0020
struct FBodyMeshLinkedParameters
{
	TArray<class UClass*>                              OwnerClasses;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FCustomizationLinkedParameter>       LinkedParameters;                                         // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.OakCARMenuStatValue
// 0x0010
struct FOakCARMenuStatValue
{
	class UOakCARVehiclePartStat*                      StatData;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.CARSkinMaterials
// 0x0068
struct FCARSkinMaterials
{
	TSoftObjectPtr<class UMaterialInterface>           Materials;                                                // 0x0000(0x0028) (Edit)
	struct FName                                       ComponentName;                                            // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SectionIndex;                                             // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FName>                               Color1Params;                                             // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               Color2Params;                                             // 0x0048(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               Color3Params;                                             // 0x0058(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.CARPreviewMeshOffsetByPart
// 0x0010
struct FCARPreviewMeshOffsetByPart
{
	ECARPartType                                       Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     Offset;                                                   // 0x0004(0x000C) (Edit, IsPlainOldData)
};

// ScriptStruct OakGame.CARPreviewMesh
// 0x00F0
struct FCARPreviewMesh
{
	struct FName                                       ComponentName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Offset;                                                   // 0x0010(0x0030) (Edit, IsPlainOldData)
	TSoftObjectPtr<class USkeletalMesh>                SkinMesh;                                                 // 0x0040(0x0028) (Edit)
	TSoftObjectPtr<class UClass>                       AnimInstanceClass;                                        // 0x0068(0x0028) (Edit)
	TSoftObjectPtr<class UStaticMesh>                  StaticMesh;                                               // 0x0090(0x0028) (Edit)
	TArray<struct FCARSkinMaterials>                   Skin;                                                     // 0x00B8(0x0010) (Edit, ZeroConstructor)
	ECARPartType                                       ParentPart;                                               // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET
	struct FName                                       ParentSocket;                                             // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FCARPreviewMeshOffsetByPart>         OffsetToOtherParts;                                       // 0x00D8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.CARPreviewParticleSystem
// 0x0080
struct FCARPreviewParticleSystem
{
	struct FName                                       ComponentName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Offset;                                                   // 0x0010(0x0030) (Edit, IsPlainOldData)
	TSoftObjectPtr<class UParticleSystem>              Particle;                                                 // 0x0040(0x0028) (Edit)
	ECARPartType                                       ParentPart;                                               // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FName                                       ParentSocket;                                             // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.OakCARVehicleUIInfo
// 0x06E0
struct FOakCARVehicleUIInfo
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0028) (Edit)
	struct FText                                       Description;                                              // 0x0018(0x0028) (Edit)
	TSoftObjectPtr<class UTexture>                     PartIconTexture;                                          // 0x0030(0x0028) (Edit)
	TArray<struct FOakCARMenuStatValue>                DisplayStats;                                             // 0x0058(0x0010) (Edit, ZeroConstructor)
	bool                                               bIsLoading;                                               // 0x0068(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsEmpty;                                                 // 0x0069(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsLocked;                                                // 0x006A(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x006B(0x0005) MISSED OFFSET
	TArray<struct FCARPreviewMesh>                     PreviewMesh;                                              // 0x0070(0x0010) (Edit, ZeroConstructor)
	TArray<struct FCARPreviewParticleSystem>           PreviewParticles;                                         // 0x0080(0x0010) (Edit, ZeroConstructor)
	class UWwiseEvent*                                 OnEquipSound;                                             // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverridePreviewLookAtTransform;                           // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	struct FTransform                                  PreviewLookAtTransform;                                   // 0x00A0(0x0030) (Edit, IsPlainOldData)
	bool                                               BlendPostProcess;                                         // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x00D1(0x000F) MISSED OFFSET
	struct FPostProcessSettings                        PostProcessSetting;                                       // 0x00E0(0x0600) (Edit)
};

// ScriptStruct OakGame.OakChallengeTierRewards
// 0x00E0
struct FOakChallengeTierRewards
{
	struct FAttributeInitializationData                ExperienceReward;                                         // 0x0000(0x0038) (Edit, DisableEditOnInstance)
	struct FAttributeInitializationData                CashReward;                                               // 0x0038(0x0038) (Edit, DisableEditOnInstance)
	struct FAttributeInitializationData                EridiumReward;                                            // 0x0070(0x0038) (Edit, DisableEditOnInstance)
	class UItemPoolData*                               RewardItemPool;                                           // 0x00A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UOakCustomizationData*>               RewardCustomizations;                                     // 0x00B0(0x0010) (Edit, ZeroConstructor)
	TArray<class UWeaponSkinPartData*>                 RewardWeaponSkins;                                        // 0x00C0(0x0010) (Edit, ZeroConstructor)
	TArray<class UWeaponTrinketPartData*>              RewardWeaponTrinkets;                                     // 0x00D0(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.OakChallengeTierRewardsPerInstance
// 0x0018
struct FOakChallengeTierRewardsPerInstance
{
	unsigned char                                      LeagueInstance;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FOakChallengeTierRewards>            TierRewards;                                              // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct OakGame.ChallengeInWorldIcon
// 0x0018
struct FChallengeInWorldIcon
{
	class UChallengeLevelActorComponent*               LevelActorComponent;                                      // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UGFxInWorldIconContainer*                    AssociatedContainer;                                      // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGFxInWorldIcon*                             ChallengeIcon;                                            // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OakGame.ChallengeMinimapIcon
// 0x0028
struct FChallengeMinimapIcon
{
	class UChallengeLevelActorComponent*               LevelActorComponent;                                      // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UGFxMinimapWidget*                           MinimapIconWidget;                                        // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGuid                                       MinimapIconGUID;                                          // 0x0010(0x0010) (Transient, IsPlainOldData)
	bool                                               bCompleted;                                               // 0x0020(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.ChallengeInWorldIconQueueEntry
// 0x0010
struct FChallengeInWorldIconQueueEntry
{
	class UChallengeLevelActorComponent*               LevelActorComponent;                                      // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AGbxPlayerController*                        PlayerToRegister;                                         // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OakGame.DamageChallengeData
// 0x0028
struct FDamageChallengeData
{
	class UWeaponTypeData*                             WeaponType;                                               // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UManufacturerData*                           Manufacturer;                                             // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.IronBearHardPointData
// 0x0020
struct FIronBearHardPointData
{
	class UOakActionAbilityAugmentSlotData*            Slot;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UOakActionAbilityAugmentSlotData*            ModSlot;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UWeaponSlotData*                             WeaponSlot;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EIronBearHardPointOrientation                      Orientation;                                              // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.EchoDeviceButtonState
// 0x0008
struct FEchoDeviceButtonState
{
	bool                                               bPressed;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              AutoReleaseDelay;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.EchoDeviceTargetFXPosition
// 0x0020
struct FEchoDeviceTargetFXPosition
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UGbxGFxObject*                               UIObject;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.PlayerEchoDeviceState
// 0x0260
struct FPlayerEchoDeviceState
{
	class UClass*                                      EchoDeviceBlueprint;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  OverrideScreenDataTable;                                  // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OffsetInterpSpeed;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationInterpSpeed;                                      // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   BaseScreenPositionOffset;                                 // 0x0018(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	float                                              DepthOffset;                                              // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class AEchoDevice*                                 EchoDevice;                                               // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsAttached;                                              // 0x0030(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x147];                                     // 0x0031(0x0147) MISSED OFFSET
	struct FName                                       IdleScreenName;                                           // 0x0178(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0180(0x0010) MISSED OFFSET
	struct FName                                       CurrentScreenName;                                        // 0x0190(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0198(0x0010) MISSED OFFSET
	struct FName                                       NextScreenName;                                           // 0x01A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FEchoDeviceButtonState                      ButtonStates[0x3];                                        // 0x01B0(0x0008) (Transient, IsPlainOldData)
	struct FVector2D                                   DPadAxes;                                                 // 0x01C8(0x0008) (Transient, IsPlainOldData)
	struct FVector2D                                   LastDPadAxes;                                             // 0x01D0(0x0008) (Transient, IsPlainOldData)
	struct FName                                       CurrentMenuName;                                          // 0x01D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector2D                                   CurrentScreenPosition;                                    // 0x01E0(0x0008) (Transient, IsPlainOldData)
	struct FRotator                                    CurrentRotationOffset;                                    // 0x01E8(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x01F4(0x0004) MISSED OFFSET
	struct FEchoDeviceTargetFXPosition                 ProjectionFXPosition;                                     // 0x01F8(0x0020) (Transient)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0218(0x0008) MISSED OFFSET
	struct FTransform                                  CachedInMenuFXTransform;                                  // 0x0220(0x0030) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x10];                                      // 0x0250(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.OakSDUEntry
// 0x0014 (0x0020 - 0x000C)
struct FOakSDUEntry : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UOakSDUData*                                 SDUData;                                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                SDULevel;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.OakSDUContainer
// 0x0048 (0x00F8 - 0x00B0)
struct FOakSDUContainer : public FFastArraySerializer
{
	TArray<struct FOakSDUEntry>                        SDUList;                                                  // 0x00B0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x00C0(0x0028) MISSED OFFSET
	TArray<struct FGbxAttributeModifierHandle>         SDUAttributeModifiers;                                    // 0x00E8(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct OakGame.ReplicatedPlayerEchoDeviceState
// 0x0010
struct FReplicatedPlayerEchoDeviceState
{
	bool                                               bWantsToBeActive;                                         // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	EWeaponEquipType                                   EquipType;                                                // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FName                                       ScreenName;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.PlayerPainSoundData
// 0x0010
struct FPlayerPainSoundData
{
	float                                              HealthPercentThreshold;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UCharacterSoundTag*                          SoundTag;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.PlayerStandInInitData
// 0x0030
struct FPlayerStandInInitData
{
	class UPlayerClassIdentifier*                      PlayerClass;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	class AOakPlayerController*                        OwnerPlayerController;                                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0018(0x0018) MISSED OFFSET
};

// ScriptStruct OakGame.TrackedSlidingImpactEffect
// 0x0030
struct FTrackedSlidingImpactEffect
{
	class USceneComponent*                             Component;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPhysicalMaterial*                           PhysicalMaterial;                                         // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct OakGame.SlidingImpactState
// 0x00E8
struct FSlidingImpactState
{
	class UOakCharacterMovementComponent*              OwnerMovementComponent;                                   // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseEvent*                                 StartAudioEvent;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopAudioEvent;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreSlidingState;                                      // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FHitResult                                  LastImpact;                                               // 0x0020(0x0090) (IsPlainOldData)
	float                                              LastImpactTraceTime;                                      // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	TArray<struct FTrackedSlidingImpactEffect>         Effects;                                                  // 0x00B8(0x0010) (ZeroConstructor)
	struct FName                                       SpeedParticleParameterName;                               // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x00D0(0x0018) MISSED OFFSET
};

// ScriptStruct OakGame.SlideEndedDetails
// 0x0018
struct FSlideEndedDetails
{
	class AActor*                                      HitActor;                                                 // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StopVelocity;                                             // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.GroundSlamEndedDetails
// 0x0008
struct FGroundSlamEndedDetails
{
	bool                                               bInterrupted;                                             // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ImpactVelocity;                                           // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.ResourcePoolSavegameData
// 0x0038
struct FResourcePoolSavegameData
{
	float                                              Amount;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TSoftObjectPtr<class UGameResourceData>            ResourcePath;                                             // 0x0008(0x0028) (Edit, EditConst)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.OakAbilityTreeItemSaveGameData
// 0x0038
struct FOakAbilityTreeItemSaveGameData
{
	TSoftObjectPtr<class UOakPlayerAbilityTreeItemData> ItemAssetPath;                                            // 0x0000(0x0028) (Edit)
	int                                                Points;                                                   // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxPoints;                                                // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TreeIdentifier;                                           // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.OakAbilitySlotSaveGameData
// 0x0050
struct FOakAbilitySlotSaveGameData
{
	TSoftObjectPtr<class UClass>                       AbilityClassPath;                                         // 0x0000(0x0028) (Edit)
	TSoftObjectPtr<class UOakPlayerAbilitySlotData>    SlotAssetPath;                                            // 0x0028(0x0028) (Edit)
};

// ScriptStruct OakGame.OakActionAbilityAugmentSaveGameData
// 0x0078
struct FOakActionAbilityAugmentSaveGameData
{
	TSoftObjectPtr<class UClass>                       ActionAbilityClassPath;                                   // 0x0000(0x0028) (Edit)
	TSoftObjectPtr<class UOakActionAbilityAugmentSlotData> SlotAssetPath;                                            // 0x0028(0x0028) (Edit)
	TSoftObjectPtr<class UOakActionAbilityAugmentData> AugmentAssetPath;                                         // 0x0050(0x0028) (Edit)
};

// ScriptStruct OakGame.OakActionAbilityAugmentConfigurationSaveGameData
// 0x00A0
struct FOakActionAbilityAugmentConfigurationSaveGameData
{
	TSoftObjectPtr<class UClass>                       AbilityClassPath;                                         // 0x0000(0x0028) (Edit)
	TSoftObjectPtr<class UOakActionAbilityAugmentData> AugmentAssetPath;                                         // 0x0028(0x0028) (Edit)
	TSoftObjectPtr<class UOakActionAbilityAugmentSlotData> ModSlotAssetPath;                                         // 0x0050(0x0028) (Edit)
	TSoftObjectPtr<class UOakActionAbilityAugmentData> ModAssetPath;                                             // 0x0078(0x0028) (Edit)
};

// ScriptStruct OakGame.OakPlayerAbilitySaveGameData
// 0x0048
struct FOakPlayerAbilitySaveGameData
{
	int                                                TreeGrade;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AbilityPoints;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FOakAbilityTreeItemSaveGameData>     TreeItemList;                                             // 0x0008(0x0010) (Edit, ZeroConstructor)
	TArray<struct FOakAbilitySlotSaveGameData>         AbilitySlotList;                                          // 0x0018(0x0010) (Edit, ZeroConstructor)
	TArray<struct FOakActionAbilityAugmentSaveGameData> AugmentSlotList;                                          // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<struct FOakActionAbilityAugmentConfigurationSaveGameData> AugmentConfigurationList;                                 // 0x0038(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct OakGame.OakSDUSaveGameData
// 0x0018
struct FOakSDUSaveGameData
{
	int                                                SDULevel;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class FString                                      SDUDataPath;                                              // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.ClientExpectedSaveGameValues
// 0x0080
struct FClientExpectedSaveGameValues
{
	bool                                               bWaitingForServer;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ExperiencePoints;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FResourcePoolSavegameData>           ResourcePools;                                            // 0x0008(0x0010) (ZeroConstructor)
	struct FOakPlayerAbilitySaveGameData               Abilities;                                                // 0x0018(0x0048)
	TArray<struct FInventorySaveGameData>              InventoryList;                                            // 0x0060(0x0010) (ZeroConstructor)
	TArray<struct FOakSDUSaveGameData>                 SDUList;                                                  // 0x0070(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.OutstandingActivityFeedData
// 0x0010
struct FOutstandingActivityFeedData
{
	class UActivityFeedReward*                         FeedData;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ChallengeLevelTargetValue;                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ChallengeLevelCompleted;                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OrphanedUIStandIn
// 0x0010
struct FOrphanedUIStandIn
{
	class AActor*                                      StandInActor;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AOakUIActorContainer*                        Container;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.TriggerFeedbackState
// 0x0020
struct FTriggerFeedbackState
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	class UWeaponTriggerFeedbackAsset*                 WeaponTriggerFeedback;                                    // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakPlayerPath
// 0x0018
struct FOakPlayerPath
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct OakGame.PlayerCombatEncounterData
// 0x0014
struct FPlayerCombatEncounterData
{
	int                                                Experience;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CriticalHits;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Kills;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BadassKills;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RaidBossKills;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakCustomizationInfo
// 0x0010
struct FOakCustomizationInfo
{
	class UOakCustomizationData*                       Customization;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               IsNew;                                                    // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.OakInventoryCustomizationPartInfo
// 0x0010
struct FOakInventoryCustomizationPartInfo
{
	class UOakInventoryCustomizationPartData*          CustomizationPart;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsNew;                                                   // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.CrewQuartersDecorationInfo
// 0x0010
struct FCrewQuartersDecorationInfo
{
	class UCrewQuartersDecorationItemData*             DecorationItemData;                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               IsNew;                                                    // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.CrewQuartersRoomInfo
// 0x0010
struct FCrewQuartersRoomInfo
{
	class UCrewQuartersRoomItemData*                   RoomItemData;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               IsNew;                                                    // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.UnlockedPlayerEchoLogData
// 0x0010
struct FUnlockedPlayerEchoLogData
{
	class UEchoLogData*                                EchoLogData;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.PremiumCurrencyData
// 0x0010
struct FPremiumCurrencyData
{
	class UGbxInventoryCategoryData*                   CategoryData;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.PremiumCurrencyManager
// 0x0020
struct FPremiumCurrencyManager
{
	TArray<struct FPremiumCurrencyData>                Currencies;                                               // 0x0000(0x0010) (ZeroConstructor, Transient)
	class AOakPlayerController*                        Owner;                                                    // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.VaultCardRewardInfo
// 0x0008
struct FVaultCardRewardInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.VaultCardGearRewardInfo
// 0x0008
struct FVaultCardGearRewardInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.VaultCardRewardList
// 0x0058
struct FVaultCardRewardList
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
	TArray<struct FVaultCardRewardInfo>                UnlockedVaultCardRewards;                                 // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FVaultCardRewardInfo>                RedeemedVaultCardRewards;                                 // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FVaultCardGearRewardInfo>            RedeemedVaultCardGearRewards;                             // 0x0048(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.VaultCardPreviousChallenge
// 0x0010
struct FVaultCardPreviousChallenge
{
	int                                                PreviousChallengeSeed;                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      PreviousChallenge;                                        // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.VaultCardCurrentChallengeLists
// 0x0048
struct FVaultCardCurrentChallengeLists
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<class UClass*>                              Challenges;                                               // 0x0008(0x0010) (ZeroConstructor)
	TArray<class UClass*>                              CompletedChallenges;                                      // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FVaultCardPreviousChallenge>         PreviouslyActiveDailyChallenges;                          // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FVaultCardPreviousChallenge>         PreviouslyActiveWeeklyChallenges;                         // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.VaultCardManager
// 0x0128
struct FVaultCardManager
{
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0000(0x00D0) MISSED OFFSET
	TArray<struct FVaultCardRewardList>                VaultCardRewardEntries;                                   // 0x00D0(0x0010) (ZeroConstructor, Transient)
	struct FInventoryReplicationData                   PendingInventoryReward;                                   // 0x00E0(0x0010) (Transient)
	uint32_t                                           PendingRewardVaultCardID;                                 // 0x00F0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00F4(0x000C) MISSED OFFSET
	TArray<struct FVaultCardCurrentChallengeLists>     CurrentVaultCardChallenges;                               // 0x0100(0x0010) (ZeroConstructor, Transient)
	class AOakPlayerController*                        Owner;                                                    // 0x0110(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UVaultCardGeneralData*                       VaultCardGlobalData;                                      // 0x0118(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0120(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.GearSoldByFriendData
// 0x0040
struct FGearSoldByFriendData
{
	class FString                                      GearSerialNumber;                                         // 0x0000(0x0010) (ZeroConstructor)
	int                                                PlayerClassIdentifierHash;                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FUniqueNetIdRepl                            FriendNetId;                                              // 0x0018(0x0028)
};

// ScriptStruct OakGame.ProcessedReward
// 0x0020
struct FProcessedReward
{
	int                                                Currency;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Experience;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	class UInventoryCategoryData*                      CurrencyType;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              SpawnedInventoryItems;                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.OakNPCMailDataEntry
// 0x0050 (0x0058 - 0x0008)
struct FOakNPCMailDataEntry : public FTableRowBase
{
	struct FText                                       SenderDisplayName;                                        // 0x0008(0x0028) (Edit)
	struct FText                                       Subject;                                                  // 0x0020(0x0028) (Edit)
	struct FText                                       Body;                                                     // 0x0038(0x0028) (Edit)
	class UItemPoolData*                               ItemPoolReward;                                           // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct OakGame.CinematicState
// 0x0010
struct FCinematicState
{
	class UOakCinematicTag*                            CinematicTag;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              SequenceTime;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	ECinematicState                                    CurrentState;                                             // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct OakGame.CinematicData
// 0x0068
struct FCinematicData
{
	class UOakCinematicTag*                            CinematicTag;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class ULevelSequence*                              Sequence;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMediaSource*                                Movie;                                                    // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCinematicModeData*                          IntroCinematicMode;                                       // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRepeatable;                                              // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDisallowCutsceneSkip;                                    // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	float                                              IntroTime;                                                // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             IntroScreenParticle;                                      // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCinematicModeData*                          PlayingCinematicMode;                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMissionObjectiveReference                  MissionObjective;                                         // 0x0038(0x0030) (Edit)
};

// ScriptStruct OakGame.RegisteredWeaponShotModifier
// 0x0020
struct FRegisteredWeaponShotModifier
{
	class UWeaponShotModifier*                         Modifier;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     Owner;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     ContextOverride;                                          // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.GoreRegionState
// 0x0060
struct FGoreRegionState
{
	class UGoreDamageData*                             GoreData;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOverrideStumpSocket : 1;                                 // 0x0008(0x0001) (Edit)
	unsigned char                                      bOverrideRootDamageBone : 1;                              // 0x0008(0x0001) (Edit)
	unsigned char                                      bOverrideStumpBoneScale : 1;                              // 0x0008(0x0001) (Edit)
	unsigned char                                      bOverrideLimbSocket : 1;                                  // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FName                                       StumpSocket;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StumpBoneScale;                                           // 0x0018(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FName                                       RootDamageBone;                                           // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LimbSocket;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LimbScale;                                                // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FName                                       EventName;                                                // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0048(0x0018) MISSED OFFSET
};

// ScriptStruct OakGame.GoreRegionEventSummary
// 0x002C
struct FGoreRegionEventSummary
{
	struct FVector_NetQuantize                         HitLocation;                                              // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly)
	struct FVector_NetQuantizeNormal                   HitDirection;                                             // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly)
	struct FVector_NetQuantize                         Origin;                                                   // 0x0018(0x000C) (BlueprintVisible, BlueprintReadOnly)
	float                                              Radius;                                                   // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                GoreRegionIndex;                                          // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.NumPlayersDamageBalanceInfo
// 0x0008
struct FNumPlayersDamageBalanceInfo
{
	int                                                NumPlayers;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              RadiationMultiplier;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.PlayerDifficultyBalanceInfo
// 0x0004
struct FPlayerDifficultyBalanceInfo
{
	float                                              PlayerDamageTakenMultiplier;                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.StatusEffectApplicationDamageDefaultSettings
// 0x0018
struct FStatusEffectApplicationDamageDefaultSettings
{
	class UStatusEffectData*                           StatusEffectData;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PercentBaseDamage;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PercentChance;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.DamageDisplayInfo
// 0x0038
struct FDamageDisplayInfo
{
	class UParticleSystem*                             DamageNumberParticleSystem;                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       DamageNumberParticleEventName;                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       DamageNumberCritParticleEventName;                        // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       DamageNumberResistParticleEventName;                      // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       DamageNumberImmuneParticleEventName;                      // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DamageNumberVehicleLocationOffset;                        // 0x0028(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.IncomingDamageDisplayInfo
// 0x0270
struct FIncomingDamageDisplayInfo
{
	class UStaticMesh*                                 HealthDamageIndicatorStaticMesh;                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 ShieldDamageIndicatorStaticMesh;                          // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 ArmorDamageIndicatorStaticMesh;                           // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DamageIndicatorRelativeLocation;                          // 0x0018(0x000C) (Edit, IsPlainOldData)
	float                                              DamageIndicatorScale;                                     // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinForegroundFOVToDrawIndicators;                         // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageIndicatorDuration;                                  // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageIndicatorFadeDuration;                              // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          ScaleDurationBySeverityCurve;                             // 0x0038(0x0078) (Edit)
	int                                                MaxDamageIndicators;                                      // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DamageIndicatorSphereRelativeLocation;                    // 0x00B4(0x000C) (Edit, IsPlainOldData)
	float                                              DamageIndicatorSphereRelativePitch;                       // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DamageIndicatorSphereRadius;                              // 0x00C4(0x000C) (Edit, IsPlainOldData)
	struct FName                                       DamageIndicatorOpacityAlphaParameterName;                 // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       DamageIndicatorPercentOfLifeMaterialParameterName;        // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNumericRange                               DamageIndicatorCenterFadeScreenPercent;                   // 0x00E0(0x0008) (Edit)
	struct FName                                       DamageIndicatorCenterFadeMaterialParameterName;           // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          DamageIndicatorYawRemappingCurve;                         // 0x00F0(0x0078) (Edit)
	struct FRuntimeFloatCurve                          DamageIndicatorPitchRemappingCurve;                       // 0x0168(0x0078) (Edit)
	float                                              MaxPitchToApplyYawRemapping;                              // 0x01E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MeleeJoltRange;                                           // 0x01E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          MeleeJoltLocationCurve;                                   // 0x01E8(0x0078) (Edit)
	struct FGbxEasingFunc                              AttackerLocationCrouchEasing;                             // 0x0260(0x000C) (Edit)
	float                                              AttackerLocationCrouchTransitionDuration;                 // 0x026C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.IncomingDamagePresentationData
// 0x00E0
struct FIncomingDamagePresentationData
{
	struct FAttributeInitializationData                DamageThreshold;                                          // 0x0000(0x0038) (Edit)
	struct FAttributeInitializationData                DamageScore;                                              // 0x0038(0x0038) (Edit)
	struct FAttributeInitializationData                DamageScoreThreshold;                                     // 0x0070(0x0038) (Edit)
	class UFeedbackData*                               FeedbackData;                                             // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 HealthAudioEvent;                                         // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 ShieldAudioEvent;                                         // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 ArmorAudioEvent;                                          // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageSeverityParticleParamValue;                         // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ArmsAnimationFlinchStrength;                              // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRadialBlur;                                           // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	struct FRadialBlurSelection                        RadialBlur;                                               // 0x00D4(0x000C) (Edit)
};

// ScriptStruct OakGame.IncomingDamagePresentationGroup
// 0x0380
struct FIncomingDamagePresentationGroup
{
	struct FIncomingDamagePresentationData             PresentationLevels[0x4];                                  // 0x0000(0x00E0) (Edit)
};

// ScriptStruct OakGame.IncomingDamagePresentationSource
// 0x0390
struct FIncomingDamagePresentationSource
{
	TArray<class UClass*>                              DamageSources;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FIncomingDamagePresentationGroup            PresentationGroup;                                        // 0x0010(0x0380) (Edit)
};

// ScriptStruct OakGame.IncomingDamagePresentationGenericData
// 0x0001
struct FIncomingDamagePresentationGenericData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct OakGame.IncomingDamagePresentationGlobalInfo
// 0x0080
struct FIncomingDamagePresentationGlobalInfo
{
	class UParticleSystem*                             ScreenParticleHealth;                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ScreenParticleShield;                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ScreenParticleArmor;                                      // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ScreenParticleHealth_SplitScreen;                         // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ScreenParticleShield_SplitScreen;                         // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ScreenParticleArmor_SplitScreen;                          // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       DirectionalParticleEventName;                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       DirectionalEmitterName;                                   // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumDirectionalParticles;                               // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FName                                       FullParticleEventName;                                    // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       FullEmitterName;                                          // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       DamageSeverityParameterName;                              // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       DamageDirectionParameterName;                             // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageParticleDirectionQuantization;                      // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AspectRatioThresholdToUseWidescreenParticles;             // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FlinchAnimationStregthNoise;                              // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FlinchAnimationAngleNoise;                                // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RadialBlurMaxDistance;                                    // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FIncomingDamagePresentationGenericData      PresentationLevels[0x4];                                  // 0x007C(0x0001) (Edit, IsPlainOldData)
};

// ScriptStruct OakGame.OakPipelineDamageInput
// 0x0050 (0x0200 - 0x01B0)
struct FOakPipelineDamageInput : public FPipelineDamageInput
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x01B0(0x0040) MISSED OFFSET
	class UGameStatData*                               KillStat;                                                 // 0x01F0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01F8(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.AmputateLimbData
// 0x00C0
struct FAmputateLimbData
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoneScale;                                                // 0x0008(0x000C) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UStaticMesh*                                 StumpMesh;                                                // 0x0018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             StumpParticles;                                           // 0x0020(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceConstant*                   StumpMaterialOverride;                                    // 0x0028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceConstant*                   StumpDecal;                                               // 0x0030(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StumpDecalSize;                                           // 0x0038(0x000C) (BlueprintVisible, IsPlainOldData)
	bool                                               bStumpReceivesDecal;                                      // 0x0044(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	class UWwiseEvent*                                 StumpSound;                                               // 0x0048(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  StumpTransform;                                           // 0x0050(0x0030) (BlueprintVisible, IsPlainOldData)
	class UObject*                                     LimbMesh;                                                 // 0x0080(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             LimbParticles;                                            // 0x0088(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      LimbActorClass;                                           // 0x0090(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceConstant*                   LimbMaterialOverride;                                     // 0x0098(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInheritStumpMaterialParameters;                          // 0x00A0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMaterialParameterCopyMethod                       InheritStumpMaterialParametersMethod;                     // 0x00A1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInheritLimbMaterialParameters;                           // 0x00A2(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMaterialParameterCopyMethod                       InheritLimbMaterialParametersMethod;                      // 0x00A3(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bScaleLimbToStump;                                        // 0x00A4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00A5(0x0003) MISSED OFFSET
	struct FName                                       LimbSocket;                                               // 0x00A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LimbScale;                                                // 0x00B0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LimbMassScale;                                            // 0x00B4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SourceMaterialIndex;                                      // 0x00B8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.AvailableManufacturer
// 0x0018
struct FAvailableManufacturer
{
	class UManufacturerData*                           Manufacturer;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UOakDebugWeaponBuilderButton*                OptionButton;                                             // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.AvailableAmmoType
// 0x0018
struct FAvailableAmmoType
{
	class UGbxAmmoTypeData*                            AmmoType;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UOakDebugWeaponBuilderButton*                OptionButton;                                             // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.AvailableInventoryBalanceData
// 0x0018
struct FAvailableInventoryBalanceData
{
	class UInventoryBalanceData*                       InventoryBalance;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UOakDebugWeaponBuilderButton*                OptionButton;                                             // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.AvailablePartData
// 0x0050
struct FAvailablePartData
{
	struct FWeightedActorPartData                      PartData;                                                 // 0x0000(0x0040)
	class UOakDebugWeaponBuilderButton*                OptionButton;                                             // 0x0040(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.DeveloperPerk
// 0x0018
struct FDeveloperPerk
{
	TArray<struct FKey>                                KeyCombo;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      PerkTypeEnumIdx;                                          // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.EchoLogTrackingInfo
// 0x0020
struct FEchoLogTrackingInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	struct FScriptDelegate                             Event;                                                    // 0x0010(0x0014) (ZeroConstructor, Transient, InstancedReference)
};

// ScriptStruct OakGame.DialogScriptToLoadEntry
// 0x0038
struct FDialogScriptToLoadEntry
{
	class FString                                      DialogScriptLevelName;                                    // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst)
	TSoftObjectPtr<class UDialogScriptData>            DialogScriptToLoad;                                       // 0x0010(0x0028) (Edit, DisableEditOnInstance)
};

// ScriptStruct OakGame.OakDownloadableEntitlementCurrencyType
// 0x0010
struct FOakDownloadableEntitlementCurrencyType
{
	struct FName                                       CurrencyName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDownloadableEntitlementPartData_Currency*   CurrencyPartData;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct OakGame.DownloadableEntitlementSetItem
// 0x0030
struct FDownloadableEntitlementSetItem
{
	int                                                ID;                                                       // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Count;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       Description;                                              // 0x0008(0x0028) (Edit, DisableEditOnInstance)
	class FString                                      SerialNumber;                                             // 0x0020(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct OakGame.GRMLNHoverProfile
// 0x0038
struct FGRMLNHoverProfile
{
	EOakDroneMovementMode                              MovementMode;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FDataTableValueHandle                       Radius;                                                   // 0x0008(0x0018) (Edit, DisableEditOnInstance)
	struct FDataTableValueHandle                       Altitude;                                                 // 0x0020(0x0018) (Edit, DisableEditOnInstance)
};

// ScriptStruct OakGame.GRMLNBeamConfiguration
// 0x0128
struct FGRMLNBeamConfiguration
{
	struct FEnvQueryParams                             TargetQuery;                                              // 0x0000(0x00B8) (Edit, DisableEditOnInstance)
	struct FAttributeInitializationData                BeamDuration;                                             // 0x00B8(0x0038) (Edit, DisableEditOnInstance)
	struct FAttributeInitializationData                CooldownDuration;                                         // 0x00F0(0x0038) (Edit, DisableEditOnInstance)
};

// ScriptStruct OakGame.GRMLNHardPointDamageData
// 0x0018
struct FGRMLNHardPointDamageData
{
	class UClass*                                      DamageTypeClass;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 WeaponFireEvent;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             MuzzleFlash;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct OakGame.GRMLNHardpointData
// 0x0168
struct FGRMLNHardpointData
{
	EGRMLNHardpointType                                Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsModUnlockedHardpoint;                                  // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EGRMLNModType                                      ModUnlock;                                                // 0x0002(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0003(0x0005) MISSED OFFSET
	struct FAttributeInitializationData                FireRate;                                                 // 0x0008(0x0038) (Edit, DisableEditOnInstance)
	struct FAttributeInitializationData                Ammunition;                                               // 0x0040(0x0038) (Edit, DisableEditOnInstance)
	struct FAttributeInitializationData                BurstRefireRate;                                          // 0x0078(0x0038) (Edit, DisableEditOnInstance)
	struct FAttributeInitializationData                Damage;                                                   // 0x00B0(0x0038) (Edit, DisableEditOnInstance)
	class UClass*                                      LightProjectileDataClass;                                 // 0x00E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGRMLNHardPointDamageData                   NormalDamageData;                                         // 0x00F0(0x0018) (Edit, DisableEditOnInstance)
	struct FGRMLNHardPointDamageData                   CryoDamageData;                                           // 0x0108(0x0018) (Edit, DisableEditOnInstance)
	TArray<struct FName>                               WeaponFireSockets;                                        // 0x0120(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              RandomRangeMin;                                           // 0x0130(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RandomRangeMax;                                           // 0x0134(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AOakDroneProjectile_GRMLN*                   Owner;                                                    // 0x0138(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0140(0x0028) MISSED OFFSET
};

// ScriptStruct OakGame.GRMLNBeamData
// 0x00F8
struct FGRMLNBeamData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class AOakDroneProjectile_GRMLN*                   Owner;                                                    // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      CurrentTarget;                                            // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UDamageComponent*                            TargetDamageComponent;                                    // 0x0018(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FEnvQueryParams                             TargetQueryParams;                                        // 0x0020(0x00B8) (Transient)
	unsigned char                                      UnknownData01[0x20];                                      // 0x00D8(0x0020) MISSED OFFSET
};

// ScriptStruct OakGame.GRMLNStaticFieldData
// 0x0028 (0x0120 - 0x00F8)
struct FGRMLNStaticFieldData : public FGRMLNBeamData
{
	TScriptInterface<class UShieldProviderInterface>   ShieldProviderInterface;                                  // 0x00F8(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0108(0x0018) MISSED OFFSET
};

// ScriptStruct OakGame.GRMLNBadDoseData
// 0x0000 (0x00F8 - 0x00F8)
struct FGRMLNBadDoseData : public FGRMLNBeamData
{

};

// ScriptStruct OakGame.DevMapToMapId
// 0x0010
struct FDevMapToMapId
{
	struct FName                                       DevMapName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           MapID;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.PlayerClassToClassId
// 0x0018
struct FPlayerClassToClassId
{
	class FString                                      PlayerClassName;                                          // 0x0000(0x0010) (ZeroConstructor)
	uint32_t                                           ClassId;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.ConditionalSavegameExpression
// 0x0018
struct FConditionalSavegameExpression
{
	class UGbxCondition*                               Condition;                                                // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      SaveGame;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Profile;                                                  // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.LootAudioStinger
// 0x0010
struct FLootAudioStinger
{
	TWeakObjectPtr<class AActor>                       SoundActor;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 Sound;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakHitRegionModifierData
// 0x0048
struct FOakHitRegionModifierData
{
	struct FAttributeInitializationData                DamageScale;                                              // 0x0000(0x0038) (Edit)
	class UGbxCondition*                               Condition;                                                // 0x0038(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakInventoryNameData
// 0x0010
struct FOakInventoryNameData
{
	class UInventoryPartData*                          Part;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UInventoryNamePartData*                      NamePart;                                                 // 0x0008(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct OakGame.ExtractedOakInventoryCombinationNameData
// 0x0018
struct FExtractedOakInventoryCombinationNameData
{
	struct FName                                       FirstPartTag;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       SecondPartTag;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UInventoryNamePartData*                      NamePart;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakJAKFeedbackData
// 0x0010
struct FOakJAKFeedbackData
{
	class UParticleSystem*                             ParticleEffect;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 SoundEvent;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakLightBeamInitializationData
// 0x0010 (0x0138 - 0x0128)
struct FOakLightBeamInitializationData : public FLightBeamInitializationData
{
	float                                              BaseStatusEffectChance;                                   // 0x0128(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseStatusEffectDamage;                                   // 0x012C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseStatusEffectDuration;                                 // 0x0130(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.WeightedLoadingTooltip
// 0x0020
struct FWeightedLoadingTooltip
{
	struct FText                                       ToolTipText;                                              // 0x0000(0x0028) (Edit)
	float                                              Weight;                                                   // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.MapCharacterPhysicsSettings
// 0x0004
struct FMapCharacterPhysicsSettings
{
	float                                              PlayerAirControlScale;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakModifierSet
// 0x0050
struct FOakModifierSet
{
	bool                                               bDisplay;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       ModifierName;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0010(0x0028) (Edit)
	struct FText                                       DisplayDesc;                                              // 0x0028(0x0028) (Edit)
	TArray<struct FDataTableRowHandle>                 Modifiers;                                                // 0x0040(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.WeightedOakModifierSet
// 0x0068
struct FWeightedOakModifierSet
{
	float                                              Weight;                                                   // 0x0000(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FOakModifierSet                             ModifierSet;                                              // 0x0008(0x0050) (Deprecated)
	TArray<struct FName>                               MutualExclusionTags;                                      // 0x0058(0x0010) (ZeroConstructor, Deprecated)
};

// ScriptStruct OakGame.MayhemModifierDifficultyLevel
// 0x0070
struct FMayhemModifierDifficultyLevel
{
	int                                                MayhemLevel;                                              // 0x0000(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FOakModifierSet                             StaticModifiers;                                          // 0x0008(0x0050) (Deprecated)
	int                                                RandomModifierCount;                                      // 0x0058(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	TArray<struct FWeightedOakModifierSet>             RandomModifierSets;                                       // 0x0060(0x0010) (ZeroConstructor, Deprecated)
};

// ScriptStruct OakGame.MayhemUILevelData
// 0x0090
struct FMayhemUILevelData
{
	struct FText                                       ModEnemies[0x3];                                          // 0x0000(0x0028) (Deprecated)
	struct FText                                       ModCurrency;                                              // 0x0048(0x0028) (Deprecated)
	struct FText                                       ModDropRate;                                              // 0x0060(0x0028) (Deprecated)
	struct FText                                       ModXP;                                                    // 0x0078(0x0028) (Deprecated)
};

// ScriptStruct OakGame.InstancedPlayerOwnerInfo
// 0x0018
struct FInstancedPlayerOwnerInfo
{
	TWeakObjectPtr<class AOakPlayerController>         InstancedPlayerOwner;                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyShowOnPlayerOwner;                                   // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UZoneMapPOITypeData*                         PointOfInterestType;                                      // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.MissionStarterGear
// 0x0058
struct FMissionStarterGear
{
	class UMissionObjective*                           Objective;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TSoftObjectPtr<class UItemPoolData>                StarterGearItemPool;                                      // 0x0008(0x0028) (Edit)
	TSoftObjectPtr<class UInventoryCategoryData>       InventoryCategory;                                        // 0x0030(0x0028) (Edit)
};

// ScriptStruct OakGame.AutoplayAction
// 0x0020
struct FAutoplayAction
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct OakGame.AutoplayMissionState
// 0x0030
struct FAutoplayMissionState
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<struct FAutoplayAction>                     PossibleActions;                                          // 0x0008(0x0010) (ZeroConstructor, Transient)
	class UClass*                                      CurrentMission;                                           // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UObject*                                     CurrentObjective;                                         // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.AutoplayCombatState
// 0x0030
struct FAutoplayCombatState
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	class AActor*                                      EnemyTarget;                                              // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0018(0x0018) MISSED OFFSET
};

// ScriptStruct OakGame.MissionSpawnerFailsafeData
// 0x0010
struct FMissionSpawnerFailsafeData
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                FailsafeSeconds;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.LevelSyncCompletedMission
// 0x0010
struct FLevelSyncCompletedMission
{
	class UClass*                                      MissionClass;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.MusicLayerInfo
// 0x0020
struct FMusicLayerInfo
{
	class UWwiseState*                                 NoneState;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseState*                                 OnState;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseState*                                 OffState;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseState*                                 ExitCombatState;                                          // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.MusicInterestASR
// 0x0010
struct FMusicInterestASR
{
	float                                              SustainValue;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttackTimeSeconds;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SustainTimeSeconds;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DecayTimeSeconds;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.MusicLayer
// 0x0008
struct FMusicLayer
{
	float                                              InterestMin;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterestMax;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.MusicPart
// 0x0060
struct FMusicPart
{
	int                                                UpdateIntervalInBeats;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterestMin;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterestMax;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TMap<EOakMusicLayer, struct FMusicLayer>           AssociatedMusicLayers;                                    // 0x0010(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct OakGame.MusicSection
// 0x0058
struct FMusicSection
{
	float                                              CombatMin;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CombatMax;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<EOakMusicPart, struct FMusicPart>             AssociatedMusicParts;                                     // 0x0008(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct OakGame.OakNavReverseState
// 0x0018
struct FOakNavReverseState
{
	class UWorld*                                      World;                                                    // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UOakNavComponent*                            NavComp;                                                  // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.OakVehicleNavCorrecter
// 0x00B8
struct FOakVehicleNavCorrecter
{
	class UWorld*                                      World;                                                    // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AGbxNavWorld*                                GbxNavWorld;                                              // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UOakNavComponent*                            OakNavComp;                                               // 0x0010(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AOakVehicle*                                 OakVehicle;                                               // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FNavAgentProperties                         NavAgentProps;                                            // 0x0020(0x0030) (Transient)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0050(0x0068) MISSED OFFSET
};

// ScriptStruct OakGame.StuckTeleport
// 0x0020
struct FStuckTeleport
{
	bool                                               bEnableStuckTeleport;                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ForwardStuckValue;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CantMoveValuePerSec;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StuckTeleportTrigger;                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StuckDecay;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowDebug;                                               // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0015(0x000B) MISSED OFFSET
};

// ScriptStruct OakGame.RubberbandSpeedData
// 0x0040
struct FRubberbandSpeedData
{
	TWeakObjectPtr<class AActor>                       RubberBandTarget;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinDistance;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinDistanceSpeed;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistanceSpeed;                                         // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBehindOnly;                                              // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	class AActor*                                      SplineReference;                                          // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SplineDistanceOffset;                                     // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSpline;                                               // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	class USplineComponent*                            CachedSplineComponent;                                    // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.OnlineNetworkOptionData
// 0x0038
struct FOnlineNetworkOptionData
{
	struct FText                                       Label;                                                    // 0x0000(0x0028) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0018(0x0028) (BlueprintVisible, BlueprintReadOnly)
	ENetworkType                                       NetworkType;                                              // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EInviteType                                        InviteType;                                               // 0x0031(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct OakGame.TriggeredPassiveAbilityEffect
// 0x0048
struct FTriggeredPassiveAbilityEffect
{
	class UStatusEffectData*                           StatusEffectData;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAttributeInitializationData                Duration;                                                 // 0x0008(0x0038) (Edit, DisableEditOnInstance)
	bool                                               bApplyToPlayer;                                           // 0x0040(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EAdditionalTriggeredEffectTargets                  AdditionalEffectTargets;                                  // 0x0041(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUsePlayerForAdditionalEffectTargetContext;               // 0x0042(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWantsEffectEndedEvent;                                   // 0x0043(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanTriggerMultipleTimesPerFrame;                         // 0x0044(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
};

// ScriptStruct OakGame.OakPassiveAbilityHUDIconData
// 0x0020
struct FOakPassiveAbilityHUDIconData
{
	EOakPassiveAbilityHUDIconActivationType            ActivationType;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UStatusEffectData*                           CustomStatusEffectData;                                   // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UOakAbilityTimerData*                        AbilityTimerData;                                         // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UOakPlayerAbilityHUDItemData*                HUDItemData;                                              // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct OakGame.OakPassiveAbilitySirenGhostArmControllerSpec
// 0x0018
struct FOakPassiveAbilitySirenGhostArmControllerSpec
{
	EOakPassiveAbilitySirenArmDurationType             DurationType;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UOakAbilityTimerData*                        TimerData;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStatusEffectData*                           StatusEffectData;                                         // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.BonusAttributeModifierUpgrade
// 0x0040
struct FBonusAttributeModifierUpgrade
{
	int                                                GradeToApplyAt;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FAttributeInitializationData                BonusUpgrade;                                             // 0x0008(0x0038) (Edit)
};

// ScriptStruct OakGame.BranchColorInfo
// 0x0060
struct FBranchColorInfo
{
	class FString                                      FrameColorName;                                           // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FLinearColor                                FrameColorHeader;                                         // 0x0010(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                FrameColorBackground;                                     // 0x0020(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                IconColor;                                                // 0x0030(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                IconBackgroundColor;                                      // 0x0040(0x0010) (Edit, IsPlainOldData)
	class FString                                      IllustrationName;                                         // 0x0050(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.PassiveAbilityBuffData
// 0x0108
struct FPassiveAbilityBuffData
{
	struct FSoftObjectPath                             PassiveAbilityClassPath;                                  // 0x0000(0x0018) (Deprecated)
	TSoftObjectPtr<class UClass>                       PassiveAbilityClassPtr;                                   // 0x0018(0x0028) (Edit, DisableEditOnInstance)
	struct FBranchColorInfo                            TreeBranchColorInfo;                                      // 0x0040(0x0060) (Edit, EditConst)
	class FString                                      ItemFrameName;                                            // 0x00A0(0x0010) (Edit, ZeroConstructor, EditConst)
	class FString                                      AbilityNameLocNamespace;                                  // 0x00B0(0x0010) (Edit, ZeroConstructor, EditConst)
	class FString                                      AbilityNameLocKey;                                        // 0x00C0(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FAttributeInitializationData                GradeBonusInitializer;                                    // 0x00D0(0x0038) (Edit, DisableEditOnInstance)
};

// ScriptStruct OakGame.PawnAttachCameraModeOptions
// 0x0028
struct FPawnAttachCameraModeOptions
{
	float                                              AttachingBlendInTimeOverride;                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PersistentBlendInTimeOverride;                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PersistentBlendOutTimeOverride;                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DetachingBlendOutTimeOverride;                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachingMode;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       PersistentMode;                                           // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       DetachingMode;                                            // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakPhaseWebSphereBeamData
// 0x0030
struct FOakPhaseWebSphereBeamData
{
	struct FName                                       BeamEmitterName;                                          // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             BeamParticleSystem;                                       // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             BeamSourceComponent;                                      // 0x0010(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SourceSocketName;                                         // 0x0018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class USceneComponent>              BeamDestComponent;                                        // 0x0020(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       DestSocketName;                                           // 0x0028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakPhaseWebSphereLinkedTargetItem
// 0x0054 (0x0060 - 0x000C)
struct FOakPhaseWebSphereLinkedTargetItem : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class AOakCharacter*                               LinkedTarget;                                             // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FOakPhaseWebSphereBeamData                  BeamData;                                                 // 0x0018(0x0030) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UParticleSystemComponent*                    BeamComponent;                                            // 0x0048(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.OakPhaseWebSphereLinkedTargetList
// 0x0018 (0x00C8 - 0x00B0)
struct FOakPhaseWebSphereLinkedTargetList : public FFastArraySerializer
{
	class AOakPhaseWebSphere*                          Owner;                                                    // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FOakPhaseWebSphereLinkedTargetItem>  Items;                                                    // 0x00B8(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.OakPhaseWebSphereListLock
// 0x0020
struct FOakPhaseWebSphereListLock
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class AOakPhaseWebSphere*                          Owner;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class AOakCharacter*>                       PendingRemoves;                                           // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.OakPhaseWebSphere_SharedDamageData
// 0x0018
struct FOakPhaseWebSphere_SharedDamageData
{
	float                                              SharedDamage;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageSource;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakPlayerAbilitySlot
// 0x0014 (0x0020 - 0x000C)
struct FOakPlayerAbilitySlot : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UOakPlayerAbilitySlotData*                   SlotData;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      AbilityClass;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakPlayerAbilitySlotList
// 0x0018 (0x00C8 - 0x00B0)
struct FOakPlayerAbilitySlotList : public FFastArraySerializer
{
	class UOakPlayerAbilityManagerComponent*           Owner;                                                    // 0x00B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FOakPlayerAbilitySlot>               Items;                                                    // 0x00B8(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.OakActionAbilityAugmentSlot
// 0x001C (0x0028 - 0x000C)
struct FOakActionAbilityAugmentSlot : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UClass*                                      ActionAbilityClass;                                       // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UOakActionAbilityAugmentSlotData*            SlotData;                                                 // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class UOakActionAbilityAugmentData*                AugmentData;                                              // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakActionAbilityAugmentSlotList
// 0x0018 (0x00C8 - 0x00B0)
struct FOakActionAbilityAugmentSlotList : public FFastArraySerializer
{
	class UOakPlayerAbilityManagerComponent*           Owner;                                                    // 0x00B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FOakActionAbilityAugmentSlot>        Items;                                                    // 0x00B8(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.OakPlayerAbilityHUDItemValue
// 0x0008
struct FOakPlayerAbilityHUDItemValue
{
	int                                                StackCount;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PercentComplete;                                          // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakPlayerAbilityHUDItem
// 0x002C (0x0038 - 0x000C)
struct FOakPlayerAbilityHUDItem : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TScriptInterface<class UOakPlayerAbilityHUDItemValueProviderInterface> Provider;                                                 // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UOakPlayerAbilityHUDItemData*                HUDItemData;                                              // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FOakPlayerAbilityHUDItemValue               Value;                                                    // 0x0028(0x0008)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.OakPlayerAbilityHUDItemList
// 0x0018 (0x00C8 - 0x00B0)
struct FOakPlayerAbilityHUDItemList : public FFastArraySerializer
{
	class UOakPlayerAbilityManagerComponent*           Owner;                                                    // 0x00B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FOakPlayerAbilityHUDItem>            Items;                                                    // 0x00B8(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.OakActionAbilityAugmentConfigurationSetting
// 0x0010
struct FOakActionAbilityAugmentConfigurationSetting
{
	class UOakActionAbilityAugmentSlotData*            ModSlotData;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UOakActionAbilityAugmentData*                ModData;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakActionAbilityAugmentConfiguration
// 0x0018
struct FOakActionAbilityAugmentConfiguration
{
	class UOakActionAbilityAugmentData*                AugmentData;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FOakActionAbilityAugmentConfigurationSetting> Settings;                                                 // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.OakActionAbilityAugmentSlotConfiguration
// 0x0020
struct FOakActionAbilityAugmentSlotConfiguration
{
	class UClass*                                      ActionAbilityClass;                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UOakActionAbilityAugmentSlotData*            SlotData;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FOakActionAbilityAugmentConfiguration> AugmentConfigurations;                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.OakActionAbilityAugmentSlotConfigurationList
// 0x0018
struct FOakActionAbilityAugmentSlotConfigurationList
{
	class UOakPlayerAbilityManagerComponent*           Owner;                                                    // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FOakActionAbilityAugmentSlotConfiguration> SlotConfigurations;                                       // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.OakAbilitySlot
// 0x0014
struct FOakAbilitySlot
{
	int                                                LevelUnlock;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       SlotID;                                                   // 0x0004(0x0010) (Edit, EditConst, IsPlainOldData)
};

// ScriptStruct OakGame.OakActionAbilitySlot
// 0x0014 (0x0028 - 0x0014)
struct FOakActionAbilitySlot : public FOakAbilitySlot
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FOakAbilitySlot>                     AugmentSlots;                                             // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.OakPlayerAbilityAllyQueryResult
// 0x0020
struct FOakPlayerAbilityAllyQueryResult
{
	TArray<class AOakCharacter_Player*>                Allies;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class AActor*>                              Companions;                                               // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct OakGame.AbilityTreeBranch
// 0x0028
struct FAbilityTreeBranch
{
	class UOakPlayerAbilityTree*                       Owner;                                                    // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UOakPlayerAbilityTreeBranchData*             BranchData;                                               // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct OakGame.AbilityTreeTier
// 0x0038
struct FAbilityTreeTier
{
	class UOakPlayerAbilityTree*                       Owner;                                                    // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UOakPlayerAbilityTreeTierData*               TierData;                                                 // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0010(0x0028) MISSED OFFSET
};

// ScriptStruct OakGame.AbilityTreeItem
// 0x0030
struct FAbilityTreeItem
{
	class UOakPlayerAbilityTree*                       Owner;                                                    // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UOakPlayerAbilityTreeItemData*               ItemData;                                                 // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct OakGame.ViewLeadingInfo
// 0x0068
struct FViewLeadingInfo
{
	struct FViewLeadingTranslationInfo                 Translation;                                              // 0x0000(0x002C) (Edit)
	struct FViewLeadingRotationInfo                    Rotation;                                                 // 0x002C(0x003C) (Edit)
};

// ScriptStruct OakGame.MissionDeliveryData
// 0x0018
struct FMissionDeliveryData
{
	TArray<class UClass*>                              Missions;                                                 // 0x0000(0x0010) (ZeroConstructor)
	class AActor*                                      MissionGiver;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakProfileLastInventoryFilterInfo
// 0x0010
struct FOakProfileLastInventoryFilterInfo
{
	struct FName                                       SlotTypeId;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                LastFilterIndex;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.OakProfileMenuTutorialInfo
// 0x0018
struct FOakProfileMenuTutorialInfo
{
	TArray<struct FName>                               SeenTutorials;                                            // 0x0000(0x0010) (ZeroConstructor)
	bool                                               bTutorialsDisabled;                                       // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bTutorialsAllowedInNonGameModes;                          // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasSeenFastTravelPrompt;                                 // 0x0012(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0013(0x0005) MISSED OFFSET
};

// ScriptStruct OakGame.OakFriendEncounterData
// 0x0010
struct FOakFriendEncounterData
{
	uint32_t                                           NumEncounters;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	int64_t                                            TimeLastEncounter;                                        // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.GameStatSaveGameData
// 0x0030
struct FGameStatSaveGameData
{
	int                                                StatValue;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TSoftObjectPtr<class UGameStatData>                StatPath;                                                 // 0x0008(0x0028) (Edit, EditConst)
};

// ScriptStruct OakGame.OakMailItem
// 0x00B8
struct FOakMailItem
{
	EMailItemType                                      MailItemType;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       SenderDisplayName;                                        // 0x0008(0x0028)
	struct FText                                       Subject;                                                  // 0x0020(0x0028)
	struct FText                                       Body;                                                     // 0x0038(0x0028)
	class FString                                      GearSerialNumber;                                         // 0x0050(0x0010) (ZeroConstructor)
	uint32_t                                           MissionHash;                                              // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	class FString                                      MailGuid;                                                 // 0x0068(0x0010) (ZeroConstructor)
	struct FDateTime                                   DateSent;                                                 // 0x0078(0x0008)
	struct FDateTime                                   ExpirationDate;                                           // 0x0080(0x0008)
	struct FUniqueNetIdRepl                            FromPlayerId;                                             // 0x0088(0x0028)
	bool                                               bHasBeenRead;                                             // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.OakCustomizationSaveGameData
// 0x0030
struct FOakCustomizationSaveGameData
{
	bool                                               IsNew;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TSoftObjectPtr<class UOakCustomizationData>        CustomizationAssetPath;                                   // 0x0008(0x0028)
};

// ScriptStruct OakGame.GuardianRankRewardSaveGameData
// 0x0030
struct FGuardianRankRewardSaveGameData
{
	int                                                NumTokens;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TSoftObjectPtr<class UGuardianRankRewardData>      RewardDataPath;                                           // 0x0008(0x0028)
};

// ScriptStruct OakGame.GuardianRankProfileData
// 0x0030
struct FGuardianRankProfileData
{
	int                                                AvailableTokens;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FGuardianRankRewardSaveGameData>     RankRewards;                                              // 0x0008(0x0010) (ZeroConstructor)
	int                                                GuardianRank;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	int64_t                                            GuardianExperience;                                       // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                RankRewardRandomSeed;                                     // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.CrewQuartersDecorationItemSaveGameData
// 0x0030
struct FCrewQuartersDecorationItemSaveGameData
{
	bool                                               IsNew;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TSoftObjectPtr<class UCrewQuartersDecorationItemData> DecorationItemAssetPath;                                  // 0x0008(0x0028)
};

// ScriptStruct OakGame.CrewQuartersRoomItemSaveGameData
// 0x0018
struct FCrewQuartersRoomItemSaveGameData
{
	bool                                               IsNew;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class FString                                      RoomItemAssetPath;                                        // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.OakVaultCardPreviousChallengeData
// 0x0008
struct FOakVaultCardPreviousChallengeData
{
	int                                                PreviousChallengeSeed;                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PreviousChallengeID;                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakChallengeStatSaveGameData
// 0x0030
struct FOakChallengeStatSaveGameData
{
	int                                                CurrentStatValue;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TSoftObjectPtr<class UGameStatData>                ChallengeStatPath;                                        // 0x0008(0x0028)
};

// ScriptStruct OakGame.OakChallengeSaveGameData
// 0x0060
struct FOakChallengeSaveGameData
{
	int                                                CompletedCount;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsActive;                                                // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCurrentlyCompleted;                                      // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	int                                                CompletedProgressLevel;                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ProgressCounter;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FOakChallengeStatSaveGameData>       StatInstanceState;                                        // 0x0010(0x0010) (ZeroConstructor)
	TArray<bool>                                       RewardTiersClaimed;                                       // 0x0020(0x0010) (ZeroConstructor)
	TSoftObjectPtr<class UClass>                       ChallengeClassPath;                                       // 0x0030(0x0028)
	class UChallenge*                                  DefaultChallengeObj;                                      // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OakGame.RecentlyResistedAttackData
// 0x0010
struct FRecentlyResistedAttackData
{
	class AActor*                                      DamagedActor;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.RecentIncomingDamageData
// 0x0048
struct FRecentIncomingDamageData
{
	class AActor*                                      DamageInstigator;                                         // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
	class UDamageComponent*                            DamageInstigatorDamageComponent;                          // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector_NetQuantize                         DamageInstigatorLocation;                                 // 0x0020(0x000C) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0xC];                                       // 0x002C(0x000C) MISSED OFFSET
	float                                              InitialDuration;                                          // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DamageSeverity;                                           // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeRemaining;                                            // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               bWasJolt;                                                 // 0x0044(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ERecentDamageFlags                                 Flags;                                                    // 0x0045(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      InstanceId;                                               // 0x0046(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0047(0x0001) MISSED OFFSET
};

// ScriptStruct OakGame.TriggeredDamagePresentation
// 0x0028
struct FTriggeredDamagePresentation
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct OakGame.LevelPersistence_Actor_SaveGameData
// 0x0010
struct FLevelPersistence_Actor_SaveGameData
{
	struct FName                                       ActorName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                TimerRemaining;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.LevelPersistence_Level_SaveGameData
// 0x0018
struct FLevelPersistence_Level_SaveGameData
{
	struct FName                                       LevelName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<struct FLevelPersistence_Actor_SaveGameData> SavedActors;                                              // 0x0008(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct OakGame.PlayerClassSaveGameData
// 0x0030
struct FPlayerClassSaveGameData
{
	TSoftObjectPtr<class UPlayerClassIdentifier>       PlayerClassPath;                                          // 0x0000(0x0028) (Edit, EditConst)
	uint32_t                                           DlcPackageId;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.RegionSaveGameData
// 0x0038
struct FRegionSaveGameData
{
	int                                                GameStage;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                PlayThroughIdx;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TSoftObjectPtr<class URegionData>                  RegionPath;                                               // 0x0008(0x0028) (Edit, EditConst)
	uint32_t                                           DlcPackageId;                                             // 0x0030(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.OakInventoryItemSaveGameData
// 0x00B0
struct FOakInventoryItemSaveGameData
{
	struct FInventorySaveGameData                      Item;                                                     // 0x0000(0x0080)
	int                                                PickupOrderIndex;                                         // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Flags;                                                    // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	TSoftObjectPtr<class UWeaponSkinPartData>          WeaponSkinPath;                                           // 0x0088(0x0028)
};

// ScriptStruct OakGame.EquippedInventorySaveGameData
// 0x0058
struct FEquippedInventorySaveGameData
{
	int                                                InventoryListIndex;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	TSoftObjectPtr<class UInventorySlotData>           SlotDataPath;                                             // 0x0008(0x0028) (Edit)
	TSoftObjectPtr<class UWeaponTrinketPartData>       TrinketDataPath;                                          // 0x0030(0x0028) (Edit)
};

// ScriptStruct OakGame.MissionStatusPlayerSaveGameData
// 0x0078
struct FMissionStatusPlayerSaveGameData
{
	TEnumAsByte<EMissionStatus>                        Status;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bHasBeenViewedInLog;                                      // 0x0001(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bKickoffPlayed;                                           // 0x0002(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0003(0x0005) MISSED OFFSET
	TArray<uint32_t>                                   ObjectivesProgress;                                       // 0x0008(0x0010) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      LeagueInstance;                                           // 0x0018(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	TSoftObjectPtr<class UClass>                       MissionClassPath;                                         // 0x0020(0x0028) (Edit, EditConst)
	TSoftObjectPtr<class UMissionObjectiveSet>         ActiveObjectiveSetPath;                                   // 0x0048(0x0028) (Edit, EditConst)
	uint32_t                                           DlcPackageId;                                             // 0x0070(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.MissionPlaythroughSaveGameData
// 0x0038
struct FMissionPlaythroughSaveGameData
{
	TArray<struct FMissionStatusPlayerSaveGameData>    MissionList;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	TSoftObjectPtr<class UClass>                       TrackedMissionClassPath;                                  // 0x0010(0x0028) (Edit, EditConst)
};

// ScriptStruct OakGame.PlaythroughActiveFastTravelSaveData
// 0x0010
struct FPlaythroughActiveFastTravelSaveData
{
	TArray<struct FActiveFastTravelSaveData>           ActiveTravelStations;                                     // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct OakGame.DiscoverySaveData
// 0x0010
struct FDiscoverySaveData
{
	TArray<struct FDiscoveredLevelInfo>                DiscoveredLevelInfo;                                      // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.VehicleUnlockedSaveGameData
// 0x0018
struct FVehicleUnlockedSaveGameData
{
	class FString                                      AssetPath;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	bool                                               bJustUnlocked;                                            // 0x0010(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.OakCARMenuVehicleConfigSaveData
// 0x00B0
struct FOakCARMenuVehicleConfigSaveData
{
	class FString                                      LoadoutSaveName;                                          // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      BodyAssetPath;                                            // 0x0010(0x0010) (Edit, ZeroConstructor)
	class FString                                      WheelAssetPath;                                           // 0x0020(0x0010) (Edit, ZeroConstructor)
	class FString                                      ArmorAssetPath;                                           // 0x0030(0x0010) (Edit, ZeroConstructor)
	class FString                                      CoreModAssetPath;                                         // 0x0040(0x0010) (Edit, ZeroConstructor)
	class FString                                      GunnerWeaponAssetPath;                                    // 0x0050(0x0010) (Edit, ZeroConstructor)
	class FString                                      DriverWeaponAssetPath;                                    // 0x0060(0x0010) (Edit, ZeroConstructor)
	class FString                                      OrnamentAssetPath;                                        // 0x0070(0x0010) (Edit, ZeroConstructor)
	class FString                                      MaterialDecalAssetPath;                                   // 0x0080(0x0010) (Edit, ZeroConstructor)
	class FString                                      MaterialAssetPath;                                        // 0x0090(0x0010) (Edit, ZeroConstructor)
	int                                                ColorIndex1;                                              // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ColorIndex2;                                              // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ColorIndex3;                                              // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.CustomPlayerColorSaveGameData
// 0x0028
struct FCustomPlayerColorSaveGameData
{
	struct FName                                       ColorParameter;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AppliedColor;                                             // 0x0008(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     SplitColor;                                               // 0x0014(0x000C) (Edit, IsPlainOldData)
	bool                                               bUseDefaultColor;                                         // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDefaultSplitColor;                                    // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
};

// ScriptStruct OakGame.CrewQuartersDecorationSaveData
// 0x0018
struct FCrewQuartersDecorationSaveData
{
	int                                                DecorationIndex;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class FString                                      DecorationDataPath;                                       // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.CrewQuartersSaveData
// 0x0028
struct FCrewQuartersSaveData
{
	int                                                PreferredRoomAssignment;                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FCrewQuartersDecorationSaveData>     Decorations;                                              // 0x0008(0x0010) (Edit, ZeroConstructor)
	class FString                                      RoomDataPath;                                             // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.CrewQuartersGunRackItemSaveData
// 0x0088
struct FCrewQuartersGunRackItemSaveData
{
	TArray<unsigned char>                              EncryptedSerialNumber;                                    // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FInventoryBalanceStateInitializationData    DevelopmentSaveData;                                      // 0x0010(0x0068) (Edit, EditConst)
	class FString                                      SlotAssetPath;                                            // 0x0078(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct OakGame.CrewQuartersGunRackSaveData
// 0x0010
struct FCrewQuartersGunRackSaveData
{
	TArray<struct FCrewQuartersGunRackItemSaveData>    RackSaveData;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct OakGame.EchoLogSaveGameData
// 0x0030
struct FEchoLogSaveGameData
{
	bool                                               bHasBeenSeenInLog;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TSoftObjectPtr<class UEchoLogData>                 EchoLogPath;                                              // 0x0008(0x0028) (Edit, EditConst)
};

// ScriptStruct OakGame.GameStateSaveData
// 0x000C
struct FGameStateSaveData
{
	struct FMapIDData                                  LastTraveledMapID;                                        // 0x0000(0x0002) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                MayhemLevel;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MayhemRandomSeed;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.ChallengeCategoryProgressSaveData
// 0x0010
struct FChallengeCategoryProgressSaveData
{
	TArray<unsigned char>                              CategoryProgress;                                         // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.OakPlayerCharacterAugmentSaveGameData
// 0x0050
struct FOakPlayerCharacterAugmentSaveGameData
{
	TSoftObjectPtr<class UPlayerCharacterComponentSlotData> SlotAssetPath;                                            // 0x0000(0x0028) (Edit, EditConst)
	TSoftObjectPtr<class UPlayerCharacterComponentAugmentData> AugmentAssetPath;                                         // 0x0028(0x0028) (Edit, EditConst)
};

// ScriptStruct OakGame.OakPlayerCharacterSlotSaveGameData
// 0x0010
struct FOakPlayerCharacterSlotSaveGameData
{
	TArray<struct FOakPlayerCharacterAugmentSaveGameData> AugmentSlotList;                                          // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct OakGame.UITrackingSaveGameData
// 0x0028
struct FUITrackingSaveGameData
{
	bool                                               bHasSeenSkillMenuUnlock;                                  // 0x0000(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bHasSeenGuardianRankMenuUnlock;                           // 0x0001(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bHasSeenEchoBoot_AmmoBar;                                 // 0x0002(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bHasSeenEchoBoot_ShieldBar;                               // 0x0003(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bHasSeenEchoBoot_Grenades;                                // 0x0004(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	int                                                HighestTHVMBreadcrumbSeen;                                // 0x0008(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<TSoftObjectPtr<class UInventorySlotData>>   InventorySlotUnlocksSeen;                                 // 0x0010(0x0010) (Edit, ZeroConstructor, EditConst)
	int                                                SavedSpinOffset;                                          // 0x0020(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.GuardianRankRewardCharacterSaveGameData
// 0x0030
struct FGuardianRankRewardCharacterSaveGameData
{
	int                                                NumTokens;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	TSoftObjectPtr<class UGuardianRankRewardData>      RewardDataPath;                                           // 0x0008(0x0028)
};

// ScriptStruct OakGame.GuardianRankPerkCharacterSaveGameData
// 0x0030
struct FGuardianRankPerkCharacterSaveGameData
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TSoftObjectPtr<class UGuardianRankPerkData>        PerkDataPath;                                             // 0x0008(0x0028)
};

// ScriptStruct OakGame.GuardianRankCharacterSaveGameData
// 0x0040
struct FGuardianRankCharacterSaveGameData
{
	int                                                AvailableTokens;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GuardianRank;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int64_t                                            GuardianExperience;                                       // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bGuardianRankSystemEnabled;                               // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<struct FGuardianRankRewardCharacterSaveGameData> RankRewards;                                              // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FGuardianRankPerkCharacterSaveGameData> RankPerks;                                                // 0x0028(0x0010) (ZeroConstructor)
	int                                                RankRewardRandomSeed;                                     // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.GuardianRankSaveGameData
// 0x000C
struct FGuardianRankSaveGameData
{
	int                                                GuardianRank;                                             // 0x0000(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                StartingExperience;                                       // 0x0004(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                GuardianExperience;                                       // 0x0008(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct OakGame.SpawnPointEffect
// 0x0010
struct FSpawnPointEffect
{
	class UGbxCondition*                               Condition;                                                // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      SpecialEffect;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakResourceEffectData
// 0x0040
struct FOakResourceEffectData
{
	EOakStatusEffectResourceEffectType                 ResourceEffectType;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UGameResourcePoolData*                       ResourcePool;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UGbxAttributeData*                           PostDepleteImmuneTime;                                    // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UClass*                                      DamageTypeClass;                                          // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UGbxAttributeData*                           DamageModifier;                                           // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UGbxAttributeData*                           DamagedActorModifier;                                     // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              DefaultPercentBaseDamage;                                 // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UOakStatusEffectPresentationData*            FXData;                                                   // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct OakGame.OakElementalAuraEffectData
// 0x0060
struct FOakElementalAuraEffectData
{
	class UOakElementalEffectData*                     ElementalEffectData;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DamageData;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAttributeInitializationData                DamageRadius;                                             // 0x0010(0x0038) (Edit, DisableEditOnInstance)
	class UGbxAttributeData*                           DamagedActorModifier;                                     // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGbxAttributeData*                           DamageCauserModifier;                                     // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageRate;                                               // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.CryoFreezeAssetData
// 0x0010
struct FCryoFreezeAssetData
{
	class UDestructibleMesh*                           Mesh;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AssociatedComponentName;                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.ShieldEffectStateData
// 0x0020
struct FShieldEffectStateData
{
	class UOakStatusEffectManagerComponent*            Owner;                                                    // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	EShieldEffectState                                 State;                                                    // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FVector_NetQuantize                         RelativeHitLocation;                                      // 0x000C(0x000C)
	float                                              NextHitTime;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.CSBoosterStatus
// 0x0018
struct FCSBoosterStatus
{
	class UOakStatusEffectManagerComponent*            Owner;                                                    // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int8_t                                             BoosterStatusIndex;                                       // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              TimeDuration;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeRemaining;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.StreamerBoosterStatus
// 0x0018
struct FStreamerBoosterStatus
{
	class UOakStatusEffectManagerComponent*            Owner;                                                    // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int8_t                                             PrimaryBoosterStatusIndex;                                // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             SecondaryBoosterStatusIndex;                              // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              TimeDuration;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeRemaining;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.ActiveOakResourceEffect
// 0x00F0
struct FActiveOakResourceEffect
{
	struct FOakResourceEffectData                      ResourceEffectData;                                       // 0x0000(0x0040)
	struct FGameResourcePoolReference                  ResourcePoolReference;                                    // 0x0040(0x0018)
	struct FGbxGameSystemCore_FResourceLock            ResourceLock;                                             // 0x0058(0x0098) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct OakGame.OakElementalAuraEffectInstance
// 0x0068
struct FOakElementalAuraEffectInstance
{
	struct FOakElementalAuraEffectData                 Data;                                                     // 0x0000(0x0060)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.OakEffectPresentationItem
// 0x0034 (0x0040 - 0x000C)
struct FOakEffectPresentationItem : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UOakStatusEffectPresentationData*            FXData;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              EffectValue;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FWwisePlaybackInstance                      EffectAudioInstance;                                      // 0x0020(0x0018) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.OakPresentationParticleSystemWrapper
// 0x0018
struct FOakPresentationParticleSystemWrapper
{
	class UParticleSystemComponent*                    Component;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.OakPresentationParamTransitionInstance
// 0x0028
struct FOakPresentationParamTransitionInstance
{
	class UOakStatusEffectPresentationData*            FXData;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ScreenComponent;                                          // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct OakGame.OakFreezePresentation
// 0x0040
struct FOakFreezePresentation
{
	class UOakFreezeData*                              Data;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UDestructibleComponent*>              DestructibleComponents;                                   // 0x0008(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UStaticMeshComponent*>                StaticMeshComponents;                                     // 0x0018(0x0010) (ExportObject, ZeroConstructor)
	class UDecalComponent*                             GroundDecalComponent;                                     // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.AppliedMeshComponentTracker
// 0x0030
struct FAppliedMeshComponentTracker
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UOakStatusEffectManagerComponent*            ManagerComponent;                                         // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UMeshComponent*>                      TrackedMeshes;                                            // 0x0010(0x0010) (ExportObject, ZeroConstructor)
	TArray<class AActor*>                              ChildTargetActors;                                        // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.OakEffectPresentationManager
// 0x0108 (0x01B8 - 0x00B0)
struct FOakEffectPresentationManager : public FFastArraySerializer
{
	class UOakStatusEffectManagerComponent*            Owner;                                                    // 0x00B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FOakEffectPresentationItem>          Items;                                                    // 0x00B8(0x0010) (ZeroConstructor)
	TArray<struct FOakPresentationParticleSystemWrapper> ParticleSystemWrappers;                                   // 0x00C8(0x0010) (ZeroConstructor)
	TArray<struct FOakPresentationParamTransitionInstance> PresentationTransitionInstances;                          // 0x00D8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x30];                                      // 0x00E8(0x0030) MISSED OFFSET
	struct FOakFreezePresentation                      FreezePresentation;                                       // 0x0118(0x0040)
	struct FAppliedMeshComponentTracker                MeshComponentTracker;                                     // 0x0158(0x0030)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0188(0x0030) MISSED OFFSET
};

// ScriptStruct OakGame.OakStatusEffectPresentation_Particle
// 0x0030
struct FOakStatusEffectPresentation_Particle
{
	bool                                               bUsesThirdPersonParticles;                                // 0x0000(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       ParticlePresentationName;                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ThirdPersonParameterName;                                 // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ThirdPersonParticleSystem;                                // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               SupportedEmitters;                                        // 0x0020(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.OakStatusEffectPresentation_ScreenParticle
// 0x0020
struct FOakStatusEffectPresentation_ScreenParticle
{
	bool                                               bUsesScreenParticle;                                      // 0x0000(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              TransitionDuration;                                       // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParamName;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             FirstPersonScreenEffect;                                  // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScreenParticleDepth;                                      // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.OakStatusEffectPresentation_Material
// 0x0028
struct FOakStatusEffectPresentation_Material
{
	bool                                               bUsesMaterialParameter;                                   // 0x0000(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       MaterialParameterName;                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TransitionDuration;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0014(0x0014) MISSED OFFSET
};

// ScriptStruct OakGame.OakStatusEffectPresentation_Audio
// 0x0018
struct FOakStatusEffectPresentation_Audio
{
	bool                                               bUsesAudioEvents;                                         // 0x0000(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UWwiseEvent*                                 StartEvent;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 StopEvent;                                                // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct OakGame.DonorInfo
// 0x0018
struct FDonorInfo
{
	class FString                                      DonorName;                                                // 0x0000(0x0010) (ZeroConstructor)
	int                                                TotalDonation;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.PollActionInfo
// 0x0060
struct FPollActionInfo
{
	class UStreamingPoolActionInfo*                    PollAction;                                               // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TSoftObjectPtr<class UClass>                       PollActionClass;                                          // 0x0008(0x0028) (Edit)
	struct FText                                       SelectionText;                                            // 0x0030(0x0028) (Edit)
	float                                              Weight;                                                   // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxUsagePerEvent;                                         // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ActionID;                                                 // 0x0050(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NbTimeUsedInEvent;                                        // 0x0054(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastSelectedValue;                                        // 0x0058(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                VoteCount;                                                // 0x005C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OakGame.OakThumbnailManagerConfig
// 0x0018
struct FOakThumbnailManagerConfig
{
	float                                              ThumbnailLoadFrequency;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxThumbnails;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   ThumbnailSize;                                            // 0x0008(0x0008) (Edit, IsPlainOldData)
	class UMaterialInterface*                          ThumbnailMaterial;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.LootableEventResultItem
// 0x0060
struct FLootableEventResultItem
{
	int                                                OrderIndex;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bDisplayNameIsInventoryDataName;                          // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	TArray<class UInventoryNamePartData*>              DisplayNameParts;                                         // 0x0008(0x0010) (ZeroConstructor)
	class FString                                      SerialNumber;                                             // 0x0018(0x0010) (ZeroConstructor)
	int                                                MonetaryValue;                                            // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InventoryScoreValue;                                      // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasAFoilPart;                                            // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FCachedUIStatCollectionData                 Stats;                                                    // 0x0038(0x0010)
	class FString                                      Base64EncodedThumbnail;                                   // 0x0048(0x0010) (ZeroConstructor)
	class UInventoryBalanceStateComponent*             BalanceStateComp;                                         // 0x0058(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct OakGame.MinimalInventoryInfo
// 0x0068
struct FMinimalInventoryInfo
{
	int                                                PickupOrderIdx;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class AActor*                                      StoredActor;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      SerialNumber;                                             // 0x0010(0x0010) (ZeroConstructor)
	class FString                                      ThumbnailName;                                            // 0x0020(0x0010) (ZeroConstructor)
	class UInventoryCategoryData*                      InventoryCategory;                                        // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsTrash;                                                 // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsFavorite;                                              // 0x0039(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsMissionItem;                                           // 0x003A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x003B(0x0001) MISSED OFFSET
	uint32_t                                           TrinketPartHash;                                          // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           SkinPartHash;                                             // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           MayhemPartHash;                                           // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           MayhemPartUIStatHash;                                     // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class FString                                      ItemJsonObjString;                                        // 0x0050(0x0010) (ZeroConstructor)
	bool                                               bBase64ThumbnailGenerated;                                // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.DonationTier
// 0x0040
struct FDonationTier
{
	float                                              PercentOfMinProductCost;                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FText                                       TierTitle;                                                // 0x0008(0x0028) (Edit)
	struct FText                                       TierDescription;                                          // 0x0020(0x0028) (Edit)
	float                                              TierDuration;                                             // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.BitProduct
// 0x0040
struct FBitProduct
{
	struct FText                                       ProductName;                                              // 0x0000(0x0028) (Edit)
	class FString                                      ProductSKU;                                               // 0x0018(0x0010) (Edit, ZeroConstructor)
	class FString                                      ProductDevSKU;                                            // 0x0028(0x0010) (Edit, ZeroConstructor)
	int                                                BitsCost;                                                 // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.Donator
// 0x0020
struct FDonator
{
	bool                                               bIsFirstDonator;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class FString                                      DonatorName;                                              // 0x0008(0x0010) (Edit, ZeroConstructor)
	int                                                NumberOfDonations;                                        // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BitsDonatedTotal;                                         // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.MinimalEquippedInventoryInfo
// 0x000C
struct FMinimalEquippedInventoryInfo
{
	uint32_t                                           InventorySlotHash;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PickupOrderIdx;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct OakGame.MinimalAbilitSlotInfo
// 0x0008
struct FMinimalAbilitSlotInfo
{
	uint32_t                                           AbilitySlotHash;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           AbilityHash;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.MinimalAugmentSlotInfo
// 0x000C
struct FMinimalAugmentSlotInfo
{
	uint32_t                                           ActionAbilityHash;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           AugmentSlotHash;                                          // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           AugmentHash;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.SkillTreeItemsStatValues
// 0x00A0
struct FSkillTreeItemsStatValues
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct OakGame.MinimalCharacterInfo
// 0x0158
struct FMinimalCharacterInfo
{
	uint32_t                                           TimePlayedSeconds;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ExperiencePoints;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerLevel;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BackpackSize;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GoldenKeys;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FMinimalInventoryInfo>               Inventory;                                                // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FMinimalEquippedInventoryInfo>       EquippedInventory;                                        // 0x0028(0x0010) (ZeroConstructor)
	TMap<uint32_t, int>                                InventoryCategoryList;                                    // 0x0038(0x0050) (ZeroConstructor)
	int                                                AbilityPoints;                                            // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	TMap<uint32_t, int>                                TreeItems;                                                // 0x0090(0x0050) (ZeroConstructor)
	TArray<struct FMinimalAbilitSlotInfo>              AbilitySlots;                                             // 0x00E0(0x0010) (ZeroConstructor)
	TArray<struct FMinimalAugmentSlotInfo>             AugmentSlots;                                             // 0x00F0(0x0010) (ZeroConstructor)
	uint32_t                                           PetAugmentHash;                                           // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	TMap<uint32_t, struct FSkillTreeItemsStatValues>   SkillTreeItemsStatValues;                                 // 0x0108(0x0050) (ZeroConstructor)
};

// ScriptStruct OakGame.OakInteractiveSessionStats
// 0x0020
struct FOakInteractiveSessionStats
{
	float                                              SessionLifetimeInSeconds;                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	int64_t                                            DamageCaused;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                NbEnemiesKilled;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NbTimeInjured;                                            // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NbTimeDead;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NbLegendaries;                                            // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.PickupEvaluationResult
// 0x0010
struct FPickupEvaluationResult
{
	class AOakInventoryItemPickup*                     Pickup;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.TouchPickupEvaluationResult
// 0x0010
struct FTouchPickupEvaluationResult
{
	TArray<class AOakInventoryItemPickup*>             Pickups;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.VaultCardRewardDataBase
// 0x0048
struct FVaultCardRewardDataBase
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0028) (Edit, DisableEditOnInstance)
	struct FText                                       Description;                                              // 0x0018(0x0028) (Edit, DisableEditOnInstance)
	class FString                                      PerkFrameName;                                            // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                VaultCardRewardKeyCost;                                   // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.VaultCardGearRewardData
// 0x0010 (0x0058 - 0x0048)
struct FVaultCardGearRewardData : public FVaultCardRewardDataBase
{
	class UInventoryBalanceData*                       GearReward;                                               // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UItemPoolData*                               GearRewardItemPool;                                       // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.VaultCardRewardData
// 0x0028 (0x0070 - 0x0048)
struct FVaultCardRewardData : public FVaultCardRewardDataBase
{
	TArray<class UOakCustomizationData*>               VaultCardRewardCustomizations;                            // 0x0048(0x0010) (Edit, ZeroConstructor)
	class UWeaponSkinPartData*                         VaultCardRewardWeaponSkin;                                // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWeaponTrinketPartData*                      VaultCardRewardWeaponTrinket;                             // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCrewQuartersDecorationItemData*             VaultCardRewardQuartersDeco;                              // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.VaultCardColumnData
// 0x0010
struct FVaultCardColumnData
{
	TArray<struct FVaultCardRewardData>                VaultCardRewardRows;                                      // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct OakGame.VehicleInputParams
// 0x0038
struct FVehicleInputParams
{
	class UClass*                                      InputComponentClass;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCameraOverride;                                       // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FPawnAttachCameraModeOptions                DriverSeatCameraModeOptionsOverride;                      // 0x0010(0x0028) (Edit)
};

// ScriptStruct OakGame.VehicleOccupantLoopingFeedback
// 0x0020
struct FVehicleOccupantLoopingFeedback
{
	class UFeedbackData*                               FeedbackData;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	TArray<class APlayerController*>                   AffectedControllers;                                      // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.OakVehicleAdditiveData
// 0x0028
struct FOakVehicleAdditiveData
{
	float                                              VelocityMinTresholdForward;                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              VelocityMaxTresholdForward;                               // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              VelocityMinTresholdBackward;                              // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              VelocityMaxTresholdBackward;                              // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              VelocityMinTresholdLateral;                               // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              VelocityMaxTresholdLateral;                               // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              FrontBackMinInterpSpeed;                                  // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              FrontBackMaxInterpSpeed;                                  // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LeftRightMinInterpSpeed;                                  // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LeftRightMaxInterpSpeed;                                  // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OakGame.ConditionalAudioSwitch
// 0x0010
struct FConditionalAudioSwitch
{
	class UGbxCondition*                               SwitchCondition;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseSwitch*                                SwitchToSet;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.VehicleEffectData
// 0x0068
struct FVehicleEffectData
{
	struct FName                                       Event;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ParticleEffect;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Socket;                                                   // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPlayerOnly : 1;                                          // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAutoActivate : 1;                                        // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bPlayAudioAtLocation : 1;                                 // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FVector                                     RelativeLocation;                                         // 0x001C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RelativeRotation;                                         // 0x0028(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              RelativeScale;                                            // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StartAudioEvent;                                          // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopAudioEvent;                                           // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FConditionalAudioSwitch>             ConditionalAudioSwitches;                                 // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       AudioComponentName;                                       // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AudioEmitterRadius;                                       // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.SkinParameterData
// 0x0030
struct FSkinParameterData
{
	TArray<struct FMaterialParameterData>              Color1;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FMaterialParameterData>              Color2;                                                   // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<struct FMaterialParameterData>              Color3;                                                   // 0x0020(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.DummyProjectileInfo
// 0x0030
struct FDummyProjectileInfo
{
	class UClass*                                      ProjectileClass;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       Socket;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TransitInAction;                                          // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TransitOutAction;                                         // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 TransitInSoundEvent;                                      // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ProjectileActor;                                          // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OakGame.WeaponAudioBodyLoop
// 0x0028
struct FWeaponAudioBodyLoop
{
	struct FName                                       PlaybackSocket;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StartLoopEvent;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopLoopEvent;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EWeaponAudioBodyLoopType                           LoopType;                                                 // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0018(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              ComponentSize;                                            // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ComponentTag;                                             // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.WeaponShellCasingAudioParameters
// 0x0010
struct FWeaponShellCasingAudioParameters
{
	class UWwiseEvent*                                 ShellCasingWwiseEvent;                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EjectDistance;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ImpactDelay;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakWeaponTriggerFeedbackDefinitionData
// 0x0048
struct FOakWeaponTriggerFeedbackDefinitionData
{
	class UWeaponTriggerFeedbackAsset*                 Feedback;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      WeaponClassPath;                                          // 0x0008(0x0010) (Edit, ZeroConstructor, EditConst)
	EOakWeaponPartType                                 PartType;                                                 // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PartTypeValue;                                            // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2E];                                      // 0x001A(0x002E) MISSED OFFSET
};

// ScriptStruct OakGame.OakVehicleWeaponTriggerFeedbackDefinitionData
// 0x0040
struct FOakVehicleWeaponTriggerFeedbackDefinitionData
{
	class UWeaponTriggerFeedbackAsset*                 Feedback;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      WeaponAssetPath;                                          // 0x0008(0x0010) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0018(0x0028) MISSED OFFSET
};

// ScriptStruct OakGame.OakWeaponNameThresholdPairData
// 0x0010
struct FOakWeaponNameThresholdPairData
{
	float                                              Threshold;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UInventoryNamePartData*                      NamePart;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakWeaponAttributeNamingData
// 0x0018
struct FOakWeaponAttributeNamingData
{
	class UGbxAttributeData*                           Attribute;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FOakWeaponNameThresholdPairData>     NamingTiers;                                              // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.OakWeaponNamingAttributeThresholdData
// 0x0010
struct FOakWeaponNamingAttributeThresholdData
{
	struct FName                                       AttributeName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              FirstThreshold;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SecondThreshold;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakWeaponNamingAttributePair
// 0x0018
struct FOakWeaponNamingAttributePair
{
	struct FName                                       FirstAttributeName;                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       SecondAttributeName;                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UInventoryNamePartData*                      NamePart;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.RepWindDirection
// 0x0008
struct FRepWindDirection
{
	float                                              TargetYaw;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.RepWindGust
// 0x0004
struct FRepWindGust
{
	int                                                Seed;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.WindVectorField
// 0x0040
struct FWindVectorField
{
	struct FIntVector                                  VectorFieldSize;                                          // 0x0000(0x000C) (Edit, EditConst, IsPlainOldData)
	struct FBox                                        Bounds;                                                   // 0x000C(0x001C) (Edit, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
};

// ScriptStruct OakGame.ShieldBarrierTrackedBuffTarget
// 0x0048
struct FShieldBarrierTrackedBuffTarget
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FStatusEffectInstanceReference              Mod1Reference;                                            // 0x0008(0x0018)
	struct FStatusEffectInstanceReference              Mod5Reference;                                            // 0x0020(0x0018)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.OperativeBarrierStatusEffectInfo
// 0x0018
struct FOperativeBarrierStatusEffectInfo
{
	class UStatusEffectData*                           OwnerStatusEffect;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStatusEffectData*                           DefaultStatusEffect;                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.OperativeBarrierState
// 0x0020
struct FOperativeBarrierState
{
	EOperativeBarrierState                             BarrierState;                                             // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     RedeployLocation;                                         // 0x0004(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    RedeployRotation;                                         // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bIsTransitioningStates;                                   // 0x001C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct OakGame.OperativeStandInActionAbility
// 0x0080
struct FOperativeStandInActionAbility
{
	TSoftObjectPtr<class UClass>                       Ability;                                                  // 0x0000(0x0028) (Edit)
	class UClass*                                      CharacterFlourishAnimation;                               // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AuxiliaryActor;                                           // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AuxiliaryTranslationOffset;                               // 0x0038(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    AuxiliaryRotationOffset;                                  // 0x0044(0x000C) (Edit, IsPlainOldData)
	float                                              AuxiliaryScale;                                           // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	class UClass*                                      AuxiliaryFlourishAnimation;                               // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AuxiliaryIdleAnimation;                                   // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAttachAuxiliaryActorToCharacter;                         // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FName                                       AuxiliaryAttachmentSocket;                                // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCopyPlayerAnims;                                         // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCopyPlayerWeapon;                                        // 0x0079(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x007A(0x0002) MISSED OFFSET
	float                                              FadeInFlourishVisibleDelay;                               // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.CurrentOperativeStandInAbilitySlotInfo
// 0x0020
struct FCurrentOperativeStandInAbilitySlotInfo
{
	class UClass*                                      ActionAbility;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AStandInAuxiliaryActor*                      AuxiliaryActor;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.GamepadStickTypeToSchemes
// 0x0010
struct FGamepadStickTypeToSchemes
{
	TArray<struct FRebindContextAndDescription>        SchemesWithStickType;                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.PerPlayerCullable
// 0x0008
struct FPerPlayerCullable
{
	class AActor*                                      CullableActor;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.PhotoModeState
// 0x0670
struct FPhotoModeState
{
	bool                                               bPhotoModeUIVisible;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bHUDVisible;                                              // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bGamePausedState;                                         // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bAutoFocusState;                                          // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FPostProcessSettings                        PostProcessSettings;                                      // 0x0010(0x0600) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	float                                              Contrast;                                                 // 0x0610(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              DOFIntensity;                                             // 0x0614(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              FOV;                                                      // 0x0618(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bFilmToneMapperState;                                     // 0x061C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x061D(0x0003) MISSED OFFSET
	int                                                FilterIndex;                                              // 0x0620(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              FilterIntensity;                                          // 0x0624(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              FocalDistance;                                            // 0x0628(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              FocalRegion;                                              // 0x062C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              FringeIntensity;                                          // 0x0630(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Gain;                                                     // 0x0634(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Gamma;                                                    // 0x0638(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              GrainIntensity;                                           // 0x063C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bHidePlayerState;                                         // 0x0640(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0641(0x0003) MISSED OFFSET
	float                                              Quality;                                                  // 0x0644(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Saturation;                                               // 0x0648(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Shoulder;                                                 // 0x064C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Slope;                                                    // 0x0650(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bSuperSharpModeState;                                     // 0x0654(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0655(0x0003) MISSED OFFSET
	float                                              Toe;                                                      // 0x0658(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              ViewRoll;                                                 // 0x065C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              VignetteIntensity;                                        // 0x0660(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              VignetteFeathering;                                       // 0x0664(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              TimeOfDay;                                                // 0x0668(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bPausable;                                                // 0x066C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bHideDamageNumbersState;                                  // 0x066D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bOverrideFocusState;                                      // 0x066E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bMatchGameState;                                          // 0x066F(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.PhotoModeOption
// 0x0050
struct FPhotoModeOption
{
	struct FText                                       OptionName;                                               // 0x0000(0x0028) (Edit)
	EPhotoModeOptionEffect                             OptionEffect;                                             // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSlider;                                                // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	float                                              SliderDisplayMin;                                         // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SliderDisplayMax;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SliderOutputMin;                                          // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SliderOutputMax;                                          // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSliderDisplayAsInteger;                                  // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	float                                              SliderStepping;                                           // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SliderRepeatsToAccelerate;                                // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SliderMaxIncreases;                                       // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SliderFastestSteps;                                       // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FText>                               SpinnerOptions;                                           // 0x0040(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.PhotoModeOptionSet
// 0x0020
struct FPhotoModeOptionSet
{
	class FString                                      OptionSetName;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FPhotoModeOption>                    Options;                                                  // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.ZoneMapPOIMeshListEntry
// 0x0010
struct FZoneMapPOIMeshListEntry
{
	class UStaticMesh*                                 ZoneMapPOIMesh;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UZoneMapData*                                ZoneMapForPOIMesh;                                        // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct OakGame.GuardianRankRewardEntry
// 0x0020
struct FGuardianRankRewardEntry
{
	class UGuardianRankRewardData*                     RankReward;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                NumTokens;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x000C(0x0014) MISSED OFFSET
};

// ScriptStruct OakGame.GuardianRankEnabledIndexTracker
// 0x0020
struct FGuardianRankEnabledIndexTracker
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct OakGame.GuardianRankRewardCategoryEntry
// 0x0010
struct FGuardianRankRewardCategoryEntry
{
	class UGuardianRankRewardCategoryData*             RankRewardCategory;                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                NumCategoryTokens;                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.MeleeReverseImpactEntry
// 0x0008
struct FMeleeReverseImpactEntry
{
	float                                              TargetMass;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ImpactForce;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.ReplicatedMeleeActionData
// 0x0018
struct FReplicatedMeleeActionData
{
	int                                                Counter;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      Action;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayerMeleeData*                            MeleeData;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.PlayerBuyBackableInventory
// 0x0008
struct FPlayerBuyBackableInventory
{
	class AActor*                                      InventoryActor;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.LobbyPlayerStandInLoadOutInfo
// 0x00C8
struct FLobbyPlayerStandInLoadOutInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UOakCustomizationData*                       HeadCustomization;                                        // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UOakCustomizationData*                       BodyCustomization;                                        // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UOakCustomizationData*                       SkinCustomization;                                        // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class UOakCustomizationData*                       EquippedEmote;                                            // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x88];                                      // 0x0028(0x0088) MISSED OFFSET
	class UWeaponSkinPartData*                         Weapon1Skin;                                              // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00B8(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.FrontendStandInAuxiliaryActorData
// 0x0058
struct FFrontendStandInAuxiliaryActorData
{
	class UClass*                                      ActorClass;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Translation;                                              // 0x0008(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0014(0x000C) (Edit, IsPlainOldData)
	float                                              Scale;                                                    // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayAnimations;                                          // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDigistructIn;                                            // 0x0025(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	float                                              DigistructDelay;                                          // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAttachAuxiliaryActorToCharacter;                         // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	struct FName                                       AuxiliaryAttachmentSocket;                                // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCopyPlayerWeapon;                                        // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FVector                                     PlayerTranslation;                                        // 0x003C(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    PlayerRotation;                                           // 0x0048(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.StandInAuxiliaryState
// 0x0060
struct FStandInAuxiliaryState
{
	class AStandInAuxiliaryActor*                      Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FFrontendStandInAuxiliaryActorData          TemplateData;                                             // 0x0008(0x0058)
};

// ScriptStruct OakGame.ExtraStandInAnimationMeshData
// 0x0018
struct FExtraStandInAnimationMeshData
{
	struct FName                                       ComponentName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AnimBlueprint;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGbxAnimSet*                                 AnimSet;                                                  // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.FrontendStandInSpecialAnimationData
// 0x0018
struct FFrontendStandInSpecialAnimationData
{
	class UClass*                                      Animation;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AuxiliaryAnimation;                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InitialDelay;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.PlayerStandIn_ActionAbility
// 0x0088
struct FPlayerStandIn_ActionAbility
{
	TSoftObjectPtr<class UClass>                       ActionAbilityClass;                                       // 0x0000(0x0028) (Edit)
	struct FFrontendStandInAuxiliaryActorData          ActorData;                                                // 0x0028(0x0058) (Edit)
	bool                                               bOverrideDefault;                                         // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.PlayerStandIn_Augment
// 0x0088
struct FPlayerStandIn_Augment
{
	TSoftObjectPtr<class UGbxDataAsset>                Augment;                                                  // 0x0000(0x0028) (Edit)
	struct FFrontendStandInAuxiliaryActorData          ActorData;                                                // 0x0028(0x0058) (Edit)
	bool                                               bOverrideDefault;                                         // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.PlaythroughDefinedValueRow
// 0x0070 (0x0078 - 0x0008)
struct FPlaythroughDefinedValueRow : public FAttributeDefinedValueRow
{
	struct FAttributeInitializationData                PlaythroughOne;                                           // 0x0008(0x0038) (Edit)
	struct FAttributeInitializationData                PlaythroughTwoAndBeyond;                                  // 0x0040(0x0038) (Edit)
};

// ScriptStruct OakGame.RegionBalanceDataBase
// 0x0010
struct FRegionBalanceDataBase
{
	int                                                MinGameStage;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxGameStage;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                GameStageIncreaseAbovePlayer;                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSpecifyBoostAbovePlayer;                                 // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct OakGame.RegionMissionBalanceData
// 0x0008 (0x0018 - 0x0010)
struct FRegionMissionBalanceData : public FRegionBalanceDataBase
{
	class UClass*                                      Mission;                                                  // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.RegionBalanceData
// 0x0018 (0x0028 - 0x0010)
struct FRegionBalanceData : public FRegionBalanceDataBase
{
	class URegionData*                                 REGION;                                                   // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FRegionMissionBalanceData>           MissionOverrides;                                         // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.PlayThroughData
// 0x0058
struct FPlayThroughData
{
	int                                                PlayThrough;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bEnforceMinimumGameStageForPlaythrough;                   // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FAttributeInitializationData                MinimumGameStageForPlaythrough;                           // 0x0008(0x0038) (Edit)
	TArray<struct FRegionBalanceData>                  Regions;                                                  // 0x0040(0x0010) (Edit, ZeroConstructor)
	bool                                               bGameStageTracksPlayerLevelAboveMinimum;                  // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.RegionSaveData
// 0x0010
struct FRegionSaveData
{
	class URegionData*                                 REGION;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                GameStage;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayThroughIdx;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.SDUCaseSpawner
// 0x0088
struct FSDUCaseSpawner
{
	struct FName                                       AttachmentSocketName;                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UOakSDUData*                                 SDUData;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 DisplayMesh;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       NextSDULeft;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       NextSDURight;                                             // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       NextSDUUp;                                                // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       NextSDUDown;                                              // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSoldOut;                                                 // 0x0038(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	class USocketComponent*                            AttachmentSocket;                                         // 0x0040(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USocketComponent*                            CameraSocket;                                             // 0x0048(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        DisplayMeshComponent;                                     // 0x0050(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        TextRenderComponent;                                      // 0x0058(0x0008) (ExportObject, ZeroConstructor, InstancedReference, Deprecated, IsPlainOldData)
	class UBoxComponent*                               MouseCollisionComponent;                                  // 0x0060(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0068(0x0020) MISSED OFFSET
};

// ScriptStruct OakGame.AugmentData
// 0x0030
struct FAugmentData
{
	class AShield*                                     Shield;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                StackCount;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bCanBeTriggered;                                          // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInstanceBool;                                            // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	float                                              InstanceFloat;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InstanceInt;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InstanceVector;                                           // 0x0018(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class AActor*                                      InstanceActor;                                            // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.TrackedShieldAttributeData
// 0x0028
struct FTrackedShieldAttributeData
{
	class UGbxAttributeData*                           Data;                                                     // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGbxAttributeModifierHandle                 ModifierHandle;                                           // 0x0008(0x0010) (Transient)
	class UClass*                                      ShieldAugmentClass;                                       // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.ShieldDamageModifierData
// 0x0020
struct FShieldDamageModifierData
{
	class UShieldAugment_DamageModifier*               Augment;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UConditionalDamageModifier*                  ModifierInstance;                                         // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class AOakCharacter*>                       RegisteredCharacters;                                     // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.ShieldAugmentDamageEventData
// 0x0048
struct FShieldAugmentDamageEventData
{
	unsigned char                                      bShieldMustNotBeDepleted : 1;                             // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bInstanceBoolMustBeTrue : 1;                              // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bInstanceBoolMustBeTrueForBarrier : 1;                    // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bMustBeTriggerable : 1;                                   // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bSetNotTriggerableAfterTriggering : 1;                    // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FAttributeInitializationData                TriggerCooldown;                                          // 0x0008(0x0038) (Edit, DisableEditOnInstance)
	class UDamageFilter*                               DamageEventFilter;                                        // 0x0040(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
};

// ScriptStruct OakGame.ShieldAugmentAbsorbRestoreData
// 0x0050
struct FShieldAugmentAbsorbRestoreData
{
	bool                                               bOnlyTriggerOnBarrier;                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<class UClass*>                              TriggeringDamageTypes;                                    // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FAttributeInitializationData                RestoreAmount;                                            // 0x0018(0x0038) (Edit)
};

// ScriptStruct OakGame.AdaptiveTypeAssociations
// 0x0020
struct FAdaptiveTypeAssociations
{
	EOakElementalType                                  DamageType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UGbxAttributeData*                           ResistanceAttribute;                                      // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 TriggerAudioEvent;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 HitByTypeAudioEvent;                                      // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct OakGame.AttributeModifiers
// 0x0020
struct FAttributeModifiers
{
	class UGbxAttributeData*                           AttributeToModify;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EGbxAttributeModifierType                          ModifierType;                                             // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<struct FAttributeInitializationData>        StackValues;                                              // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct OakGame.DamageTypeAttribute
// 0x0010
struct FDamageTypeAttribute
{
	class UGbxAttributeData*                           AttributeToModify;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct OakGame.ShieldTriggeredElementalEffect
// 0x0080
struct FShieldTriggeredElementalEffect
{
	bool                                               bShieldMustBeActiveToTrigger;                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FAttributeInitializationData                DamagePerSecond;                                          // 0x0008(0x0038) (Edit)
	struct FAttributeInitializationData                ResourceEffectValue;                                      // 0x0040(0x0038) (Edit)
	class UClass*                                      DamageType;                                               // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.ShieldTriggeredProjectileReflectEffect
// 0x0048
struct FShieldTriggeredProjectileReflectEffect
{
	bool                                               bShieldMustBeActiveToTrigger;                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UClass*                                      LightProjectile;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAttributeInitializationData                Damage;                                                   // 0x0010(0x0038) (Edit)
};

// ScriptStruct OakGame.RushStackInstance
// 0x0010
struct FRushStackInstance
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class USirenRushStackData*                         StackData;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.SirenGhostArmConfiguration
// 0x0010
struct FSirenGhostArmConfiguration
{
	ESirenGhostArmConfigurationType                    GhostArmConfiguration;                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UMaterialInstance*                           MaterialInstance;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.SirenArmAppearanceState
// 0x0058
struct FSirenArmAppearanceState
{
	struct FSirenGhostArmConfiguration                 PassiveGhostArmConfiguration;                             // 0x0000(0x0010)
	bool                                               bTattooFlare;                                             // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	EPhaseTranceElementalType                          ElementalType;                                            // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	struct FSirenGhostArmConfiguration                 ActiveGhostArmConfiguration;                              // 0x0018(0x0010) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USirenCharacterComponent*                    Owner;                                                    // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	TArray<TScriptInterface<class USirenArmControllerInterface>> PassiveArmControllers;                                    // 0x0038(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<TScriptInterface<class USirenArmControllerInterface>> ActionArmControllers;                                     // 0x0048(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct OakGame.SirenStandInFlourish
// 0x0028
struct FSirenStandInFlourish
{
	TArray<TSoftObjectPtr<class UOakActionAbilityAugmentData>> SlotDatas;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	bool                                               bHideCharacterDuringFlourish;                             // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStartAuxiliaryActorHidden;                               // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	class UClass*                                      AuxiliaryActor;                                           // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Animation;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.SpawnFactorKeyedAction
// 0x0038
struct FSpawnFactorKeyedAction
{
	bool                                               bOverrideKeyedActionList;                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FDataActionPair_Spawn>               SpawnKeyedActionList;                                     // 0x0008(0x0010) (Edit, ZeroConstructor)
	TArray<struct FDataActionPair_SpawnMesh>           SpawnMeshKeyedActionList;                                 // 0x0018(0x0010) (Edit, ZeroConstructor)
	TArray<struct FDataActionPair_SmartObject>         SmartObjectKeyedActionList;                               // 0x0028(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.VehiclePartListData
// 0x0000 (0x0028 - 0x0028)
struct FVehiclePartListData : public FActorPartListData
{

};

// ScriptStruct OakGame.SeatOccupant
// 0x0010
struct FSeatOccupant
{
	int                                                SeatSlot;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class USpawnOptionData*                            SpawnOptions;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.WeightedPassengersNum
// 0x0008
struct FWeightedPassengersNum
{
	int                                                PassengerCount;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.SpawnFactoryDataArray
// 0x0018
struct FSpawnFactoryDataArray
{
	TArray<struct FSpawnFactoryData>                   SpawnFactoryDataArray;                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.SelectedInventorySpawningState
// 0x00E0
struct FSelectedInventorySpawningState
{
	struct FSelectedInventoryInfo                      SeletedInventoryInfo;                                     // 0x0000(0x0060)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
	struct FInventoryBalanceStateInitializationData    InitData;                                                 // 0x0068(0x0068)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.SpawnDroppedPickupLootRequestEntry
// 0x0058 (0x0110 - 0x00B8)
struct FSpawnDroppedPickupLootRequestEntry : public FSpawnDroppedPickupLootRequest
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B8(0x0010) MISSED OFFSET
	TArray<struct FSelectedInventorySpawningState>     SpawningStates;                                           // 0x00C8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x38];                                      // 0x00D8(0x0038) MISSED OFFSET
};

// ScriptStruct OakGame.SpawnInventoryLootRequest
// 0x0038
struct FSpawnInventoryLootRequest
{
	class AActor*                                      ContextActor;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FSelectedInventoryInfo>              SelectedInventoryInfos;                                   // 0x0008(0x0010) (ZeroConstructor)
	ELootInstancingPolicy                              InstancingPolicy;                                         // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	class AOakPlayerController*                        PlayerToInstanceFor;                                      // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.SpawnInventoryLootRequestEntry
// 0x0008 (0x0040 - 0x0038)
struct FSpawnInventoryLootRequestEntry : public FSpawnInventoryLootRequest
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.SplineFollowerDistanceCheckpoint
// 0x0018
struct FSplineFollowerDistanceCheckpoint
{
	class FString                                      Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Distance;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.IronBearHardPointAugmentInfo
// 0x0040
struct FIronBearHardPointAugmentInfo
{
	TSoftObjectPtr<class UOakActionAbilityAugmentData> HardPointAugment;                                         // 0x0000(0x0028) (Edit)
	class USkeletalMesh*                               Mesh;                                                     // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      LeftFlourishAnimation;                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      RightFlourishAnimation;                                   // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.HardPointSlotSettings
// 0x0028
struct FHardPointSlotSettings
{
	struct FName                                       AnimationSlotName;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CESlotName;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      HardPointSelectedCE;                                      // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      HardpointPreviewCE;                                       // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      HardPointEquippedCE;                                      // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.GlobalsStandInSettings
// 0x0070
struct FGlobalsStandInSettings
{
	float                                              BaseStandInDepth_EchoRelative;                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   BaseStandInPosition_EchoRelative;                         // 0x0004(0x0008) (Edit, IsPlainOldData)
	struct FRotator                                    BaseStandInRotation_EchoRelative;                         // 0x000C(0x000C) (Edit, IsPlainOldData)
	float                                              BaseEchoProjectionFXDepth_UIObject;                       // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TMap<class UPlayerClassIdentifier*, float>         BasePlayerClassScale;                                     // 0x0020(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.FrontendStandInSlotTransitionSettings
// 0x0010
struct FFrontendStandInSlotTransitionSettings
{
	TArray<int>                                        SlotsToHideDuringInspection;                              // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.FrontendStandInSlotSettings
// 0x0050
struct FFrontendStandInSlotSettings
{
	TArray<int>                                        SlotsToRemainHidden;                                      // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FFrontendStandInSlotTransitionSettings      Transitions[0x4];                                         // 0x0010(0x0010) (Edit)
};

// ScriptStruct OakGame.StreamerBoosterInfo
// 0x0030
struct FStreamerBoosterInfo
{
	struct FName                                       NameId;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0008(0x0028) (Edit, DisableEditOnInstance)
	class UStatusEffectData*                           StatusEffectData;                                         // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture*                                    Icon;                                                     // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct OakGame.WeaponUseModeAspectSetData
// 0x0038
struct FWeaponUseModeAspectSetData
{
	class UWeaponUseModeAspectData*                    Aspect;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	TArray<class UWeaponUseModeSecondaryAspectData*>   SecondaryAspectList;                                      // 0x0008(0x0010) (Edit, ZeroConstructor, Transient, EditConst)
	class UWeaponDamageTypeAspectData*                 DamageTypeAspect[0x2];                                    // 0x0018(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	class UWeaponUseModeNameAspectData*                NameAspect;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	class UWeaponUseModeCrosshairAspectData*           CrosshairAspect;                                          // 0x0030(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
};

// ScriptStruct OakGame.TransporterCraneRecord
// 0x0010
struct FTransporterCraneRecord
{
	TEnumAsByte<ETransporterCraneState>                CraneState;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MoveSpeed;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MoveStartPosition;                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MoveStartTime;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.WeightedTransporterCrane
// 0x0010
struct FWeightedTransporterCrane
{
	class UClass*                                      Crane;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Weight;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.TrophyCaseReplicatedBase
// 0x0010
struct FTrophyCaseReplicatedBase
{
	struct FName                                       BaseTag;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      CompletedProgressLevel;                                   // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxProgressLevel;                                         // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct OakGame.TrophyCaseReplicatedSet
// 0x0010
struct FTrophyCaseReplicatedSet
{
	TArray<struct FTrophyCaseReplicatedBase>           BaseData;                                                 // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.ChallengeTrophy
// 0x0050
struct FChallengeTrophy
{
	struct FText                                       TrophyName;                                               // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FText                                       TrophyDescription;                                        // 0x0018(0x0028) (Edit, BlueprintVisible)
	class UStaticMesh*                                 TrophyMesh;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AssociatedChallenge;                                      // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       AssociatedTrophyBaseTag;                                  // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UChallengeTrophyBaseComponent*               AssociatedTrophyBase;                                     // 0x0048(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct OakGame.ChallengeTrophyGroup
// 0x0048
struct FChallengeTrophyGroup
{
	struct FText                                       TrophyGroupName;                                          // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FText                                       TrophyGroupDescription;                                   // 0x0018(0x0028) (Edit, BlueprintVisible)
	class UTrophyCaseBaseComponent*                    AssociatedGroupBase;                                      // 0x0030(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<struct FChallengeTrophy>                    TrophyList;                                               // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct OakGame.ChallengeTrophySet
// 0x0040
struct FChallengeTrophySet
{
	struct FText                                       TrophySetName;                                            // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FText                                       TrophySetDescription;                                     // 0x0018(0x0028) (Edit, BlueprintVisible)
	TArray<struct FChallengeTrophyGroup>               TrophyGroupList;                                          // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct OakGame.PlaythroughUnlockedData
// 0x0028
struct FPlaythroughUnlockedData
{
	TArray<class UTutorialMessageDataAsset*>           PlaythroughUnlockedMessages;                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<class UGFxModalTutorialDataAsset*>          PlaythroughUnlockedMessages_Modal;                        // 0x0010(0x0010) (Edit, ZeroConstructor)
	bool                                               bUseModalTutorial;                                        // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              ModalTutorialDelay;                                       // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.TutorialLevelUpData
// 0x0020
struct FTutorialLevelUpData
{
	class UTutorialMessageDataAsset*                   LevelUpMessage;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGFxModalTutorialDataAsset*                  LevelUpMessage_Modal;                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LevelForMessage;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseModalTutorial;                                        // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              ModalTutorialDelay;                                       // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.GFxNewsMenuFullscreenData
// 0x0040
struct FGFxNewsMenuFullscreenData
{
	struct FText                                       NewsLabel;                                                // 0x0000(0x0028) (Edit)
	TSoftObjectPtr<class UTexture>                     NewsImage;                                                // 0x0018(0x0028) (Edit)
};

// ScriptStruct OakGame.CurrencyInfo
// 0x0030
struct FCurrencyInfo
{
	class UInventoryCategoryData*                      ItemCategory;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       IncStartAudioEvent;                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       IncStopAudioEvent;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       DecStartAudioEvent;                                       // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       DecStopAudioEvent;                                        // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CurrencyFrameName;                                        // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.WeightedWeaponUIStat
// 0x0020
struct FWeightedWeaponUIStat
{
	struct FFloatInterval                              NormalizationRange;                                       // 0x0000(0x0008) (Edit)
	class UGbxAttributeData*                           Attribute;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EUIStatValueStyle                                  ValueStyle;                                               // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              Weight;                                                   // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PreviewPercentWeight;                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.WeaponTypeAttributeStatWeighting
// 0x0018
struct FWeaponTypeAttributeStatWeighting
{
	class UWeaponTypeData*                             WeaponType;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FWeightedWeaponUIStat>               WeightedStats;                                            // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.VehicleConfigurationRtpc
// 0x0020
struct FVehicleConfigurationRtpc
{
	class UWwiseRtpc*                                  RtpcParam;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefaultValue;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UGbxAttributeData*                           ValueAttribute;                                           // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateEveryFrame;                                        // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.VehicleLandingEventData
// 0x0010
struct FVehicleLandingEventData
{
	class UWwiseEvent*                                 LandingEvent;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxTimeInAir;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.VehicleAudioLoopData
// 0x0010
struct FVehicleAudioLoopData
{
	class UWwiseEvent*                                 LoopStart;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 LoopEnd;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.WheelRandomSwitchPack
// 0x0020
struct FWheelRandomSwitchPack
{
	TArray<class UWwiseSwitch*>                        WheelSwitches;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        WheelsToIgnoreForSwitches;                                // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.VehicleAudioLoopOnNamedCompData
// 0x0028
struct FVehicleAudioLoopOnNamedCompData
{
	struct FVehicleAudioLoopData                       AudioLoopData;                                            // 0x0000(0x0010) (Edit)
	struct FName                                       AudioComponentTag;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FWwisePlaybackInstance>              PlaybackInstances;                                        // 0x0018(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct OakGame.VehicleConfigurationEvent
// 0x0010
struct FVehicleConfigurationEvent
{
	class UWwiseEvent*                                 WwiseEvent;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AudioComponentTag;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.FilteredImpactData
// 0x0090
struct FFilteredImpactData
{
	TArray<class UImpactData*>                         ImpactData;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	class UFeedbackData*                               DefaultVehicleOccupantsFeedback;                          // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<class UPhysicalMaterial*, class UFeedbackData*> VehicleOccupantsFeedback;                                 // 0x0018(0x0050) (Edit, ZeroConstructor)
	float                                              FeedbackScale;                                            // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLocalOnlyFeedback;                                       // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	TArray<TSoftObjectPtr<class UClass>>               ClassesToTarget;                                          // 0x0070(0x0010) (Edit, ZeroConstructor)
	TArray<TSoftObjectPtr<class UClass>>               ClassesToExclude;                                         // 0x0080(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.VehicleImpactEffectData
// 0x0028
struct FVehicleImpactEffectData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	TArray<struct FFilteredImpactData>                 FilteredImpactData;                                       // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.VehicleEffect
// 0x0010
struct FVehicleEffect
{
	class UBaseVehicleEffectData*                      EffectData;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.VehicleEffectQueryData
// 0x0018
struct FVehicleEffectQueryData
{
	struct FName                                       Event;                                                    // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	EVehicleEffectEvent                                EffectEvent;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FName                                       ComponentTag;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.EmitterEnableData
// 0x0010
struct FEmitterEnableData
{
	struct FName                                       EmitterName;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EEmitterEnableMode                                 EnableMode;                                               // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.UseCharacterWeaponSettings
// 0x0004
struct FUseCharacterWeaponSettings
{
	float                                              ShootMaxAngle;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct OakGame.InventoryDataUnlockedInfo
// 0x0030
struct FInventoryDataUnlockedInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct OakGame.InventoryPartDataUnlockedInfo
// 0x0030
struct FInventoryPartDataUnlockedInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct OakGame.TrailVectorParam
// 0x0018
struct FTrailVectorParam
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Value;                                                    // 0x0008(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.VehicleTrailParticleSystemData
// 0x0018
struct FVehicleTrailParticleSystemData
{
	class UParticleSystem*                             ParticleSystemTemplate;                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FTrailVectorParam>                   VectorParamsToSet;                                        // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.VehicleTrailData
// 0x0050
struct FVehicleTrailData
{
	struct FName                                       WheelFXSocketName;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       WheelPhysBoneName;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocalOffset;                                              // 0x0010(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    LocalRotationOffset;                                      // 0x001C(0x000C) (Edit, IsPlainOldData)
	class UParticleSystemComponent*                    TrailPSComponent;                                         // 0x0028(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    WadingPSComponent;                                        // 0x0030(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UGbxVehicleWheel*                            WheelRef;                                                 // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.ExtraWadingData
// 0x00B8
struct FExtraWadingData
{
	struct FVehicleTrailData                           WadingData;                                               // 0x0000(0x0050) (Edit)
	TMap<class UElementalInteractionData*, struct FVehicleTrailParticleSystemData> WadeParticleSystems;                                      // 0x0050(0x0050) (Edit, ZeroConstructor)
	struct FVehicleTrailParticleSystemData             DefaultWadeParticleSystem;                                // 0x00A0(0x0018) (Edit)
};

// ScriptStruct OakGame.VendingMachineMenuFilter
// 0x0020
struct FVendingMachineMenuFilter
{
	struct FText                                       Name;                                                     // 0x0000(0x0028) (Edit)
	class UInventoryCategoryData*                      DataTypeFilter;                                           // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.VendingMachineItemRarityData
// 0x0020
struct FVendingMachineItemRarityData
{
	class UInventoryRarityData*                        Rarity;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ShelfMaterial;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ItemOfTheDayShelfMaterial;                                // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SelectionParticleRarityParameter;                         // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.VendingMachineSequenceTimedEvent
// 0x0010
struct FVendingMachineSequenceTimedEvent
{
	float                                              Delay;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       EventName;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.VendingMachineInteractSequence
// 0x0090
struct FVendingMachineInteractSequence
{
	struct FRuntimeFloatCurve                          DigistructCurve;                                          // 0x0000(0x0078) (Edit)
	float                                              Duration;                                                 // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	TArray<struct FVendingMachineSequenceTimedEvent>   Events;                                                   // 0x0080(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.VendingMachineTrayTile
// 0x0040
struct FVendingMachineTrayTile
{
	class APickupableMeshActor*                        PhysicalActor;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      InventoryActor;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UInventoryBalanceStateComponent*             InventoryBalance;                                         // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0018(0x0028) MISSED OFFSET
};

// ScriptStruct OakGame.VendingMachinePhysicalShelf
// 0x0030
struct FVendingMachinePhysicalShelf
{
	class UStaticMeshComponent*                        ShelfMeshComponent;                                       // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               ClickCollisionComponent;                                  // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ItemScoreParticleComponent;                               // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    SoldOutParticleComponent;                                 // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MaterialInstance;                                         // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.VendingMachineLastSelectionData
// 0x0010
struct FVendingMachineLastSelectionData
{
	class AActor*                                      InventoryActor;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.WeaponUseModeAttributeEffectData
// 0x0018
struct FWeaponUseModeAttributeEffectData
{
	EWeaponUseMode                                     UseMode;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                UseModeBitmask;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAttributeEffectData>                AttributeEffects;                                         // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
};

// ScriptStruct OakGame.WeaponBonusData
// 0x0028
struct FWeaponBonusData
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FWeaponUseModeAttributeEffectData>   WeaponUseModeAttributeEffects;                            // 0x0008(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAttributeEffectData>                InstigatorAttributeEffects;                               // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.WeaponBonusDataTableAttributeMappingData
// 0x0030
struct FWeaponBonusDataTableAttributeMappingData
{
	bool                                               bInstigatorAttribute;                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class FString                                      ColumnName;                                               // 0x0008(0x0010) (Edit, ZeroConstructor)
	class UGbxAttributeData*                           Attribute;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EGbxAttributeModifierType                          ModifierType;                                             // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	class UWeaponBonusDataTableAttributeValueResolver* DataTableAttributeValueResolver;                          // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct OakGame.WeaponBonusDataTableColumnCollectionData
// 0x0028
struct FWeaponBonusDataTableColumnCollectionData
{
	struct FName                                       CollectionName;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              ColumnNames;                                              // 0x0008(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.WeaponBonusDataTableSelectionData
// 0x0048
struct FWeaponBonusDataTableSelectionData
{
	int                                                UseModeBitmask;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UWeaponBonusDataTableData*                   WeaponBonusDataTable;                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              ColumnNames;                                              // 0x0018(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               ColumnCollections;                                        // 0x0028(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.COVBrokenEffectData
// 0x0020
struct FCOVBrokenEffectData
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachSocket;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       HiddenBone;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWeaponEffectType>                     BreakEffectType;                                          // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      BreakEffectID;                                            // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWeaponEffectType>                     BrokenEffectType;                                         // 0x001A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      BrokenEffectID;                                           // 0x001B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHideAmpEffect;                                           // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct OakGame.COVRepairType
// 0x0048
struct FCOVRepairType
{
	struct FAttributeInitializationData                BrokenEffectIndex;                                        // 0x0000(0x0038) (Edit)
	float                                              RepairTime;                                               // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RepairCompletePercent;                                    // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CooldownCompletePercent;                                  // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SelectionWeight;                                          // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.WeightedFloatRange
// 0x0040
struct FWeightedFloatRange
{
	float                                              MinValue;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAttributeInitializationData                Weight;                                                   // 0x0008(0x0038) (Edit)
};

// ScriptStruct OakGame.WeaponSkinSectionData
// 0x0030
struct FWeaponSkinSectionData
{
	int                                                SectionIndex;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TSoftObjectPtr<class UMaterialInterface>           Material;                                                 // 0x0008(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct OakGame.WeaponSkinWeaponTypeData
// 0x0018
struct FWeaponSkinWeaponTypeData
{
	class UWeaponTypeData*                             WeaponType;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FWeaponSkinSectionData>              Materials;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct OakGame.WeaponSkinManufacturerData
// 0x0018
struct FWeaponSkinManufacturerData
{
	class UManufacturerData*                           Manufacturer;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FWeaponSkinWeaponTypeData>           WeaponTypes;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct OakGame.ZoneMapDataSection
// 0x0040
struct FZoneMapDataSection
{
	class FString                                      ZoneMapSectionObjectName;                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       SectionName;                                              // 0x0010(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FVector                                     Origin;                                                   // 0x0028(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Extents;                                                  // 0x0034(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct OakGame.ZoneMapMissionPOIBlacklistEntry
// 0x0058
struct FZoneMapMissionPOIBlacklistEntry
{
	TSoftObjectPtr<class UClass>                       BlacklistedCharacter;                                     // 0x0000(0x0028) (Deprecated)
	class FString                                      BlacklistedCharacterPath;                                 // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)
	class UGbxCondition*                               MissionBlacklistCondition;                                // 0x0038(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bBlacklistMissionGiving;                                  // 0x0040(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	class UGbxCondition*                               ObjectiveBlacklistCondition;                              // 0x0048(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bBlacklistObjectiveWaypoint;                              // 0x0050(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.ZoneMapChallengeGroupEntry
// 0x0020
struct FZoneMapChallengeGroupEntry
{
	class UChallengeCategoryData*                      ChallengeGroup;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<class UClass*>                              ChallengesInGroup;                                        // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                NumChallengesInCategory;                                  // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                NumChallengesVisibleInUI;                                 // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct OakGame.ZoneMapMeshListEntry
// 0x0038
struct FZoneMapMeshListEntry
{
	class UStaticMesh*                                 ZoneMapMesh;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FBox                                        ZoneMapVisibilityExtents;                                 // 0x0008(0x001C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UGbxCondition*                               MeshDisplayCondition;                                     // 0x0028(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bConditionalMeshDisplay;                                  // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.ZoneMapGPUPointCloudData
// 0x0010
struct FZoneMapGPUPointCloudData
{
	class UTexture*                                    PositionData;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    NormalsData;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.PlanetZonePOI
// 0x0010
struct FPlanetZonePOI
{
	class UZoneMapData*                                ZoneReference;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 ZoneMeshOnPlanet;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct OakGame.ZoneMapDynamicPOIEntry
// 0x0010
struct FZoneMapDynamicPOIEntry
{
	class UZoneMapPOITypeData*                         POIType;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShowInMiniMap;                                           // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShowInZoneMap;                                           // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct OakGame.ZoneMapLevelMeshInfo
// 0x0028
struct FZoneMapLevelMeshInfo
{
	class UStaticMeshComponent*                        MapMesh;                                                  // 0x0000(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MapMeshDMI;                                               // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        MapTranslucentMesh;                                       // 0x0010(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MapTranslucentMeshDMI;                                    // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UGbxCondition*                               MeshDisplayCondition;                                     // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OakGame.PlayerIconInfo
// 0x0030
struct FPlayerIconInfo
{
	class AOakPlayerState*                             AssociatedPlayer;                                         // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AOakCharacter_Player*                        AssociatedCharacter;                                      // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UStaticMeshComponent*                        PlayerIconMesh;                                           // 0x0010(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FVector                                     LastPlayerLocation;                                       // 0x0018(0x000C) (Transient, IsPlainOldData)
	struct FRotator                                    LastPlayerRotation;                                       // 0x0024(0x000C) (Transient, IsPlainOldData)
};

// ScriptStruct OakGame.ZoneMapChallengeQuery
// 0x0018
struct FZoneMapChallengeQuery
{
	class UClass*                                      ChallengeClass;                                           // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EZoneMapChallengeStatus>               ChallengeStatus;                                          // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class AOakZoneMapIcon_POI*                         IconActor;                                                // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.DamageBlockEventDetails
// 0x0010
struct FDamageBlockEventDetails
{
	class UGbxDamageType*                              DamageType;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.SectorDistance
// 0x0008
struct FSectorDistance
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.AgonizerAttackDataTableRow
// 0x0008 (0x0010 - 0x0008)
struct FAgonizerAttackDataTableRow : public FTableRowBase
{
	float                                              CooldownMin;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CooldownMax;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.FloorSectorDistance
// 0x0008
struct FFloorSectorDistance
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.AnimNode_Carnivora
// 0x1A10 (0x1B50 - 0x0140)
struct FAnimNode_Carnivora : public FAnimNode_SkeletalControlBase
{
	float                                              MaxYawFrontWheel;                                         // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinYawFrontWheel;                                         // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxYawTireTrack;                                          // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinYawTireTrack;                                          // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinTrackShaftBoneScale;                                   // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTrackShaftBoneScale;                                   // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FrontWheelsMinHeight;                                     // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FrontWheelsMaxHeight;                                     // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TireTrackMinHeight;                                       // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TireTrackMaxHeight;                                       // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FrontWheelRadius;                                         // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TireTrackWheelsRadius;                                    // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SmallGearRadius;                                          // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BigAxleRadius;                                            // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MainAxleRadius;                                           // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x19D4];                                    // 0x017C(0x19D4) MISSED OFFSET
};

// ScriptStruct OakGame.AnimNode_EmperorHandler
// 0x1990 (0x1AD0 - 0x0140)
struct FAnimNode_EmperorHandler : public FAnimNode_SkeletalControlBase
{
	float                                              SuspensionDropMaxSpeed;                                   // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SlidingInterpolationSpeed;                                // 0x0144(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SlidingDisplacement;                                      // 0x0148(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              SinPeriod1;                                               // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SinPeriod2;                                               // 0x0154(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SinPeriod3;                                               // 0x0158(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SinAmplitude1;                                            // 0x015C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SinAmplitude2;                                            // 0x0160(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SinAmplitude3;                                            // 0x0164(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SwivelConeX;                                              // 0x0168(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SwivelConeY;                                              // 0x016C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HoverIntrepSpeed;                                         // 0x0170(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HoverBodyHeigth;                                          // 0x0174(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InoccupiedHoverBodyHeigth;                                // 0x0178(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1954];                                    // 0x017C(0x1954) MISSED OFFSET
};

// ScriptStruct OakGame.AnimNode_OutrunnerBooster
// 0x0870 (0x09B0 - 0x0140)
struct FAnimNode_OutrunnerBooster : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x870];                                     // 0x0140(0x0870) MISSED OFFSET
};

// ScriptStruct OakGame.RoadBumpinessDataOutrunner
// 0x0008
struct FRoadBumpinessDataOutrunner
{
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Bumpiness;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.HoverBodySinusOutrunner
// 0x001C
struct FHoverBodySinusOutrunner
{
	struct FVector                                     HoverScale;                                               // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              OffsetX;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OffsetY;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Frequency;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Amplitude;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.AnimNode_OutrunnerHandler
// 0x1700 (0x1840 - 0x0140)
struct FAnimNode_OutrunnerHandler : public FAnimNode_SkeletalControlBase
{
	float                                              SuspensionDropMaxSpeed;                                   // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AccelInterpSpeed;                                         // 0x0144(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationTreshold;                                     // 0x0148(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TurningVelocityTreshold;                                  // 0x014C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PitchInterpSpeed;                                         // 0x0150(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RollInterpSpeed;                                          // 0x0154(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RollMaxAngle;                                             // 0x0158(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BoostAlphaInterSpeed;                                     // 0x015C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BankingBoostAlpha;                                        // 0x0160(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0164(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          PitchAccelerationCurve;                                   // 0x0168(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FRuntimeFloatCurve                          TranslationUpAccelerationCurve;                           // 0x01E0(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              MaxSteeringAngle;                                         // 0x0258(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoostBodyTranslation;                                     // 0x025C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              BoostBodyPitchAdd;                                        // 0x0268(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RoadSurfaceAmplitudePitchHighFreq;                        // 0x026C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RoadSurfaceFrequencyPitchHighFreq;                        // 0x0270(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RoadSurfaceFrequencyRollFreq;                             // 0x0274(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RoadSurfacePersistencePitchHighFreq;                      // 0x0278(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RoadSurfaceOctavesPitchHighFreq;                          // 0x027C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RoadSurfaceAmplitudePitchLowFreq;                         // 0x0280(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RoadSurfaceFrequencyPitchLowFreq;                         // 0x0284(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RoadSurfacePersistencePitchLowFreq;                       // 0x0288(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RoadSurfaceOctavesPitchLowFreq;                           // 0x028C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BodyFollowSpeedOfPitch;                                   // 0x0290(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BodyFollowAmplitudeMultiplier;                            // 0x0294(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinTimeToSwitch;                                          // 0x0298(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxTimeToSwitch;                                          // 0x029C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinBumpTimeValue;                                         // 0x02A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxBumpTimeValue;                                         // 0x02A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinAlphaValue;                                            // 0x02A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxAlphaValue;                                            // 0x02AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinInterpSpeed;                                           // 0x02B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxInterpSpeed;                                           // 0x02B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DefaultRoadBumpiness;                                     // 0x02B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02BC(0x0004) MISSED OFFSET
	TArray<struct FRoadBumpinessDataOutrunner>         RoadBumpinessOverrides;                                   // 0x02C0(0x0010) (Edit, ZeroConstructor)
	float                                              HoverWheelSpeedWhenTurningOnSelf;                         // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HoverWheelAngle;                                          // 0x02D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HoverWheelRearLeftPos;                                    // 0x02D8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     HoverWheelRearRightPos;                                   // 0x02E4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              HoverSpinSpeedIdle;                                       // 0x02F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HoverOffsetZ;                                             // 0x02F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HoverSuspensionArmAngleOffset;                            // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HoverSuspensionArmAmplitude;                              // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HoverSuspensionArmSpeed;                                  // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HoverMaxPitchAngle;                                       // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HoverMaxRollAngle;                                        // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HoverSpinSpeedFullTrottle;                                // 0x030C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HoverSpinMaxSpeedAngularVelocity;                         // 0x0310(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HoverMaxVelocity;                                         // 0x0314(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HoverPitchInterpSpeed;                                    // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HoverPitchBoostingInterpSpeed;                            // 0x031C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HoverRollInterpSpeed;                                     // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HoverBodyAccelTreshold;                                   // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HoverBodyActiveBlend;                                     // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HoverVelocityIntensityX;                                  // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HoverVelocityIntensityY;                                  // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HoverWheelRotationIntensity;                              // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HoverWheelRotationIntensityY;                             // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x033C(0x0004) MISSED OFFSET
	TArray<struct FHoverBodySinusOutrunner>            HoverBodySin;                                             // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector2D                                   SwivelCone;                                               // 0x0350(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRuntimeFloatCurve                          HoverBodyTransitionCurve;                                 // 0x0358(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData03[0x1470];                                    // 0x03D0(0x1470) MISSED OFFSET
};

// ScriptStruct OakGame.AnimNode_RevolverBooster
// 0x0340 (0x0480 - 0x0140)
struct FAnimNode_RevolverBooster : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x314];                                     // 0x0140(0x0314) MISSED OFFSET
	float                                              BodyCycleFromEngineCycleRatio;                            // 0x0454(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              IdleRPM;                                                  // 0x0458(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EngineRunningAmplitude;                                   // 0x045C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EngineIdleAmplitude;                                      // 0x0460(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MufflerAmplitudeMutliplier;                               // 0x0464(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EngineRunningFrequency;                                   // 0x0468(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EngineIdleFrequency;                                      // 0x046C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MufflerFrequencyMutliplier;                               // 0x0470(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0474(0x000C) MISSED OFFSET
};

// ScriptStruct OakGame.AnimNode_RevolverHandler
// 0x0460 (0x05A0 - 0x0140)
struct FAnimNode_RevolverHandler : public FAnimNode_SkeletalControlBase
{
	float                                              MaxSteeringAngle;                                         // 0x0140(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SinPeriod1;                                               // 0x0144(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SinPeriod2;                                               // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SinPeriod3;                                               // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SinAmplitude1;                                            // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SinAmplitude2;                                            // 0x0154(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SinAmplitude3;                                            // 0x0158(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SwivelConeX;                                              // 0x015C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SwivelConeY;                                              // 0x0160(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SwivelPeriodX;                                            // 0x0164(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SwivelPeriodY;                                            // 0x0168(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HoverIntrepSpeed;                                         // 0x016C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BodyCompensationInterpSpeed;                              // 0x0170(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HoverBodyCompensationInterpSpeed;                         // 0x0174(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BodyOffsetInterpSpeed;                                    // 0x0178(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BodyHoverOffset;                                          // 0x017C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositionOffsetFromRotation;                               // 0x0180(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HoverMaxPitchAngle;                                       // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HoverMaxRollAngle;                                        // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HoverPitchInterpSpeed;                                    // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HoverPitchBoostingInterpSpeed;                            // 0x0190(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HoverRollInterpSpeed;                                     // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          AccelerationCurve;                                        // 0x0198(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x390];                                     // 0x0210(0x0390) MISSED OFFSET
};

// ScriptStruct OakGame.RoadBumpinessData
// 0x0008
struct FRoadBumpinessData
{
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Bumpiness;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.HoverBodySinus
// 0x001C
struct FHoverBodySinus
{
	struct FVector                                     HoverScale;                                               // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              OffsetX;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OffsetY;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Frequency;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Amplitude;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.AnimNode_TechnicalHandler
// 0x2BF0 (0x2D30 - 0x0140)
struct FAnimNode_TechnicalHandler : public FAnimNode_SkeletalControlBase
{
	float                                              SuspensionDropMaxSpeed;                                   // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0144(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          SuspensionCamberCurve;                                    // 0x0148(0x0078) (Edit, BlueprintVisible)
	float                                              CamberIntensity;                                          // 0x01C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BigWheelsBodyZ;                                           // 0x01C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationTreshold;                                     // 0x01C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TurningVelocityTreshold;                                  // 0x01CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PitchInterpSpeed;                                         // 0x01D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RollInterpSpeed;                                          // 0x01D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RollMaxAngle;                                             // 0x01D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BankingBoostAlpha;                                        // 0x01DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          PitchAccelerationCurve;                                   // 0x01E0(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              BoostBodyPitchAdd;                                        // 0x0258(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BoostBodyUpAdd;                                           // 0x025C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxSteeringAngle;                                         // 0x0260(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RoadSurfaceAmplitudePitchHighFreq;                        // 0x0264(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RoadSurfaceFrequencyPitchHighFreq;                        // 0x0268(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RoadSurfaceFrequencyRollFreq;                             // 0x026C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RoadSurfacePersistencePitchHighFreq;                      // 0x0270(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RoadSurfaceOctavesPitchHighFreq;                          // 0x0274(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RoadSurfaceAmplitudePitchLowFreq;                         // 0x0278(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RoadSurfaceFrequencyPitchLowFreq;                         // 0x027C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RoadSurfacePersistencePitchLowFreq;                       // 0x0280(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RoadSurfaceOctavesPitchLowFreq;                           // 0x0284(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BodyFollowSpeedOfPitch;                                   // 0x0288(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BodyFollowAmplitudeMultiplier;                            // 0x028C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinTimeToSwitch;                                          // 0x0290(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxTimeToSwitch;                                          // 0x0294(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinBumpTimeValue;                                         // 0x0298(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxBumpTimeValue;                                         // 0x029C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinAlphaValue;                                            // 0x02A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxAlphaValue;                                            // 0x02A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinInterpSpeed;                                           // 0x02A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxInterpSpeed;                                           // 0x02AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DefaultRoadBumpiness;                                     // 0x02B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02B4(0x0004) MISSED OFFSET
	TArray<struct FRoadBumpinessData>                  RoadBumpinessOverrides;                                   // 0x02B8(0x0010) (Edit, ZeroConstructor)
	float                                              EngineAmplitude;                                          // 0x02C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BodyCycleFromEngineCycleRatio;                            // 0x02CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              IdleRPM;                                                  // 0x02D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HoverWheelAngle;                                          // 0x02D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HoverSpinSpeedIdle;                                       // 0x02D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HoverSpinSpeedFullTrottle;                                // 0x02DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HoverOffsetZ;                                             // 0x02E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HoverFrontWheelAdd;                                       // 0x02E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HoverMaxVelocity;                                         // 0x02E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HoverSuspensionIntensityUp;                               // 0x02EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HoverSuspensionIntensityDown;                             // 0x02F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02F4(0x0004) MISSED OFFSET
	TArray<struct FHoverBodySinus>                     HoverBodySin;                                             // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector2D                                   SwivelCone;                                               // 0x0308(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              HoverMaxPitchAngle;                                       // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HoverMaxRollAngle;                                        // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HoverPitchInterpSpeed;                                    // 0x0318(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HoverPitchBoostingInterpSpeed;                            // 0x031C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HoverRollInterpSpeed;                                     // 0x0320(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HoverWheelRotationIntensity;                              // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HoverWheelRotationIntensityY;                             // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x032C(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          HoverBodyTransitionCurve;                                 // 0x0330(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData04[0x2988];                                    // 0x03A8(0x2988) MISSED OFFSET
};

// ScriptStruct OakGame.AnimNode_TrailerHandler
// 0x0760 (0x08A0 - 0x0140)
struct FAnimNode_TrailerHandler : public FAnimNode_SkeletalControlBase
{
	float                                              SuspensionDropMaxSpeed;                                   // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x75C];                                     // 0x0144(0x075C) MISSED OFFSET
};

// ScriptStruct OakGame.AnimNode_WeaponVehicleHandler
// 0x1480 (0x15C0 - 0x0140)
struct FAnimNode_WeaponVehicleHandler : public FAnimNode_SkeletalControlBase
{
	bool                                               bUseYawBone;                                              // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePitchBone;                                            // 0x0141(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0142(0x0002) MISSED OFFSET
	float                                              PitchMinAngleClamp;                                       // 0x0144(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PitchMaxAngleClamp;                                       // 0x0148(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseProjectileBone;                                       // 0x014C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDualWeapon;                                            // 0x014D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseBoneReTargeting;                                      // 0x014E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x014F(0x0001) MISSED OFFSET
	struct FBoneReference                              SourceBone;                                               // 0x0150(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              DestBone;                                                 // 0x0168(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x1440];                                    // 0x0180(0x1440) MISSED OFFSET
};

// ScriptStruct OakGame.DialogParameterValuePair
// 0x0088
struct FDialogParameterValuePair
{
	class UDialogParameter*                            Parameter;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGbxParam                                   Value;                                                    // 0x0008(0x0080) (Edit)
};

// ScriptStruct OakGame.CarnivoraAnimInstanceProxy
// 0x0020 (0x06E0 - 0x06C0)
struct FCarnivoraAnimInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x06C0(0x0020) MISSED OFFSET
};

// ScriptStruct OakGame.EchoDeviceScreenData
// 0x0020 (0x0028 - 0x0008)
struct FEchoDeviceScreenData : public FTableRowBase
{
	class UMaterialInstance*                           MaterialInstance;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UWwiseEvent*                                 Sound;                                                    // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       NextScreenName;                                           // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.PlayerEchoDeviceOrientationData
// 0x0058 (0x0060 - 0x0008)
struct FPlayerEchoDeviceOrientationData : public FTableRowBase
{
	bool                                               bHideEchoInFirstPerson;                                   // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bVerticalSplitscreenHideEchoInFirstPerson;                // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bQuadSplitscreenHideEchoInFirstPerson;                    // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
	struct FVector2D                                   ScreenPosition;                                           // 0x000C(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   SplitScreenScreenPosition;                                // 0x0014(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   VerticalSplitScreenScreenPosition;                        // 0x001C(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   QuadSplitScreenScreenPosition;                            // 0x0024(0x0008) (Edit, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x002C(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    SplitScreenRotationOffset;                                // 0x0038(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    VerticalSplitScreenRotationOffset;                        // 0x0044(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    QuadSplitScreenRotationOffset;                            // 0x0050(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.OakVehicleAnimInstanceProxy
// 0x00A0 (0x0780 - 0x06E0)
struct FOakVehicleAnimInstanceProxy : public FVehicleAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x06E0(0x00A0) MISSED OFFSET
};

// ScriptStruct OakGame.EmperorVehicleAnimInstanceProxy
// 0x0070 (0x07F0 - 0x0780)
struct FEmperorVehicleAnimInstanceProxy : public FOakVehicleAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0780(0x0070) MISSED OFFSET
};

// ScriptStruct OakGame.ReviveStateInformation
// 0x0002
struct FReviveStateInformation
{
	EReviveState                                       ReviveState;                                              // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ReviveSuccessful;                                         // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.FriendEventDataEntry
// 0x0040 (0x0048 - 0x0008)
struct FFriendEventDataEntry : public FTableRowBase
{
	EFriendEventType                                   FriendEventType;                                          // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EFriendEventPriority                               Priority;                                                 // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	uint32_t                                           Ordinal;                                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ContainsSpoiler;                                          // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               BroadcastToSingleFriend;                                  // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DisplayNotificationOnFriendHUD;                           // 0x0012(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysShowNotification;                                  // 0x0013(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DisplayEventOnTimeline;                                   // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FText                                       EventTitleText;                                           // 0x0018(0x0028) (Edit)
	struct FText                                       EventText;                                                // 0x0030(0x0028) (Edit)
};

// ScriptStruct OakGame.VaultCardExportChallengeLists
// 0x0020
struct FVaultCardExportChallengeLists
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UDownloadableContentData*                    AssociatedDLC;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              Challenges;                                               // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.GbxInputEvent_OakLookAxis
// 0x0010 (0x0080 - 0x0070)
struct FGbxInputEvent_OakLookAxis : public FGbxInputEvent_Axis_Core
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.GbxInputEvent_OakMoveAxis
// 0x0000 (0x0070 - 0x0070)
struct FGbxInputEvent_OakMoveAxis : public FGbxInputEvent_Axis_Core
{

};

// ScriptStruct OakGame.GbxInputEvent_OakUIAxis
// 0x0010 (0x0080 - 0x0070)
struct FGbxInputEvent_OakUIAxis : public FGbxInputEvent_Axis_Core
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET
	float                                              HoldTime;                                                 // 0x0078(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.GFxCARMenuCustomizePageConfig
// 0x0020
struct FGFxCARMenuCustomizePageConfig
{
	class UGFxCARMenu*                                 CARMenuOwner;                                             // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UVehicleSpawnerComponent*                    VehicleSpawner;                                           // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UGbxGFxPooledGridList*                       ItemList;                                                 // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FOakCARMenuPartType                         PartType;                                                 // 0x0018(0x0002) (Transient)
	bool                                               bCanSelectEmpty;                                          // 0x001A(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x001B(0x0005) MISSED OFFSET
};

// ScriptStruct OakGame.OakCARMenuStatCardStatInfo
// 0x0010
struct FOakCARMenuStatCardStatInfo
{
	class UOakCARVehiclePartStat*                      Stat;                                                     // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AggregatedValue;                                          // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.CreditsTableRow
// 0x0048 (0x0050 - 0x0008)
struct FCreditsTableRow : public FTableRowBase
{
	class FString                                      FirstName;                                                // 0x0008(0x0010) (Edit, ZeroConstructor)
	class FString                                      LastName;                                                 // 0x0018(0x0010) (Edit, ZeroConstructor)
	struct FName                                       Title;                                                    // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       Organization;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      ExtraText;                                                // 0x0038(0x0010) (Edit, ZeroConstructor)
	struct FName                                       ExtraTextStyle;                                           // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.CreditsRangeIndex
// 0x0010
struct FCreditsRangeIndex
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.StatusItem
// 0x0058
struct FStatusItem
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct OakGame.GFxItemInspectionPartStat
// 0x0020
struct FGFxItemInspectionPartStat
{
	struct FText                                       Description;                                              // 0x0000(0x0028) (Transient)
	EUIStatComparisonResult                            CompareResult;                                            // 0x0018(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.FriendIconNameAndIndex
// 0x0018
struct FFriendIconNameAndIndex
{
	int                                                IconFlashIndex;                                           // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class FString                                      IconTextureName;                                          // 0x0008(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct OakGame.GFxMissionTrackerAnimationData
// 0x0060
struct FGFxMissionTrackerAnimationData
{
	struct FText                                       Description;                                              // 0x0000(0x0028) (Transient)
	EGFxMissionTrackerAnimationType                    AnimationType;                                            // 0x0018(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FMissionObjectiveReference                  MissionObjectiveLink;                                     // 0x0020(0x0030) (Transient)
	class UGFxMissionTrackerSlot*                      OptionalSlotToClearOut;                                   // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.GFxOakMenuHelpers
// 0x0001
struct FGFxOakMenuHelpers
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct OakGame.PauseMenuTickFunction
// 0x0010 (0x0060 - 0x0050)
struct FPauseMenuTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.IconNameAndIndex
// 0x0018
struct FIconNameAndIndex
{
	int                                                IconFlashIndex;                                           // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class FString                                      IconTextureName;                                          // 0x0008(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct OakGame.GFxSkillScreenLoadoutChoiceInfo
// 0x0058
struct FGFxSkillScreenLoadoutChoiceInfo
{
	class UOakPlayerAbilityTreeItemData*               ItemData;                                                 // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FText                                       ChoiceSelectedName;                                       // 0x0008(0x0028) (Transient)
	struct FText                                       ChoiceSelectionName;                                      // 0x0020(0x0028) (Transient)
	struct FText                                       ChoiceDescription;                                        // 0x0038(0x0028) (Transient)
	EGFxSkillScreenLoadoutChoiceEquipState             EquipState;                                               // 0x0050(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.StatConfigInfo
// 0x0020
struct FStatConfigInfo
{
	struct FText                                       StatName;                                                 // 0x0000(0x0028) (Transient)
	unsigned char                                      PercentCompletion;                                        // 0x0018(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.GFxVaultHunterProfileCardStatConfig
// 0x0018
struct FGFxVaultHunterProfileCardStatConfig
{
	TArray<struct FStatConfigInfo>                     StatsInfo;                                                // 0x0000(0x0010) (ZeroConstructor, Transient)
	uint32_t                                           TimePlayedHours;                                          // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	uint32_t                                           TimePlayedMinutes;                                        // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OakGame.GFxVaultHunterProfileCardInventoryConfig
// 0x00C8
struct FGFxVaultHunterProfileCardInventoryConfig
{
	class FString                                      WeaponRarityFrames[0x4];                                  // 0x0000(0x0010) (ZeroConstructor, Transient)
	class FString                                      WeaponTypeFrames[0x4];                                    // 0x0040(0x0010) (ZeroConstructor, Transient)
	class FString                                      GrenadeRarityFrame;                                       // 0x0080(0x0010) (ZeroConstructor, Transient)
	class FString                                      ShieldRarityFrame;                                        // 0x0090(0x0010) (ZeroConstructor, Transient)
	class FString                                      ClassModRarityFrame;                                      // 0x00A0(0x0010) (ZeroConstructor, Transient)
	class FString                                      RelicRarityFrame;                                         // 0x00B0(0x0010) (ZeroConstructor, Transient)
	bool                                               bIsRelic2;                                                // 0x00C0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.GFxVaultHunterProfileCardSkillsConfig
// 0x0020
struct FGFxVaultHunterProfileCardSkillsConfig
{
	float                                              GreenProgress;                                            // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              BlueProgress;                                             // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              RedProgress;                                              // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              PurpleProgress;                                           // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class FString                                      ClassFrameName;                                           // 0x0010(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct OakGame.GFxVaultHunterProfileCardPlayerConfig
// 0x0078
struct FGFxVaultHunterProfileCardPlayerConfig
{
	class UTexture*                                    ProfilePicture;                                           // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FText                                       PlayerName;                                               // 0x0008(0x0028) (Transient)
	struct FText                                       MissionName;                                              // 0x0020(0x0028) (Transient)
	TSoftObjectPtr<class UPlayerClassIdentifier>       PlayerClass;                                              // 0x0038(0x0028) (Transient)
	bool                                               bHasSelectedCharacter;                                    // 0x0060(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0061(0x0017) MISSED OFFSET
};

// ScriptStruct OakGame.OakCharacterMassData
// 0x0010 (0x0018 - 0x0008)
struct FOakCharacterMassData : public FTableRowBase
{
	float                                              Mass;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FlinchThreshold;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StaggerThreshold;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LaunchThreshold;                                          // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.WeaponSightEffectTableData
// 0x0010 (0x0018 - 0x0008)
struct FWeaponSightEffectTableData : public FTableRowBase
{
	struct FLinearColor                                CrosshairColor;                                           // 0x0008(0x0010) (Edit, IsPlainOldData)
};

// ScriptStruct OakGame.OakPlayerAnimInstanceProxy
// 0x0010 (0x06E0 - 0x06D0)
struct FOakPlayerAnimInstanceProxy : public FGbxCharacterAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x06D0(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.IronBearAnimInstanceProxy_FirstPerson
// 0x0000 (0x06E0 - 0x06E0)
struct FIronBearAnimInstanceProxy_FirstPerson : public FOakPlayerAnimInstanceProxy
{

};

// ScriptStruct OakGame.PendingMayhemState
// 0x0010
struct FPendingMayhemState
{
	TArray<struct FMayhemModifierSet>                  ModifierSets;                                             // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct OakGame.OakAbilityDebugMenuSpecList
// 0x0010
struct FOakAbilityDebugMenuSpecList
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.OakAbilityDebugMenuListItemSpec
// 0x0014
struct FOakAbilityDebugMenuListItemSpec
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct OakGame.OakPlayerAbilityTreeItemInfo
// 0x0020
struct FOakPlayerAbilityTreeItemInfo
{
	class UOakPlayerAbilityTreeItemData*               ItemData;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
	class UOakPlayerAbilityTreeBranchData*             BranchData;                                               // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakPlayerAbilityTreeTierInfo
// 0x0010
struct FOakPlayerAbilityTreeTierInfo
{
	class UOakPlayerAbilityTreeTierData*               TierData;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.OakPlayerAbilityTreeBranchInfo
// 0x0010
struct FOakPlayerAbilityTreeBranchInfo
{
	class UOakPlayerAbilityTreeBranchData*             BranchData;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.ActionState_OakAnim
// 0x0028 (0x0520 - 0x04F8)
struct FActionState_OakAnim : public FActionState_Anim
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x04F8(0x0028) MISSED OFFSET
};

// ScriptStruct OakGame.ActionState_OakAnimActionAbility
// 0x0000 (0x0520 - 0x0520)
struct FActionState_OakAnimActionAbility : public FActionState_OakAnim
{

};

// ScriptStruct OakGame.ActionState_OakAnimActionAbilityOperative
// 0x0000 (0x0520 - 0x0520)
struct FActionState_OakAnimActionAbilityOperative : public FActionState_OakAnimActionAbility
{

};

// ScriptStruct OakGame.ActionState_OakAnimActionAbilityPhaseTrance
// 0x0000 (0x0520 - 0x0520)
struct FActionState_OakAnimActionAbilityPhaseTrance : public FActionState_OakAnimActionAbility
{

};

// ScriptStruct OakGame.ActionState_OakAnimPhaseTranceArms
// 0x0000 (0x0520 - 0x0520)
struct FActionState_OakAnimPhaseTranceArms : public FActionState_OakAnim
{

};

// ScriptStruct OakGame.ActionState_OakPlayerMelee
// 0x0000 (0x0520 - 0x0520)
struct FActionState_OakPlayerMelee : public FActionState_OakAnim
{

};

// ScriptStruct OakGame.ActionState_OakAnim_TedioreReload
// 0x0000 (0x0520 - 0x0520)
struct FActionState_OakAnim_TedioreReload : public FActionState_OakAnim
{

};

// ScriptStruct OakGame.ActionState_OakAnim_WeaponReload
// 0x0000 (0x0520 - 0x0520)
struct FActionState_OakAnim_WeaponReload : public FActionState_OakAnim
{

};

// ScriptStruct OakGame.ActionState_OakAttachedAnim
// 0x0008 (0x0528 - 0x0520)
struct FActionState_OakAttachedAnim : public FActionState_OakAnim
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0520(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.OakActionState_CoordinatedEffect
// 0x0000 (0x01C0 - 0x01C0)
struct FOakActionState_CoordinatedEffect : public FActionState_CoordinatedEffect
{

};

// ScriptStruct OakGame.OakActionState_CoordinatedEffect_ActionAbility
// 0x0000 (0x01C0 - 0x01C0)
struct FOakActionState_CoordinatedEffect_ActionAbility : public FOakActionState_CoordinatedEffect
{

};

// ScriptStruct OakGame.ActionState_OakDetachFromSeat
// 0x0008 (0x00D0 - 0x00C8)
struct FActionState_OakDetachFromSeat : public FActionState_Base
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.ActionState_OakEmote
// 0x0000 (0x0520 - 0x0520)
struct FActionState_OakEmote : public FActionState_OakAnim
{

};

// ScriptStruct OakGame.ActionState_OakFrozenDeath
// 0x0000 (0x00C8 - 0x00C8)
struct FActionState_OakFrozenDeath : public FActionState_Base
{

};

// ScriptStruct OakGame.ActionState_OakGib
// 0x0000 (0x00D0 - 0x00D0)
struct FActionState_OakGib : public FActionState_Gib
{

};

// ScriptStruct OakGame.ActionState_OakHostileAttach
// 0x0088 (0x04F0 - 0x0468)
struct FActionState_OakHostileAttach : public FActionState_SimpleAnim
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0468(0x0088) MISSED OFFSET
};

// ScriptStruct OakGame.ReplicatedEject
// 0x000C
struct FReplicatedEject
{
	struct FVector                                     EjectVel;                                                 // 0x0000(0x000C) (IsPlainOldData)
};

// ScriptStruct OakGame.ActionState_OakLeapOnVehicle
// 0x0010 (0x0570 - 0x0560)
struct FActionState_OakLeapOnVehicle : public FActionState_NavHomingJump
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0560(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.ActionState_OakRandomAnim
// 0x0000 (0x0520 - 0x0520)
struct FActionState_OakRandomAnim : public FActionState_OakAnim
{

};

// ScriptStruct OakGame.ActionState_OakPetUltimateAbility
// 0x0000 (0x0520 - 0x0520)
struct FActionState_OakPetUltimateAbility : public FActionState_OakRandomAnim
{

};

// ScriptStruct OakGame.ActionState_OakPhaseMove
// 0x0060 (0x0598 - 0x0538)
struct FActionState_OakPhaseMove : public FActionState_Loop
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0538(0x0060) MISSED OFFSET
};

// ScriptStruct OakGame.ActionState_OakPhysicalDeath
// 0x0000 (0x0538 - 0x0538)
struct FActionState_OakPhysicalDeath : public FActionState_PhysicalDeath
{

};

// ScriptStruct OakGame.ActionState_OakVehicleInteractionAnim
// 0x0010 (0x0530 - 0x0520)
struct FActionState_OakVehicleInteractionAnim : public FActionState_OakAnim
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0520(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.ActionState_OakVehicleMoveTo
// 0x0018 (0x00E0 - 0x00C8)
struct FActionState_OakVehicleMoveTo : public FActionState_Base
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x00C8(0x0018) MISSED OFFSET
};

// ScriptStruct OakGame.ActionState_OakVehicleSpawnAnim
// 0x0020 (0x0518 - 0x04F8)
struct FActionState_OakVehicleSpawnAnim : public FActionState_SpawnAnim
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x04F8(0x0020) MISSED OFFSET
};

// ScriptStruct OakGame.ActionState_OakCloak
// 0x0000 (0x01C0 - 0x01C0)
struct FActionState_OakCloak : public FOakActionState_CoordinatedEffect
{

};

// ScriptStruct OakGame.ChunkIdAssetClassesData
// 0x0018
struct FChunkIdAssetClassesData
{
	int                                                ChunkId;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FSoftClassPath>                      AssetClasses;                                             // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.PlayerCountAndPlaythroughDefinedValueRow
// 0x01C0 (0x01C8 - 0x0008)
struct FPlayerCountAndPlaythroughDefinedValueRow : public FAttributeDefinedValueRow
{
	struct FAttributeInitializationData                OnePlayer_PT1;                                            // 0x0008(0x0038) (Edit)
	struct FAttributeInitializationData                TwoPlayers_PT1;                                           // 0x0040(0x0038) (Edit)
	struct FAttributeInitializationData                ThreePlayers_PT1;                                         // 0x0078(0x0038) (Edit)
	struct FAttributeInitializationData                FourPlayers_PT1;                                          // 0x00B0(0x0038) (Edit)
	struct FAttributeInitializationData                OnePlayer_PT2;                                            // 0x00E8(0x0038) (Edit)
	struct FAttributeInitializationData                TwoPlayers_PT2;                                           // 0x0120(0x0038) (Edit)
	struct FAttributeInitializationData                ThreePlayers_PT2;                                         // 0x0158(0x0038) (Edit)
	struct FAttributeInitializationData                FourPlayers_PT2;                                          // 0x0190(0x0038) (Edit)
};

// ScriptStruct OakGame.PlayerCountDefinedValueRow
// 0x00E0 (0x00E8 - 0x0008)
struct FPlayerCountDefinedValueRow : public FAttributeDefinedValueRow
{
	struct FAttributeInitializationData                OnePlayer;                                                // 0x0008(0x0038) (Edit)
	struct FAttributeInitializationData                TwoPlayers;                                               // 0x0040(0x0038) (Edit)
	struct FAttributeInitializationData                ThreePlayers;                                             // 0x0078(0x0038) (Edit)
	struct FAttributeInitializationData                FourPlayers;                                              // 0x00B0(0x0038) (Edit)
};

// ScriptStruct OakGame.OakCARMenuStatLineData
// 0x0008
struct FOakCARMenuStatLineData
{
	class UOakCARVehiclePartStat*                      PartStat;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.ChallengeReward
// 0x0020
struct FChallengeReward
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct OakGame.CameraManViewPoint
// 0x0018
struct FCameraManViewPoint
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct OakGame.PlayerTeleportState
// 0x0038
struct FPlayerTeleportState
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
	class UOakPlayerTeleportData*                      TeleportData;                                             // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OakGame.CheatManagerItemPool
// 0x0018
struct FCheatManagerItemPool
{
	class FString                                      ItemPool;                                                 // 0x0000(0x0010) (ZeroConstructor)
	int                                                Quantity;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.OakHealthTypeBalanceData
// 0x0038 (0x0040 - 0x0008)
struct FOakHealthTypeBalanceData : public FHealthTypeBalanceData
{
	float                                              NonelementalModifier;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CorrosiveModifier;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CryoModifier;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FireModifier;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShockModifier;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RadiationModifier;                                        // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FDataTableRowHandle                         PlayThroughTwoOverride;                                   // 0x0020(0x0010) (Edit)
	struct FDataTableRowHandle                         MayhemLevel4Override;                                     // 0x0030(0x0010) (Deprecated)
};

// ScriptStruct OakGame.GbxInputEventHelper_SigFunc_OakMoveLookAxis_Data
// 0x0010
struct FGbxInputEventHelper_SigFunc_OakMoveLookAxis_Data
{
	struct FVector                                     Val;                                                      // 0x0000(0x000C) (IsPlainOldData)
	bool                                               bGamePad;                                                 // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct OakGame.OakInventorySortData
// 0x0028
struct FOakInventorySortData
{
	EOakInventoryMenuSortMode                          SortMode;                                                 // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FOakInventoryMenuTypePriorityInfo>   SortPriorities;                                           // 0x0008(0x0010) (ZeroConstructor, Transient)
	bool                                               bDoEquippedTypeFirst;                                     // 0x0018(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FName                                       EquippedItemGrouping;                                     // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OakGame.OakInventoryMenuCounts
// 0x0028
struct FOakInventoryMenuCounts
{
	int                                                ItemCount;                                                // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemMax;                                                  // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ItemCountColor;                                           // 0x0008(0x0010) (BlueprintVisible, IsPlainOldData)
	int                                                GoldenKeyCount;                                           // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ErediumCount;                                             // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MoneyCount;                                               // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                VaultCoinCount;                                           // 0x0024(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OakGame.ManagedActorCountData
// 0x0010
struct FManagedActorCountData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.ManagedActorOwnerEntry
// 0x0018
struct FManagedActorOwnerEntry
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct OakGame.ManagedActorEntry
// 0x0018
struct FManagedActorEntry
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<class AActor*>                              Actors;                                                   // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.OakModifierSetWithMutexTags
// 0x0060
struct FOakModifierSetWithMutexTags
{
	struct FOakModifierSet                             ModifierSet;                                              // 0x0000(0x0050)
	TArray<struct FName>                               MutexTags;                                                // 0x0050(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.OakModifierStatusEffectData
// 0x0018 (0x0020 - 0x0008)
struct FOakModifierStatusEffectData : public FTableRowBase
{
	class UGbxAttributeData*                           AttributeData;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EGbxAttributeModifierType                          ModifierType;                                             // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              MaxValue;                                                 // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinValue;                                                 // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.OakModifierTargetResolverData
// 0x0018 (0x0020 - 0x0008)
struct FOakModifierTargetResolverData : public FTableRowBase
{
	TArray<class UGbxAbilityEffectTargetResolutionData*> TargetResolvers;                                          // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UGbxAbilityEffectTargetResolutionData*       TargetResolver;                                           // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.ScriptedVehicleMove
// 0x0024
struct FScriptedVehicleMove
{
	unsigned char                                      UnknownData00[0x24];                                      // 0x0000(0x0024) MISSED OFFSET
};

// ScriptStruct OakGame.DrivingOverride
// 0x0002
struct FDrivingOverride
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

// ScriptStruct OakGame.SpeedOverride
// 0x0060
struct FSpeedOverride
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct OakGame.OakOnlineLobbyInfo
// 0x0030
struct FOakOnlineLobbyInfo
{
	ENetworkType                                       NetworkType;                                              // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EInviteType                                        InviteType;                                               // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FText                                       CurrentActivity;                                          // 0x0008(0x0028) (BlueprintVisible)
	EOakOnlineLobbyConnectivityState                   ConnectivityState;                                        // 0x0020(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                CurrentConnectedPlayerCount;                              // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxConnectedPlayerCount;                                  // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.PlayerEchoLogStatus
// 0x0010
struct FPlayerEchoLogStatus
{
	class UEchoLogData*                                EchoLogData;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.AutoAimDebugData
// 0x0088
struct FAutoAimDebugData
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0000(0x0088) MISSED OFFSET
};

// ScriptStruct OakGame.OakProfileCloudData
// 0x0100
struct FOakProfileCloudData
{
	TArray<struct FGameStatSaveGameData>               ProfileStatsData;                                         // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FInventorySaveGameData>              BankInventoryList;                                        // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FInventorySaveGameData>              LostLootInventoryList;                                    // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FOakMailItem>                        NPCMailItems;                                             // 0x0030(0x0010) (ZeroConstructor)
	TArray<class FString>                              MailGuids;                                                // 0x0040(0x0010) (ZeroConstructor)
	TArray<struct FOakSDUSaveGameData>                 ProfileSDUList;                                           // 0x0050(0x0010) (ZeroConstructor)
	TArray<struct FOakCustomizationSaveGameData>       UnlockedCustomizations;                                   // 0x0060(0x0010) (ZeroConstructor)
	TArray<struct FOakInventoryCustomizationPartInfo>  UnlockedInventoryCustomizationParts;                      // 0x0070(0x0010) (ZeroConstructor)
	int64_t                                            GuardianExperience;                                       // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FCrewQuartersDecorationItemSaveGameData> UnlockedCrewQuartersDecorations;                          // 0x0088(0x0010) (ZeroConstructor)
	TArray<struct FCrewQuartersRoomItemSaveGameData>   UnlockedCrewQuartersRooms;                                // 0x0098(0x0010) (ZeroConstructor)
	TArray<struct FOakChallengeSaveGameData>           OakProfileChallengeData;                                  // 0x00A8(0x0010) (ZeroConstructor)
	TArray<int>                                        CitizenScienceLevelProgression;                           // 0x00B8(0x0010) (ZeroConstructor)
	int                                                CitizenScienceCSBucksAmount;                              // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bCitizenScienceHasSeenIntroVideo;                         // 0x00CC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCitizenScienceTutorialDone;                              // 0x00CD(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00CE(0x0002) MISSED OFFSET
	uint32_t                                           LastActiveVaultCardID;                                    // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CurrentVaultCardDaySeed;                                  // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CurrentVaultCardWeekSeed;                                 // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	TArray<struct FVaultCardRewardList>                VaultCardRewards;                                         // 0x00E0(0x0010) (ZeroConstructor)
	TArray<struct FOakVaultCardPreviousChallengeData>  VaultCardPreviousChallenges;                              // 0x00F0(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.InventoryUISaveGameData
// 0x000C
struct FInventoryUISaveGameData
{
	int                                                PickupOrderIndex;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasBeenSeenInInventoryMenu;                              // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bMarkedAsFavorite;                                        // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bMarkedAsJunk;                                            // 0x0006(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0007(0x0001) MISSED OFFSET
	int                                                InventoryListIndex;                                       // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.SDUBonusLevelData
// 0x0060 (0x0068 - 0x0008)
struct FSDUBonusLevelData : public FTableRowBase
{
	int                                                SDUPrice;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UInventoryCategoryData*                      Currency;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAttributeEffectData                        AttributeModifyInfo;                                      // 0x0018(0x0048) (Edit)
	class UInventoryRarityData*                        SDURarity;                                                // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakStatusEffectPresentation_Material_TransitionData
// 0x0008
struct FOakStatusEffectPresentation_Material_TransitionData
{
	float                                              TransitionTriggerValue;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaterialTargetValue;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.StreamingStatusInfo
// 0x0040
struct FStreamingStatusInfo
{
	struct FText                                       Text;                                                     // 0x0000(0x0028)
	struct FColor                                      Color;                                                    // 0x0018(0x0004) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FText                                       Description;                                              // 0x0020(0x0028)
	bool                                               bIsDescriptionRelevant;                                   // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct OakGame.OakInteractiveEventStats
// 0x0020
struct FOakInteractiveEventStats
{
	int                                                NbRareChestEvents;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RareChestEventWinners;                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NbBadassEvents;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BadassViewersKilled;                                      // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NbPinataEvents;                                           // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NbMoxxisEvents;                                           // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MoxxisEventTotalBits;                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NbExtractionEvents;                                       // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.OakThumbnailManagerItemInfo
// 0x0710
struct FOakThumbnailManagerItemInfo
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
	class FString                                      URL;                                                      // 0x0040(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
	struct FOakThumbnailManagerIcon                    IconData;                                                 // 0x0058(0x0028) (Transient)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0080(0x0010) MISSED OFFSET
	struct FOakThumbnailManagerRenderProperties        RenderProperties;                                         // 0x0090(0x0670) (Transient)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0700(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.OakUIVirtualBackpackConfig
// 0x0070
struct FOakUIVirtualBackpackConfig
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct OakGame.HornSequence
// 0x0020
struct FHornSequence
{
	TArray<struct FHornSequenceEntry>                  HornSequence;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.FakeGear
// 0x0098
struct FFakeGear
{
	struct FFloatCurve                                 RPMCurve;                                                 // 0x0000(0x0090) (Edit)
	struct FVector2D                                   SpeedMinMax;                                              // 0x0090(0x0008) (Edit, IsPlainOldData)
};

// ScriptStruct OakGame.NavPainterLayerEntry
// 0x0002
struct FNavPainterLayerEntry
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

// ScriptStruct OakGame.WeaponAudioBodyLoopPlaybackInfo
// 0x0028
struct FWeaponAudioBodyLoopPlaybackInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct OakGame.WeaponShellCasingImpact
// 0x0018
struct FWeaponShellCasingImpact
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct OakGame.WeaponAudioFailsafe
// 0x0030
struct FWeaponAudioFailsafe
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct OakGame.OutrunnerVehicleAnimInstanceProxy
// 0x0040 (0x07C0 - 0x0780)
struct FOutrunnerVehicleAnimInstanceProxy : public FOakVehicleAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0780(0x0040) MISSED OFFSET
};

// ScriptStruct OakGame.PlayerIdentityWidgetInfo
// 0x0058
struct FPlayerIdentityWidgetInfo
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct OakGame.RegionBalancePreviewData
// 0x000C
struct FRegionBalancePreviewData
{
	int                                                GameStageMinimum;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                GameStageMaximum;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                GameStageIncreaseOverPlayerLevel;                         // 0x0008(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct OakGame.RevolverVehicleAnimInstanceProxy
// 0x0020 (0x07A0 - 0x0780)
struct FRevolverVehicleAnimInstanceProxy : public FOakVehicleAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0780(0x0020) MISSED OFFSET
};

// ScriptStruct OakGame.StandInLightingComponentConfig
// 0x0030
struct FStandInLightingComponentConfig
{
	struct FName                                       ComponentName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideLocation;                                        // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FVector                                     Location;                                                 // 0x000C(0x000C) (Edit, IsPlainOldData)
	bool                                               bOverrideRotation;                                        // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FRotator                                    Rotation;                                                 // 0x001C(0x000C) (Edit, IsPlainOldData)
	bool                                               bOverrideIntensity;                                       // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              Intensity;                                                // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.StandInLightingConfig
// 0x0018
struct FStandInLightingConfig
{
	TArray<struct FStandInLightingComponentConfig>     LightComponents;                                          // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              AmbientCubemapIntensity;                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.StandInLightingSetting
// 0x0068
struct FStandInLightingSetting
{
	struct FStandInLightingConfig                      DefaultLighting;                                          // 0x0000(0x0018) (Edit)
	TMap<class UPlayerClassIdentifier*, struct FStandInLightingConfig> PlayerClassLighting;                                      // 0x0018(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.StandInScaleSetting
// 0x0068
struct FStandInScaleSetting
{
	float                                              Scale;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TMap<class UPlayerClassIdentifier*, float>         PlayerClassScale;                                         // 0x0008(0x0050) (Edit, ZeroConstructor)
	EStandInAutoScaleMode                              AutoScaleMode;                                            // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	struct FVector                                     AutoScaleExtent;                                          // 0x005C(0x000C) (Edit, IsPlainOldData)
};

// ScriptStruct OakGame.StandInPlayerClassSpecificPositionSettingContextOverride
// 0x0018
struct FStandInPlayerClassSpecificPositionSettingContextOverride
{
	struct FVector2D                                   ScreenPosition;                                           // 0x0000(0x0008) (Edit, IsPlainOldData)
	struct FRotator                                    DefaultRotation;                                          // 0x0008(0x000C) (Edit, IsPlainOldData)
	float                                              Depth;                                                    // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OakGame.StandInPlayerClassSpecificPositionSetting
// 0x0068
struct FStandInPlayerClassSpecificPositionSetting
{
	struct FVector2D                                   ScreenPosition;                                           // 0x0000(0x0008) (Edit, IsPlainOldData)
	struct FRotator                                    DefaultRotation;                                          // 0x0008(0x000C) (Edit, IsPlainOldData)
	float                                              Depth;                                                    // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, struct FStandInPlayerClassSpecificPositionSettingContextOverride> ContextOverrides;                                         // 0x0018(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.StandInPositionSetting
// 0x0078
struct FStandInPositionSetting
{
	struct FVector2D                                   ScreenPosition;                                           // 0x0000(0x0008) (Edit, IsPlainOldData)
	struct FRotator                                    DefaultRotation;                                          // 0x0008(0x000C) (Edit, IsPlainOldData)
	float                                              Depth;                                                    // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOrientProjectionFX;                                      // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FVector2D                                   ProjectionFXOffset;                                       // 0x001C(0x0008) (Edit, IsPlainOldData)
	float                                              ProjectionFXDepthOffset;                                  // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<class UPlayerClassIdentifier*, struct FStandInPlayerClassSpecificPositionSetting> PlayerClassPosition;                                      // 0x0028(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct OakGame.StandInUIConfigData
// 0x0410 (0x0418 - 0x0008)
struct FStandInUIConfigData : public FTableRowBase
{
	bool                                               bPositionRelativeToEchoDeviceProjectionSocket;            // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FName                                       CustomPivotSocket;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLockStandInPositionOnFadeOut;                            // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FStandInLightingSetting                     Lighting;                                                 // 0x0020(0x0068) (Edit)
	struct FStandInScaleSetting                        Scale;                                                    // 0x0088(0x0068) (Edit)
	struct FStandInPositionSetting                     Positioning;                                              // 0x00F0(0x0078) (Edit)
	struct FStandInScaleSetting                        ScaleSplitScreen;                                         // 0x0168(0x0068) (Edit)
	struct FStandInScaleSetting                        ScaleVerticalSplitScreen;                                 // 0x01D0(0x0068) (Edit)
	struct FStandInScaleSetting                        ScaleQuadSplitScreen;                                     // 0x0238(0x0068) (Edit)
	struct FStandInPositionSetting                     PositioningSplitScreen;                                   // 0x02A0(0x0078) (Edit)
	struct FStandInPositionSetting                     PositioningVerticalSplitScreen;                           // 0x0318(0x0078) (Edit)
	struct FStandInPositionSetting                     PositioningQuadSplitScreen;                               // 0x0390(0x0078) (Edit)
	bool                                               bMayAlterRotationDamping;                                 // 0x0408(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0409(0x0003) MISSED OFFSET
	float                                              RotationDamping;                                          // 0x040C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LocationDamping;                                          // 0x0410(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0414(0x0004) MISSED OFFSET
};

// ScriptStruct OakGame.StandInUIControllerTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FStandInUIControllerTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct OakGame.TechnicalVehicleAnimInstanceProxy
// 0x0010 (0x0790 - 0x0780)
struct FTechnicalVehicleAnimInstanceProxy : public FOakVehicleAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0780(0x0010) MISSED OFFSET
};

// ScriptStruct OakGame.TestMapMenuEntry
// 0x0028
struct FTestMapMenuEntry
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0028)
	class FString                                      MapName;                                                  // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct OakGame.VehicleAttachWeaponAdditionalData
// 0x0010
struct FVehicleAttachWeaponAdditionalData
{
	struct FName                                       Key;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FName                                       Data;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
};

// ScriptStruct OakGame.WeaponVehicleAnimInstanceProxy
// 0x00C0 (0x0780 - 0x06C0)
struct FWeaponVehicleAnimInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0xC0];                                      // 0x06C0(0x00C0) MISSED OFFSET
};

// ScriptStruct OakGame.CachedPlanetZonePOI
// 0x0030
struct FCachedPlanetZonePOI
{
	class UZoneMapData*                                ZoneReference;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TSoftObjectPtr<class UStaticMesh>                  ZoneMeshOnPlanet;                                         // 0x0008(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

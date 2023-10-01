#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_AnimGraphRuntime_classes.hpp"
#include "BL3_SignificanceManager_classes.hpp"
#include "BL3_GbxRuntime_classes.hpp"
#include "BL3_CoreUObject_classes.hpp"
#include "BL3_GameplayTasks_classes.hpp"
#include "BL3_GameplayTags_classes.hpp"
#include "BL3_AIModule_classes.hpp"
#include "BL3_Engine_classes.hpp"
#include "BL3_GbxAnimRuntimeBase_classes.hpp"
#include "BL3_ImmediatePhysics_classes.hpp"
#include "BL3_InputCore_classes.hpp"
#include "BL3_AnimationCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GbxGameSystemCore.EGbxActionEndState
enum class EGbxActionEndState : uint8_t
{
	NotFinished                    = 0,
	Success                        = 1,
	Interrupted                    = 2,
	Aborted                        = 3,
	Denied                         = 4,
	Error                          = 5,
	EGbxActionEndState_MAX         = 6
};


// Enum GbxGameSystemCore.EStanceStackLayer
enum class EStanceStackLayer : uint8_t
{
	Default                        = 0,
	AITree                         = 1,
	Blueprint                      = 2,
	Scripted                       = 3,
	Count                          = 4,
	EStanceStackLayer_MAX          = 5
};


// Enum GbxGameSystemCore.EFacingChannel
enum class EFacingChannel : uint8_t
{
	Body                           = 0,
	Aim                            = 1,
	Look                           = 2,
	Count                          = 3,
	EFacingChannel_MAX             = 4
};


// Enum GbxGameSystemCore.EFacingInfoType
enum class EFacingInfoType : uint8_t
{
	None                           = 0,
	Actor                          = 1,
	ActorEyes                      = 2,
	Component                      = 3,
	Location                       = 4,
	Direction                      = 5,
	Rotation                       = 6,
	Controller                     = 7,
	ControllerAim                  = 8,
	Path                           = 9,
	Count                          = 10,
	EFacingInfoType_MAX            = 11
};


// Enum GbxGameSystemCore.ENavAnimState
enum class ENavAnimState : uint8_t
{
	None                           = 0,
	Idle                           = 1,
	Hop                            = 2,
	Start                          = 3,
	Move                           = 4,
	Stop                           = 5,
	TurnIdle                       = 6,
	TurnMoving                     = 7,
	TurnBlend                      = 8,
	Max                            = 9
};


// Enum GbxGameSystemCore.EScriptedLadderType
enum class EScriptedLadderType : uint8_t
{
	None                           = 0,
	GettingOnAtBottom              = 1,
	GettingOffAtBottom             = 2,
	GettingOnAtTop                 = 3,
	GettingOffAtTop                = 4,
	EScriptedLadderType_MAX        = 5
};


// Enum GbxGameSystemCore.EUsabilityType
enum class EUsabilityType : uint8_t
{
	Primary                        = 0,
	Secondary                      = 1,
	Count                          = 2,
	EUsabilityType_MAX             = 3
};


// Enum GbxGameSystemCore.EAIDodgeType
enum class EAIDodgeType : uint8_t
{
	None                           = 0,
	Bullet                         = 1,
	Grenade                        = 2,
	Random                         = 3,
	Zone                           = 4,
	EAIDodgeType_MAX               = 5
};


// Enum GbxGameSystemCore.EGbxGlyphSetOption
enum class EGbxGlyphSetOption : uint8_t
{
	AutoDetect                     = 0,
	Set1                           = 1,
	Set2                           = 2,
	Set3                           = 3,
	Set4                           = 4,
	Set5                           = 5,
	Set6                           = 6,
	EGbxGlyphSetOption_MAX         = 7
};


// Enum GbxGameSystemCore.EStatusEffectDurationType
enum class EStatusEffectDurationType : uint8_t
{
	Timed                          = 0,
	Infinite                       = 1,
	EStatusEffectDurationType_MAX  = 2
};


// Enum GbxGameSystemCore.EHoldToUseMode
enum class EHoldToUseMode : uint8_t
{
	Disabled                       = 0,
	HoldOnly                       = 1,
	Both                           = 2,
	EHoldToUseMode_MAX             = 3
};


// Enum GbxGameSystemCore.EPawnAttachStatus
enum class EPawnAttachStatus : uint8_t
{
	Unoccupied                     = 0,
	Attaching                      = 1,
	Attached                       = 2,
	Detaching                      = 3,
	EPawnAttachStatus_MAX          = 4
};


// Enum GbxGameSystemCore.ESpawnCostSelection
enum class ESpawnCostSelection : uint8_t
{
	Preset                         = 0,
	Custom                         = 1,
	ESpawnCostSelection_MAX        = 2
};


// Enum GbxGameSystemCore.EMassSelection
enum class EMassSelection : uint8_t
{
	Automatic                      = 0,
	Custom                         = 1,
	Preset                         = 2,
	EMassSelection_MAX             = 3
};


// Enum GbxGameSystemCore.EDamageCausedModificationStrategy
enum class EDamageCausedModificationStrategy : uint8_t
{
	UseSelfModifier                = 0,
	UseInstigatorModifier          = 1,
	EDamageCausedModificationStrategy_MAX = 2
};


// Enum GbxGameSystemCore.ECriticalHitDamageOverride
enum class ECriticalHitDamageOverride : uint8_t
{
	None                           = 0,
	ForceCrit                      = 1,
	ForceNotCrit                   = 2,
	ECriticalHitDamageOverride_MAX = 3
};


// Enum GbxGameSystemCore.ETeamCollisionChannel
enum class ETeamCollisionChannel : uint8_t
{
	One                            = 0,
	Two                            = 1,
	Three                          = 2,
	Four                           = 3,
	ETeamCollisionChannel_MAX      = 4
};


// Enum GbxGameSystemCore.EStanceValueOverrideType
enum class EStanceValueOverrideType : uint8_t
{
	None                           = 0,
	Relative                       = 1,
	Absolute                       = 2,
	EStanceValueOverrideType_MAX   = 3
};


// Enum GbxGameSystemCore.ERecentDamageFlags
enum class ERecentDamageFlags : uint8_t
{
	None                           = 0,
	CriticalHit                    = 1,
	Healing                        = 2,
	Shield                         = 3,
	Armor                          = 4,
	DamageOverTime                 = 5,
	Resist                         = 6,
	ZeroDamage                     = 7,
	Weapon                         = 8,
	ERecentDamageFlags_MAX         = 9
};


// Enum GbxGameSystemCore.EUIStatComparisonResult
enum class EUIStatComparisonResult : uint8_t
{
	None                           = 0,
	Better                         = 1,
	Worse                          = 2,
	Same                           = 3,
	EUIStatComparisonResult_MAX    = 4
};


// Enum GbxGameSystemCore.EActorPartTypeSelectionOverrideMode
enum class EActorPartTypeSelectionOverrideMode : uint8_t
{
	PreferredParts                 = 0,
	OverrideParts                  = 1,
	EActorPartTypeSelectionOverrideMode_MAX = 2
};


// Enum GbxGameSystemCore.EActorPartReplacementMode
enum class EActorPartReplacementMode : uint8_t
{
	Additive                       = 0,
	Selective                      = 1,
	Complete                       = 2,
	EActorPartReplacementMode_MAX  = 3
};


// Enum GbxGameSystemCore.EActorTagQueryMode
enum class EActorTagQueryMode : uint8_t
{
	HasAny                         = 0,
	HasNone                        = 1,
	HasAll                         = 2,
	EActorTagQueryMode_MAX         = 3
};


// Enum GbxGameSystemCore.EChargeCurveType
enum class EChargeCurveType : uint8_t
{
	Relative                       = 0,
	Absolute                       = 1,
	EChargeCurveType_MAX           = 2
};


// Enum GbxGameSystemCore.ERelativeSizeCharge
enum class ERelativeSizeCharge : uint8_t
{
	Everyone                       = 0,
	SameAndBigger                  = 1,
	OnlyBigger                     = 2,
	None                           = 3,
	ERelativeSizeCharge_MAX        = 4
};


// Enum GbxGameSystemCore.EAnimActionDefInput
enum class EAnimActionDefInput : uint8_t
{
	AnimAsset                      = 0,
	AnimAssetName                  = 1,
	EAnimActionDefInput_MAX        = 2
};


// Enum GbxGameSystemCore.EAnimNotifyAlignType
enum class EAnimNotifyAlignType : uint8_t
{
	Self                           = 0,
	Partner                        = 1,
	EAnimNotifyAlignType_MAX       = 2
};


// Enum GbxGameSystemCore.EAttributeInitializerUsageMode
enum class EAttributeInitializerUsageMode : uint8_t
{
	Set                            = 0,
	Add                            = 1,
	Scale                          = 2,
	Offset                         = 3,
	EAttributeInitializerUsageMode_MAX = 4
};


// Enum GbxGameSystemCore.EBalanceValueType
enum class EBalanceValueType : uint8_t
{
	GameStage                      = 0,
	ExperienceLevel                = 1,
	EBalanceValueType_MAX          = 2
};


// Enum GbxGameSystemCore.EChallengeType
enum class EChallengeType : uint8_t
{
	ECT_Stat                       = 0,
	ECT_LevelObject                = 1,
	ECT_DesignerTriggered          = 2,
	ECT_Blueprint                  = 3,
	ECT_MAX                        = 4
};


// Enum GbxGameSystemCore.ECharacterMovementAttributeValueType
enum class ECharacterMovementAttributeValueType : uint8_t
{
	Speed                          = 0,
	Speed2D                        = 1,
	ECharacterMovementAttributeValueType_MAX = 2
};


// Enum GbxGameSystemCore.ECinematicAudioMode
enum class ECinematicAudioMode : uint8_t
{
	NormalWorldAudio               = 0,
	StandardCinematic              = 1,
	ExclusiveMode                  = 2,
	ECinematicAudioMode_MAX        = 3
};


// Enum GbxGameSystemCore.EConditionalAreaDamageFilter
enum class EConditionalAreaDamageFilter : uint8_t
{
	MustNotBeRadiusDamage          = 0,
	MustBeRadiusDamage             = 1,
	EConditionalAreaDamageFilter_MAX = 2
};


// Enum GbxGameSystemCore.EConditionalDamageCriticalFilter
enum class EConditionalDamageCriticalFilter : uint8_t
{
	HitRegionMustBeCritical        = 0,
	HitRegioneMustNotBeCritical    = 1,
	MustBeAnyCritical              = 2,
	MustNotBeAnyCritical           = 3,
	EConditionalDamageCriticalFilter_MAX = 4
};


// Enum GbxGameSystemCore.EDamageFilterExprMode
enum class EDamageFilterExprMode : uint8_t
{
	MustMatch                      = 0,
	MustNotMatch                   = 1,
	EDamageFilterExprMode_MAX      = 2
};


// Enum GbxGameSystemCore.EConditionalDamageTypeBonusMode
enum class EConditionalDamageTypeBonusMode : uint8_t
{
	AddBonusDamage                 = 0,
	AddBonusDamage_BackToAttacker  = 1,
	AddBonusDamage_BackToAttackerInstigator = 2,
	ConvertPartialDamage           = 3,
	ConvertAllDamage               = 4,
	EConditionalDamageTypeBonusMode_MAX = 5
};


// Enum GbxGameSystemCore.EConditionalDamageModifierType
enum class EConditionalDamageModifierType : uint8_t
{
	Scale                          = 0,
	Add                            = 1,
	ScaleSimple                    = 2,
	EConditionalDamageModifierType_MAX = 3
};


// Enum GbxGameSystemCore.ECMInheritVelocityType
enum class ECMInheritVelocityType : uint8_t
{
	Forward                        = 0,
	Backward                       = 1,
	Right                          = 2,
	Left                           = 3,
	Up                             = 4,
	Down                           = 5,
	ECMInheritVelocityType_MAX     = 6
};


// Enum GbxGameSystemCore.ECMTerminalVelocityModificationType
enum class ECMTerminalVelocityModificationType : uint8_t
{
	OverrideTerminalVelocity       = 0,
	ScaleTerminalVelocity          = 1,
	ECMTerminalVelocityModificationType_MAX = 2
};


// Enum GbxGameSystemCore.ECMGravityModificationType
enum class ECMGravityModificationType : uint8_t
{
	ScaleGravity                   = 0,
	ScaleDefaultGravity            = 1,
	OverrideGravity                = 2,
	ECMGravityModificationType_MAX = 3
};


// Enum GbxGameSystemCore.ECMLedgeBehavior
enum class ECMLedgeBehavior : uint8_t
{
	CanWalkOffLedges               = 0,
	CannotWalkOffLedges            = 1,
	StopOnReachedLedge             = 2,
	ECMLedgeBehavior_MAX           = 3
};


// Enum GbxGameSystemCore.ECMTeleportPreferenceType
enum class ECMTeleportPreferenceType : uint8_t
{
	Behind_TargetFacing            = 0,
	Ahead_TargetFacing             = 1,
	Behind_MoveDirection           = 2,
	Ahead_MoveDirection            = 3,
	ECMTeleportPreferenceType_MAX  = 4
};


// Enum GbxGameSystemCore.ECMMoveLRControlType
enum class ECMMoveLRControlType : uint8_t
{
	None                           = 0,
	Yaw                            = 1,
	Speed                          = 2,
	ECMMoveLRControlType_MAX       = 3
};


// Enum GbxGameSystemCore.ECMMoveFBControlType
enum class ECMMoveFBControlType : uint8_t
{
	None                           = 0,
	Pitch                          = 1,
	Speed                          = 2,
	ECMMoveFBControlType_MAX       = 3
};


// Enum GbxGameSystemCore.ECMMovementType
enum class ECMMovementType : uint8_t
{
	Ground                         = 0,
	Flying                         = 1,
	Falling                        = 2,
	MoveNoneRootMotion             = 3,
	ECMMovementType_MAX            = 4
};


// Enum GbxGameSystemCore.EDamageAreaBoxOriginType
enum class EDamageAreaBoxOriginType : uint8_t
{
	Centered                       = 0,
	OffsetByDepth                  = 1,
	EDamageAreaBoxOriginType_MAX   = 2
};


// Enum GbxGameSystemCore.EDamageAreaOverlapFilterType
enum class EDamageAreaOverlapFilterType : uint8_t
{
	AllDynamicObjects              = 0,
	Profile                        = 1,
	Custom                         = 2,
	EDamageAreaOverlapFilterType_MAX = 3
};


// Enum GbxGameSystemCore.EDamageComponentHealthMode
enum class EDamageComponentHealthMode : uint8_t
{
	ResourcePools                  = 0,
	SimpleHealth                   = 1,
	EDamageComponentHealthMode_MAX = 2
};


// Enum GbxGameSystemCore.EAdditionalDamageClassifier
enum class EAdditionalDamageClassifier : uint8_t
{
	None                           = 0,
	BonusDamage                    = 1,
	ReflectedBonusDamage           = 2,
	ConvertedDamage                = 3,
	EAdditionalDamageClassifier_MAX = 4
};


// Enum GbxGameSystemCore.EDebugDisplayVerbosityLevel
enum class EDebugDisplayVerbosityLevel : uint8_t
{
	Normal                         = 0,
	Verbose                        = 1,
	EDebugDisplayVerbosityLevel_MAX = 2
};


// Enum GbxGameSystemCore.EExplosionTinnitusDuration
enum class EExplosionTinnitusDuration : uint8_t
{
	None                           = 0,
	Short                          = 1,
	Medium                         = 2,
	Long                           = 3,
	EExplosionTinnitusDuration_MAX = 4
};


// Enum GbxGameSystemCore.EFeedbackDataFirstPersonImpulseType
enum class EFeedbackDataFirstPersonImpulseType : uint8_t
{
	None                           = 0,
	Custom                         = 1,
	EFeedbackDataFirstPersonImpulseType_MAX = 2
};


// Enum GbxGameSystemCore.EFeedbackType
enum class EFeedbackType : uint8_t
{
	Ranged                         = 0,
	Directional                    = 1,
	RandomRumble                   = 2,
	Continuous                     = 3,
	RandomShake                    = 4,
	EFeedbackType_MAX              = 5
};


// Enum GbxGameSystemCore.EForceSelection
enum class EForceSelection : uint8_t
{
	Custom                         = 0,
	Attribute                      = 1,
	Preset                         = 2,
	EForceSelection_MAX            = 3
};


// Enum GbxGameSystemCore.EContainsTagComponent
enum class EContainsTagComponent : uint8_t
{
	HasTagComponent                = 0,
	NoTagComponent                 = 1,
	EContainsTagComponent_MAX      = 2
};


// Enum GbxGameSystemCore.EGameResourcePoolState
enum class EGameResourcePoolState : uint8_t
{
	RPS_Depleted                   = 0,
	RPS_Depleting                  = 1,
	RPS_Filled                     = 2,
	RPS_Regenerating               = 3,
	RPS_MAX                        = 4
};


// Enum GbxGameSystemCore.GameResourcePoolReplicationType
enum class EGameResourcePoolReplicationType : uint8_t
{
	GRPRT_None                     = 0,
	GRPRT_Basic                    = 1,
	GRPRT_Full                     = 2,
	GRPRT_MAX                      = 3
};


// Enum GbxGameSystemCore.EAIChargeAnim
enum class EAIChargeAnim : uint8_t
{
	None                           = 0,
	Start                          = 1,
	Loop                           = 2,
	Miss                           = 3,
	Strike                         = 4,
	HitWall                        = 5,
	ReachCliff                     = 6,
	StopForFriendly                = 7,
	EAIChargeAnim_MAX              = 8
};


// Enum GbxGameSystemCore.EActionSelectionMethod
enum class EActionSelectionMethod : uint8_t
{
	FIRST                          = 0,
	RANDOM                         = 1,
	EActionSelectionMethod_MAX     = 2
};


// Enum GbxGameSystemCore.ECoordinatedOwnedParticleAction
enum class ECoordinatedOwnedParticleAction : uint8_t
{
	None                           = 0,
	Hide                           = 1,
	Suppress                       = 2,
	ECoordinatedOwnedParticleAction_MAX = 3
};


// Enum GbxGameSystemCore.ECoordinatedParticleScaleMode
enum class ECoordinatedParticleScaleMode : uint8_t
{
	None                           = 0,
	LargestAxis                    = 1,
	SmallestAxis                   = 2,
	HorizontalAxis                 = 3,
	VerticalAxis                   = 4,
	EachAxis                       = 5,
	ECoordinatedParticleScaleMode_MAX = 6
};


// Enum GbxGameSystemCore.ECoordinatedEffectParamScaleMode
enum class ECoordinatedEffectParamScaleMode : uint8_t
{
	None                           = 0,
	XBounds                        = 1,
	YBounds                        = 2,
	ZBounds                        = 3,
	ECoordinatedEffectParamScaleMode_MAX = 4
};


// Enum GbxGameSystemCore.EDirectionPlane
enum class EDirectionPlane : uint8_t
{
	Horizontal                     = 0,
	Vertical                       = 1,
	EDirectionPlane_MAX            = 2
};


// Enum GbxGameSystemCore.EGbxPhysicalActionMovementLockMode
enum class EGbxPhysicalActionMovementLockMode : uint8_t
{
	MLM_None                       = 0,
	MLM_AquireOnBegin              = 1,
	MLM_ReleaseOnEnd               = 2,
	MLM_AquireRelease              = 3,
	MLM_MAX                        = 4
};


// Enum GbxGameSystemCore.EGbxPhysicalActionDynamicBodyState
enum class EGbxPhysicalActionDynamicBodyState : uint8_t
{
	DBS_Upright                    = 0,
	DBS_FaceDown                   = 1,
	DBS_FaceUp                     = 2,
	DBS_Unknown                    = 3,
	DBS_MAX                        = 4
};


// Enum GbxGameSystemCore.EGbxPhysicalActionDynamicBoneActivationMode
enum class EGbxPhysicalActionDynamicBoneActivationMode : uint8_t
{
	DBAM_HitBone                   = 0,
	DBAM_Recursive                 = 1,
	DBAM_FullBody                  = 2,
	DBAM_MAX                       = 3
};


// Enum GbxGameSystemCore.EGbxPhysicalActionEndCondition
enum class EGbxPhysicalActionEndCondition : uint8_t
{
	EndCondition_AnimationMatch    = 0,
	EndCondition_NoFatigue         = 1,
	EndCondition_FullFatigue       = 2,
	EndCondition_AnimationEnd      = 3,
	EndCondition_NotAllFlagsMatch  = 4,
	EndCondition_NotAnyFlagsMatch  = 5,
	EndCondition_Undetermined      = 6,
	EndCondition_MAX               = 7
};


// Enum GbxGameSystemCore.EGbxPhysicalActionBeginCondition
enum class EGbxPhysicalActionBeginCondition : uint8_t
{
	BeginCondition_Immediate       = 0,
	BeginCondition_WaitUntilPoseMatch = 1,
	BeginCondition_NotAllFlagsMatch = 2,
	BeginCondition_NotAnyFlagsMatch = 3,
	BeginCondition_MAX             = 4
};


// Enum GbxGameSystemCore.ERagdollState
enum class ERagdollState : uint8_t
{
	Start                          = 0,
	Anim                           = 1,
	Ragdoll                        = 2,
	IdlePoseDriving                = 3,
	StartBlend                     = 4,
	Blend                          = 5,
	Getup                          = 6,
	Done                           = 7,
	ERagdollState_MAX              = 8
};


// Enum GbxGameSystemCore.EDynamicToKinematicTransition
enum class EDynamicToKinematicTransition : uint8_t
{
	NoTransition                   = 0,
	RagdollLandToStandUp           = 1,
	PredictiveLanding              = 2,
	AttemptPredictiveLanding       = 3,
	EDynamicToKinematicTransition_MAX = 4
};


// Enum GbxGameSystemCore.EGbxActionEndCondition
enum class EGbxActionEndCondition : uint8_t
{
	EndCondition_BlendOut          = 0,
	EndCondition_LastFrame         = 1,
	EndCondition_Loop              = 2,
	EndCondition_MAX               = 3
};


// Enum GbxGameSystemCore.EGbxActionPriority
enum class EGbxActionPriority : uint8_t
{
	Low                            = 0,
	Normal                         = 1,
	High                           = 2,
	Important                      = 3,
	EGbxActionPriority_MAX         = 4
};


// Enum GbxGameSystemCore.EGbxActionNetMode
enum class EGbxActionNetMode : uint8_t
{
	ServerAuth                     = 0,
	AlwaysRep                      = 1,
	LocalOnly                      = 2,
	SkipNetOwner                   = 3,
	EGbxActionNetMode_MAX          = 4
};


// Enum GbxGameSystemCore.EActionRegisterType
enum class EActionRegisterType : uint8_t
{
	NoType                         = 0,
	Float                          = 1,
	Int                            = 2,
	Object                         = 3,
	Name                           = 4,
	Vector                         = 5,
	EActionRegisterType_MAX        = 6
};


// Enum GbxGameSystemCore.EAnimBPProfileImport
enum class EAnimBPProfileImport : uint8_t
{
	All                            = 0,
	FootIK                         = 1,
	LookAt                         = 2,
	ForwardDynamics                = 3,
	EAnimBPProfileImport_MAX       = 4
};


// Enum GbxGameSystemCore.EForwardDynamicsActivation
enum class EForwardDynamicsActivation : uint8_t
{
	PhysicsAssetSimulated          = 0,
	ForwardDynamicsProfileDefinition = 1,
	EForwardDynamicsActivation_MAX = 2
};


// Enum GbxGameSystemCore.EGbxAreaDrawStyle
enum class EGbxAreaDrawStyle : uint8_t
{
	None                           = 0,
	Wire                           = 1,
	Solid                          = 2,
	SolidAndWire                   = 3,
	EGbxAreaDrawStyle_MAX          = 4
};


// Enum GbxGameSystemCore.EGbxAttributeModifierActionExecOutput
enum class EGbxAttributeModifierActionExecOutput : uint8_t
{
	Success                        = 0,
	Failure                        = 1,
	EGbxAttributeModifierActionExecOutput_MAX = 2
};


// Enum GbxGameSystemCore.EGbxBoneModifyProfile_PoseMode
enum class EGbxBoneModifyProfile_PoseMode : uint8_t
{
	Override                       = 0,
	Additive                       = 1,
	EGbxBoneModifyProfile_MAX      = 2
};


// Enum GbxGameSystemCore.EBoneModifyTransition_TransformType
enum class EBoneModifyTransition_TransformType : uint8_t
{
	Translation                    = 0,
	Rotation                       = 1,
	Scale                          = 2,
	EBoneModifyTransition_MAX      = 3
};


// Enum GbxGameSystemCore.EGbxCharacterBlendPoints
enum class EGbxCharacterBlendPoints : uint8_t
{
	SixPoint                       = 0,
	EightPoint                     = 1,
	EGbxCharacterBlendPoints_MAX   = 2
};


// Enum GbxGameSystemCore.EMantleUpCheckState
enum class EMantleUpCheckState : uint8_t
{
	Unknown                        = 0,
	WallCheck_NoWall               = 1,
	WallCheck_TooFlat              = 2,
	WallCheck_InvalidHitComponent  = 3,
	HeadRoomCheck_BlockedAhead     = 4,
	HeadRoomCheck_BlockedAbove     = 5,
	StandingSpotCheck_Initial_Ahead_NoFloor = 6,
	StandingSpotCheck_Initial_Ahead_InitiallyPenetrating = 7,
	StandingSpotCheck_Initial_Ahead_InvalidHitComponent = 8,
	StandingSpotCheck_Final_Ahead_NoFloor = 9,
	StandingSpotCheck_Final_Ahead_InitiallyPenetrating = 10,
	StandingSpotCheck_Final_Ahead_InvalidHitComponent = 11,
	StandingSpotCheck_Final_Ahead_UnwalkableSlope = 12,
	StandingSpotCheck_Final_Ahead_OutsideOfHeightTolerance = 13,
	StandingSpotCheck_Final_Ahead_BlockedAtHead = 14,
	StandingSpotCheck_Initial_Rotated_NoFloor = 15,
	StandingSpotCheck_Initial_Rotated_InitiallyPenetrating = 16,
	StandingSpotCheck_Initial_Rotated_InvalidHitComponent = 17,
	StandingSpotCheck_Final_Rotated_NoFloor = 18,
	StandingSpotCheck_Final_Rotated_InitiallyPenetrating = 19,
	StandingSpotCheck_Final_Rotated_InvalidHitComponent = 20,
	StandingSpotCheck_Final_Rotated_UnwalkableSlope = 21,
	StandingSpotCheck_Final_Rotated_OutsideOfHeightTolerance = 22,
	StandingSpotCheck_Final_Rotated_BlockedAtHead = 23,
	Good                           = 24,
	EMantleUpCheckState_MAX        = 25
};


// Enum GbxGameSystemCore.EGbxMovementMode
enum class EGbxMovementMode : uint8_t
{
	GBXMOVE_Ladder                 = 0,
	GBXMOVE_Mantle                 = 1,
	GBXMOVE_PawnAttached           = 2,
	GBXMOVE_PretendWalk            = 3,
	GBXMOVE_NoneWithRootMotion     = 4,
	GBXMOVE_MAX                    = 5
};


// Enum GbxGameSystemCore.EMassComparison
enum class EMassComparison : uint8_t
{
	LessThanOrEqual                = 0,
	LessThan                       = 1,
	EqualTo                        = 2,
	NotEqualTo                     = 3,
	GreaterThan                    = 4,
	GreaterThanOrEqual             = 5,
	EMassComparison_MAX            = 6
};


// Enum GbxGameSystemCore.EConditionComparisonOperatorType
enum class EConditionComparisonOperatorType : uint8_t
{
	EqualTo                        = 0,
	NotEqualTo                     = 1,
	LessThan                       = 2,
	LessThanOrEqual                = 3,
	GreaterThan                    = 4,
	GreaterThanOrEqual             = 5,
	EConditionComparisonOperatorType_MAX = 6
};


// Enum GbxGameSystemCore.ECompoundConditionOperatorType
enum class ECompoundConditionOperatorType : uint8_t
{
	And                            = 0,
	Or                             = 1,
	Xor                            = 2,
	Not                            = 3,
	ECompoundConditionOperatorType_MAX = 4
};


// Enum GbxGameSystemCore.ELinkedParameterType
enum class ELinkedParameterType : uint8_t
{
	Scalar                         = 0,
	Vector                         = 1,
	Texture                        = 2,
	ELinkedParameterType_MAX       = 3
};


// Enum GbxGameSystemCore.EGbxCustomizationComponentInitSourceType
enum class EGbxCustomizationComponentInitSourceType : uint8_t
{
	None                           = 0,
	CopyFromInstigatorOnSpawn      = 1,
	LinkToInstigatorOnSpawn        = 2,
	EGbxCustomizationComponentInitSourceType_MAX = 3
};


// Enum GbxGameSystemCore.EDamageSurfaceType
enum class EDamageSurfaceType : uint8_t
{
	Default                        = 0,
	Flesh                          = 1,
	Armor                          = 2,
	Shield                         = 3,
	EDamageSurfaceType_MAX         = 4
};


// Enum GbxGameSystemCore.EGbxFeedbackType
enum class EGbxFeedbackType : uint8_t
{
	Ranged                         = 0,
	Directional                    = 1,
	RandomRumble                   = 2,
	Continuous                     = 3,
	RandomShake                    = 4,
	EFeedbackType_MAX              = 5,
	EGbxFeedbackType_MAX           = 6
};


// Enum GbxGameSystemCore.EGbxFlagEval
enum class EGbxFlagEval : uint8_t
{
	IsTrue                         = 0,
	IsFalse                        = 1,
	TrueForXSeconds                = 2,
	FalseForXSeconds               = 3,
	TrueWithinXSeconds             = 4,
	FalseWithinXSeconds            = 5,
	EGbxFlagEval_MAX               = 6
};


// Enum GbxGameSystemCore.EPlayersOverlappingActorOutput
enum class EPlayersOverlappingActorOutput : uint8_t
{
	Overlapping                    = 0,
	NotOverlapping                 = 1,
	EPlayersOverlappingActorOutput_MAX = 2
};


// Enum GbxGameSystemCore.EPlayersInVolumeOutput
enum class EPlayersInVolumeOutput : uint8_t
{
	InVolume                       = 0,
	NotInVolume                    = 1,
	EPlayersInVolumeOutput_MAX     = 2
};


// Enum GbxGameSystemCore.EIsAutonomousOuput
enum class EIsAutonomousOuput : uint8_t
{
	Autonomous                     = 0,
	NotAutonomous                  = 1,
	EIsAutonomousOuput_MAX         = 2
};


// Enum GbxGameSystemCore.EIsPlayerExecOutput
enum class EIsPlayerExecOutput : uint8_t
{
	Player                         = 0,
	NotPlayer                      = 1,
	EIsPlayerExecOutput_MAX        = 2
};


// Enum GbxGameSystemCore.EGbxParamValueFlags
enum class EGbxParamValueFlags : uint8_t
{
	ClampPositive                  = 0,
	AllBBKeyTypes                  = 1,
	EGbxParamValueFlags_MAX        = 2
};


// Enum GbxGameSystemCore.EGbxParamValueType
enum class EGbxParamValueType : uint8_t
{
	Float                          = 0,
	Bool                           = 1,
	Int                            = 2,
	EnvQueryContext                = 3,
	Object                         = 4,
	Count                          = 5,
	EGbxParamValueType_MAX         = 6
};


// Enum GbxGameSystemCore.EGbxParamValueMode
enum class EGbxParamValueMode : uint8_t
{
	Value                          = 0,
	ValueVariance                  = 1,
	MinMax                         = 2,
	Actor                          = 3,
	None                           = 4,
	BlackboardKey                  = 5,
	Condition                      = 6,
	AttributeInitializationData    = 7,
	Count                          = 8,
	EGbxParamValueMode_MAX         = 9
};


// Enum GbxGameSystemCore.EDestructibleDamageThresholdMagnitude
enum class EDestructibleDamageThresholdMagnitude : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Legacy                         = 3,
	EDestructibleDamageThresholdMagnitude_MAX = 4
};


// Enum GbxGameSystemCore.EGraphicsMode
enum class EGraphicsMode : uint8_t
{
	Performance                    = 0,
	Resolution                     = 1,
	EGraphicsMode_MAX              = 2
};


// Enum GbxGameSystemCore.ESpeakerSetup
enum class ESpeakerSetup : uint8_t
{
	SmallSpeaker                   = 0,
	Hifi                           = 1,
	NightTime                      = 2,
	Mono                           = 3,
	Headphones                     = 4,
	Logitech                       = 5,
	ESpeakerSetup_MAX              = 6
};


// Enum GbxGameSystemCore.ETimedUpdateBehavior
enum class ETimedUpdateBehavior : uint8_t
{
	DontDoTimedUpdates             = 0,
	UpdateRegularlyEvenWhenNavigating = 1,
	UpdateRegularlyExceptWhenNavigating = 2,
	ETimedUpdateBehavior_MAX       = 3
};


// Enum GbxGameSystemCore.EQueryOwnerLocationUse
enum class EQueryOwnerLocationUse : uint8_t
{
	Never                          = 0,
	Always                         = 1,
	Only                           = 2,
	EQueryOwnerLocationUse_MAX     = 3
};


// Enum GbxGameSystemCore.ESimpleMotionType
enum class ESimpleMotionType : uint8_t
{
	None                           = 0,
	ScaleByValue                   = 1,
	Interpolate                    = 2,
	Loop                           = 3,
	Alternate                      = 4,
	ESimpleMotionType_MAX          = 5
};


// Enum GbxGameSystemCore.EGlobalBoneModifyProfile_PoseMode
enum class EGlobalBoneModifyProfile_PoseMode : uint8_t
{
	Override                       = 0,
	Multiplicative                 = 1,
	EGlobalBoneModifyProfile_MAX   = 2
};


// Enum GbxGameSystemCore.EHitReactionConditionCombine
enum class EHitReactionConditionCombine : uint8_t
{
	And                            = 0,
	Or                             = 1,
	EHitReactionConditionCombine_MAX = 2
};


// Enum GbxGameSystemCore.EHitReactionConditionContext
enum class EHitReactionConditionContext : uint8_t
{
	ReceiverOwner                  = 0,
	Receiver                       = 1,
	CauserOwner                    = 2,
	Causer                         = 3,
	DamageType                     = 4,
	DamageSource                   = 5,
	HitRegion                      = 6,
	EHitReactionConditionContext_MAX = 7
};


// Enum GbxGameSystemCore.EDamageReactionEventType
enum class EDamageReactionEventType : uint8_t
{
	Health                         = 0,
	HealthPersistent               = 1,
	Damage                         = 2,
	DamageOverTime                 = 3,
	EDamageReactionEventType_MAX   = 4
};


// Enum GbxGameSystemCore.EHitRegionDamageRule
enum class EHitRegionDamageRule : uint8_t
{
	IndependentHealth              = 0,
	OwnerHealth_DamageCap          = 1,
	OwnerHealth_NoDamageCap        = 2,
	EHitRegionDamageRule_MAX       = 3
};


// Enum GbxGameSystemCore.EImpactUsage
enum class EImpactUsage : uint8_t
{
	Default                        = 0,
	Footstep                       = 1,
	EImpactUsage_MAX               = 2
};


// Enum GbxGameSystemCore.EInstigatorAttributeEffectModifierValueContext
enum class EInstigatorAttributeEffectModifierValueContext : uint8_t
{
	Instigator                     = 0,
	ThisInventoryActor             = 1,
	EInstigatorAttributeEffectModifierValueContext_MAX = 2
};


// Enum GbxGameSystemCore.EInstigatorAttributeEffectAttributeToModifyContextSource
enum class EInstigatorAttributeEffectAttributeToModifyContextSource : uint8_t
{
	ThisInventoryActorWithInstigatorFallback = 0,
	InstigatorOnly                 = 1,
	EInstigatorAttributeEffectAttributeToModifyContextSource_MAX = 2
};


// Enum GbxGameSystemCore.EInterpMode
enum class EInterpMode : uint8_t
{
	None                           = 0,
	Linear                         = 1,
	NonLinear                      = 2,
	Count                          = 3,
	EInterpMode_MAX                = 4
};


// Enum GbxGameSystemCore.EMantleType
enum class EMantleType : uint8_t
{
	MantleUp                       = 0,
	WallHop                        = 1,
	EMantleType_MAX                = 2
};


// Enum GbxGameSystemCore.ENavAnimType
enum class ENavAnimType : uint8_t
{
	None                           = 0,
	Direction                      = 1,
	Destination                    = 2,
	Rotation                       = 3,
	ENavAnimType_MAX               = 4
};


// Enum GbxGameSystemCore.EAttachmentTransitionTiming
enum class EAttachmentTransitionTiming : uint8_t
{
	ChangePawnBeforeTransition     = 0,
	ChangePawnAfterTransition      = 1,
	AttachBaseDuringTransition     = 2,
	EAttachmentTransitionTiming_MAX = 3
};


// Enum GbxGameSystemCore.EAttachmentPossessionRule
enum class EAttachmentPossessionRule : uint8_t
{
	PossessBase                    = 0,
	Unchanged                      = 1,
	EAttachmentPossessionRule_MAX  = 2
};


// Enum GbxGameSystemCore.EPhysicalAnimationBlendToKinematicMode
enum class EPhysicalAnimationBlendToKinematicMode : uint8_t
{
	KinematicLerp                  = 0,
	DynamicMatchesAnimation        = 1,
	Immediate                      = 2,
	EPhysicalAnimationBlendToKinematicMode_MAX = 3
};


// Enum GbxGameSystemCore.EPhysicalAnimationRootMotionControl
enum class EPhysicalAnimationRootMotionControl : uint8_t
{
	PARMC_DrivenByAnimated         = 0,
	PARMC_PureDynamic              = 1,
	PARMC_SimulatedPointDrive      = 2,
	PARMC_SimulatedOrientationDrive = 3,
	PARMC_MAX                      = 4
};


// Enum GbxGameSystemCore.EAggregateBoneStatusFlag
enum class EAggregateBoneStatusFlag : uint8_t
{
	ABS_HasDynamic                 = 0,
	ABS_HasMotion                  = 1,
	ABS_HasPoseVariance            = 2,
	ABS_HasFatigue                 = 3,
	ABS_HasPlayingAnimation        = 4,
	ABS_MAX                        = 5
};


// Enum GbxGameSystemCore.EAggregateBoneFatigueStatus
enum class EAggregateBoneFatigueStatus : uint8_t
{
	ABFS_FullyFatigued             = 0,
	ABFS_NoFatigue                 = 1,
	ABFS_FullyDivergedFatigue      = 2,
	ABFS_VariedFatigue             = 3,
	ABFS_MAX                       = 4
};


// Enum GbxGameSystemCore.ECycleDirection
enum class ECycleDirection : uint8_t
{
	Backward                       = 0,
	Forward                        = 1,
	ECycleDirection_MAX            = 2
};


// Enum GbxGameSystemCore.ERelativeDirectionType
enum class ERelativeDirectionType : uint8_t
{
	Default                        = 0,
	ParentOrientation              = 1,
	ParentOrientation2D            = 2,
	InverseParentOrientation       = 3,
	ParentVelocity                 = 4,
	ParentVelocity2D               = 5,
	InverseParentVelocity          = 6,
	InverseParentVelocity2D        = 7,
	Random                         = 8,
	RandomUpwards                  = 9,
	RandomDownwards                = 10,
	RandomOnHorizontalPlane        = 11,
	StraightUp                     = 12,
	StraightDown                   = 13,
	StraightTowardTarget           = 14,
	StraightAwayFromTarget         = 15,
	ParentAimDirection             = 16,
	InverseParentAimDirection      = 17,
	ParentAimDirection2D           = 18,
	InverseParentAimDirection2D    = 19,
	ParentAcceleration2D           = 20,
	InverseParentAimOffset         = 21,
	ERelativeDirectionType_MAX     = 22
};


// Enum GbxGameSystemCore.EScreenParticleScalingMode
enum class EScreenParticleScalingMode : uint8_t
{
	FitToHorizontal                = 0,
	FitToVertical                  = 1,
	FitToExterior                  = 2,
	FitToInterior                  = 3,
	FitToViewport                  = 4,
	DontAdjustScaling              = 5,
	FitToViewportAndKeepContentAspectRatio = 6,
	EScreenParticleScalingMode_MAX = 7
};


// Enum GbxGameSystemCore.ESimpleMathValueResolverOperatorType
enum class ESimpleMathValueResolverOperatorType : uint8_t
{
	Add                            = 0,
	Subtract                       = 1,
	Multiply                       = 2,
	Divide                         = 3,
	ESimpleMathValueResolverOperatorType_MAX = 4
};


// Enum GbxGameSystemCore.ESplitScreenViewportType
enum class ESplitScreenViewportType : uint8_t
{
	Standard                       = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	Quad                           = 3,
	ESplitScreenViewportType_MAX   = 4
};


// Enum GbxGameSystemCore.EStatusEffectStackingInstanceReplacementCriteria
enum class EStatusEffectStackingInstanceReplacementCriteria : uint8_t
{
	ChooseSpec                     = 0,
	ChooseLowerDPS                 = 1,
	ChooseHigherDPS                = 2,
	ChooseLongerDuration           = 3,
	ChooseShorterDuration          = 4,
	EStatusEffectStackingInstanceReplacementCriteria_MAX = 5
};


// Enum GbxGameSystemCore.EStatusEffectStackingInstanceSelectionCriteria
enum class EStatusEffectStackingInstanceSelectionCriteria : uint8_t
{
	NewestInstance                 = 0,
	OldestInstance                 = 1,
	MostTimeRemaining              = 2,
	LeastTimeRemaining             = 3,
	EStatusEffectStackingInstanceSelectionCriteria_MAX = 4
};


// Enum GbxGameSystemCore.EStretchBonesMarkerMode
enum class EStretchBonesMarkerMode : uint8_t
{
	BeforeMarker                   = 0,
	AttachedMarker                 = 1,
	AfterMarker                    = 2,
	EStretchBonesMarkerMode_MAX    = 3
};


// Enum GbxGameSystemCore.EStretchBonesActorTrackingStyle
enum class EStretchBonesActorTrackingStyle : uint8_t
{
	FirstFrame                     = 0,
	PredictedFirstFrame            = 1,
	Track                          = 2,
	TrackUntilNotify               = 3,
	NavEntry                       = 4,
	NavExit                        = 5,
	NavMidpoint                    = 6,
	EStretchBonesActorTrackingStyle_MAX = 7
};


// Enum GbxGameSystemCore.EAimAssistSnapTargetType
enum class EAimAssistSnapTargetType : uint8_t
{
	Default                        = 0,
	Disabled                       = 1,
	Horizontal                     = 2,
	Center                         = 3,
	EAimAssistSnapTargetType_MAX   = 4
};


// Enum GbxGameSystemCore.EAITargetScoringBoost
enum class EAITargetScoringBoost : uint8_t
{
	ReduceExtreme                  = 0,
	ReduceModerate                 = 1,
	ReduceLight                    = 2,
	NoBoost                        = 3,
	AmplifyLight                   = 4,
	AmplifyModerate                = 5,
	AmplifyExtreme                 = 6,
	MAX                            = 7
};


// Enum GbxGameSystemCore.ETerritoryCombatProxyType
enum class ETerritoryCombatProxyType : uint8_t
{
	Threat                         = 0,
	Patrol                         = 1,
	ETerritoryCombatProxyType_MAX  = 2
};


// Enum GbxGameSystemCore.ETerritoryType
enum class ETerritoryType : uint8_t
{
	Patrol                         = 0,
	Threat                         = 1,
	Combat                         = 2,
	ETerritoryType_MAX             = 3
};


// Enum GbxGameSystemCore.ETerritoryDrawStyle
enum class ETerritoryDrawStyle : uint8_t
{
	None                           = 0,
	Wire                           = 1,
	Solid                          = 2,
	SolidAndWire                   = 3,
	ETerritoryDrawStyle_MAX        = 4
};


// Enum GbxGameSystemCore.EThreatReason
enum class EThreatReason : uint8_t
{
	ThreatReason_None              = 0,
	ThreatReason_TerritoryEverywhereThreat = 1,
	ThreatReason_TerritoryIncursionAuto = 2,
	ThreatReason_TerritoryIncursionSeen = 3,
	ThreatReason_ShotAt            = 4,
	ThreatReason_Damaged           = 5,
	ThreatReason_Proximity         = 6,
	ThreatReason_TeamNotification  = 7,
	ThreatReason_Scripted          = 8,
	ThreatReason_MAX               = 9
};


// Enum GbxGameSystemCore.EUIStatCombinationMethod
enum class EUIStatCombinationMethod : uint8_t
{
	Multiply                       = 0,
	Divide                         = 1,
	Add                            = 2,
	Subtract                       = 3,
	DontCombine                    = 4,
	EUIStatCombinationMethod_MAX   = 5
};


// Enum GbxGameSystemCore.EUIStatValueRoundingMode
enum class EUIStatValueRoundingMode : uint8_t
{
	None                           = 0,
	RoundToInt                     = 1,
	FloorToInt                     = 2,
	CeilToInt                      = 3,
	EUIStatValueRoundingMode_MAX   = 4
};


// Enum GbxGameSystemCore.EUIStatValueSignStyle
enum class EUIStatValueSignStyle : uint8_t
{
	AsIs                           = 0,
	Positive                       = 1,
	Negative                       = 2,
	OppositeSign                   = 3,
	EUIStatValueSignStyle_MAX      = 4
};


// Enum GbxGameSystemCore.EUIStatValueStyle
enum class EUIStatValueStyle : uint8_t
{
	AttributeValue                 = 0,
	AbsoluteModification           = 1,
	ScaleModification              = 2,
	EUIStatValueStyle_MAX          = 3
};


// Enum GbxGameSystemCore.EUsableTypeCostContext
enum class EUsableTypeCostContext : uint8_t
{
	UsableObject                   = 0,
	Player                         = 1,
	EUsableTypeCostContext_MAX     = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GbxGameSystemCore.StanceFloatValue
// 0x0008
struct FStanceFloatValue
{
	EStanceValueOverrideType                           ValueType;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.PreviewActorManager
// 0x0080
struct FPreviewActorManager
{
	class USceneComponent*                             AttachComponent;                                          // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AActor*                                      Actor;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorClass;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorTemplate;                                            // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0020(0x0060) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.PreviewState
// 0x00D8
struct FPreviewState
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	bool                                               bEnabled;                                                 // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FPreviewActorManager                        PreviewActorManager;                                      // 0x0010(0x0080)
	class UClass*                                      PreviewClass;                                             // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FBox                                        PreviewBounds;                                            // 0x0098(0x001C) (IsPlainOldData)
	bool                                               bAutoCycle;                                               // 0x00B4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	int                                                PreviewIdx;                                               // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	class UClass*                                      PreviewAction;                                            // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              ElapsedTime;                                              // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPlayingAction;                                           // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bQueuedAction;                                            // 0x00D1(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bShowAction;                                              // 0x00D2(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRepeatAction;                                            // 0x00D3(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.AnimActionDef
// 0x0018
struct FAnimActionDef
{
	EAnimActionDefInput                                InputType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UAnimationAsset*                             AnimAsset;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AnimAssetName;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.AnimMeshExtra
// 0x0040
struct FAnimMeshExtra
{
	struct FAnimActionDef                              Anim;                                                     // 0x0000(0x0018) (Edit)
	struct FName                                       MeshName;                                                 // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AnimSlotOverride;                                         // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHasAnimSlotOverride;                                     // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              BlendInOverride;                                          // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBlendInOverride;                                      // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              BlendOutOverride;                                         // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBlendOutOverride;                                     // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.AnimMeshList
// 0x0078
struct FAnimMeshList
{
	struct FAnimActionDef                              Body3rd;                                                  // 0x0000(0x0018) (Edit)
	struct FAnimActionDef                              Body1st;                                                  // 0x0018(0x0018) (Edit)
	struct FAnimActionDef                              Weapon3rd;                                                // 0x0030(0x0018) (Edit)
	struct FAnimActionDef                              Weapon1st;                                                // 0x0048(0x0018) (Edit)
	TArray<struct FAnimMeshExtra>                      Extras;                                                   // 0x0060(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.MassSelection
// 0x0018
struct FMassSelection
{
	EMassSelection                                     Selection;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       Preset;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.SpawnCostSelection
// 0x0018
struct FSpawnCostSelection
{
	ESpawnCostSelection                                Selection;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       Preset;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SpawnCost;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ReplicatedPawnAttachState
// 0x0010
struct FReplicatedPawnAttachState
{
	class UPawnAttachSlotComponent*                    Slot;                                                     // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	EPawnAttachStatus                                  Status;                                                   // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0009(0x0001) MISSED OFFSET
	uint16_t                                           StatusFlag;                                               // 0x000A(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.RemoteFacingChannel
// 0x0002
struct FRemoteFacingChannel
{
	unsigned char                                      Pitch;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Yaw;                                                      // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.FacingController
// 0x0110
struct FFacingController
{
	unsigned char                                      UnknownData00[0x109];                                     // 0x0000(0x0109) MISSED OFFSET
	struct FRemoteFacingChannel                        RemoteChannels[0x3];                                      // 0x0109(0x0002)
	unsigned char                                      UnknownData01[0x1];                                       // 0x010F(0x0001) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.SavedCollisionItem
// 0x0028
struct FSavedCollisionItem
{
	class UPrimitiveComponent*                         Primitive;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCollisionResponseContainer                 Responses;                                                // 0x0008(0x0020)
};

// ScriptStruct GbxGameSystemCore.SavedTeamCollision
// 0x0010
struct FSavedTeamCollision
{
	class UTeamComponent*                              TeamComponent;                                            // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bUseTeamCollision;                                        // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCollideWithTeam;                                         // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.SavedCollision
// 0x0020
struct FSavedCollision
{
	TArray<struct FSavedCollisionItem>                 SavedItems;                                               // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FSavedTeamCollision>                 SavedTeamItems;                                           // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxGameSystemCore.AnimGraphBoneSet
// 0x0010
struct FAnimGraphBoneSet
{
	class UGbxBoneSet*                                 BoneSet;                                                  // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       AnimGraphMachineName;                                     // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.LandingInfo
// 0x0028
struct FLandingInfo
{
	bool                                               bNoMinVelIfJumped;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              LandedMinVel;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UImpactData*                                 LandedImpact;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayLandedImpactAtSpecificFeet;                          // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	class UClass*                                      LandedAction;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCharacterSoundTag*                          VocalizationTag;                                          // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.RuntimeStateMachineData
// 0x0018
struct FRuntimeStateMachineData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.GbxAnimTableMapItem
// 0x0018
struct FGbxAnimTableMapItem
{
	bool                                               bCanUse;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	uint64_t                                           LastFrame;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.UIStatPriorityData
// 0x0010
struct FUIStatPriorityData
{
	class UUIStatData*                                 UIStat;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PriorityIncrease;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.DataTableValueHandle
// 0x0018
struct FDataTableValueHandle
{
	class UDataTable*                                  DataTable;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ValueName;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.AttributeInitializationData
// 0x0038
struct FAttributeInitializationData
{
	float                                              BaseValueConstant;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FDataTableValueHandle                       DataTableValue;                                           // 0x0008(0x0018) (Edit, BlueprintVisible)
	class UGbxAttributeData*                           BaseValueAttribute;                                       // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AttributeInitializer;                                     // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseValueScale;                                           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.CustomizationAssetInfo
// 0x0020
struct FCustomizationAssetInfo
{
	struct FName                                       AssetReferenceTargetName;                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSoftObjectPath                             AssetReference;                                           // 0x0008(0x0018) (Edit, DisableEditOnInstance)
};

// ScriptStruct GbxGameSystemCore.CustomizationAssetEntry
// 0x0040
struct FCustomizationAssetEntry
{
	class UGbxCustomizationTargetData*                 CustomizationTarget;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FSoftObjectPath>                     CustomizationAssetReferences;                             // 0x0008(0x0010) (ZeroConstructor, Deprecated)
	TArray<struct FCustomizationAssetInfo>             CustomizationAssetInfoReferences;                         // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FSoftClassPath>                      CustomizationClassReferences;                             // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               LoadForPreview;                                           // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ActionState_Base
// 0x00C8
struct FActionState_Base
{
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0000(0x00C8) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.RuntimeActorPartListPartTypeData
// 0x0008
struct FRuntimeActorPartListPartTypeData
{
	int                                                StartIndex;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                NumParts;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.WeightedActorPartData
// 0x0040
struct FWeightedActorPartData
{
	class UActorPartData*                              PartData;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FAttributeInitializationData                Weight;                                                   // 0x0008(0x0038) (Edit, DisableEditOnTemplate)
};

// ScriptStruct GbxGameSystemCore.RuntimeActorPartListData
// 0x0028
struct FRuntimeActorPartListData
{
	unsigned char                                      bIsInitialized : 1;                                       // 0x0000(0x0001) (Edit, EditConst)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FRuntimeActorPartListPartTypeData>   PartTypeTOC;                                              // 0x0008(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FWeightedActorPartData>              AllParts;                                                 // 0x0018(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct GbxGameSystemCore.ActorTagQuery
// 0x0018
struct FActorTagQuery
{
	bool                                               bIncludeComponents;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EActorTagQueryMode                                 Mode;                                                     // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<struct FName>                               Tags;                                                     // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GbxGameSystemCore.ActorTagCompositeQuery
// 0x0010
struct FActorTagCompositeQuery
{
	TArray<struct FActorTagQuery>                      Queries;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GbxGameSystemCore.HoldToUseSettings
// 0x0014
struct FHoldToUseSettings
{
	EHoldToUseMode                                     Mode;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              HoldToUseStartTime;                                       // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HoldToUseTime;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseInteractionBreakDistance;                             // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              InteractionBreakDistance;                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.UseDefinitionConditional
// 0x0010
struct FUseDefinitionConditional
{
	class UUsableTypeDefinition*                       UseDefinition;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGbxCondition*                               UseCondition;                                             // 0x0008(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.UseDefSelection
// 0x0020
struct FUseDefSelection
{
	unsigned char                                      bOverrideDefaultUseDefinition : 1;                        // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverrideConditionalDefs : 1;                             // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UUsableTypeDefinition*                       DefaultUseDefinition;                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FUseDefinitionConditional>           ConditionalUseDefs;                                       // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GbxGameSystemCore.UsableAngleRestriction
// 0x0008
struct FUsableAngleRestriction
{
	float                                              AngleOffset;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngleWidth;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.UsabilityQuery
// 0x0018
struct FUsabilityQuery
{
	class AController*                                 UserController;                                           // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         UsedComponent;                                            // 0x0008(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	EUsabilityType                                     UseType;                                                  // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseHeld;                                                 // 0x0011(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.DefaultExplosionSettings
// 0x0010
struct FDefaultExplosionSettings
{
	float                                              ExplosionSize;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRadialBlurSelection                        RadialBlur;                                               // 0x0004(0x000C) (Edit)
};

// ScriptStruct GbxGameSystemCore.MantleGlobalData
// 0x0090
struct FMantleGlobalData
{
	int                                                DistanceToLookAheadForWalls;                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootCollisionHeight;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HeadCollisionHeight;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinWallSlope;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngleToKeepMantleCache;                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeToHoldValidClimbLocationSeconds;                      // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDegreeAngleFromForward;                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LookAngleRange;                                           // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bShowPromptWhenAvailable : 1;                             // 0x0020(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              DelayBeforeShowingPrompt;                                 // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              ValidActorClasses;                                        // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              InvalidActorClasses;                                      // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              ValidPrimitiveComponentClasses;                           // 0x0048(0x0010) (Edit, ZeroConstructor)
	TArray<TEnumAsByte<EMovementMode>>                 ValidMovementModes;                                       // 0x0058(0x0010) (Edit, ZeroConstructor)
	float                                              MaxAscendingSpeedZ;                                       // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDescendingSpeedZ;                                      // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinLedgeHeightToStillAllowMantle;                         // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxPossibleLedgeHeight;                                   // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxPossibleLedgeDistance;                                 // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ClientValidationTolerance;                                // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinPassiveMantleHeight_Default;                           // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinPassiveMantleHeight_ForwardInput;                      // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreTeamCollision;                                     // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ReplicatedImpactHitResult
// 0x0040
struct FReplicatedImpactHitResult
{
	bool                                               bLocalSpace;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector_NetQuantize                         ImpactPoint;                                              // 0x0004(0x000C)
	struct FVector_NetQuantizeNormal                   Normal;                                                   // 0x0010(0x000C)
	TWeakObjectPtr<class UPhysicalMaterial>            PhysMaterial;                                             // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0024(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UPrimitiveComponent>          Component;                                                // 0x002C(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FName                                       BoneName;                                                 // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.ImpactAudioParam
// 0x0018
struct FImpactAudioParam
{
	class UWwiseRtpc*                                  Parameter;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UWwiseSwitch*                                Switch;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ImpactResponseParams
// 0x00B0
struct FImpactResponseParams
{
	TArray<struct FParticleSysParam>                   ParticleParameters;                                       // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FImpactAudioParam>                   AudioParameters;                                          // 0x0010(0x0010) (ZeroConstructor)
	class UWwiseSwitch*                                AudioSurfaceSwitch;                                       // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET
	class UMaterialInterface*                          DecalOverride;                                            // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00A0(0x0010) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.NavAnimServerData
// 0x00A0
struct FNavAnimServerData
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
	class UObject*                                     Areas;                                                    // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     UserEdges;                                                // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.NavAnimClientData
// 0x001C
struct FNavAnimClientData
{
	struct FVector_NetQuantizeNormal                   Direction;                                                // 0x0000(0x000C)
	struct FVector_NetQuantize                         GoalLoc;                                                  // 0x000C(0x000C)
	float                                              GoalRadius;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.ForceSelection
// 0x0020
struct FForceSelection
{
	EForceSelection                                    Selection;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       Preset;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGbxAttributeData*                           Attribute;                                                // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Force;                                                    // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.AttitudeDamageRules
// 0x0004
struct FAttitudeDamageRules
{
	unsigned char                                      bAllowHostileDamage : 1;                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      bAllowNeutralDamage : 1;                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      bAllowFriendlyDamage : 1;                                 // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.GbxSignificanceEvent
// 0x0008
struct FGbxSignificanceEvent
{
	struct FName                                       Event;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.ScreenParticleInitParams
// 0x0030
struct FScreenParticleInitParams
{
	class UParticleSystem*                             Template;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bHideWhenFinished : 1;                                    // 0x0008(0x0001)
	unsigned char                                      bDestroyWhenFinished : 1;                                 // 0x0008(0x0001)
	unsigned char                                      bOnlyOwnerSee : 1;                                        // 0x0008(0x0001)
	unsigned char                                      bAlwaysVisible : 1;                                       // 0x0008(0x0001)
	unsigned char                                      bAllowMultipleInstances : 1;                              // 0x0008(0x0001) (Edit)
	unsigned char                                      bTickEvenWhenPaused : 1;                                  // 0x0008(0x0001) (Edit)
	unsigned char                                      bHideDuringInGameMenu : 1;                                // 0x0008(0x0001) (Edit)
	unsigned char                                      bDepthPriorityWorld : 1;                                  // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FVector2D                                   ContentDims;                                              // 0x000C(0x0008) (Edit, IsPlainOldData)
	float                                              ParticleDepth;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EScreenParticleScalingMode                         ScalingMode;                                              // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FName                                       Tag;                                                      // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OwnerOverride;                                            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.HealthTypeDamageSummary
// 0x0010
struct FHealthTypeDamageSummary
{
	class UHealthTypeData*                             HealthType;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.DamageDataEventDetails
// 0x0048
struct FDamageDataEventDetails
{
	float                                              DamageDealt;                                              // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FHealthTypeDamageSummary>            DamagePerHealthType;                                      // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UGbxDamageType*                              DamageType;                                               // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitDirection;                                             // 0x0028(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // 0x0034(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bWasCrit;                                                 // 0x0040(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.SpawnPatternInputs
// 0x0038
struct FSpawnPatternInputs
{
	class AActor*                                      SourceActor;                                              // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BaseLocation;                                             // 0x0010(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    BaseRotation;                                             // 0x001C(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     IncomingImpulse;                                          // 0x0028(0x000C) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.SpawnPatternResult
// 0x002C
struct FSpawnPatternResult
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     LinearImpulse;                                            // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bLinearVelocityChange;                                    // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FVector                                     AngularImpulse;                                           // 0x001C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bAngularVelocityChange;                                   // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.RelativeDirectionData
// 0x0050
struct FRelativeDirectionData
{
	ERelativeDirectionType                             RelativeDirection;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FAttributeInitializationData                ConeAroundDirection;                                      // 0x0008(0x0038) (Edit)
	struct FRotator                                    AdditionalRotation;                                       // 0x0040(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.AttributeEffect
// 0x0050
struct FAttributeEffect
{
	class UGbxAttributeData*                           AttributeData;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EGbxAttributeModifierType                          ModifierType;                                             // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FAttributeInitializationData                BaseModifierValue;                                        // 0x0010(0x0038) (Edit, DisableEditOnInstance)
	class UAttributeEffectMutatorData*                 Mutator;                                                  // 0x0048(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.UIStatCollector
// 0x0590
struct FUIStatCollector
{
	unsigned char                                      UnknownData00[0x590];                                     // 0x0000(0x0590) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.UIStatValueRemappingData
// 0x00E8
struct FUIStatValueRemappingData
{
	unsigned char                                      bUseContextOverride : 1;                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FAttributeInitializationData                InputValueMin;                                            // 0x0008(0x0038) (Edit)
	struct FAttributeInitializationData                InputValueMax;                                            // 0x0040(0x0038) (Edit)
	struct FAttributeInitializationData                OutputValueMin;                                           // 0x0078(0x0038) (Edit)
	struct FAttributeInitializationData                OutputValueMax;                                           // 0x00B0(0x0038) (Edit)
};

// ScriptStruct GbxGameSystemCore.CoordinatedConditionalMaterialData
// 0x0030
struct FCoordinatedConditionalMaterialData
{
	class UMaterial*                                   BaseMaterial;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MeshElementIndex;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          OverrideMaterial;                                         // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bMatchMaterialStaticParameters : 1;                       // 0x0018(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bUseGlobalInheritedMaterialParameters : 1;                // 0x0018(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bInheritAllMaterialParameters : 1;                        // 0x0018(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	TArray<struct FName>                               InheritedMaterialParameters;                              // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct GbxGameSystemCore.CoordinatedScalarParameter
// 0x0158
struct FCoordinatedScalarParameter
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRuntimeFloatCurve                          ParamValueOverTime;                                       // 0x0008(0x0078) (Edit, DisableEditOnInstance)
	ECoordinatedEffectParamScaleMode                   ScaleMode;                                                // 0x0080(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EAxis>                                 WorldSpaceAxis;                                           // 0x0081(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bLoop : 1;                                                // 0x0082(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bBlendFromInitialValue : 1;                               // 0x0082(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0083(0x0005) MISSED OFFSET
	struct FRuntimeFloatCurve                          BlendCurve;                                               // 0x0088(0x0078) (Edit, DisableEditOnInstance)
	unsigned char                                      bApplyAttribute : 1;                                      // 0x0100(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bScaleAttributeByValueOverTime : 1;                       // 0x0100(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	struct FAttributeInitializationData                ParamAttributeValue;                                      // 0x0108(0x0038) (Edit, DisableEditOnInstance)
	unsigned char                                      bSpecificMaterial : 1;                                    // 0x0140(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0141(0x0007) MISSED OFFSET
	TArray<int>                                        SpecificMaterialList;                                     // 0x0148(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct GbxGameSystemCore.CoordinatedVectorParameter
// 0x0268
struct FCoordinatedVectorParameter
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRuntimeCurveLinearColor                    ParamValueOverTime;                                       // 0x0008(0x01C8) (Edit, DisableEditOnInstance)
	unsigned char                                      bLoop : 1;                                                // 0x01D0(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bBlendFromInitialValue : 1;                               // 0x01D0(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bBlendUsingHSV : 1;                                       // 0x01D0(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01D1(0x0007) MISSED OFFSET
	struct FRuntimeFloatCurve                          BlendCurve;                                               // 0x01D8(0x0078) (Edit, DisableEditOnInstance)
	unsigned char                                      bSpecificMaterial : 1;                                    // 0x0250(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0251(0x0007) MISSED OFFSET
	TArray<int>                                        SpecificMaterialList;                                     // 0x0258(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct GbxGameSystemCore.CoordinatedParticleSystemData
// 0x0080
struct FCoordinatedParticleSystemData
{
	class UParticleSystem*                             ParticleSystem;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  RelativeTransform;                                        // 0x0010(0x0030) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AttachmentName;                                           // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartTime;                                                // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeactivateTime;                                           // 0x004C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FCoordinatedScalarParameter>         ScalarParameters;                                         // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCoordinatedVectorParameter>         VectorParameters;                                         // 0x0060(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	ECoordinatedParticleScaleMode                      ScaleMode;                                                // 0x0070(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bOnlyPlayerOwnerCanSee : 1;                               // 0x0071(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bForegroundLayer : 1;                                     // 0x0071(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bInheritViewFlags : 1;                                    // 0x0071(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bPermanent : 1;                                           // 0x0071(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0xE];                                       // 0x0072(0x000E) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.CoordinatedParticleSystemParameterData
// 0x0030
struct FCoordinatedParticleSystemParameterData
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ParticleSystem;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FCoordinatedScalarParameter>         ScalarParameters;                                         // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCoordinatedVectorParameter>         VectorParameters;                                         // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct GbxGameSystemCore.CoordinatedAudioData
// 0x0098
struct FCoordinatedAudioData
{
	class UWwiseEvent*                                 WwiseEvent;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AttachmentName;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartTime;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeactivateTime;                                           // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseRtpc*                                  RtpcParam;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRuntimeFloatCurve                          RtpcValueOverTime;                                        // 0x0020(0x0078) (Edit, DisableEditOnInstance)
};

// ScriptStruct GbxGameSystemCore.CoordinatedLightParameterData
// 0x03D0
struct FCoordinatedLightParameterData
{
	struct FName                                       LightName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bSetColor : 1;                                            // 0x0008(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bSetIntensity : 1;                                        // 0x0008(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FCoordinatedVectorParameter                 Color;                                                    // 0x0010(0x0268) (Edit, DisableEditOnInstance)
	struct FCoordinatedScalarParameter                 Intensity;                                                // 0x0278(0x0158) (Edit, DisableEditOnInstance)
};

// ScriptStruct GbxGameSystemCore.GibData
// 0x0028
struct FGibData
{
	int                                                MaxCount;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SelectionWeight;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideGlobalScale;                                     // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              MinScale;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxScale;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UObject*                                     Mesh;                                                     // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceConstant*                   MaterialOverride;                                         // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.ImpactResponseEffect
// 0x0140
struct FImpactResponseEffect
{
	bool                                               bHighPriority;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCensorThisEffect;                                        // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class UImpactData*                                 CensoredEffectAlternative;                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideImpactWwiseEvent;                                // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	class UWwiseEvent*                                 ImpactWwiseEvent;                                         // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ParticleTemplate;                                         // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAttachParticleToHitActor : 1;                            // 0x0028(0x0001) (Edit)
	unsigned char                                      bAttachParticleToHitBone : 1;                             // 0x0028(0x0001) (Edit)
	unsigned char                                      bHideEffectFromHitActor : 1;                              // 0x0028(0x0001) (Edit)
	unsigned char                                      bNoOverlapDecal : 1;                                      // 0x0028(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FName                                       NoOverlapDecalGroupName;                                  // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  DecalMaterials;                                           // 0x0038(0x0010) (Edit, ZeroConstructor)
	float                                              DecalWidth;                                               // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecalHeight;                                              // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecalThickness;                                           // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecalMinScale;                                            // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecalMaxScale;                                            // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDecalRandomRotation;                                     // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	float                                              DecalRandomRotationLimit;                                 // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecalLifetime;                                            // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecalFadeDuration;                                        // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FGbxSignificanceEvent                       SignificanceEvent;                                        // 0x0070(0x0008) (Edit)
	bool                                               bPlayFeedbackOnHitActor;                                  // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	class UFeedbackData*                               HitFeedback;                                              // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UFeedbackData*                               AreaFeedback;                                             // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FImpactResponseParams                       EffectParameters;                                         // 0x0090(0x00B0)
};

// ScriptStruct GbxGameSystemCore.WeightedAnim
// 0x00B0
struct FWeightedAnim
{
	struct FAnimMeshList                               Anims;                                                    // 0x0000(0x0078) (Edit)
	struct FAttributeInitializationData                Weight;                                                   // 0x0078(0x0038) (Edit)
};

// ScriptStruct GbxGameSystemCore.GbxBlackboardKeySelector
// 0x0010
struct FGbxBlackboardKeySelector
{
	struct FName                                       KeyName;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRuntimeKey;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.GbxParam
// 0x0080
struct FGbxParam
{
	EGbxParamValueType                                 ValueType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DisabledValueModes;                                       // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ValueFlags;                                               // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EGbxParamValueMode                                 ValueMode;                                                // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNumericRange                               Range;                                                    // 0x0004(0x0008) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UClass*                                      AttributeInitializer;                                     // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGbxAttributeData*                           AttributeData;                                            // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FAttributeInitializationData                AttributeInitializationData;                              // 0x0020(0x0038) (Edit)
	struct FGbxBlackboardKeySelector                   BlackboardKey;                                            // 0x0058(0x0010) (Edit)
	class UGbxCondition*                               Condition;                                                // 0x0068(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.LoopAnimData
// 0x0018
struct FLoopAnimData
{
	class UAnimSequenceBase*                           AnimStart;                                                // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UAnimSequenceBase*                           AnimLoop;                                                 // 0x0008(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UAnimSequenceBase*                           AnimStop;                                                 // 0x0010(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.BoneFatigueParams
// 0x0014
struct FBoneFatigueParams
{
	float                                              CurrentFatigue;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FatigueDissipationRate;                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0008(0x000C) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.RangedDistanceOverrides
// 0x000C
struct FRangedDistanceOverrides
{
	bool                                               bOverrideRangedDistances;                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MinDistanceOverride;                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistanceOverride;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.ActiveTrackedFeedback
// 0x0060
struct FActiveTrackedFeedback
{
	class UFeedbackData*                               FeedbackData;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              LastStartTime;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastRandomShakeTime;                                      // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RandomCameraShake;                                        // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseScale;                                                // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CurrentScale;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CurrentCameraShakeScale;                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CameraShakeXScale;                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CameraShakeYScale;                                        // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SourceLocation;                                           // 0x0028(0x000C) (IsPlainOldData)
	struct FRangedDistanceOverrides                    RangedDistanceOverrides;                                  // 0x0034(0x000C)
	bool                                               bRumbleFinished;                                          // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bShakeFinished;                                           // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	TArray<float>                                      AdditionalCameraShakeScales;                              // 0x0048(0x0010) (ZeroConstructor)
	TWeakObjectPtr<class UObject>                      SourceContext;                                            // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.PlayerDamageDataPresentation
// 0x0018
struct FPlayerDamageDataPresentation
{
	class UParticleSystem*                             ScreenParticle;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   HitDirection;                                             // 0x0008(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.StartupAssetTypeData
// 0x0038
struct FStartupAssetTypeData
{
	struct FName                                       Path;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FSoftObjectPath                             ClassType;                                                // 0x0008(0x0018)
	class UClass*                                      ResolvedClassType;                                        // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bBlueprint;                                               // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FName                                       AssetCategory;                                            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.ChallengeGoalValue
// 0x0008
struct FChallengeGoalValue
{
	int                                                GoalValue;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NotificationThreshold;                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.StatChallengeTest
// 0x0030
struct FStatChallengeTest
{
	class UGameStatData*                               StatId;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FChallengeGoalValue>                 GoalInfo;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        GoalValues;                                               // 0x0018(0x0010) (ZeroConstructor, Deprecated)
	bool                                               bUseLocalStat;                                            // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bResetLocalStatWhenGoalReached;                           // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ChallengeStatInstanceData
// 0x0038
struct FChallengeStatInstanceData
{
	class UGameStatData*                               StatId;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TSoftObjectPtr<class UGameStatData>                ChallengeStatPath;                                        // 0x0008(0x0028)
	int                                                CurrentStatValue;                                         // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ChallengePersistentState
// 0x0060
struct FChallengePersistentState
{
	class UClass*                                      ChallengeClass;                                           // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TSoftObjectPtr<class UClass>                       ChallengeClassPath;                                       // 0x0008(0x0028)
	int                                                CompletedCount;                                           // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CompletedProgressLevel;                                   // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FChallengeStatInstanceData>          StatInstanceState;                                        // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bIsActive;                                                // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCurrentlyCompleted;                                      // 0x0049(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004A(0x0002) MISSED OFFSET
	int                                                ProgressCounter;                                          // 0x004C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCustomChallengePersistentState*             CustomPersistentData;                                     // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ChallengeInstanceData
// 0x0080
struct FChallengeInstanceData
{
	class AActor*                                      CCOwner;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FChallengePersistentState                   ChallengeState;                                           // 0x0008(0x0060) (BlueprintVisible, BlueprintReadOnly)
	class UChallenge*                                  ChallengeInstance;                                        // 0x0068(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.CharacterMoveToCommand
// 0x001C
struct FCharacterMoveToCommand
{
	TWeakObjectPtr<class AActor>                       TargetActor;                                              // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x0008(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              Duration;                                                 // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bContinuouslyUpdate : 1;                                  // 0x0018(0x0001) (BlueprintVisible)
	unsigned char                                      bEnforceMaxSpeed : 1;                                     // 0x0018(0x0001) (BlueprintVisible)
	unsigned char                                      bEnforceMaxSpeedOnEnding : 1;                             // 0x0018(0x0001) (BlueprintVisible)
	unsigned char                                      bMoveZAxis : 1;                                           // 0x0018(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.CharacterMoveToState
// 0x0030
struct FCharacterMoveToState
{
	struct FCharacterMoveToCommand                     CommandData;                                              // 0x0000(0x001C)
	unsigned char                                      UnknownData00[0x14];                                      // 0x001C(0x0014) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.GbxEasingFunc
// 0x000C
struct FGbxEasingFunc
{
	TEnumAsByte<EEasingFunc>                           Func;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              BlendExp;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Steps;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.CharacterRotateToCommand
// 0x0050
struct FCharacterRotateToCommand
{
	class AActor*                                      TargetActor;                                              // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetSocket;                                             // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x0010(0x000C) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x001C(0x0010) MISSED OFFSET
	float                                              Duration;                                                 // 0x002C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFreezeRotation;                                          // 0x0030(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              InterpSpeed;                                              // 0x0034(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxYawRate;                                               // 0x0038(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPitchRate;                                             // 0x003C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseEasing;                                               // 0x0040(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	struct FGbxEasingFunc                              Easing;                                                   // 0x0044(0x000C) (BlueprintVisible)
};

// ScriptStruct GbxGameSystemCore.CharacterRotateToState
// 0x0068
struct FCharacterRotateToState
{
	struct FCharacterRotateToCommand                   CommandData;                                              // 0x0000(0x0050)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0050(0x0018) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.CharacterScriptedMeshOffsetCommand
// 0x0138
struct FCharacterScriptedMeshOffsetCommand
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	class UAnimSequence*                               RootMotionSourceAnim;                                     // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          HorzCurv;                                                 // 0x0018(0x0078)
	struct FRuntimeFloatCurve                          VertCurv;                                                 // 0x0090(0x0078)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0108(0x0030) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.CharacterScriptedMeshOffsetState
// 0x0140
struct FCharacterScriptedMeshOffsetState
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FCharacterScriptedMeshOffsetCommand         Cmd;                                                      // 0x0008(0x0138)
};

// ScriptStruct GbxGameSystemCore.LadderAnimState
// 0x0028
struct FLadderAnimState
{
	EScriptedLadderType                                PendingType;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0001(0x001F) MISSED OFFSET
	EScriptedLadderType                                CurrentType;                                              // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ReplicatedLadderState
// 0x0002
struct FReplicatedLadderState
{
	unsigned char                                      DirtyCounter;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	EScriptedLadderType                                LadderType;                                               // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.ControlledMoveState
// 0x0160
struct FControlledMoveState
{
	class UGbxCharacterMovementComponent*              MovementComponentOwner;                                   // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UControlledMove*                             CurrentMove;                                              // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      Instigator;                                               // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              BaseSpeed;                                                // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Speed;                                                    // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0020(0x0030) MISSED OFFSET
	float                                              Runtime;                                                  // 0x0050(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x34];                                      // 0x0054(0x0034) MISSED OFFSET
	class AActor*                                      TargetActor;                                              // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0090(0x0018) MISSED OFFSET
	struct FVector                                     InitialDirection;                                         // 0x00A8(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     CurrentDirection;                                         // 0x00B4(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x30];                                      // 0x00C0(0x0030) MISSED OFFSET
	struct FVector                                     FrameMoveVelocity;                                        // 0x00F0(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x34];                                      // 0x00FC(0x0034) MISSED OFFSET
	class AActor*                                      LastHitActor;                                             // 0x0130(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0138(0x0004) MISSED OFFSET
	float                                              aForwardInput;                                            // 0x013C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              aStrafeInput;                                             // 0x0140(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1C];                                      // 0x0144(0x001C) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ControlledMoveParameters
// 0x0028
struct FControlledMoveParameters
{
	float                                              SpeedOverride;                                            // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DurationOverride;                                         // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LaunchAngleOverride;                                      // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class AActor*                                      TargetActor;                                              // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x0018(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ControlledMoveReplicationData
// 0x0048
struct FControlledMoveReplicationData
{
	unsigned char                                      DirtyCounter;                                             // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UClass*                                      ControlledMove;                                           // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FControlledMoveParameters                   Parameters;                                               // 0x0010(0x0028) (Transient)
	struct FVector                                     PackedDirection;                                          // 0x0038(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      bZeroVelocity : 1;                                        // 0x0044(0x0001) (Transient)
	unsigned char                                      bInterrupted : 1;                                         // 0x0044(0x0001) (Transient)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.MantleAttemptInfo
// 0x0018
struct FMantleAttemptInfo
{
	int                                                ActionIndex;                                              // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0004(0x000C) (Transient, IsPlainOldData)
	class UPrimitiveComponent*                         MovementBase;                                             // 0x0010(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.MantleActiveActionData
// 0x0020
struct FMantleActiveActionData
{
	struct FMantleAttemptInfo                          MantleAttempt;                                            // 0x0000(0x0018) (Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.MantleTraceInputs
// 0x0068
struct FMantleTraceInputs
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
	class UWorld*                                      World;                                                    // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMantleData*                                 MantleData;                                               // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGameplayGlobals*                         Globals;                                                  // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      SourceActor;                                              // 0x0060(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.MantleTraceCheck
// 0x0278
struct FMantleTraceCheck
{
	struct FMantleTraceInputs                          Inputs;                                                   // 0x0000(0x0068) (Transient)
	unsigned char                                      UnknownData00[0x210];                                     // 0x0068(0x0210) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.MantleState
// 0x06E8
struct FMantleState
{
	class UGbxCharacterMovementComponent*              MovementComponentOwner;                                   // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UMantleData*                                 MantleData;                                               // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGameplayGlobals*                         GameplayGlobals;                                          // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FMantleActiveActionData                     ActiveActionData;                                         // 0x0020(0x0020) (Transient)
	unsigned char                                      UnknownData01[0x430];                                     // 0x0040(0x0430) MISSED OFFSET
	struct FMantleTraceCheck                           CurrentTrace;                                             // 0x0470(0x0278) (Transient)
};

// ScriptStruct GbxGameSystemCore.ReplicatedMantleState
// 0x0008
struct FReplicatedMantleState
{
	unsigned char                                      Counter;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ActionIndex;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.GbxCharacterNavWalking
// 0x00B0
struct FGbxCharacterNavWalking
{
	class UGbxCharacterMovementComponent*              MoveComp;                                                 // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0008(0x00A8) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.NavAnimMachineData
// 0x0008
struct FNavAnimMachineData
{
	int                                                MachineIdx;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	ENavAnimState                                      ServerBaseState;                                          // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	ENavAnimState                                      CurrState;                                                // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.NavAnimDesiredInfo
// 0x0010
struct FNavAnimDesiredInfo
{
	float                                              Yaw;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         FaceLoc;                                                  // 0x0004(0x000C)
};

// ScriptStruct GbxGameSystemCore.NavAnimTransition
// 0x0028
struct FNavAnimTransition
{
	ENavAnimState                                      State;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FNavAnimDesiredInfo                         Info;                                                     // 0x0004(0x0010)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FName                                       RowName;                                                  // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MachineIdx;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RunIdx;                                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.NavAnimState
// 0x0050
struct FNavAnimState
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UAnimInstance*                               CachedAnimInst;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FNavAnimMachineData>                 MachineList;                                              // 0x0010(0x0010) (ZeroConstructor)
	struct FNavAnimTransition                          ServerTransition;                                         // 0x0020(0x0028)
	int                                                ClientTransitionIdx;                                      // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.RotationDeltaMatchingInfo
// 0x00C0
struct FRotationDeltaMatchingInfo
{
	struct FFloatCurve                                 RotationTimeCurve;                                        // 0x0000(0x0090) (Transient)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0090(0x0030) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.GbxInterpData
// 0x0140
struct FGbxInterpData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class AActor*                                      Actor;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class AController*                                 Controller;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMovementComponent*                          MoveComp;                                                 // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x120];                                     // 0x0020(0x0120) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.IdleVelocityData
// 0x0018
struct FIdleVelocityData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.RootMotionStateData
// 0x0058
struct FRootMotionStateData
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
	class UGbxCharacterMovementComponent*              GbxCharMoveComp;                                          // 0x0048(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCharacterAnimInstance*                   GbxAnimInstance;                                          // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.FacingInfo
// 0x003C
struct FFacingInfo
{
	EFacingInfoType                                    Type;                                                     // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0004(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class USceneComponent>              Component;                                                // 0x000C(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Vector;                                                   // 0x0014(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    Rotator;                                                  // 0x0020(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     Offset;                                                   // 0x002C(0x000C) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0038(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.StanceChangedEventArgs
// 0x0030
struct FStanceChangedEventArgs
{
	EStanceStackLayer                                  PreviousLayer;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UStanceType*                                 PreviousStanceType;                                       // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UStanceData*                                 PreviousStance;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EStanceStackLayer                                  NextLayer;                                                // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	class UStanceType*                                 NextStanceType;                                           // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UStanceData*                                 NextStance;                                               // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.ControlledMoveNetCorrection
// 0x0010
struct FControlledMoveNetCorrection
{
	float                                              Runtime;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      ControlledMove;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.CMMotionData
// 0x0168
struct FCMMotionData
{
	struct FRuntimeFloatCurve                          X;                                                        // 0x0000(0x0078) (Edit)
	struct FRuntimeFloatCurve                          Y;                                                        // 0x0078(0x0078) (Edit)
	struct FRuntimeFloatCurve                          Z;                                                        // 0x00F0(0x0078) (Edit)
};

// ScriptStruct GbxGameSystemCore.CustomizationColorEntry
// 0x0038
struct FCustomizationColorEntry
{
	TArray<class UGbxCustomizationTargetData*>         ColorCustomizationTargets;                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FName                                       ColorCustomizationParameter;                              // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SplitColorCustomizationParameter;                         // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       ColorCustomizationDisplayName;                            // 0x0020(0x0028) (Edit)
};

// ScriptStruct GbxGameSystemCore.CustomizationLinkedParameter
// 0x0010
struct FCustomizationLinkedParameter
{
	struct FName                                       LinkedParameterName;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ELinkedParameterType                               LinkedParameterType;                                      // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.CustomizationLinkedParameterEntry
// 0x0030
struct FCustomizationLinkedParameterEntry
{
	TArray<struct FCustomizationLinkedParameter>       LinkedParameters;                                         // 0x0000(0x0010) (Edit, ZeroConstructor)
	class UGbxCustomizationTargetData*                 LinkedParameterSource;                                    // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGbxCustomizationTargetData*                 LinkedParameterTarget;                                    // 0x0018(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TArray<class UGbxCustomizationTargetData*>         LinkedParameterTargets;                                   // 0x0020(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GbxGameSystemCore.CustomizationInheritedTextureBaseMaterial
// 0x0018
struct FCustomizationInheritedTextureBaseMaterial
{
	class UGbxCustomizationTargetData*                 Target;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaterialIndex;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          BaseMaterial;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.InheritedCustomizationTextureExtraParam
// 0x0018
struct FInheritedCustomizationTextureExtraParam
{
	class UGbxCustomizationTargetData*                 Target;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParamName;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    Texture;                                                  // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.CustomizationTextureInheritanceSettings
// 0x0038
struct FCustomizationTextureInheritanceSettings
{
	TArray<struct FName>                               OnlyInheritCustomizationTextureParameters;                // 0x0000(0x0010) (Edit, ZeroConstructor)
	class UMaterialInterface*                          BaseMaterial;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FCustomizationInheritedTextureBaseMaterial> CustomizationTargetSpecificBaseMaterials;                 // 0x0018(0x0010) (Edit, ZeroConstructor)
	TArray<struct FInheritedCustomizationTextureExtraParam> ExtraParams;                                              // 0x0028(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GbxGameSystemCore.GbxCustomizationContainerEntry
// 0x001C (0x0028 - 0x000C)
struct FGbxCustomizationContainerEntry : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UGbxCustomizationData*                       CustomizationData;                                        // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                OptionalCustomizationId;                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UGbxCustomizationData*                       ClientCachedCustomizationData;                            // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct GbxGameSystemCore.GbxCustomizationCacheEntry
// 0x0018
struct FGbxCustomizationCacheEntry
{
	TArray<class UObject*>                             AssetRefs;                                                // 0x0000(0x0010) (ZeroConstructor)
	class UGbxCustomizationData*                       CustomizationData;                                        // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.GbxCustomizationContainer
// 0x0028 (0x00D8 - 0x00B0)
struct FGbxCustomizationContainer : public FFastArraySerializer
{
	TArray<struct FGbxCustomizationContainerEntry>     Customizations;                                           // 0x00B0(0x0010) (ZeroConstructor)
	TArray<struct FGbxCustomizationCacheEntry>         CustomizationCache;                                       // 0x00C0(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UGbxCustomizationComponent*                  Owner;                                                    // 0x00D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct GbxGameSystemCore.CustomizationColorApplication
// 0x0034
struct FCustomizationColorApplication
{
	bool                                               bUseDefaultColor;                                         // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseDefaultSplitColor;                                    // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSupportsSplitColor;                                      // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FVector                                     AppliedColor;                                             // 0x0004(0x000C) (IsPlainOldData)
	struct FVector                                     SplitColor;                                               // 0x0010(0x000C) (IsPlainOldData)
	struct FVector                                     DefaultColor;                                             // 0x001C(0x000C) (IsPlainOldData)
	struct FVector                                     DefaultSplitColor;                                        // 0x0028(0x000C) (IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.MaterialArray
// 0x0010
struct FMaterialArray
{
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxGameSystemCore.CustomizationStreamingEntry
// 0x0040
struct FCustomizationStreamingEntry
{
	class UGbxCustomizationData*                       CustomizationData;                                        // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	TArray<class UGbxCustomizationComponent*>          WaitingComponents;                                        // 0x0010(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0020(0x0020) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.RegisteredConditionalDamageValueModifier
// 0x0010
struct FRegisteredConditionalDamageValueModifier
{
	class UConditionalDamageValueModifier*             Modifier;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     DamageValueContextOverride;                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.RegisteredConditionalDamageCriticalModifier
// 0x0010
struct FRegisteredConditionalDamageCriticalModifier
{
	class UConditionalDamageCriticalModifier*          Modifier;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     ModifierValueContextOverride;                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.StatusEffectModifiers
// 0x0030
struct FStatusEffectModifiers
{
	class UStatusEffectData*                           StatusEffectData;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGbxAttributeFloat                          EffectChanceModifier;                                     // 0x0008(0x000C) (Edit, BlueprintVisible)
	struct FGbxAttributeFloat                          EffectDurationModifier;                                   // 0x0014(0x000C) (Edit, BlueprintVisible)
	struct FGbxAttributeFloat                          EffectDamageModifier;                                     // 0x0020(0x000C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ReflectedDamageParams
// 0x0018
struct FReflectedDamageParams
{
	float                                              DamageScale;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageTakenScale;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReflectTowardAttacker;                                   // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.HitReactionParams
// 0x0058
struct FHitReactionParams
{
	class UDamageComponent*                            Receiver;                                                 // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageCauserComponent*                      Causer;                                                   // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DamageAmount;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UGbxDamageType*                              DamageType;                                               // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x0028(0x000C) (IsPlainOldData)
	float                                              Force;                                                    // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	class UHitRegionData*                              HitRegion;                                                // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                HitBoneIndex;                                             // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // 0x0044(0x000C) (IsPlainOldData)
	bool                                               bIgnoreCooldowns;                                         // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bForceInterruptSelf;                                      // 0x0051(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.HitReactionState
// 0x0290
struct FHitReactionState
{
	unsigned char                                      UnknownData00[0x130];                                     // 0x0000(0x0130) MISSED OFFSET
	class UHitReactionData*                            HitReactionData;                                          // 0x0130(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UHitReactionTag*>                     NoLockTags;                                               // 0x0138(0x0010) (Edit, ZeroConstructor)
	class UHitReactionTag*                             BackupDeathTag;                                           // 0x0148(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DefaultDeathAction;                                       // 0x0150(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCensorDeaths;                                            // 0x0158(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0159(0x0007) MISSED OFFSET
	class UHitReactionData*                            CurrHitReactionData;                                      // 0x0160(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UDamageComponent*                            DamageComp;                                               // 0x0168(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UAIDodgeComponent*                           DodgeComp;                                                // 0x0170(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UGbxActionComponent*                         ActionComp;                                               // 0x0178(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UBrainComponent*                             BrainComp;                                                // 0x0180(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FName                                       DeathOverrideId;                                          // 0x0188(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UHitReactionTag*                             DeathOverride;                                            // 0x0190(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UClass*>                              LiveLayers;                                               // 0x0198(0x0010) (ZeroConstructor, Transient)
	TArray<class UClass*>                              DeathLayers;                                              // 0x01A8(0x0010) (ZeroConstructor, Transient)
	TMap<class UHitReactionTag*, float>                TagTimeStartMap;                                          // 0x01B8(0x0050) (ZeroConstructor, Transient)
	TMap<class UHitReactionTag*, float>                TagTimeEndMap;                                            // 0x0208(0x0050) (ZeroConstructor, Transient)
	class UHitReactionTag*                             ActiveTag;                                                // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0260(0x0010) MISSED OFFSET
	TArray<struct FHitReactionParams>                  Hits;                                                     // 0x0270(0x0010) (ZeroConstructor, Transient)
	class AGbxCharacter*                               SoundCharacter;                                           // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0288(0x0008) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.GameResourcePoolReference
// 0x0018
struct FGameResourcePoolReference
{
	unsigned char                                      PoolIndexInManager;                                       // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UGameResourcePoolManagerComponent*           PoolManager;                                              // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.HealthType
// 0x0078
struct FHealthType
{
	class UHealthTypeData*                             HealthTypeData;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UGameResourcePoolData*                       HealthPoolData;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      HealthSectionPercentages;                                 // 0x0010(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bResetIdleTimerIfNoDamage : 1;                            // 0x0020(0x0001) (Edit, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      bUseChanceToExist : 1;                                    // 0x0020(0x0001) (Edit, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FAttributeInitializationData                ChanceToExist;                                            // 0x0028(0x0038) (Edit, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FGameResourcePoolReference                  HealthPool;                                               // 0x0060(0x0018) (Transient)
};

// ScriptStruct GbxGameSystemCore.SimpleHealthInfo
// 0x0058
struct FSimpleHealthInfo
{
	struct FAttributeInitializationData                MaxHealthFormula;                                         // 0x0000(0x0038) (Edit, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UHealthTypeData*                             HealthType;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FGbxAttributeFloat                          MaxHealth;                                                // 0x0040(0x000C) (Transient)
	float                                              CurrentHealth;                                            // 0x004C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.SyncedHitReactionData
// 0x0040
struct FSyncedHitReactionData
{
	class UHitReactionTag*                             Tag;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      Action;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      CensoredAction;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   Direction;                                                // 0x001C(0x000C)
	float                                              Force;                                                    // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitBoneIndex;                                             // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      HitLocation;                                              // 0x0030(0x000C)
	uint32_t                                           Flags;                                                    // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.DamageGoreModifiers
// 0x0008
struct FDamageGoreModifiers
{
	float                                              GoreModifier;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GibModifier;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.DamageReactionEvent_DamageComponent
// 0x0048
struct FDamageReactionEvent_DamageComponent
{
	struct FName                                       EventName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGameResourcePoolData*                       HealthPool;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EventHealthPercent;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EDamageReactionEventType                           EVENTTYPE;                                                // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	class UDamageFilter*                               Filter;                                                   // 0x0018(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DamageTime;                                               // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RetriggerDelay;                                           // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxTriggerCount;                                          // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x002C(0x001C) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ReceivedDamageDetails
// 0x0058
struct FReceivedDamageDetails
{
	bool                                               bWasCrit;                                                 // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     HitLocation;                                              // 0x0004(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     HitDirection;                                             // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UPrimitiveComponent*                         HitComponent;                                             // 0x0020(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHitRegionData*                              HitRegion;                                                // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FHealthTypeDamageSummary>            DamagePerHealthType;                                      // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FVector                                     RadiusDamageOrigin;                                       // 0x0040(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              DamageRadius;                                             // 0x004C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWasBulletReflected;                                      // 0x0050(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ProtectionTimerSettings
// 0x000C
struct FProtectionTimerSettings
{
	float                                              TimerDuration;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Threshold;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaintainedMaxHealthPct;                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.LevelBasedDamageScale
// 0x000C
struct FLevelBasedDamageScale
{
	int                                                LevelDifference;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              HigherLevelAttackerDmgScale;                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LowerLevelAttackerDmgScale;                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.DamageLocalizationSettings
// 0x0018
struct FDamageLocalizationSettings
{
	class UTexture2D*                                  CriticalTexture;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ResistTexture;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ImmuneTexture;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.DamageOverTimeInstance
// 0x0270
struct FDamageOverTimeInstance
{
	unsigned char                                      UnknownData00[0x220];                                     // 0x0000(0x0220) MISSED OFFSET
	class UDamageData*                                 DamageData;                                               // 0x0220(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0228(0x0048) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.DamageModifierAttributeCollection
// 0x0010
struct FDamageModifierAttributeCollection
{
	class UGbxAttributeData*                           InstigatedModifier;                                       // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGbxAttributeData*                           ReceivedModifier;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.DamageSourceHealthTypeModifier
// 0x0010
struct FDamageSourceHealthTypeModifier
{
	class UHealthTypeData*                             HealthTypeData;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGbxAttributeData*                           InstigatedFriendlyFireHealingModifier;                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.DamageSurfaceModifier
// 0x0040
struct FDamageSurfaceModifier
{
	EDamageSurfaceType                                 PhysicalSurface;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FAttributeInitializationData                Modifier;                                                 // 0x0008(0x0038) (Edit)
};

// ScriptStruct GbxGameSystemCore.ViewLeadingTranslationInfo
// 0x002C
struct FViewLeadingTranslationInfo
{
	struct FVector                                     Effect;                                                   // 0x0000(0x000C) (Edit, IsPlainOldData)
	float                                              AccelRate;                                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecelRate;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Max;                                                      // 0x0014(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     Min;                                                      // 0x0020(0x000C) (Edit, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.ViewLeadingRotationInfo
// 0x003C
struct FViewLeadingRotationInfo
{
	struct FRotator                                    Effect;                                                   // 0x0000(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     EffectFromTranslation;                                    // 0x000C(0x000C) (Edit, IsPlainOldData)
	float                                              TiltFromRotationYaw;                                      // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AccelRate;                                                // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecelRate;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Max;                                                      // 0x0024(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    Min;                                                      // 0x0030(0x000C) (Edit, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.TrackedFirstPersonComponent
// 0x0040
struct FTrackedFirstPersonComponent
{
	class USceneComponent*                             Component;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.MenuStash
// 0x0010
struct FMenuStash
{
	TArray<class UBaseMenuStackMenuInfo*>              StashedMenus;                                             // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxGameSystemCore.SharedPickupInventoryActor
// 0x0010
struct FSharedPickupInventoryActor
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.DamageReactionEvent
// 0x0050
struct FDamageReactionEvent
{
	struct FName                                       EventName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EventHealthPercent;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EDamageReactionEventType                           EVENTTYPE;                                                // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	class UDamageFilter*                               Filter;                                                   // 0x0010(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DamageTime;                                               // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RetriggerDelay;                                           // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxTriggerCount;                                          // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FName                                       DamageBoneName;                                           // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIncludeDamageBoneChildren : 1;                           // 0x0030(0x0001) (Edit)
	unsigned char                                      bCensored : 1;                                            // 0x0030(0x0001) (Edit)
	unsigned char                                      bTriggerOnlyOnDeath : 1;                                  // 0x0030(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x1F];                                      // 0x0031(0x001F) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.HitRegionState
// 0x0070
struct FHitRegionState
{
	class UHitRegionData*                              HitRegion;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               AssociatedComponentNames;                                 // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FDamageReactionEvent>                DamageEvents;                                             // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                StateIndex;                                               // 0x0028(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<class UPrimitiveComponent*>                 AssociatedPrimitives;                                     // 0x0030(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UChildActorComponent*>                AssociatedChildActorComponents;                           // 0x0040(0x0010) (ExportObject, ZeroConstructor, Transient)
	float                                              MaxHealth;                                                // 0x0050(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentHealth;                                            // 0x0054(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGameResourcePoolReference                  ResourcePool;                                             // 0x0058(0x0018) (Transient)
};

// ScriptStruct GbxGameSystemCore.HitRegionInfo
// 0x0010
struct FHitRegionInfo
{
	class UHitRegionData*                              Data;                                                     // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                StateIndex;                                               // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.DamageReactionEventSummary
// 0x0060
struct FDamageReactionEventSummary
{
	class APawn*                                       DamageCauser;                                             // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     HitDirection;                                             // 0x0014(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class UClass*                                      DamageSource;                                             // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // 0x0030(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FHitRegionInfo                              HitRegion;                                                // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly)
	struct FVector                                     Origin;                                                   // 0x0048(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              Radius;                                                   // 0x0054(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                EventIndex;                                               // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.HitRegionHealthParams
// 0x0018
struct FHitRegionHealthParams
{
	float                                              OwnerHealthPercent;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UGameResourcePoolData*                       ResourcePool;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EHitRegionDamageRule                               DamageRule;                                               // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ConditionalMultiSelectionGestaltPartNameData
// 0x0020
struct FConditionalMultiSelectionGestaltPartNameData
{
	TArray<class UActorPartData*>                      OtherParts;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FName>                               GestaltMeshPartNames;                                     // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
};

// ScriptStruct GbxGameSystemCore.MultiSelectionGestaltPartNameData
// 0x0028
struct FMultiSelectionGestaltPartNameData
{
	int                                                IndexOfType;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FName>                               GestaltMeshPartNames;                                     // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FConditionalMultiSelectionGestaltPartNameData> ConditionalGestaltMeshPartNames;                          // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
};

// ScriptStruct GbxGameSystemCore.ReplicatedGestaltPartsData
// 0x0018
struct FReplicatedGestaltPartsData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.StretchBonesInstance
// 0x00A0
struct FStretchBonesInstance
{
	struct FName                                       StartBoneName;                                            // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       EndBoneName;                                              // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUniformStretch;                                          // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	class AActor*                                      TargetActor;                                              // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0020(0x0004) MISSED OFFSET
	struct FVector                                     TargetPosition;                                           // 0x0024(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              Distance;                                                 // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6C];                                      // 0x0034(0x006C) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.BoneModifyState_RepData
// 0x000C
struct FBoneModifyState_RepData
{
	bool                                               bActive;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Alpha;                                                    // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              BlendTime;                                                // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.BoneModifyProfileData
// 0x0018
struct FBoneModifyProfileData
{
	class UGbxBoneModifyProfile*                       Profile;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FBoneModifyState_RepData>            States;                                                   // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GbxGameSystemCore.BMPOverrideBone
// 0x0020
struct FBMPOverrideBone
{
	struct FBoneReference                              BoneRef;                                                  // 0x0000(0x0018) (Edit)
	float                                              Scale;                                                    // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.BMPOverride
// 0x0018
struct FBMPOverride
{
	TArray<struct FBMPOverrideBone>                    Bones;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
	EGlobalBoneModifyProfile_PoseMode                  PoseMode;                                                 // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.StretchAnimData
// 0x01E0
struct FStretchAnimData
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               AnimSeq;                                                  // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D0];                                     // 0x0010(0x01D0) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.GbxAnimPoseMatch
// 0x0020
struct FGbxAnimPoseMatch
{
	TArray<struct FName>                               PoseMatchBones;                                           // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.PawnAttachSlotState
// 0x0040
struct FPawnAttachSlotState
{
	class UPawnAttachSlotComponent*                    Owner;                                                    // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class APawn*                                       Pawn;                                                     // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AController*                                 Controller;                                               // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	EPawnAttachStatus                                  Status;                                                   // 0x0018(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bSkipDetachPlacement;                                     // 0x0019(0x0001) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               bSkipStopTransitionAction;                                // 0x001A(0x0001) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
	int                                                DetachTransitionIndex;                                    // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0020(0x0020) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.PawnSceneAttachmentInfo
// 0x0028
struct FPawnSceneAttachmentInfo
{
	bool                                               bAttachToBaseOwner;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bMaintainWorldLocation;                                   // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyMeshOffset;                                         // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0003(0x0005) MISSED OFFSET
	struct FName                                       SocketName;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AttachOffset;                                             // 0x0010(0x000C) (Edit, IsPlainOldData)
	bool                                               bAddOffsetFromSocket;                                     // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	struct FName                                       SocketNameForAdditionalOffset;                            // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.AttachSlotAnimSet
// 0x0030
struct FAttachSlotAnimSet
{
	TSoftObjectPtr<class UObject>                      AssociatedCharacter;                                      // 0x0000(0x0028) (Edit)
	class UGbxAnimSet*                                 AnimSet;                                                  // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.PawnAttachmentTransition
// 0x0048
struct FPawnAttachmentTransition
{
	class UClass*                                      BaseAction;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PawnAction;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bForceStopTransitionActions;                              // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EAttachmentTransitionTiming                        AttachTiming;                                             // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideAttachInfo;                                      // 0x0012(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0013(0x0005) MISSED OFFSET
	struct FPawnSceneAttachmentInfo                    AttachInfo;                                               // 0x0018(0x0028) (Edit)
	class UGbxCondition*                               Conditions;                                               // 0x0040(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.PawnAttachTransition
// 0x0000 (0x0048 - 0x0048)
struct FPawnAttachTransition : public FPawnAttachmentTransition
{

};

// ScriptStruct GbxGameSystemCore.PawnDetachTransition
// 0x0020 (0x0068 - 0x0048)
struct FPawnDetachTransition : public FPawnAttachmentTransition
{
	bool                                               bValidateDetachLocation;                                  // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              ValidationMaxOffset;                                      // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ValidationToleranceSize;                                  // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bComputeDetachLocationFromAction;                         // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAbsoluteDetachLocation;                                  // 0x0055(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0056(0x0002) MISSED OFFSET
	struct FVector                                     DetachLocationOffset;                                     // 0x0058(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.PlayerInputBinding_Button
// 0x0020
struct FPlayerInputBinding_Button
{
	class FString                                      RebindDataPath;                                           // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FName>                               KeyNames;                                                 // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxGameSystemCore.PlayerInputBinding_Axis_Key
// 0x0018
struct FPlayerInputBinding_Axis_Key
{
	struct FName                                       KeyName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale3D;                                                  // 0x0008(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.PlayerInputBinding_Axis
// 0x0020
struct FPlayerInputBinding_Axis
{
	class FString                                      RebindDataPath;                                           // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FPlayerInputBinding_Axis_Key>        Keys;                                                     // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxGameSystemCore.PlayerInputBinding_Category
// 0x0040
struct FPlayerInputBinding_Category
{
	class FString                                      CategoryDataPath;                                         // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      ContextDataPath;                                          // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FPlayerInputBinding_Button>          ButtonBindings;                                           // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FPlayerInputBinding_Axis>            AxisBindings;                                             // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxGameSystemCore.PlayerInputBindings
// 0x0010
struct FPlayerInputBindings
{
	TArray<struct FPlayerInputBinding_Category>        Categories;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxGameSystemCore.RecentlyCausedDamageInstance
// 0x0048
struct FRecentlyCausedDamageInstance
{
	class UClass*                                      DamageType;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageSource;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         DamageLocation;                                           // 0x0010(0x000C)
	float                                              TotalDamage;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      DirtyCounter;                                             // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	class UHitRegionData*                              HitRegion;                                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	ERecentDamageFlags                                 DamageFlags;                                              // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class AActor*                                      DamagedActor;                                             // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.CachedInterp
// 0x0020
struct FCachedInterp
{
	struct FName                                       Tag;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      Interp;                                                   // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ConditionalStance
// 0x0010
struct FConditionalStance
{
	class UGbxCondition*                               Condition;                                                // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStanceDataProvider*                         StanceProvider;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.AttributeEffectReference
// 0x0010
struct FAttributeEffectReference
{
	class UStatusEffectData*                           StatusEffectData;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.AppliedAttributeEffect
// 0x0038
struct FAppliedAttributeEffect
{
	struct FAttributeEffectReference                   AttributeEffectRef;                                       // 0x0000(0x0010)
	class UObject*                                     AttributeResolutionContext;                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStatusEffectManagerComponent*               Owner;                                                    // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0020(0x0018) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.CriticalHitDamageOverrides
// 0x0008
struct FCriticalHitDamageOverrides
{
	ECriticalHitDamageOverride                         Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDefaultCriticalHitMultiplier;                         // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              AdditionalCriticalMultiplier;                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.PipelineDamageInput
// 0x01B0
struct FPipelineDamageInput
{
	class UDamageComponent*                            DamageReceiverComp;                                       // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TScriptInterface<class UDamageableInterface>       Damageable;                                               // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	class APawn*                                       InstigatorPawn;                                           // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class APawn*                                       AdditionalEventListenerPawn;                              // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDamageModifierComponent*                    DamageModifierComp;                                       // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AController*                                 InstigatorController;                                     // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageSource;                                             // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x90];                                      // 0x0050(0x0090) MISSED OFFSET
	class UImpactData*                                 ImpactData;                                               // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UFeedbackData*                               InstigatorFeedback;                                       // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSimulatedOnClient : 1;                                   // 0x00F0(0x0001)
	unsigned char                                      UnknownData01[0x9F];                                      // 0x00F1(0x009F) MISSED OFFSET
	struct FCriticalHitDamageOverrides                 CriticalHitOverrides;                                     // 0x0190(0x0008)
	struct FDamageGoreModifiers                        GoreModifiers;                                            // 0x0198(0x0008)
	unsigned char                                      UnknownData02[0x10];                                      // 0x01A0(0x0010) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.DamageOverTimeContribution
// 0x01C0
struct FDamageOverTimeContribution
{
	struct FPipelineDamageInput                        PipelineInput;                                            // 0x0000(0x01B0)
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B0(0x0010) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.StatusEffectSpec
// 0x0038
struct FStatusEffectSpec
{
	class UStatusEffectData*                           StatusEffectData;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UObject>                      EffectOwner;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UObject>                      EffectOwnerContextOverride;                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EStatusEffectDurationType                          DurationType;                                             // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              Duration;                                                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AController*                                 EffectInstigator;                                         // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamagePerSecond;                                          // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.StatusEffectInstance
// 0x0048
struct FStatusEffectInstance
{
	struct FStatusEffectSpec                           Spec;                                                     // 0x0000(0x0038)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.StatusEffectInstanceStack
// 0x0070
struct FStatusEffectInstanceStack
{
	class UStatusEffectManagerComponent*               Owner;                                                    // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStatusEffectData*                           StatusEffectData;                                         // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDamageComponent*                            DoTDamageComponent;                                       // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FAppliedAttributeEffect>             AttributeEffects;                                         // 0x0018(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	TArray<struct FDamageOverTimeContribution>         DPSContributions;                                         // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FStatusEffectInstance>               Instances;                                                // 0x0048(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0058(0x0018) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.StatusEffectInstanceReference
// 0x0018
struct FStatusEffectInstanceReference
{
	class UStatusEffectManagerComponent*               StatusEffectManagerComponent;                             // 0x0000(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStatusEffectData*                           StatusEffectData;                                         // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                StatusEffectInstanceID;                                   // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.StatusEffectRemoveSpec
// 0x0010
struct FStatusEffectRemoveSpec
{
	class UStatusEffectData*                           StatusEffectData;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EffectOwner;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.StatusEffectQuery
// 0x0018
struct FStatusEffectQuery
{
	class UStatusEffectData*                           StatusEffectData;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Owner;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.StatusEffectQueryResult
// 0x0010
struct FStatusEffectQueryResult
{
	int                                                NumberOfInstances;                                        // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DPS;                                                      // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.UsabilityInfo
// 0x0040
struct FUsabilityInfo
{
	bool                                               bCanUse;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCanInteractWith;                                         // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCanPrimaryUse;                                           // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCanPrimaryHoldUse;                                       // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCanSecondaryUse;                                         // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCanSecondaryHoldUse;                                     // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCanShowUseDef;                                           // 0x0006(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0007(0x0001) MISSED OFFSET
	struct FText                                       OptionalErrorText;                                        // 0x0008(0x0028) (Edit)
	class UUsableTypeDefinition*                       PrimaryUseDef;                                            // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	class UUsableTypeDefinition*                       PrimaryHoldUseDef;                                        // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UUsableTypeDefinition*                       SecondaryUseDef;                                          // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UUsableTypeDefinition*                       SecondaryHoldUseDef;                                      // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.UseTraceResult
// 0x0060
struct FUseTraceResult
{
	class UUsableComponent*                            UsableComponent;                                          // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FUsabilityInfo                              Usability;                                                // 0x0010(0x0040)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.LatentUseState
// 0x0010
struct FLatentUseState
{
	class UUsableComponent*                            UsableComponent;                                          // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.UsableCostCache
// 0x0010
struct FUsableCostCache
{
	int                                                PrimaryCost;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SecondaryCost;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PrimaryHoldUseCost;                                       // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SecondaryHoldUseCost;                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.ResourceLock
// 0x0098
struct FGbxGameSystemCore_FResourceLock
{
	bool                                               bLocked;                                                  // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x97];                                      // 0x0001(0x0097) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ActorPartListData
// 0x0028
struct FActorPartListData
{
	class UEnum*                                       PartTypeEnum;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PartType;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bCanSelectMultipleParts;                                  // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseWeightWithMultiplePartSelection;                      // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
	struct FInt32Interval                              MultiplePartSelectionRange;                               // 0x000C(0x0008) (Edit, DisableEditOnTemplate)
	bool                                               bEnabled;                                                 // 0x0014(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	TArray<struct FWeightedActorPartData>              Parts;                                                    // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
};

// ScriptStruct GbxGameSystemCore.AIDodgeBasicData
// 0x0098
struct FAIDodgeBasicData
{
	struct FGbxParam                                   Cooldown;                                                 // 0x0000(0x0080) (Edit)
	class UClass*                                      Action;                                                   // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGbxCondition*                               Condition;                                                // 0x0088(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.AIDodgeData
// 0x0120 (0x01B8 - 0x0098)
struct FAIDodgeData : public FAIDodgeBasicData
{
	struct FGbxParam                                   Chance;                                                   // 0x0098(0x0080) (Edit)
	struct FGbxParam                                   Delay;                                                    // 0x0118(0x0080) (Edit)
	bool                                               bRemoveAllDelay;                                          // 0x0198(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0199(0x0003) MISSED OFFSET
	float                                              MaxAngle;                                                 // 0x019C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLimitAngle;                                              // 0x01A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01A1(0x0003) MISSED OFFSET
	float                                              MaxDistance;                                              // 0x01A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLimitDistance;                                           // 0x01A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01A9(0x0003) MISSED OFFSET
	float                                              MinShooterDistance;                                       // 0x01AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLimitShooterDistance;                                    // 0x01B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x01B1(0x0007) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.AIDodgeInstance
// 0x0020
struct FAIDodgeInstance
{
	class UClass*                                      Action;                                                   // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      SourceActor;                                              // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.AimSensitivityLevelParameters
// 0x001C
struct FAimSensitivityLevelParameters
{
	int                                                Index;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              YawMaxRotationRate;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PitchMaxRotationRate;                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurningExtraYaw;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurningExtraPitch;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurningRampUpTime;                                        // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurningRampUpDelay;                                       // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.AIBulletEvent
// 0x0038
struct FAIBulletEvent
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
	float                                              Strength;                                                 // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class AActor*                                      Instigator;                                               // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.AsyncExplosionImpactRequest
// 0x0170
struct FAsyncExplosionImpactRequest
{
	class UImpactData*                                 ExplosionImpact;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      ExplodingActor;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UWorld*                                      World;                                                    // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x150];                                     // 0x0020(0x0150) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.AttributePropertyValueResolverTestStruct
// 0x0050
struct FAttributePropertyValueResolverTestStruct
{
	float                                              FloatProp;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FloatPropStaticArray[0x3];                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<float>                                      FloatPropDynamicArray;                                    // 0x0010(0x0010) (ZeroConstructor)
	class UAttributePropertyValueResolverTestContext*  ObjectProp;                                               // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAttributePropertyValueResolverTestContext*  ObjectPropStaticArray[0x3];                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UAttributePropertyValueResolverTestContext*> ObjectPropDynamicArray;                                   // 0x0040(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxGameSystemCore.AttributeDefinedValueRow
// 0x0000 (0x0008 - 0x0008)
struct FAttributeDefinedValueRow : public FTableRowBase
{

};

// ScriptStruct GbxGameSystemCore.BalanceFormulaDefinedValueRow
// 0x0118 (0x0120 - 0x0008)
struct FBalanceFormulaDefinedValueRow : public FAttributeDefinedValueRow
{
	struct FAttributeInitializationData                Multiplier;                                               // 0x0008(0x0038) (Edit)
	struct FAttributeInitializationData                Level;                                                    // 0x0040(0x0038) (Edit)
	struct FAttributeInitializationData                Power;                                                    // 0x0078(0x0038) (Edit)
	struct FAttributeInitializationData                Offset;                                                   // 0x00B0(0x0038) (Edit)
	struct FAttributeInitializationData                Scalar;                                                   // 0x00E8(0x0038) (Edit)
};

// ScriptStruct GbxGameSystemCore.AttributeConditionalValue
// 0x0048
struct FAttributeConditionalValue
{
	struct FAttributeInitializationData                ValueIfAllConditionsAreTrue;                              // 0x0000(0x0038) (Edit)
	TArray<class UGbxCondition*>                       Conditions;                                               // 0x0038(0x0010) (Edit, ExportObject, ZeroConstructor)
};

// ScriptStruct GbxGameSystemCore.ConditionalDamageDamageTypeConditional
// 0x0010
struct FConditionalDamageDamageTypeConditional
{
	class UGbxCondition*                               Condition;                                                // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.ConditionalDamageDamageConditionalValue
// 0x0040
struct FConditionalDamageDamageConditionalValue
{
	class UGbxCondition*                               Condition;                                                // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FAttributeInitializationData                DamageValue;                                              // 0x0008(0x0038) (Edit)
};

// ScriptStruct GbxGameSystemCore.DamageContextSource
// 0x0010
struct FDamageContextSource
{
	class AActor*                                      SourceActor;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class APawn*                                       Instigator;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.CauseDamageAsyncRequest
// 0x0230
struct FCauseDamageAsyncRequest
{
	class UDamageData*                                 DamageData;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FDamageContextSource                        DamageContext;                                            // 0x0008(0x0010)
	class AActor*                                      DamageTarget;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x210];                                     // 0x0020(0x0210) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.DamagedActor
// 0x00E0
struct FDamagedActor
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDamageComponent*                            DamageComponent;                                          // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0010(0x00D0) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.DamageTargetResult
// 0x0190
struct FDamageTargetResult
{
	class UDamageComponent*                            DamageComponent;                                          // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
	struct FDamagedActor                               AsyncDamagedActor;                                        // 0x0018(0x00E0)
	unsigned char                                      UnknownData01[0x98];                                      // 0x00F8(0x0098) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.CauseDamageAsyncRequestEntry
// 0x00B0 (0x02E0 - 0x0230)
struct FCauseDamageAsyncRequestEntry : public FCauseDamageAsyncRequest
{
	unsigned char                                      UnknownData00[0x98];                                      // 0x0230(0x0098) MISSED OFFSET
	TArray<struct FDamageTargetResult>                 Results;                                                  // 0x02C8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02D8(0x0008) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.FloatWaveform
// 0x000C
struct FFloatWaveform
{
	float                                              Frequency;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Amplitude;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Phase;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.Vector2DWaveform
// 0x0018
struct FVector2DWaveform
{
	struct FFloatWaveform                              X;                                                        // 0x0000(0x000C) (Edit)
	struct FFloatWaveform                              Y;                                                        // 0x000C(0x000C) (Edit)
};

// ScriptStruct GbxGameSystemCore.GbxNamedParam
// 0x0008 (0x0088 - 0x0080)
struct FGbxNamedParam : public FGbxParam
{
	struct FName                                       Name;                                                     // 0x0080(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.EnvQueryParams
// 0x00B8
struct FEnvQueryParams
{
	class UEnvQuery*                                   Query;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UEnvQueryTest*>                       AdditionalTests;                                          // 0x0008(0x0010) (Edit, ExportObject, ZeroConstructor)
	TArray<class UEnvQueryTestAsset*>                  AdditionalTestAssets;                                     // 0x0018(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<EEnvQueryRunMode>                      RunMode;                                                  // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableRunModeEditing;                                   // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	TArray<struct FGbxNamedParam>                      Contexts;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NoClear)
	bool                                               bDisableContextEditing;                                   // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAllowEmptyContexts;                                      // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	TMap<class UClass*, int>                           ContextTypeTable;                                         // 0x0048(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
	TArray<struct FGbxNamedParam>                      Params;                                                   // 0x00A0(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NoClear)
	TEnumAsByte<EGbxSignificance>                      RequiredSignificanceRating;                               // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.DamageInfo
// 0x0058
struct FDamageInfo
{
	float                                              Damage;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageSource;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              DamageRadius;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ImpactForce;                                              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFeedbackData*                               InstigatorFeedback;                                       // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UDamageModifierComponent*                    DamageModifierComponent;                                  // 0x0028(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class AActor*                                      DamageCauser;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class AActor*>                              ActorsToIgnore;                                           // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               bApplyCriticalHitModsToAoEDamage;                         // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	struct FCriticalHitDamageOverrides                 CriticalHitOverrides;                                     // 0x004C(0x0008) (Edit, BlueprintVisible, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.SoundPerceptionProperties
// 0x000C
struct FSoundPerceptionProperties
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Loudness;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.DamageTypeExplosionAssociation
// 0x0010
struct FDamageTypeExplosionAssociation
{
	class UClass*                                      DamageType;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UExplosionSizeSelectionData*                 ExplosionSizeData;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.ExplosionSizeProperties
// 0x0050
struct FExplosionSizeProperties
{
	float                                              ExplosionSize;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UFeedbackData*                               ExplosionFeedback;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ExplosionParticleSystem;                                  // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             CensoredExplosionParticleSystem;                          // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 ExplosionAudioEvent;                                      // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UImpactData*                                 ExplosionImpact;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bCensorThisExplosion : 1;                                 // 0x0030(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bUseExplosionRadialBlur : 1;                              // 0x0030(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bOverrideTinnitusDuration : 1;                            // 0x0030(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	struct FRadialBlurSelection                        ExplosionRadialBlur;                                      // 0x0034(0x000C) (Edit, DisableEditOnInstance)
	EExplosionTinnitusDuration                         TinnitusDuration;                                         // 0x0040(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FGbxSignificanceEvent                       SignificanceEvent;                                        // 0x0048(0x0008) (Edit, DisableEditOnInstance)
};

// ScriptStruct GbxGameSystemCore.ShakeScaleAssociation
// 0x0170
struct FShakeScaleAssociation
{
	class UClass*                                      CameraShake;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAttributeInitializationData                BaseScale;                                                // 0x0008(0x0038) (Edit)
	bool                                               bContinuous;                                              // 0x0040(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bScaleDownOverTime;                                       // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseScaleOverTimeCurve;                                   // 0x0042(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0043(0x0005) MISSED OFFSET
	struct FRuntimeFloatCurve                          ScaleOverTimeCurve;                                       // 0x0048(0x0078) (Edit)
	struct FAttributeInitializationData                ContinuousScale;                                          // 0x00C0(0x0038) (Edit)
	struct FRuntimeFloatCurve                          ContinuousScaleCurve;                                     // 0x00F8(0x0078) (Edit)
};

// ScriptStruct GbxGameSystemCore.FeedbackDataFirstPersonImpulse
// 0x0060
struct FFeedbackDataFirstPersonImpulse
{
	bool                                               bUseDurationFromCameraShake;                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              CameraShakeDurationEaseInWeight;                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EaseInDuration;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EaseOutDuration;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGbxEasingFunc                              EaseInFunc;                                               // 0x0010(0x000C) (Edit)
	struct FGbxEasingFunc                              EaseOutFunc;                                              // 0x001C(0x000C) (Edit)
	struct FRotator                                    RandomRotationOffset;                                     // 0x0028(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    RotationExtent;                                           // 0x0034(0x000C) (Edit, IsPlainOldData)
	bool                                               bOffsetRotationByDirection;                               // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	struct FVector                                     RandomTranslationOffset;                                  // 0x0044(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     TranslationExtent;                                        // 0x0050(0x000C) (Edit, IsPlainOldData)
	float                                              ZoomedEffectScale;                                        // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.GbxHUDFeedbackImpulse
// 0x0060
struct FGbxHUDFeedbackImpulse
{
	struct FVector                                     Velocity;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              RotationalVelocity;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Springiness;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Damping;                                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCircularMotion;                                          // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyCameraTranslation;                                  // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	float                                              CameraTranslationWeight;                                  // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyCameraRotation;                                     // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              CameraRotationWeight;                                     // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyOriginWorldSpace;                                   // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FVector                                     OriginWorldSpace;                                         // 0x002C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              OriginWorldSpaceWeight;                                   // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FName                                       Tag;                                                      // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x18];                                      // 0x0048(0x0018) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.LoopingShakeInfo
// 0x0038
struct FLoopingShakeInfo
{
	class APlayerController*                           AssociatedController;                                     // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Scale;                                                    // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UObject*                                     ContextObject;                                            // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FTimerHandle                                TimerHandle;                                              // 0x0018(0x0008) (Transient)
	struct FVector                                     FeedbackLocation;                                         // 0x0020(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x002C(0x000C) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.FeedbackTableRowHandle
// 0x0000 (0x0010 - 0x0010)
struct FFeedbackTableRowHandle : public FDataTableRowHandle
{

};

// ScriptStruct GbxGameSystemCore.GameplayTagToValueMap
// 0x0040
struct FGameplayTagToValueMap
{
	struct FGameplayTag                                Tag;                                                      // 0x0000(0x0008) (Edit)
	struct FAttributeInitializationData                ValueIfContextHasTag;                                     // 0x0008(0x0038) (Edit)
};

// ScriptStruct GbxGameSystemCore.GameResourcePool
// 0x00F8
struct FGameResourcePool
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UGameResourcePoolData*                       ResourcePoolData;                                         // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGbxAttributeFloat                          MinValue;                                                 // 0x0010(0x000C) (Transient)
	struct FGbxAttributeFloat                          MaxValue;                                                 // 0x001C(0x000C) (Transient)
	struct FGbxAttributeFloat                          PercentOfMaxValueReserved;                                // 0x0028(0x000C) (Transient)
	struct FGbxAttributeFloat                          ConsumptionRate;                                          // 0x0034(0x000C) (Transient)
	struct FGbxAttributeFloat                          ActiveRegenerationRate;                                   // 0x0040(0x000C) (Transient)
	struct FGbxAttributeFloat                          OnIdleRegenerationRate;                                   // 0x004C(0x000C) (Transient)
	struct FGbxAttributeFloat                          OnIdleRegenerationDelay;                                  // 0x0058(0x000C) (Transient)
	struct FGbxAttributeFloat                          OnDepletedIdleRegenerationDelay;                          // 0x0064(0x000C) (Transient)
	struct FGbxAttributeFloat                          PassiveRegenerationRate;                                  // 0x0070(0x000C) (Transient)
	struct FGbxAttributeFloat                          PassivePercentRegenerationRate;                           // 0x007C(0x000C) (Transient)
	struct FGbxAttributeFloat                          PassiveMissingPercentRegenerationRate;                    // 0x0088(0x000C) (Transient)
	struct FGbxAttributeInteger                        RegenerationDisabled;                                     // 0x0094(0x000C) (Transient)
	float                                              CurrentValue;                                             // 0x00A0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastTotalRegenerationRateValue;                           // 0x00A4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastTotalPercentRegenerationRateValue;                    // 0x00A8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastEffectiveMaxValue;                                    // 0x00AC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGbxAttributeFloat                          PostAddedRegenerationRate;                                // 0x00B0(0x000C) (Transient)
	struct FGbxAttributeFloat                          PostAddedPercentRegenerationRate;                         // 0x00BC(0x000C) (Transient)
	unsigned char                                      UnknownData01[0x30];                                      // 0x00C8(0x0030) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.GameResourcePoolNet
// 0x0010
struct FGameResourcePoolNet
{
	class UGameResourcePoolManagerComponent*           Manager;                                                  // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.GameResourceUserEvent
// 0x0098
struct FGameResourceUserEvent
{
	class UGameResourceData*                           ResourceData;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnResourceNowDepleted;                                    // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnResourceNowNotDepleted;                                 // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnResourceNowFilled;                                      // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnResourceNowNotFilled;                                   // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnResourceNowRegenerating;                                // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnResourceNowNotRegenerating;                             // 0x0058(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnResourceNowDepleting;                                   // 0x0068(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnResourceNowNotDepleting;                                // 0x0078(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnResourceNowIdle;                                        // 0x0088(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, InstancedReference, BlueprintAssignable)
};

// ScriptStruct GbxGameSystemCore.GameStat
// 0x0010
struct FGameStat
{
	class UGameStatData*                               GameStat;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                StatValue;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ConditionActionPair
// 0x0010
struct FConditionActionPair
{
	class UGbxCondition*                               Condition;                                                // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      ActionClass;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.DirectionActionData
// 0x0010
struct FDirectionActionData
{
	struct FNumericRange                               AngleRange;                                               // 0x0000(0x0008) (Edit)
	class UClass*                                      ActionClass;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.AttachedObjectFollow
// 0x0018
struct FAttachedObjectFollow
{
	struct FName                                       ObjectBoneName;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ObjectHoldBoneName;                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ObjectHoldBodyName;                                       // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.RandomActionPair
// 0x0010
struct FRandomActionPair
{
	class UClass*                                      ActionClass;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.StretchBonesSettings
// 0x0030
struct FStretchBonesSettings
{
	bool                                               bUniformStretch;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FGbxBlackboardKeySelector                   TargetKey;                                                // 0x0008(0x0010) (Edit, DisableEditOnInstance)
	struct FVector                                     TargetOffset;                                             // 0x0018(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	EStretchBonesActorTrackingStyle                    ActorTrackingStyle;                                       // 0x0024(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTraceToGround;                                           // 0x0025(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	float                                              TraceToGroundDistance;                                    // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxPredictionDistance;                                    // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.GbxActionRegister
// 0x0038
struct FGbxActionRegister
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	EActionRegisterType                                Type;                                                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IntValue;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UObject*                                     ObjectValue;                                              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NameValue;                                                // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     VecValue;                                                 // 0x0028(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.GbxActionSlot
// 0x0018
struct FGbxActionSlot
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.DataActionPair_Base
// 0x0008
struct FDataActionPair_Base
{
	class UClass*                                      ActionValue;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.DataActionPair
// 0x0008 (0x0010 - 0x0008)
struct FDataActionPair : public FDataActionPair_Base
{
	struct FGameplayTag                                ActionKey;                                                // 0x0008(0x0008) (Edit)
};

// ScriptStruct GbxGameSystemCore.DataActionPair_Spawn
// 0x0008 (0x0010 - 0x0008)
struct FDataActionPair_Spawn : public FDataActionPair_Base
{
	struct FGameplayTag                                ActionKey;                                                // 0x0008(0x0008) (Edit)
};

// ScriptStruct GbxGameSystemCore.DataActionPair_SpawnMesh
// 0x0008 (0x0010 - 0x0008)
struct FDataActionPair_SpawnMesh : public FDataActionPair_Base
{
	struct FGameplayTag                                ActionKey;                                                // 0x0008(0x0008) (Edit)
};

// ScriptStruct GbxGameSystemCore.DataActionPair_SmartObject
// 0x0010 (0x0018 - 0x0008)
struct FDataActionPair_SmartObject : public FDataActionPair_Base
{
	struct FGameplayTag                                ActionKey;                                                // 0x0008(0x0008) (Edit)
	class UGbxBoneSet*                                 BoneSetFilter;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.ActionStateNet
// 0x0108
struct FActionStateNet
{
	unsigned char                                      UnknownData00[0x108];                                     // 0x0000(0x0108) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ForwardDynamicsNodeProfile
// 0x0078
struct FForwardDynamicsNodeProfile
{
	class UPhysicalAnimationProfileAsset*              ForwardDynamicsProfile;                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EForwardDynamicsActivation                         ForwardDynamicsActivation;                                // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0008(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FName                                       PhysicsAssetStrengthDefinitionProfileName;                // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TargetSimulationFrequency;                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxSubstepCount;                                          // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxTranslationDistanceUntilReset;                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LinearJointDivergentTolerence;                            // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WorldSpaceVelocityBlend;                                  // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WorldSpaceAngularVelocityBlend;                           // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBypassSkelMeshSimulatePhysOption;                        // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStripAnimationFromNonSimulationRelevantBones;            // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
	class UPhysicsAsset*                               OverridePhysicsAsset;                                     // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OverrideWorldGravity;                                     // 0x0040(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     ExternalForce;                                            // 0x004C(0x000C) (Edit, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     OverlapChannel;                                           // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableWorldGeometry;                                     // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x005A(0x0002) MISSED OFFSET
	ESimulationSpace                                   SimulationSpace;                                          // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x005A(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bOverrideWorldGravity;                                    // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	float                                              CachedBoundsScale;                                        // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTransferBoneVelocities;                                  // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFreezeIncomingPoseOnStart;                               // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x006A(0x0002) MISSED OFFSET
	int                                                LODThreshold;                                             // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LODInterpolationSpeed;                                    // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.AnimStateGroup
// 0x0018
struct FAnimStateGroup
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               States;                                                   // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct GbxGameSystemCore.GbxAttributeDelegateBindingHandle
// 0x0030
struct FGbxAttributeDelegateBindingHandle
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.GbxAttributeModifierHandle
// 0x0010
struct FGbxAttributeModifierHandle
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.AttributeEffectData
// 0x0048
struct FAttributeEffectData
{
	class UGbxAttributeData*                           AttributeToModify;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EGbxAttributeModifierType                          ModifierType;                                             // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FAttributeInitializationData                ModifierValue;                                            // 0x0010(0x0038) (Edit)
};

// ScriptStruct GbxGameSystemCore.AttributeBaseValueData
// 0x0040
struct FAttributeBaseValueData
{
	class UGbxAttributeData*                           AttributeToSetBaseValueOf;                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAttributeInitializationData                BaseValue;                                                // 0x0008(0x0038) (Edit)
};

// ScriptStruct GbxGameSystemCore.PropertyToAttributeMapping
// 0x0030
struct FPropertyToAttributeMapping
{
	struct FName                                       PropertyName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	struct FGuid                                       PropertyGuid;                                             // 0x0008(0x0010) (Edit, DisableEditOnInstance, EditConst, IsPlainOldData)
	struct FSoftObjectPath                             AttributeDataReference;                                   // 0x0018(0x0018) (Edit, DisableEditOnInstance, EditConst)
};

// ScriptStruct GbxGameSystemCore.TargetActorInfo
// 0x0390
struct FTargetActorInfo
{
	TWeakObjectPtr<class AActor>                       Target;                                                   // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class USceneComponent>              Proxy;                                                    // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UTargetableComponent>         TargetableComponent;                                      // 0x0010(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UTargetingComponent>          OwnerTargetingComponent;                                  // 0x0018(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x35C];                                     // 0x0020(0x035C) MISSED OFFSET
	float                                              TargetScore;                                              // 0x037C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETeamAttitude>                         AttitudeTowardTarget;                                     // 0x0380(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETeamAttitude>                         AttitudeFromTarget;                                       // 0x0381(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0382(0x0002) MISSED OFFSET
	int                                                TargetListIndex;                                          // 0x0384(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0388(0x0008) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.BoneModifyInfo
// 0x0030
struct FBoneModifyInfo
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Translation;                                              // 0x0008(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0014(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0020(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.BoneModifyState
// 0x0058
struct FBoneModifyState
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EGbxBoneModifyProfile_PoseMode                     PoseMode;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStartActive;                                             // 0x0009(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct FAlphaBlend                                 Blend;                                                    // 0x0010(0x0038) (Edit, DisableEditOnInstance)
	TArray<struct FBoneModifyInfo>                     Bones;                                                    // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct GbxGameSystemCore.GbxFlagEval
// 0x0048
struct FGbxFlagEval
{
	class UGbxFlagData*                                FlagData;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EGbxFlagEval                                       EvalType;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FAttributeInitializationData                TimeSeconds;                                              // 0x0010(0x0038) (Edit)
};

// ScriptStruct GbxGameSystemCore.GbxBlueprintlegateBinding
// 0x0118
struct FGbxBlueprintlegateBinding
{
	class FString                                      SubobjectPath;                                            // 0x0000(0x0010) (ZeroConstructor)
	struct FParsedProperty                             ParsedDelegateOwnerPath;                                  // 0x0010(0x0080)
	struct FParsedProperty                             ParsedDelegatePath;                                       // 0x0090(0x0080)
	struct FName                                       FunctionNameToBind;                                       // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.GbxFlag
// 0x000C
struct FGbxFlag
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.FlagPropertyTestStruct
// 0x000C
struct FFlagPropertyTestStruct
{
	struct FGbxFlag                                    TestFlag;                                                 // 0x0000(0x000C)
};

// ScriptStruct GbxGameSystemCore.SurfaceTypeInfo
// 0x0010
struct FSurfaceTypeInfo
{
	EDamageSurfaceType                                 DamageSurfaceType;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UWwiseSwitch*                                AudioMaterialSwitch;                                      // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.PhysicalMaterialImpactPair
// 0x0010
struct FPhysicalMaterialImpactPair
{
	class UPhysicalMaterial*                           MaterialA;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           MaterialB;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.RigidBodyImpactSettings
// 0x00B0
struct FRigidBodyImpactSettings
{
	TMap<struct FPhysicalMaterialImpactPair, class UImpactData*> RigidBodyImpactData;                                      // 0x0000(0x0050) (Edit, ZeroConstructor)
	TMap<class UPhysicalMaterial*, class UImpactData*> DefaultRigidBodyImpactData;                               // 0x0050(0x0050) (Edit, ZeroConstructor)
	class UWwiseRtpc*                                  ImpactSpeedAudioParameter;                                // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseRtpc*                                  ImpactMassAudioParameter;                                 // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.DestructionForceSmoothing
// 0x000C
struct FDestructionForceSmoothing
{
	float                                              MaxResultantVelocity;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NormalizationFactor;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GlobalScale;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.GbxQueryOriginOptions
// 0x0108
struct FGbxQueryOriginOptions
{
	struct FGbxParam                                   UpdatePeriod;                                             // 0x0000(0x0080) (Edit)
	struct FGbxParam                                   UpdateCondition;                                          // 0x0080(0x0080) (Edit)
	bool                                               bInvertCondition;                                         // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.GbxQueryOptions
// 0x0238
struct FGbxQueryOptions
{
	EQueryOwnerLocationUse                             OwnerLocationUse;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ReplaceLastResultThreshold;                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReplaceLastResult;                                       // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bKeepValidValues;                                         // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              MinUpdatePeriod;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PauseUpdatesWhenNotPingedForTime;                         // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateAlways;                                            // 0x0014(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	ETimedUpdateBehavior                               WhenToDoFullQueryUpdates;                                 // 0x0015(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanUpdateWhileActive;                                    // 0x0016(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0017(0x0001) MISSED OFFSET
	struct FGbxParam                                   OwnerMoveThreshold;                                       // 0x0018(0x0080) (Edit)
	bool                                               bUpdateWhenOwnerMoves;                                    // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	struct FGbxParam                                   PrimaryContextMoveThreshold;                              // 0x00A0(0x0080) (Edit)
	bool                                               bUpdateWhenPrimaryContextMoves;                           // 0x0120(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	struct FGbxQueryOriginOptions                      Origin;                                                   // 0x0128(0x0108) (Edit)
	bool                                               bUpdateOrigin;                                            // 0x0230(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyUpdateWhenCanPath;                                   // 0x0231(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateWhenHotSpotsListChanges;                           // 0x0232(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x0233(0x0005) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.GbxQuery
// 0x03B0
struct FGbxQuery
{
	class AActor*                                      Owner;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FEnvQueryParams                             Params;                                                   // 0x0008(0x00B8)
	struct FGbxQueryOptions                            Options;                                                  // 0x00C0(0x0238)
	class AActor*                                      PrimaryContext;                                           // 0x02F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlackboardComponent*                        BlackboardComp;                                           // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNavComponent*                               NavComp;                                                  // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0310(0x00A0) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.GbxSignificanceEventData
// 0x0018
struct FGbxSignificanceEventData
{
	bool                                               bTestVisibility;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              AlwaysSignificantDistance;                                // 0x0004(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MinScreenPercent;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DistantThreshold;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PlayerSourceInfluence;                                    // 0x0014(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.SimpleMotionState
// 0x0020
struct FSimpleMotionState
{
	ESimpleMotionType                                  MotionType;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MinSpeed;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 SpeedControlCurve;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Acceleration;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bScaleTransformByValue : 1;                               // 0x001C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bScaleSpeedByValue : 1;                                   // 0x001C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bScaleAccelerationByValue : 1;                            // 0x001C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.SimpleMotionInstanceState
// 0x0008
struct FSimpleMotionInstanceState
{
	float                                              Speed;                                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bMotionReversed : 1;                                      // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bReachedTarget : 1;                                       // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bReachedMaxSpeed : 1;                                     // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      bInTransition : 1;                                        // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.GestaltChildPartData
// 0x0010
struct FGestaltChildPartData
{
	class UGestaltPartData*                            GestaltPart;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Probability;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.GestaltPartFoleyAccessory
// 0x0018
struct FGestaltPartFoleyAccessory
{
	int                                                Priority;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UWwiseEvent*                                 WwiseEvent;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FName                                       AttachmentPoint;                                          // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.GestaltRandomPartData
// 0x0010
struct FGestaltRandomPartData
{
	class UGestaltPartData*                            GestaltPart;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.GesaltOptionalPartData
// 0x0010
struct FGesaltOptionalPartData
{
	class UGestaltPartData*                            GestaltPart;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Probability;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSuppressChildParts;                                      // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.HitReactionPair
// 0x0010
struct FHitReactionPair
{
	class UHitReactionTag*                             Tag;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Action;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.HitReactionCondition
// 0x0010
struct FHitReactionCondition
{
	class UGbxCondition*                               Condition;                                                // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	EHitReactionConditionContext                       Context;                                                  // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EHitReactionConditionContext                       OptionalContext;                                          // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.HitReactionCooldownData
// 0x0020
struct FHitReactionCooldownData
{
	class UHitReactionTag*                             Tag;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Cooldown;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UHitReactionTag*                             TagFallback;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCooldownFromStartTime;                                   // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.HitReactionMapItem
// 0x0010
struct FHitReactionMapItem
{
	class UHitReactionTag*                             FromTag;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UHitReactionTag*                             ToTag;                                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.InspectionInfo
// 0x0020
struct FInspectionInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ImpactResponseInfo
// 0x0150
struct FImpactResponseInfo
{
	class UPhysicalMaterial*                           PhysicalMaterial;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FImpactResponseEffect                       Response;                                                 // 0x0010(0x0140) (Edit)
};

// ScriptStruct GbxGameSystemCore.ImpactTriggerInfo
// 0x0008
struct FImpactTriggerInfo
{
	float                                              RigidBodyRefireDelay;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RigidBodyMinimumVelocity;                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.ImpactFXManagerTrackingData
// 0x0010
struct FImpactFXManagerTrackingData
{
	class USceneComponent*                             Component;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPhysicalMaterial*                           PhysicalMaterial;                                         // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.MantleActionData
// 0x0110
struct FMantleActionData
{
	EMantleType                                        Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UClass*                                      Animation;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HeightMinimum;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AlignTime;                                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          HorizontalCurve;                                          // 0x0018(0x0078) (Edit)
	struct FRuntimeFloatCurve                          VerticalCurve;                                            // 0x0090(0x0078) (Edit)
	float                                              PercentThroughAnimationToFinishMantle;                    // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAlignRotation : 1;                                       // 0x010C(0x0001) (Edit)
	unsigned char                                      bMustLookAt : 1;                                          // 0x010C(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x010D(0x0003) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ModifierMathAttributeValueResolverStackEntry
// 0x0040
struct FModifierMathAttributeValueResolverStackEntry
{
	EGbxAttributeModifierType                          ModifierType;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FAttributeInitializationData                ModifierValue;                                            // 0x0008(0x0038) (Edit)
};

// ScriptStruct GbxGameSystemCore.OrbitOscillationInfo
// 0x0080
struct FOrbitOscillationInfo
{
	struct FRuntimeFloatCurve                          Cycle;                                                    // 0x0000(0x0078) (Edit)
	float                                              OverrideDuration;                                         // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CurrentTime;                                              // 0x007C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.PawnAttachmentQueryResult
// 0x0018
struct FPawnAttachmentQueryResult
{
	class APawn*                                       Pawn;                                                     // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotName;                                                 // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AActor*                                      AttachBase;                                               // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.PhysicalAnimationBoneData
// 0x0020
struct FPhysicalAnimationBoneData
{
	struct FName                                       BodyName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeChildren;                                         // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsLocalSimulation : 1;                                   // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              OrientationStrength;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularVelocityStrength;                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PositionStrength;                                         // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VelocityStrength;                                         // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.PropertyUtilsTestStruct
// 0x0078
struct FPropertyUtilsTestStruct
{
	float                                              FloatProp;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FloatPropStaticArray[0x3];                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<float>                                      FloatPropDynamicArray;                                    // 0x0010(0x0010) (ZeroConstructor)
	class UPropertyUtilsTestContext*                   ObjectProp;                                               // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPropertyUtilsTestContext*                   ObjectPropStaticArray[0x3];                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UPropertyUtilsTestContext*>           ObjectPropDynamicArray;                                   // 0x0040(0x0010) (ZeroConstructor)
	double                                             DoubleProp;                                               // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             Int8Prop;                                                 // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UInt8Prop;                                                // 0x0059(0x0001) (ZeroConstructor, IsPlainOldData)
	int16_t                                            Int16Prop;                                                // 0x005A(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           UInt16Prop;                                               // 0x005C(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x005E(0x0002) MISSED OFFSET
	int                                                Int32Prop;                                                // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           UInt32Prop;                                               // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Int64Prop;                                                // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           UInt64Prop;                                               // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.ReplicatedEmitterTemplateOptions
// 0x0018
struct FReplicatedEmitterTemplateOptions
{
	class UParticleSystem*                             DefaultTemplate;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             CensoredTemplate;                                         // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bEligibleForCensoring;                                    // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.EmitterFloatParam
// 0x0010
struct FEmitterFloatParam
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.EmitterVectorParam
// 0x0018
struct FEmitterVectorParam
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Value;                                                    // 0x0008(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.EmitterColorParam
// 0x0010
struct FEmitterColorParam
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      Value;                                                    // 0x0008(0x0004) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.EmitterWwiseEventRTPCParam
// 0x0010
struct FEmitterWwiseEventRTPCParam
{
	class UWwiseRtpc*                                  RTPC;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.EmitterWwiseEvent
// 0x0040
struct FEmitterWwiseEvent
{
	class UObject*                                     ParamsProvider;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 Event;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FEmitterWwiseEventRTPCParam>         RTPCs;                                                    // 0x0010(0x0010) (ZeroConstructor)
	TArray<class UWwiseSwitch*>                        Switches;                                                 // 0x0020(0x0010) (ZeroConstructor)
	struct FVector                                     PlaybackLocation;                                         // 0x0030(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.SceneComponentSwitchRecord
// 0x0070
struct FSceneComponentSwitchRecord
{
	class USceneComponent*                             Component;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ParentComponent;                                          // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneBodySwitchAction*                      DetachAction;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0018(0x0058) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ScreenParticleRecord
// 0x0030
struct FScreenParticleRecord
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UParticleSystem*                             Template;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Component;                                                // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0018(0x0018) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ParticlePropertyTracker
// 0x0038
struct FParticlePropertyTracker
{
	class UParticlePropertyTrackingData*               TrackingData;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Template;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyName;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              FloatParamValue;                                          // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastUpdateTime;                                           // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Material;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MaterialPropertyName;                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.StanceStack
// 0x0050
struct FStanceStack
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	class AActor*                                      Owner;                                                    // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	EStanceStackLayer                                  Top;                                                      // 0x0018(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	class UStanceDataProvider*                         Stack[0x4];                                               // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	EStanceStackLayer                                  LayerCurr;                                                // 0x0040(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	class UStanceData*                                 StanceCurr;                                               // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.StatusEffectStackingStrategyData_DurationRefundData
// 0x0008
struct FStatusEffectStackingStrategyData_DurationRefundData
{
	bool                                               bApplyReplacementRefund;                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              RefundPercent;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.TargetLocationBoundsSettings
// 0x000C
struct FTargetLocationBoundsSettings
{
	float                                              BoundsRadius;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BoundsHalfHeight;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseBoundsHalfHeight;                                     // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.TargetLocationSettings
// 0x008C (0x0098 - 0x000C)
struct FTargetLocationSettings : public FTargetLocationBoundsSettings
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FGbxParam                                   Enabled;                                                  // 0x0010(0x0080) (Edit, BlueprintVisible)
	struct FName                                       Socket;                                                   // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.OverrideMeleeSocket
// 0x0018
struct FOverrideMeleeSocket
{
	class UGbxCondition*                               OverrideCondition;                                        // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FName>                               OverrideSockets;                                          // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GbxGameSystemCore.TeamAttitudeSetEntry
// 0x0010
struct FTeamAttitudeSetEntry
{
	class UTeam*                                       OtherTeam;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETeamAttitude>                         Attitude;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.TerritoryData
// 0x0020
struct FTerritoryData
{
	bool                                               bEverywhere;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Radius;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<class AVolume*>                             Volumes;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct GbxGameSystemCore.UseEvent
// 0x0018
struct FUseEvent
{
	class AController*                                 UserController;                                           // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         UsedComponent;                                            // 0x0008(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	EUsabilityType                                     UseType;                                                  // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWasHeld;                                                 // 0x0011(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.CausedDamageDetails
// 0x0060
struct FCausedDamageDetails
{
	bool                                               bWasCrit;                                                 // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     HitLocation;                                              // 0x0004(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     HitDirection;                                             // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class AActor*                                      DamageCauser;                                             // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // 0x0028(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHitRegionData*                              HitRegion;                                                // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FHealthTypeDamageSummary>            DamagePerHealthType;                                      // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FVector                                     RadiusDamageOrigin;                                       // 0x0048(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              DamageRadius;                                             // 0x0054(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDamageOverTime;                                        // 0x0058(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.CausedDeathDetails
// 0x0068
struct FCausedDeathDetails
{
	class UDamageSource*                               DamageSource;                                             // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class APawn*                                       DamageInstigator;                                         // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              OverkillDamage;                                           // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWasCrit;                                                 // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWasAwareOfKiller;                                        // 0x0029(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWasFullyHealthy;                                         // 0x002A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x002B(0x0001) MISSED OFFSET
	struct FVector                                     HitLocation;                                              // 0x002C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     HitDirection;                                             // 0x0038(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     RadiusDamageOrigin;                                       // 0x0044(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              DamageRadius;                                             // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<struct FHealthTypeDamageSummary>            DamagePerHealthType;                                      // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct GbxGameSystemCore.CausedHealingDetails
// 0x0028
struct FCausedHealingDetails
{
	class AActor*                                      HealTarget;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HealInstigator;                                           // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Healing;                                                  // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UDamageSource*                               DamageSource;                                             // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.HitFriendlyEventDetails
// 0x0020
struct FHitFriendlyEventDetails
{
	class AActor*                                      HitTarget;                                                // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitInstigator;                                            // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.HitByFriendlyEventDetails
// 0x0018
struct FHitByFriendlyEventDetails
{
	class AActor*                                      DamageInstigator;                                         // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.BulletPerceptionProperties
// 0x0008
struct FBulletPerceptionProperties
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Strength;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.ActorPartList
// 0x0018
struct FActorPartList
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<class UActorPartData*>                      Parts;                                                    // 0x0008(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct GbxGameSystemCore.ActorPartSelectionOverrideData
// 0x0010
struct FActorPartSelectionOverrideData
{
	TArray<struct FActorPartList>                      PreferredParts;                                           // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct GbxGameSystemCore.MinimalStaticRigidBodyState
// 0x001C
struct FMinimalStaticRigidBodyState
{
	uint32_t                                           BoneIndex;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      Position;                                                 // 0x0004(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x0010(0x000C) (IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.StaticRagdollReplicationData
// 0x0010
struct FStaticRagdollReplicationData
{
	TArray<struct FMinimalStaticRigidBodyState>        Bodies;                                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxGameSystemCore.AimControlParameters
// 0x0078
struct FAimControlParameters
{
	class UAimControlData*                             AimControlData;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0008(0x0070) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.CachedUIStatData
// 0x0040
struct FCachedUIStatData
{
	class UUIStatData*                                 Stat;                                                     // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FText                                       Description;                                              // 0x0008(0x0028) (Transient)
	struct FText                                       ValueText;                                                // 0x0020(0x0028) (Transient)
	float                                              ComparisonValue;                                          // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	EUIStatComparisonResult                            ComparisonResult;                                         // 0x003C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.CachedUIStatSectionData
// 0x0018
struct FCachedUIStatSectionData
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FCachedUIStatData>                   Stats;                                                    // 0x0008(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct GbxGameSystemCore.CachedUIStatCollectionData
// 0x0010
struct FCachedUIStatCollectionData
{
	TArray<struct FCachedUIStatSectionData>            Sections;                                                 // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct GbxGameSystemCore.UserStatesReplicationData
// 0x0008
struct FUserStatesReplicationData
{
	bool                                               bInitialized;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	uint32_t                                           PackedStateBits;                                          // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.UserStateSetRuntimeData
// 0x0028
struct FUserStateSetRuntimeData
{
	class UByteProperty*                               Property;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ActiveState;                                              // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<class UGbxCondition*>                       EnableConditions;                                         // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.UserStatesRuntimeData
// 0x0010
struct FUserStatesRuntimeData
{
	TArray<struct FUserStateSetRuntimeData>            States;                                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxGameSystemCore.CompiledUserSet
// 0x0048
struct FCompiledUserSet
{
	struct FMemberReference                            StateProperty;                                            // 0x0000(0x0038)
	TArray<struct FName>                               EnableConditionVariableNames;                             // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxGameSystemCore.CompiledUserStatesData
// 0x0010
struct FCompiledUserStatesData
{
	TArray<struct FCompiledUserSet>                    CompiledSets;                                             // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxGameSystemCore.GbxUIFormattedText
// 0x0068
struct FGbxUIFormattedText
{
	struct FText                                       FormatText;                                               // 0x0000(0x0028) (Edit)
	TMap<class FString, TScriptInterface<class UGbxUIFormattableParameter>> FormatParams;                                             // 0x0018(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct GbxGameSystemCore.GbxAnimTableRow
// 0x0018 (0x0020 - 0x0008)
struct FGbxAnimTableRow : public FTableRowBase
{
	struct FAnimActionDef                              Animation;                                                // 0x0008(0x0018) (Edit)
};

// ScriptStruct GbxGameSystemCore.ActionState_SimpleAnim
// 0x03A0 (0x0468 - 0x00C8)
struct FActionState_SimpleAnim : public FActionState_Base
{
	unsigned char                                      UnknownData00[0x3A0];                                     // 0x00C8(0x03A0) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ActionState_Anim
// 0x0090 (0x04F8 - 0x0468)
struct FActionState_Anim : public FActionState_SimpleAnim
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0468(0x0090) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.GbxAnimInstanceProxy
// 0x0010 (0x06D0 - 0x06C0)
struct FGbxAnimInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x06C0(0x0010) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.GbxCharacterAnimInstanceProxy
// 0x0000 (0x06D0 - 0x06D0)
struct FGbxCharacterAnimInstanceProxy : public FGbxAnimInstanceProxy
{

};

// ScriptStruct GbxGameSystemCore.ActionState_CoordinatedEffect
// 0x00F8 (0x01C0 - 0x00C8)
struct FActionState_CoordinatedEffect : public FActionState_Base
{
	unsigned char                                      UnknownData00[0xF8];                                      // 0x00C8(0x00F8) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ActionState_Gib
// 0x0008 (0x00D0 - 0x00C8)
struct FActionState_Gib : public FActionState_Base
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ActionState_Loop
// 0x00D0 (0x0538 - 0x0468)
struct FActionState_Loop : public FActionState_SimpleAnim
{
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0468(0x00D0) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ActionState_PhysicalAnim
// 0x0018 (0x0510 - 0x04F8)
struct FActionState_PhysicalAnim : public FActionState_Anim
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x04F8(0x0018) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ActionState_PhysicalDeath
// 0x0028 (0x0538 - 0x0510)
struct FActionState_PhysicalDeath : public FActionState_PhysicalAnim
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0510(0x0028) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.HealthTypeBalanceData
// 0x0000 (0x0008 - 0x0008)
struct FHealthTypeBalanceData : public FTableRowBase
{

};

// ScriptStruct GbxGameSystemCore.AIChargeState
// 0x0018
struct FAIChargeState
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.AimAssistSmoothingProperties
// 0x0020
struct FAimAssistSmoothingProperties
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class AActor*                                      LastTarget;                                               // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTeam*                                       LastTargetTeam;                                           // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.PredictionSource
// 0x000C
struct FPredictionSource
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.GbxAISightEvent
// 0x0018
struct FGbxAISightEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class AActor*                                      SeenActor;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Observer;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.AsyncExplosionImpactRequestEntry
// 0x00A0
struct FAsyncExplosionImpactRequestEntry
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.GameStageGradeWeightData
// 0x0070
struct FGameStageGradeWeightData
{
	struct FAttributeInitializationData                MinGameStage;                                             // 0x0000(0x0038) (Edit)
	struct FAttributeInitializationData                MaxGameStage;                                             // 0x0038(0x0038) (Edit)
};

// ScriptStruct GbxGameSystemCore.ChallengeDataType
// 0x0010
struct FChallengeDataType
{
	class UEnum*                                       ChallengeDataTypeEnum;                                    // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      ChallengeDataType;                                        // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.DamageScaleConditionalData
// 0x0050
struct FDamageScaleConditionalData
{
	bool                                               bEvaluateUsingAttacker;                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UGbxCondition*                               Condition;                                                // 0x0008(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bAddValueToDamage;                                        // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FAttributeInitializationData                DamageScale;                                              // 0x0018(0x0038) (Edit)
};

// ScriptStruct GbxGameSystemCore.HitRegionDamagePreview
// 0x0018
struct FHitRegionDamagePreview
{
	struct FHitRegionInfo                              HitRegion;                                                // 0x0000(0x0010)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.DynamicPhysicalAnimationTickFunction
// 0x0030 (0x0080 - 0x0050)
struct FDynamicPhysicalAnimationTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0050(0x0030) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ExplosionImpactOverride
// 0x0010
struct FExplosionImpactOverride
{
	class UMaterialInterface*                          DecalOverride;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.HapticFeedbackData
// 0x0010
struct FHapticFeedbackData
{
	class UHapticFeedbackEffect_Curve*                 HapticFeedbackEffect;                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EControllerHand                                    Hand;                                                     // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.FeedbackAssociationRow
// 0x0008 (0x0010 - 0x0008)
struct FFeedbackAssociationRow : public FTableRowBase
{
	class UFeedbackData*                               Feedback;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.QueuedGameStatEvent
// 0x0018
struct FQueuedGameStatEvent
{
	TWeakObjectPtr<class AActor>                       StatContext;                                              // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UGameStatData>                GameStat;                                                 // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ActionState_AICharge
// 0x0020 (0x0488 - 0x0468)
struct FActionState_AICharge : public FActionState_SimpleAnim
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0468(0x0020) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ExtraAnimationSettings
// 0x0030
struct FExtraAnimationSettings
{
	struct FName                                       SkeletalMeshComponentName;                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAnimActionDef                              AnimDef;                                                  // 0x0008(0x0018) (Edit)
	struct FName                                       AnimSlotOverride;                                         // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHasAnimSlotOverride;                                     // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ActionState_BlueprintBase
// 0x0000 (0x00C8 - 0x00C8)
struct FActionState_BlueprintBase : public FActionState_Base
{

};

// ScriptStruct GbxGameSystemCore.CoordinatedAppliedMesh
// 0x0010
struct FCoordinatedAppliedMesh
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ActionState_DropshipSpawn
// 0x0068 (0x04D0 - 0x0468)
struct FActionState_DropshipSpawn : public FActionState_SimpleAnim
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0468(0x0068) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ActionState_Launch
// 0x0018 (0x0480 - 0x0468)
struct FActionState_Launch : public FActionState_SimpleAnim
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0468(0x0018) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ActionState_Ragdoll
// 0x0148 (0x05B0 - 0x0468)
struct FActionState_Ragdoll : public FActionState_SimpleAnim
{
	unsigned char                                      UnknownData00[0x148];                                     // 0x0468(0x0148) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.AttachedObjectCache
// 0x0050
struct FAttachedObjectCache
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.MotionMatchedAnimationRow
// 0x0060 (0x0080 - 0x0020)
struct FMotionMatchedAnimationRow : public FGbxAnimTableRow
{
	struct FVector                                     Forward;                                                  // 0x0020(0x000C) (IsPlainOldData)
	struct FVector                                     Up;                                                       // 0x002C(0x000C) (IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0038(0x000C) (IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // 0x0044(0x000C) (IsPlainOldData)
	struct FVector                                     OverrideForward;                                          // 0x0050(0x000C) (Edit, IsPlainOldData)
	bool                                               bOverrideForward;                                         // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	struct FVector                                     OverrideUp;                                               // 0x0060(0x000C) (Edit, IsPlainOldData)
	bool                                               bOverrideUp;                                              // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	float                                              RootBoneToRootBodyOffset;                                 // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 OffsetCalculationAxis;                                    // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOffsetCalculationAxisIsNegative;                         // 0x0075(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0076(0x0002) MISSED OFFSET
	float                                              SampleTime;                                               // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PoseDriverStrength;                                       // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.ActionState_StretchBones
// 0x0000 (0x0468 - 0x0468)
struct FActionState_StretchBones : public FActionState_SimpleAnim
{

};

// ScriptStruct GbxGameSystemCore.ExampleStruct
// 0x0008
struct FExampleStruct
{
	struct FGameplayTag                                ActionKey;                                                // 0x0000(0x0008) (Edit)
};

// ScriptStruct GbxGameSystemCore.GbxAnimNode_ApplyBoneModifyProfile
// 0x0040 (0x0180 - 0x0140)
struct FGbxAnimNode_ApplyBoneModifyProfile : public FAnimNode_SkeletalControlBase
{
	class UGbxBoneModifyProfile*                       Config;                                                   // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0148(0x0038) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.GlobalBMPCachedTransform
// 0x0020
struct FGlobalBMPCachedTransform
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.GbxAnimNode_CachedPoseBlend
// 0x0060 (0x01A0 - 0x0140)
struct FGbxAnimNode_CachedPoseBlend : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0140(0x0060) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.GbxAnimNode_ForwardDynamics
// 0x0170 (0x0730 - 0x05C0)
struct FGbxAnimNode_ForwardDynamics : public FAnimNode_RigidBody
{
	class UPhysicalAnimationProfileAsset*              ForwardDynamicsProfile;                                   // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EForwardDynamicsActivation                         ForwardDynamicsActivation;                                // 0x05C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05C8(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x05CC(0x0004) MISSED OFFSET
	struct FName                                       PhysicsAssetStrengthDefinitionProfileName;                // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TargetSimulationFrequency;                                // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxSubstepCount;                                          // 0x05DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTranslationDistanceUntilReset;                         // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WorldSpaceVelocityBlend;                                  // 0x05E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WorldSpaceAngularVelocityBlend;                           // 0x05E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JointAnchorPoseAlpha;                                     // 0x05EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LinearJointDivergentTolerence;                            // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBypassSkelMeshSimulatePhysOption;                        // 0x05F4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bStripAnimationFromNonSimulationRelevantBones;            // 0x05F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x13A];                                     // 0x05F6(0x013A) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.GbxRefPoseBoneConstraint
// 0x0020
struct FGbxRefPoseBoneConstraint
{
	struct FBoneReference                              Bone;                                                     // 0x0000(0x0018) (Edit)
	float                                              Weight;                                                   // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.GbxAnimNode_RefPoseConstraints
// 0x0020 (0x0160 - 0x0140)
struct FGbxAnimNode_RefPoseConstraints : public FAnimNode_SkeletalControlBase
{
	TArray<struct FGbxRefPoseBoneConstraint>           Constraints;                                              // 0x0140(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0150(0x0010) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.GbxAnimNode_SimpleMotionBoneControl
// 0x0208 (0x0348 - 0x0140)
struct FGbxAnimNode_SimpleMotionBoneControl : public FAnimNode_SkeletalControlBase
{
	float                                              ControlValue;                                             // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsActive;                                                // 0x0144(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoActivate;                                            // 0x0145(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPaused;                                                  // 0x0146(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bActivateAfterRecovery;                                   // 0x0147(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBoneReference                              BoneToModify;                                             // 0x0148(0x0018) (Edit)
	float                                              IdleSpeedControlValue;                                    // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ActiveSpeedControlValue;                                  // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RecoverySpeedControlValue;                                // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 TranslationMode;                                          // 0x016C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     TranslationSpace;                                         // 0x016D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x016E(0x0002) MISSED OFFSET
	struct FVector                                     IdleTranslation;                                          // 0x0170(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     ActiveTranslation;                                        // 0x017C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FSimpleMotionState                          IdleTranslationState;                                     // 0x0188(0x0020) (Edit, IsPlainOldData)
	struct FSimpleMotionState                          ActiveTranslationState;                                   // 0x01A8(0x0020) (Edit, IsPlainOldData)
	struct FSimpleMotionState                          RecoveryTranslationState;                                 // 0x01C8(0x0020) (Edit, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 RotationMode;                                             // 0x01E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     RotationSpace;                                            // 0x01E9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x01EA(0x0002) MISSED OFFSET
	struct FRotator                                    IdleRotation;                                             // 0x01EC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    ActiveRotation;                                           // 0x01F8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0204(0x0004) MISSED OFFSET
	struct FSimpleMotionState                          IdleRotationState;                                        // 0x0208(0x0020) (Edit, IsPlainOldData)
	struct FSimpleMotionState                          ActiveRotationState;                                      // 0x0228(0x0020) (Edit, IsPlainOldData)
	struct FSimpleMotionState                          RecoveryRotationState;                                    // 0x0248(0x0020) (Edit, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 ScaleMode;                                                // 0x0268(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     ScaleSpace;                                               // 0x0269(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x026A(0x0002) MISSED OFFSET
	struct FVector                                     IdleScale;                                                // 0x026C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     ActiveScale;                                              // 0x0278(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0284(0x0004) MISSED OFFSET
	struct FSimpleMotionState                          IdleScaleState;                                           // 0x0288(0x0020) (Edit, IsPlainOldData)
	struct FSimpleMotionState                          ActiveScaleState;                                         // 0x02A8(0x0020) (Edit, IsPlainOldData)
	struct FSimpleMotionState                          RecoveryScaleState;                                       // 0x02C8(0x0020) (Edit, IsPlainOldData)
	float                                              ControlImpulseSpeed;                                      // 0x02E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ControlImpulseMaxValue;                                   // 0x02EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ControlImpulseDecayDelay;                                 // 0x02F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ControlImpulseDecaySpeed;                                 // 0x02F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x50];                                      // 0x02F8(0x0050) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.GbxAnimNode_StretchBones
// 0x0190 (0x02D0 - 0x0140)
struct FGbxAnimNode_StretchBones : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              StartBone;                                                // 0x0140(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              EndBone;                                                  // 0x0158(0x0018) (Edit, BlueprintVisible)
	bool                                               bUniformStretch;                                          // 0x0170(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0171(0x0003) MISSED OFFSET
	float                                              AnimatedTargetDistance;                                   // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EndAnimatedTargetDistance;                                // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetOffset;                                             // 0x017C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0188(0x0008) MISSED OFFSET
	bool                                               bUsingStretchDistance;                                    // 0x0190(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0191(0x0003) MISSED OFFSET
	float                                              StretchDistance;                                          // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceToGround;                                           // 0x0198(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0199(0x0003) MISSED OFFSET
	float                                              TraceToGroundDistance;                                    // 0x019C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EStretchBonesMarkerMode                            MarkerMode;                                               // 0x01A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x01A1(0x0007) MISSED OFFSET
	struct FBoneReference                              BoneToModify;                                             // 0x01A8(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LookAtBone;                                               // 0x01C0(0x0018) (Edit, BlueprintVisible)
	struct FName                                       LookAtSocket;                                             // 0x01D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LookAtLocation;                                           // 0x01E0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FAXIS                                       LookAt_Axis;                                              // 0x01EC(0x0010) (Edit, BlueprintVisible)
	struct FAXIS                                       EndLookAt_Axis;                                           // 0x01FC(0x0010) (Edit, BlueprintVisible)
	bool                                               bUseLookUpAxis;                                           // 0x020C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x020D(0x0003) MISSED OFFSET
	struct FAXIS                                       LookUp_Axis;                                              // 0x0210(0x0010) (Edit, BlueprintVisible)
	float                                              LookAtClamp;                                              // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInterpolationBlend>                   InterpolationType;                                        // 0x0224(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0225(0x0003) MISSED OFFSET
	float                                              InterpolationTime;                                        // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTriggerThreashold;                           // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0xA0];                                      // 0x0230(0x00A0) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.BakedMachineInfo
// 0x0020
struct FBakedMachineInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.BoneModifyTransition
// 0x0070
struct FBoneModifyTransition
{
	struct FBoneReference                              BoneRef;                                                  // 0x0000(0x0018)
	EBoneModifyTransition_TransformType                Type;                                                     // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FAlphaBlend                                 Blend;                                                    // 0x0020(0x0038)
	struct FVector                                     Base;                                                     // 0x0058(0x000C) (IsPlainOldData)
	struct FVector                                     Desired;                                                  // 0x0064(0x000C) (IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.MantleCheckData
// 0x0208
struct FMantleCheckData
{
	unsigned char                                      UnknownData00[0x208];                                     // 0x0000(0x0208) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.MantleCheckTypeData
// 0x00B8
struct FMantleCheckTypeData
{
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0000(0x00B8) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.MantleCheckTypeData_MantleUp
// 0x0004 (0x00BC - 0x00B8)
struct FMantleCheckTypeData_MantleUp : public FMantleCheckTypeData
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B8(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.MantleStandData
// 0x003C
struct FMantleStandData
{
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0000(0x003C) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.DistanceMatchingInfo
// 0x0070
struct FDistanceMatchingInfo
{
	TMap<int, struct FFloatCurve>                      DistanceCurveMap;                                         // 0x0000(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0050(0x0020) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.CachedStoppingInfo
// 0x0014
struct FCachedStoppingInfo
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.StopDistanceMatchingInfo
// 0x0050 (0x00C0 - 0x0070)
struct FStopDistanceMatchingInfo : public FDistanceMatchingInfo
{
	TMap<int, struct FCachedStoppingInfo>              StoppingInfoMap;                                          // 0x0070(0x0050) (ZeroConstructor)
};

// ScriptStruct GbxGameSystemCore.ActiveGbxFeedbackEffect
// 0x0068
struct FActiveGbxFeedbackEffect
{
	class UGbxFeedbackData*                            ActiveData;                                               // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class AGbxPlayerController>         Controller;                                               // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0010(0x0038) MISSED OFFSET
	TWeakObjectPtr<class UObject>                      SourceContext;                                            // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0050(0x0018) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.GbxObjectReplicatorProxyItem
// 0x0018
struct FGbxObjectReplicatorProxyItem
{
	TScriptInterface<class UGbxReplicatorProxyData>    Object;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             Component;                                                // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.GbxObjectReplicatorProxy
// 0x0068
struct FGbxObjectReplicatorProxy
{
	TArray<struct FGbxObjectReplicatorProxyItem>       Items;                                                    // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0010(0x0058) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.RecentlyMetPlayer
// 0x0058
struct FRecentlyMetPlayer
{
	struct FUniqueNetIdRepl                            FirstPartyPlayerId;                                       // 0x0000(0x0028)
	struct FUniqueNetIdRepl                            ShiftPlayerId;                                            // 0x0028(0x0028)
	bool                                               bUseShiftId;                                              // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.HomingTargetedActorInfo
// 0x0010
struct FHomingTargetedActorInfo
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ProjectileCount;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ImpactEffectEventInfo
// 0x0028
struct FImpactEffectEventInfo
{
	class AActor*                                      InstigatorActor;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitActor;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           HitMaterial;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.InstigatorAttributeEffectData
// 0x0008 (0x0050 - 0x0048)
struct FInstigatorAttributeEffectData : public FAttributeEffectData
{
	EInstigatorAttributeEffectAttributeToModifyContextSource AttributeToModifyContextSource;                           // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EInstigatorAttributeEffectModifierValueContext     ModifierValueContext;                                     // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.MontageLoopHelper
// 0x00C0
struct FMontageLoopHelper
{
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0000(0x00C0) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.MontageLoopRecord
// 0x0020
struct FMontageLoopRecord
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ArticulatedRigidBodyState
// 0x0010 (0x0050 - 0x0040)
struct FArticulatedRigidBodyState : public FRigidBodyState
{
	struct FName                                       BodyName;                                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.RagdollReplicationData
// 0x0018
struct FRagdollReplicationData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<struct FArticulatedRigidBodyState>          Bodies;                                                   // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxGameSystemCore.ReferenceActorClasses
// 0x0020
struct FReferenceActorClasses
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FSoftObjectPath                             ActorAsset;                                               // 0x0008(0x0018)
};

// ScriptStruct GbxGameSystemCore.SharedAnimInstanceData
// 0x0020
struct FSharedAnimInstanceData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.StanceVectorValue
// 0x0010
struct FStanceVectorValue
{
	EStanceValueOverrideType                           ValueType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     Value;                                                    // 0x0004(0x000C) (Edit, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.RandomValueRow
// 0x00F8 (0x0100 - 0x0008)
struct FRandomValueRow : public FAttributeDefinedValueRow
{
	struct FAttributeInitializationData                RNG_LowerBound;                                           // 0x0008(0x0038) (Edit)
	struct FAttributeInitializationData                RNG_UpperBound;                                           // 0x0040(0x0038) (Edit)
	bool                                               bIntegerOnlyValues;                                       // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	struct FAttributeInitializationData                OptionalOutputMinValue;                                   // 0x0080(0x0038) (Edit)
	bool                                               bClampToOutputMinValue;                                   // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
	struct FAttributeInitializationData                OptionalOutputMaxValue;                                   // 0x00C0(0x0038) (Edit)
	bool                                               bClampToOutputMaxValue;                                   // 0x00F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.GbxParamDefinedSingleValueRow
// 0x0080 (0x0088 - 0x0008)
struct FGbxParamDefinedSingleValueRow : public FAttributeDefinedValueRow
{
	struct FGbxParam                                   Value;                                                    // 0x0008(0x0080) (Edit)
};

// ScriptStruct GbxGameSystemCore.AttributeDefinedSingleValueRow
// 0x0038 (0x0040 - 0x0008)
struct FAttributeDefinedSingleValueRow : public FAttributeDefinedValueRow
{
	struct FAttributeInitializationData                Value;                                                    // 0x0008(0x0038) (Edit)
};

// ScriptStruct GbxGameSystemCore.AttributeEffectValueContextHardRef
// 0x0018
struct FAttributeEffectValueContextHardRef
{
	class UObject*                                     Context;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     ContextResolverOverride;                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.TargetLocationData
// 0x0020
struct FTargetLocationData
{
	struct FVector                                     TargetLocation;                                           // 0x0000(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	struct FVector                                     TargetBoundsCenter;                                       // 0x000C(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	float                                              TargetBoundsRadius;                                       // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              TargetBoundsHalfHeight;                                   // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.TargetQueryTestDebugDesc
// 0x0008
struct FTargetQueryTestDebugDesc
{
	float                                              Value;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Score;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.TargetQueryDebugDesc
// 0x0038
struct FTargetQueryDebugDesc
{
	class FString                                      DebugGroup;                                               // 0x0000(0x0010) (ZeroConstructor)
	class AActor*                                      Actor;                                                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTeam*                                       Team;                                                     // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Score;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class FString                                      FailReason;                                               // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxGameSystemCore.TargetPersistentNotes
// 0x0048
struct FTargetPersistentNotes
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ReplicatedUIStatCollectionData
// 0x0010
struct FReplicatedUIStatCollectionData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.UserStateEnumValue
// 0x0038
struct FUserStateEnumValue
{
	struct FSimpleMemberReference                      StateProperty;                                            // 0x0000(0x0020) (Edit)
	struct FName                                       PropertyName;                                             // 0x0020(0x0008) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	class UEnum*                                       Enum;                                                     // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      EnumValue;                                                // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct GbxGameSystemCore.ViewModelOffsetImpulseInfo
// 0x0038
struct FViewModelOffsetImpulseInfo
{
	float                                              EaseInDuration;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGbxEasingFunc                              EaseInFunc;                                               // 0x0004(0x000C) (Edit)
	float                                              EaseOutDuration;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGbxEasingFunc                              EaseOutFunc;                                              // 0x0014(0x000C) (Edit)
	struct FRotator                                    RotationExtent;                                           // 0x0020(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     TranslationExtent;                                        // 0x002C(0x000C) (Edit, IsPlainOldData)
};

// ScriptStruct GbxGameSystemCore.VectorWaveform
// 0x0024
struct FVectorWaveform
{
	struct FFloatWaveform                              X;                                                        // 0x0000(0x000C) (Edit)
	struct FFloatWaveform                              Y;                                                        // 0x000C(0x000C) (Edit)
	struct FFloatWaveform                              Z;                                                        // 0x0018(0x000C) (Edit)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

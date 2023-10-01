#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_CoreUObject_classes.hpp"
#include "BL3_Engine_classes.hpp"
#include "BL3_GbxGameSystemCore_classes.hpp"
#include "BL3_GbxNav_classes.hpp"
#include "BL3_GameplayTasks_classes.hpp"
#include "BL3_AIModule_classes.hpp"
#include "BL3_GameplayTags_classes.hpp"
#include "BL3_GbxRuntime_classes.hpp"
#include "BL3_GbxSpawn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GbxAI.EAIActionResult
enum class EAIActionResult : uint8_t
{
	None                           = 0,
	Succeeded                      = 1,
	Failed                         = 2,
	Interrupted                    = 3,
	Aborted                        = 4,
	Count                          = 5,
	EAIActionResult_MAX            = 6
};


// Enum GbxAI.ECoverUserAnimState
enum class ECoverUserAnimState : uint8_t
{
	None                           = 0,
	Idle                           = 1,
	Exit                           = 2,
	FireIdle                       = 3,
	FireEnter                      = 4,
	FireExit                       = 5,
	FireToIdle                     = 6,
	Transition                     = 7,
	ViewSwitch                     = 8,
	ECoverUserAnimState_MAX        = 9
};


// Enum GbxAI.EScriptedActionRule
enum class EScriptedActionRule : uint8_t
{
	Any                            = 0,
	All                            = 1,
	EScriptedActionRule_MAX        = 2
};


// Enum GbxAI.ESmartActionResult
enum class ESmartActionResult : uint8_t
{
	Success                        = 0,
	Interrupt                      = 1,
	Unreserve                      = 2,
	ESmartActionResult_MAX         = 3
};


// Enum GbxAI.EMeleeRotationOption
enum class EMeleeRotationOption : uint8_t
{
	HoldStill                      = 0,
	AlignToTarget                  = 1,
	FollowTarget                   = 2,
	EMeleeRotationOption_MAX       = 3
};


// Enum GbxAI.EAIActionSequenceCanStartCheck
enum class EAIActionSequenceCanStartCheck : uint8_t
{
	FirstChild                     = 0,
	EachChild                      = 1,
	EAIActionSequenceCanStartCheck_MAX = 2
};


// Enum GbxAI.EAIActionCreationMethod
enum class EAIActionCreationMethod : uint8_t
{
	Unknown                        = 0,
	Composition                    = 1,
	PropertyPanel                  = 2,
	Graph                          = 3,
	EAIActionCreationMethod_MAX    = 4
};


// Enum GbxAI.EAIActionResultTransition
enum class EAIActionResultTransition : uint8_t
{
	Stop                           = 0,
	Continue                       = 1,
	Restart                        = 2,
	EAIActionResultTransition_MAX  = 3
};


// Enum GbxAI.EAIActionResultDirective
enum class EAIActionResultDirective : uint8_t
{
	Continue                       = 0,
	Succeed                        = 1,
	Fail                           = 2,
	EAIActionResultDirective_MAX   = 3
};


// Enum GbxAI.EAIActionExecutionStage
enum class EAIActionExecutionStage : uint8_t
{
	Starting                       = 0,
	Running                        = 1,
	Stopping                       = 2,
	Stopped                        = 3,
	CleaningUp                     = 4,
	EAIActionExecutionStage_MAX    = 5
};


// Enum GbxAI.EAIActionState
enum class EAIActionState : uint8_t
{
	Idle                           = 0,
	Starting                       = 1,
	Running                        = 2,
	Stopped                        = 3,
	EAIActionState_MAX             = 4
};


// Enum GbxAI.EAIActionLayer
enum class EAIActionLayer : uint8_t
{
	Default                        = 0,
	Script                         = 1,
	Count                          = 2,
	EAIActionLayer_MAX             = 3
};


// Enum GbxAI.EAIGroupConditionType
enum class EAIGroupConditionType : uint8_t
{
	AllFalse                       = 0,
	AllTrue                        = 1,
	SomeFalse                      = 2,
	SomeTrue                       = 3,
	EAIGroupConditionType_MAX      = 4
};


// Enum GbxAI.ECircleDirection
enum class ECircleDirection : uint8_t
{
	Left                           = 0,
	Right                          = 1,
	Random                         = 2,
	ECircleDirection_MAX           = 3
};


// Enum GbxAI.EGbxQueryPreset
enum class EGbxQueryPreset : uint8_t
{
	UseBestLocation                = 0,
	TryCurrentLocation             = 1,
	OnlyCurrentLocation            = 2,
	QueryFrequencyLow              = 3,
	QueryOnStart                   = 4,
	EGbxQueryPreset_MAX            = 5
};


// Enum GbxAI.ECompareMethod
enum class ECompareMethod : uint8_t
{
	Equals                         = 0,
	NotEquals                      = 1,
	Smaller                        = 2,
	SmallerOrEqual                 = 3,
	Greater                        = 4,
	GreaterOrEqual                 = 5,
	ECompareMethod_MAX             = 6
};


// Enum GbxAI.EIsInRangeAspectDistanceTest
enum class EIsInRangeAspectDistanceTest : uint8_t
{
	Direct                         = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	VerticalOffset                 = 3,
	Count                          = 4,
	EIsInRangeAspectDistanceTest_MAX = 5
};


// Enum GbxAI.EOrbitDirection
enum class EOrbitDirection : uint8_t
{
	Left                           = 0,
	Right                          = 1,
	Random                         = 2,
	EOrbitDirection_MAX            = 3
};


// Enum GbxAI.EAIAspectSettingsDefaults_Rotation
enum class EAIAspectSettingsDefaults_Rotation : uint8_t
{
	Custom                         = 0,
	None                           = 1,
	NoBodyRotationAllowed          = 2,
	FullBody                       = 3,
	AimOffsetsOnly                 = 4,
	FullBodyWithAim                = 5,
	EAIAspectSettingsDefaults_MAX  = 6
};


// Enum GbxAI.EAIAspectSettingsDefaults_Rotation_BodyHeadingOffset
enum class EAIAspectSettingsDefaults_Rotation_BodyHeadingOffset : uint8_t
{
	Front                          = 0,
	Back                           = 1,
	Left                           = 2,
	Right                          = 3,
	Custom                         = 4,
	EAIAspectSettingsDefaults_Rotation_MAX = 5
};


// Enum GbxAI.ESweepDirection
enum class ESweepDirection : uint8_t
{
	Left                           = 0,
	Right                          = 1,
	Random                         = 2,
	ESweepDirection_MAX            = 3
};


// Enum GbxAI.ECloakAction
enum class ECloakAction : uint8_t
{
	OnStart                        = 0,
	OnStop                         = 1,
	ECloakAction_MAX               = 2
};


// Enum GbxAI.EPlanMemberReplacement
enum class EPlanMemberReplacement : uint8_t
{
	AbandonPlanIfKilled            = 0,
	ReplaceMemberIfKilled          = 1,
	DoNotReplaceAndKeepGoing       = 2,
	EPlanMemberReplacement_MAX     = 3
};


// Enum GbxAI.EPlanValidityCode
enum class EPlanValidityCode : uint8_t
{
	Unknown                        = 0,
	PlanIsValid                    = 1,
	NoPlanData                     = 2,
	NotEnoughRoleSlots             = 3,
	MissingRoleTag                 = 4,
	BadPlanInstanceNumber          = 5,
	BadMinMaxRoleInstanceNumbers   = 6,
	BadDistanceValues              = 7,
	InsufficientCandidates         = 8,
	EPlanValidityCode_MAX          = 9
};


// Enum GbxAI.EPlanStage
enum class EPlanStage : uint8_t
{
	NeedLeader                     = 0,
	NeedFollowers                  = 1,
	HasMinimumRoster               = 2,
	HasFullRoster                  = 3,
	EveryoneCheckedIn              = 4,
	ShuttingDown                   = 5,
	EPlanStage_MAX                 = 6
};


// Enum GbxAI.ESmartObjectLookAtRule
enum class ESmartObjectLookAtRule : uint8_t
{
	None                           = 0,
	ActorCenter                    = 1,
	ActorEyes                      = 2,
	ActorSocket                    = 3,
	ESmartObjectLookAtRule_MAX     = 4
};


// Enum GbxAI.ESlotAlignRule
enum class ESlotAlignRule : uint8_t
{
	None                           = 0,
	Center                         = 1,
	Align                          = 2,
	ESlotAlignRule_MAX             = 3
};


// Enum GbxAI.ESmartObjectNotify
enum class ESmartObjectNotify : uint8_t
{
	LerpToSlot                     = 0,
	LerpToGround                   = 1,
	ESmartObjectNotify_MAX         = 2
};


// Enum GbxAI.ECoverFaceDirection
enum class ECoverFaceDirection : uint8_t
{
	Toward                         = 0,
	Away                           = 1,
	ECoverFaceDirection_MAX        = 2
};


// Enum GbxAI.ECoverAdjustFailReason
enum class ECoverAdjustFailReason : uint8_t
{
	None                           = 0,
	NoRoom                         = 1,
	NoView                         = 2,
	Invalid                        = 3,
	ECoverAdjustFailReason_MAX     = 4
};


// Enum GbxAI.ECoverSlotHeight
enum class ECoverSlotHeight : uint8_t
{
	Low                            = 0,
	High                           = 1,
	ECoverSlotHeight_MAX           = 2
};


// Enum GbxAI.ECoverStyleAnimType
enum class ECoverStyleAnimType : uint8_t
{
	TimedMoveOut                   = 0,
	TimedStayIn                    = 1,
	SingleAnim                     = 2,
	ECoverStyleAnimType_MAX        = 3
};


// Enum GbxAI.ECoverUserState
enum class ECoverUserState : uint8_t
{
	NotInCover                     = 0,
	Idling                         = 1,
	Firing                         = 2,
	ECoverUserState_MAX            = 3
};


// Enum GbxAI.ETerritoryMovementType
enum class ETerritoryMovementType : uint8_t
{
	Ground                         = 0,
	Flight                         = 1,
	Dynamic                        = 2,
	ETerritoryMovementType_MAX     = 3
};


// Enum GbxAI.EUberTraceMultiTraceRequirement
enum class EUberTraceMultiTraceRequirement : uint8_t
{
	AtLeastOneMustPassTest         = 0,
	AllMustPassTest                = 1,
	EUberTraceMultiTraceRequirement_MAX = 2
};


// Enum GbxAI.ENavJumpStage
enum class ENavJumpStage : uint8_t
{
	None                           = 0,
	Enter                          = 1,
	Idle                           = 2,
	Exit                           = 3,
	End                            = 4,
	ENavJumpStage_MAX              = 5
};


// Enum GbxAI.ENavJumpRotation
enum class ENavJumpRotation : uint8_t
{
	None                           = 0,
	FaceJumpOrigin                 = 1,
	FaceJumpTarget                 = 2,
	FaceJumpTargetFaceDir          = 3,
	ENavJumpRotation_MAX           = 4
};


// Enum GbxAI.ELookAtPointType
enum class ELookAtPointType : uint8_t
{
	Interrupt                      = 0,
	Persist                        = 1,
	Any                            = 2,
	ELookAtPointType_MAX           = 3
};


// Enum GbxAI.ESmartObjectTaskState
enum class ESmartObjectTaskState : uint8_t
{
	Uninitialized                  = 0,
	Movement                       = 1,
	Alignment                      = 2,
	Usage                          = 3,
	Complete                       = 4,
	ESmartObjectTaskState_MAX      = 5
};


// Enum GbxAI.ESmartObjectTaskResult
enum class ESmartObjectTaskResult : uint8_t
{
	Aborted                        = 0,
	Failed                         = 1,
	Succeeded                      = 2,
	ESmartObjectTaskResult_MAX     = 3
};


// Enum GbxAI.ESmartObjectUseResult
enum class ESmartObjectUseResult : uint8_t
{
	Failure                        = 0,
	Running                        = 1,
	Blocking                       = 2,
	Success                        = 3,
	ESmartObjectUseResult_MAX      = 4
};


// Enum GbxAI.EInitialPathAction
enum class EInitialPathAction : uint8_t
{
	None                           = 0,
	PatrolPath                     = 1,
	ScriptedPath                   = 2,
	ScriptedRoute                  = 3,
	ScriptedWait                   = 4,
	EInitialPathAction_MAX         = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GbxAI.AIActionExecutionSettings
// 0x0008
struct FAIActionExecutionSettings
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EAIActionResultTransition                          SuccessTransition;                                        // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EAIActionResultTransition                          FailureTransition;                                        // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysReportSuccess;                                     // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CheckCanStartPeriod;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxAI.AIActionBlueprintContext
// 0x0018
struct FAIActionBlueprintContext
{
	class AGbxAIController*                            Controller;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct GbxAI.AIAspectSettings_Move
// 0x0008
struct FAIAspectSettings_Move
{
	float                                              PathUpdateThreshold;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStopWhenInPosition;                                      // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowStrafe;                                             // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowPartialPath;                                        // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRequireDirectPath;                                       // 0x0007(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxAI.AIAspectSettings_Location
// 0x01E0
struct FAIAspectSettings_Location
{
	struct FGbxBlackboardKeySelector                   Target;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible)
	EAIActionResultTransition                          TargetChangeTransition;                                   // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FGbxParam                                   Distance;                                                 // 0x0018(0x0080) (Edit, BlueprintVisible)
	struct FEnvQueryParams                             TargetQuery;                                              // 0x0098(0x00B8) (Edit, BlueprintVisible)
	struct FGbxParam                                   TargetQueryPeriod;                                        // 0x0150(0x0080) (Edit, BlueprintVisible)
	bool                                               bUseTargetQuery;                                          // 0x01D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01D1(0x0003) MISSED OFFSET
	struct FAIAspectSettings_Move                      MoveSettings;                                             // 0x01D4(0x0008) (Edit, BlueprintVisible)
	bool                                               bCanMove;                                                 // 0x01DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01DD(0x0003) MISSED OFFSET
};

// ScriptStruct GbxAI.AIAspectSettings_NavigationAdvanced
// 0x0038
struct FAIAspectSettings_NavigationAdvanced
{
	bool                                               bCanMove;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReachedRequiresDirect;                                   // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EGbxStrafeType                                     StrafeType;                                               // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EGbxPathType                                       PathType;                                                 // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStopWhenReached;                                         // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanRunWhenAtGoal;                                        // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateGoalWhileRunning;                                  // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0007(0x0001) MISSED OFFSET
	EGbxNavGoalCheats                                  Cheats;                                                   // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0007(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FGbxNavGoalModifiers                        GoalModifiers;                                            // 0x000C(0x0028) (Edit, BlueprintVisible)
	bool                                               bCanStartWhenGoalIsUncertain;                             // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bMoveEvenIfUnreachable;                                   // 0x0035(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0036(0x0002) MISSED OFFSET
};

// ScriptStruct GbxAI.AIAspectSettings_Navigation
// 0x0140
struct FAIAspectSettings_Navigation
{
	struct FGbxParam                                   ReachedHeight;                                            // 0x0000(0x0080) (Edit, BlueprintVisible)
	struct FGbxParam                                   ReachedDistance;                                          // 0x0080(0x0080) (Edit, BlueprintVisible)
	struct FAIAspectSettings_NavigationAdvanced        Advanced;                                                 // 0x0100(0x0038) (Edit, BlueprintVisible)
	bool                                               bCanMove;                                                 // 0x0138(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bReachedRequiresDirect;                                   // 0x0139(0x0001) (ZeroConstructor, IsPlainOldData)
	EGbxStrafeType                                     StrafeType;                                               // 0x013A(0x0001) (ZeroConstructor, IsPlainOldData)
	EGbxPathType                                       PathType;                                                 // 0x013B(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bStopWhenReached;                                         // 0x013C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCanRunWhenAtGoal;                                        // 0x013D(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateGoalWhileRunning;                                  // 0x013E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x013F(0x0001) MISSED OFFSET
};

// ScriptStruct GbxAI.AIAspectSettings_EnvQuery
// 0x03A0
struct FAIAspectSettings_EnvQuery
{
	struct FEnvQueryParams                             Query;                                                    // 0x0000(0x00B8) (Edit)
	struct FGbxBlackboardKeySelector                   QueryBlackboardKey;                                       // 0x00B8(0x0010) (Edit)
	bool                                               bRefreshAITreeOnQuerySuccess;                             // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bForceRequeryOnSuccess;                                   // 0x00C9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bClearQueryOnSuccess;                                     // 0x00CA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x00CB(0x0005) MISSED OFFSET
	struct FGbxQueryOptions                            Options;                                                  // 0x00D0(0x0238) (Edit)
	TEnumAsByte<EGbxQueryPreset>                       Preset;                                                   // 0x0308(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePreset;                                               // 0x0309(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x030A(0x0006) MISSED OFFSET
	struct FGbxParam                                   QueryPeriod;                                              // 0x0310(0x0080)
	bool                                               bQueryContinuously;                                       // 0x0390(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateValueWhileRunning;                                 // 0x0391(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bKeepValidValues;                                         // 0x0392(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCanUseSelf;                                              // 0x0393(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              UseSelfDistance;                                          // 0x0394(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bSucceedIfHasValue;                                       // 0x0398(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bMigrated;                                                // 0x0399(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x039A(0x0006) MISSED OFFSET
};

// ScriptStruct GbxAI.AIAspectSettings_RotationChannel
// 0x01B8
struct FAIAspectSettings_RotationChannel
{
	struct FGbxBlackboardKeySelector                   Target;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FVector                                     TargetOffset;                                             // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FGbxParam                                   Angle;                                                    // 0x0020(0x0080) (Edit, BlueprintVisible)
	bool                                               bUseAngle;                                                // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	struct FGbxParam                                   MaxRotateAngle;                                           // 0x00A8(0x0080) (Edit, BlueprintVisible)
	bool                                               bUseMaxRotateAngle;                                       // 0x0128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0129(0x0007) MISSED OFFSET
	struct FGbxParam                                   ConditionalEnable;                                        // 0x0130(0x0080) (Edit, BlueprintVisible)
	bool                                               bUseConditionalEnable;                                    // 0x01B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x01B1(0x0007) MISSED OFFSET
};

// ScriptStruct GbxAI.AIAspectSettings_Rotation
// 0x0550
struct FAIAspectSettings_Rotation
{
	bool                                               bCanRotate;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTrackTargetOverTime;                                     // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAIAspectSettingsDefaults_Rotation_BodyHeadingOffset BodyHeadingOffsetPresets;                                 // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	float                                              BodyHeadingOffset;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAIAspectSettingsDefaults_Rotation                 PremadeSettings;                                          // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FAIAspectSettings_RotationChannel           Body;                                                     // 0x0010(0x01B8) (Edit, BlueprintVisible)
	bool                                               bUseBody;                                                 // 0x01C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x01C9(0x0007) MISSED OFFSET
	struct FAIAspectSettings_RotationChannel           Aim;                                                      // 0x01D0(0x01B8) (Edit, BlueprintVisible)
	bool                                               bUseAim;                                                  // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0389(0x0007) MISSED OFFSET
	struct FAIAspectSettings_RotationChannel           Look;                                                     // 0x0390(0x01B8) (Edit, BlueprintVisible)
	bool                                               bUseLook;                                                 // 0x0548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepFacingTargetOnStop;                                  // 0x0549(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x054A(0x0006) MISSED OFFSET
};

// ScriptStruct GbxAI.AIAspectSettings_GbxAction
// 0x0238
struct FAIAspectSettings_GbxAction
{
	class UClass*                                      ActionType;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseActionType;                                           // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FGameplayTag                                ActionKey;                                                // 0x0010(0x0008) (Edit, BlueprintVisible)
	bool                                               bUseActionKey;                                            // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FGbxBlackboardKeySelector                   ActionBlackboardKey;                                      // 0x0020(0x0010) (Edit, BlueprintVisible)
	bool                                               bUseActionBlackboardKey;                                  // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FGbxParam                                   Count;                                                    // 0x0038(0x0080) (Edit, BlueprintVisible)
	struct FGbxParam                                   CanBeInterrupted;                                         // 0x00B8(0x0080) (Edit, BlueprintVisible)
	struct FGbxParam                                   CanBeInterruptedOnFailure;                                // 0x0138(0x0080) (Edit, BlueprintVisible)
	struct FGbxParam                                   PlayRate;                                                 // 0x01B8(0x0080) (Edit, BlueprintVisible)
};

// ScriptStruct GbxAI.AIAspectSettings_Charge
// 0x0018
struct FAIAspectSettings_Charge
{
	class UAIChargeData*                               ChargeData;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGbxBlackboardKeySelector                   Target;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, EditConst)
};

// ScriptStruct GbxAI.AIAspectSettings_Follow
// 0x0038
struct FAIAspectSettings_Follow
{
	struct FGbxBlackboardKeySelector                   FollowActorKey;                                           // 0x0000(0x0010) (Edit)
	struct FNumericRange                               TargetDistance;                                           // 0x0010(0x0008) (Edit)
	float                                              MaxSpeedScale;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinSpeedScale;                                            // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GoalUpdatePeriod;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InvalidWaitPeriod;                                        // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TeleportWaitPeriod;                                       // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowTeleport;                                           // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	float                                              TeleportDistance;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTeleportWhenFar;                                         // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bContinueWhileClose;                                      // 0x0035(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0036(0x0002) MISSED OFFSET
};

// ScriptStruct GbxAI.AIAspectSettings_FindClosestPlayer
// 0x0020
struct FAIAspectSettings_FindClosestPlayer
{
	struct FGbxBlackboardKeySelector                   BlackboardKey;                                            // 0x0000(0x0010) (Edit, BlueprintVisible)
	bool                                               bOnlyRunIfKeyIsValid;                                     // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClearKeyOnStop;                                          // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	float                                              UpdatePeriod;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInternal;                                              // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct GbxAI.AIAspectSettings_FlyToNavMesh
// 0x0010
struct FAIAspectSettings_FlyToNavMesh
{
	float                                              GroundSearchDistance;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LookAheadDistance;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FlySearchDistance;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UpdatePeriod;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxAI.AIAspectSettings_LeadRoute
// 0x0050
struct FAIAspectSettings_LeadRoute
{
	struct FGbxBlackboardKeySelector                   LeadActorKey;                                             // 0x0000(0x0010) (Edit)
	struct FGbxBlackboardKeySelector                   DestinationNodeKey;                                       // 0x0010(0x0010) (Edit)
	float                                              SegmentDistance;                                          // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxWanderingOffset;                                       // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ArrivalDistance;                                          // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNumericRange                               TargetRouteDistance;                                      // 0x002C(0x0008) (Edit)
	struct FNumericRange                               SpeedScaleRange;                                          // 0x0034(0x0008) (Edit)
	float                                              RouteOffsetFromTarget;                                    // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TeleportDist;                                             // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowBackwards;                                          // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowTeleport;                                           // 0x0045(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0046(0x0002) MISSED OFFSET
	float                                              FindNavRadius;                                            // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxAI.AIAspectSettings_Leap
// 0x0058
struct FAIAspectSettings_Leap
{
	class UClass*                                      Action;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGbxBlackboardKeySelector                   Target;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible)
	struct FVector                                     LocalOffset;                                              // 0x0018(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     TargetOffset;                                             // 0x0024(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FName                                       TargetSocket;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnglePercent;                                             // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPrediction;                                            // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDoNavigationTest;                                        // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDoCollisionTest;                                         // 0x0045(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAddTargetRadius;                                         // 0x0046(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0047(0x0001) MISSED OFFSET
	float                                              UseExactLocationDistance;                                 // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TestPeriod;                                               // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanStartWhileFalling;                                    // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct GbxAI.LookAroundRandomlySettings
// 0x000C
struct FLookAroundRandomlySettings
{
	float                                              MinAngleChangeEachIterationDeg;                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngleChangeEachIterationDeg;                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxTimeSpentEachScan;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxAI.AIAspectSettings_MoveSpline
// 0x0050
struct FAIAspectSettings_MoveSpline
{
	struct FGbxBlackboardKeySelector                   SplineKey;                                                // 0x0000(0x0010) (Edit)
	struct FGbxBlackboardKeySelector                   OffsetKey;                                                // 0x0010(0x0010) (Edit)
	struct FGbxBlackboardKeySelector                   ReverseKey;                                               // 0x0020(0x0010) (Edit)
	float                                              LookDistance;                                             // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MissNavigationStep;                                       // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MissNavigationStepDistance;                               // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AdditionnalLookDistanceSpeedFactor;                       // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SnapToNavigation;                                         // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSnapToNavigation;                                        // 0x0044(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              GoalUpdateDistance;                                       // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EGbxNavGoalReach                                   Reach;                                                    // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
};

// ScriptStruct GbxAI.AIAspectSettings_Orbit
// 0x0220
struct FAIAspectSettings_Orbit
{
	struct FGbxBlackboardKeySelector                   CenterKey;                                                // 0x0000(0x0010) (Edit)
	struct FGbxParam                                   HeightOffset;                                             // 0x0010(0x0080) (Edit)
	struct FGbxParam                                   OrbitRadius;                                              // 0x0090(0x0080) (Edit)
	struct FGbxParam                                   OrbitAngle;                                               // 0x0110(0x0080) (Edit)
	struct FGbxParam                                   OrbitAngleInterval;                                       // 0x0190(0x0080) (Edit)
	EOrbitDirection                                    Direction;                                                // 0x0210(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0211(0x0003) MISSED OFFSET
	float                                              SearchRadius;                                             // 0x0214(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRespectCombatTerritory;                                  // 0x0218(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0219(0x0007) MISSED OFFSET
};

// ScriptStruct GbxAI.AIActionSettings_Plan
// 0x0020
struct FAIActionSettings_Plan
{
	TArray<class UAIPlanData*>                         PlansAlwaysAvailableToMe;                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FGameplayTag>                        RoleTags;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GbxAI.AIAspectSettings_Route
// 0x0028
struct FAIAspectSettings_Route
{
	struct FGbxBlackboardKeySelector                   NodeKey;                                                  // 0x0000(0x0010) (Edit)
	float                                              SegmentDistance;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxWanderingOffset;                                       // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ArrivalDistance;                                          // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PerchCooldown;                                            // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPassiveAction;                                           // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCombatAction;                                            // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
};

// ScriptStruct GbxAI.CoverUseParams
// 0x0118
struct FCoverUseParams
{
	bool                                               bMustHaveViewToTarget;                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bMustBeHiddenFromThreats;                                 // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              InCoverExposurePercent;                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideIdleTime;                                        // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FGbxParam                                   IdleTimeOverride;                                         // 0x0010(0x0080) (Edit)
	bool                                               bOverrideFireTime;                                        // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	struct FGbxParam                                   FireTimeOverride;                                         // 0x0098(0x0080) (Edit)
};

// ScriptStruct GbxAI.AIAspectSettings_UseCover
// 0x0138
struct FAIAspectSettings_UseCover
{
	struct FGbxBlackboardKeySelector                   Target;                                                   // 0x0000(0x0010) (Edit)
	struct FGbxBlackboardKeySelector                   Cover;                                                    // 0x0010(0x0010) (Edit)
	struct FCoverUseParams                             UseParams;                                                // 0x0020(0x0118) (Edit)
};

// ScriptStruct GbxAI.AIWeaponUseSettings
// 0x0238
struct FAIWeaponUseSettings
{
	float                                              FireConeAngle;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideFireConeAngle;                                   // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FGbxParam                                   BurstCountOverride;                                       // 0x0008(0x0080) (Edit)
	bool                                               bOverrideBurstCount;                                      // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	struct FGbxParam                                   BurstDelayOverride;                                       // 0x0090(0x0080) (Edit)
	bool                                               bOverrideBurstDelay;                                      // 0x0110(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
	struct FGbxParam                                   AccuracyOverride;                                         // 0x0118(0x0080) (Edit)
	bool                                               bOverrideAccuracy;                                        // 0x0198(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0199(0x0007) MISSED OFFSET
	struct FGbxParam                                   SuppressingFireTime;                                      // 0x01A0(0x0080) (Edit)
	bool                                               bUseSuppressingFireTime;                                  // 0x0220(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0221(0x0003) MISSED OFFSET
	struct FNumericRange                               DesiredRangeOverride;                                     // 0x0224(0x0008) (Edit)
	bool                                               bOverrideDesiredRange;                                    // 0x022C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x022D(0x0003) MISSED OFFSET
	float                                              MaxWeaponLeadingDistance;                                 // 0x0230(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0234(0x0004) MISSED OFFSET
};

// ScriptStruct GbxAI.AIAspectSettings_Weapon
// 0x0198 (0x03D0 - 0x0238)
struct FAIAspectSettings_Weapon : public FAIWeaponUseSettings
{
	TArray<class UGbxWeaponSlotData*>                  WeaponSlots;                                              // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FGbxParam                                   WeaponUseModeIndex;                                       // 0x0248(0x0080) (Edit, BlueprintVisible)
	struct FGbxParam                                   CanUseWeapon;                                             // 0x02C8(0x0080) (Edit, BlueprintVisible)
	struct FGbxParam                                   CanUseWeaponWhileMoving;                                  // 0x0348(0x0080) (Edit, BlueprintVisible)
	bool                                               bUseCanUseWeaponWhileMoving;                              // 0x03C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyShootWhenTargetIsKnown;                              // 0x03C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x03CA(0x0006) MISSED OFFSET
};

// ScriptStruct GbxAI.AIAspectSettings_Sweep
// 0x00A8
struct FAIAspectSettings_Sweep
{
	struct FGbxBlackboardKeySelector                   CenterKey;                                                // 0x0000(0x0010) (Edit)
	struct FGbxParam                                   HeightOffset;                                             // 0x0010(0x0080) (Edit)
	float                                              SweepRadius;                                              // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SweepAngle;                                               // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SweepAngleInterval;                                       // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ESweepDirection                                    Direction;                                                // 0x009C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x009D(0x0003) MISSED OFFSET
	float                                              SearchRadius;                                             // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
};

// ScriptStruct GbxAI.AIAspectSettings_Swoop
// 0x0320
struct FAIAspectSettings_Swoop
{
	struct FGbxBlackboardKeySelector                   CenterKey;                                                // 0x0000(0x0010) (Edit)
	struct FGbxParam                                   FarDistance;                                              // 0x0010(0x0080) (Edit)
	struct FGbxParam                                   FarHeight;                                                // 0x0090(0x0080) (Edit)
	struct FGbxParam                                   NearDistance;                                             // 0x0110(0x0080) (Edit)
	struct FGbxParam                                   NearHeight;                                               // 0x0190(0x0080) (Edit)
	struct FGbxParam                                   PassDistance;                                             // 0x0210(0x0080) (Edit)
	struct FGbxParam                                   PassHeight;                                               // 0x0290(0x0080) (Edit)
	float                                              SearchRadius;                                             // 0x0310(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLimitSearchRadius;                                       // 0x0314(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0315(0x0003) MISSED OFFSET
	float                                              UpdatePeriod;                                             // 0x0318(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x031C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxAI.AIAspectSettings_Teleport
// 0x0138
struct FAIAspectSettings_Teleport
{
	struct FGbxBlackboardKeySelector                   GoalKey;                                                  // 0x0000(0x0010) (Edit)
	bool                                               bCloak;                                                   // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceToGround;                                           // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bClearVelocity;                                           // 0x0012(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bChangeRotation;                                          // 0x0013(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bClearGoalOnStop;                                         // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FGbxBlackboardKeySelector                   RotationKey;                                              // 0x0018(0x0010) (Edit)
	struct FGbxParam                                   TravelTime;                                               // 0x0028(0x0080) (Edit)
	bool                                               bUseSpeedInsteadOfTime;                                   // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	struct FGbxParam                                   TravelSpeed;                                              // 0x00B0(0x0080) (Edit)
	bool                                               bUpdateGoal;                                              // 0x0130(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0131(0x0007) MISSED OFFSET
};

// ScriptStruct GbxAI.AIAspectSettings_UseSmartObject
// 0x0478
struct FAIAspectSettings_UseSmartObject
{
	struct FGbxBlackboardKeySelector                   SmartAction;                                              // 0x0000(0x0010) (Edit)
	bool                                               bAbortExisting;                                           // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUntilInterrupted;                                        // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanBeInterrupted;                                        // 0x0012(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0013(0x0005) MISSED OFFSET
	struct FEnvQueryParams                             SmartObjectQuery;                                         // 0x0018(0x00B8)
	bool                                               bUseQuery;                                                // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
	struct FAIAspectSettings_EnvQuery                  QuerySettings;                                            // 0x00D8(0x03A0)
};

// ScriptStruct GbxAI.AIActionInstance
// 0x0030
struct FAIActionInstance
{
	class UGameplayTask*                               ScriptedGameplayTask;                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAIAction*                                   Action;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct GbxAI.AIAspectExecutionSettings
// 0x0005
struct FAIAspectExecutionSettings
{
	bool                                               bCanPreventActionFromStarting;                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanCauseActionToSucceed;                                 // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanForceActionToSucceed;                                 // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanCauseActionToFail;                                    // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMustFinish;                                              // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxAI.AIAspectSettings_ActorCollision
// 0x0018
struct FAIAspectSettings_ActorCollision
{
	struct FGbxBlackboardKeySelector                   Target;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible)
	EAIActionResultDirective                           OnCollision;                                              // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct GbxAI.AIAspectSettings_ConditionData
// 0x0090
struct FAIAspectSettings_ConditionData
{
	struct FGbxParam                                   Condition;                                                // 0x0000(0x0080) (Edit, BlueprintVisible)
	class UAttributeContextResolver*                   ContextResolver;                                          // 0x0080(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bInvertCondition;                                         // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
};

// ScriptStruct GbxAI.AIAspectSettings_Condition
// 0x0248
struct FAIAspectSettings_Condition
{
	struct FAIAspectSettings_ConditionData             CanStartCondition;                                        // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FAIAspectSettings_ConditionData             SucceedCondition;                                         // 0x0090(0x0090) (Edit, BlueprintVisible)
	struct FAIAspectSettings_ConditionData             FailCondition;                                            // 0x0120(0x0090) (Edit, BlueprintVisible)
	struct FAIAspectSettings_ConditionData             CanAbortCondition;                                        // 0x01B0(0x0090) (Edit, BlueprintVisible)
	bool                                               bUseCanStartCondition;                                    // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSucceedCondition;                                     // 0x0241(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseFailCondition;                                        // 0x0242(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCanAbortCondition;                                    // 0x0243(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
};

// ScriptStruct GbxAI.AIAspectSettings_AIGroupCondition
// 0x0008
struct FAIAspectSettings_AIGroupCondition
{
	int                                                FullfillmentQuantity;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPartialFullfillment;                                     // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct GbxAI.AIAspectSettings_BlackboardKey
// 0x0018
struct FAIAspectSettings_BlackboardKey
{
	struct FGbxBlackboardKeySelector                   Key;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible)
	bool                                               bInvertResult;                                            // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAIActionResultDirective                           WhenConditionFails;                                       // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAIActionResult                                    OnBecomeFalse;                                            // 0x0012(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAbortOnChange;                                           // 0x0013(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRefreshImmediatelyOnChange;                              // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct GbxAI.AIAspectSettings_Cooldown
// 0x0220
struct FAIAspectSettings_Cooldown
{
	struct FGbxParam                                   SucceedTimer;                                             // 0x0000(0x0080) (Edit, BlueprintVisible)
	bool                                               bUseSucceedTimer;                                         // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	struct FGbxParam                                   FailTimer;                                                // 0x0088(0x0080) (Edit, BlueprintVisible)
	bool                                               bUseFailTimer;                                            // 0x0108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0109(0x0007) MISSED OFFSET
	struct FGbxParam                                   AbortTimer;                                               // 0x0110(0x0080) (Edit, BlueprintVisible)
	bool                                               bUseAbortTimer;                                           // 0x0190(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0191(0x0007) MISSED OFFSET
	struct FGbxParam                                   InitialTimer;                                             // 0x0198(0x0080) (Edit, BlueprintVisible)
	bool                                               bUseInitialTimer;                                         // 0x0218(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0219(0x0007) MISSED OFFSET
};

// ScriptStruct GbxAI.AIAspectSettings_Crouch
// 0x0108
struct FAIAspectSettings_Crouch
{
	struct FGbxParam                                   CanCrouchWhileIdle;                                       // 0x0000(0x0080) (Edit, BlueprintVisible)
	bool                                               bUseCanCrouchWhileMoving;                                 // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	struct FGbxParam                                   CanCrouchWhileMoving;                                     // 0x0088(0x0080) (Edit, BlueprintVisible)
};

// ScriptStruct GbxAI.AIAspectSettings_DropshipSpawn
// 0x0010
struct FAIAspectSettings_DropshipSpawn
{
	class UClass*                                      StartAction;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      StopAction;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxAI.AIAspectSettings_GroupLocation
// 0x0098
struct FAIAspectSettings_GroupLocation
{
	struct FGbxBlackboardKeySelector                   GroupLocationKey;                                         // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FGbxParam                                   GroupDistance;                                            // 0x0010(0x0080) (Edit, BlueprintVisible)
	float                                              UpdatePeriod;                                             // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateWhileActive;                                       // 0x0094(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
};

// ScriptStruct GbxAI.AIAspectSettings_IntCompare
// 0x00A0
struct FAIAspectSettings_IntCompare
{
	struct FGbxBlackboardKeySelector                   Key;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible)
	EAIActionResultDirective                           WhenConditionFails;                                       // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ECompareMethod                                     CompareMethod;                                            // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	struct FGbxParam                                   CompareAgainst;                                           // 0x0018(0x0080) (Edit, BlueprintVisible)
	bool                                               bAbortOnChange;                                           // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRefreshImmediatelyOnChange;                              // 0x0099(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x009A(0x0006) MISSED OFFSET
};

// ScriptStruct GbxAI.AIAspectSettings_IsInRangeData
// 0x0088
struct FAIAspectSettings_IsInRangeData
{
	struct FGbxParam                                   Range;                                                    // 0x0000(0x0080) (Edit, BlueprintVisible)
	bool                                               bInvertRange;                                             // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
};

// ScriptStruct GbxAI.AIAspectIsInRangeAdvancedData
// 0x01A0
struct FAIAspectIsInRangeAdvancedData
{
	struct FAIAspectSettings_IsInRangeData             CanStartRange;                                            // 0x0000(0x0088) (Edit, BlueprintVisible)
	struct FAIAspectSettings_IsInRangeData             SucceedRange;                                             // 0x0088(0x0088) (Edit, BlueprintVisible)
	struct FAIAspectSettings_IsInRangeData             FailRange;                                                // 0x0110(0x0088) (Edit, BlueprintVisible)
	bool                                               bUseCanStartRange;                                        // 0x0198(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSucceedRange;                                         // 0x0199(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseFailRange;                                            // 0x019A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x019B(0x0005) MISSED OFFSET
};

// ScriptStruct GbxAI.AIAspectSettings_IsInRange
// 0x0248
struct FAIAspectSettings_IsInRange
{
	struct FGbxBlackboardKeySelector                   Target;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible)
	EIsInRangeAspectDistanceTest                       DistanceTest;                                             // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FAIAspectSettings_IsInRangeData             CanRunRange;                                              // 0x0018(0x0088) (Edit, BlueprintVisible)
	struct FAIAspectIsInRangeAdvancedData              AdvancedRanges;                                           // 0x00A0(0x01A0) (Edit, BlueprintVisible)
	bool                                               bUseAdvancedRanges;                                       // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0241(0x0007) MISSED OFFSET
};

// ScriptStruct GbxAI.AIAspectSettings_IsInTerritory
// 0x0018
struct FAIAspectSettings_IsInTerritory
{
	struct FGbxBlackboardKeySelector                   GoalKey;                                                  // 0x0000(0x0010) (Edit)
	ETerritoryType                                     TerritoryArea;                                            // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              TimeThreshold;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxAI.AIAspectSettings_Land
// 0x000C
struct FAIAspectSettings_Land
{
	float                                              GroundSearchDistance;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FlySearchDistance;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UpdatePeriod;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxAI.AIAspectSettings_Loop
// 0x0198
struct FAIAspectSettings_Loop
{
	struct FGbxParam                                   LoopCondition;                                            // 0x0000(0x0080) (Edit, BlueprintVisible)
	bool                                               bUseLoopCondition;                                        // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	struct FGbxParam                                   LoopCount;                                                // 0x0088(0x0080) (Edit, BlueprintVisible)
	bool                                               bUseLoopCount;                                            // 0x0108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0109(0x0007) MISSED OFFSET
	struct FGbxParam                                   LoopDuration;                                             // 0x0110(0x0080) (Edit, BlueprintVisible)
	bool                                               bUseLoopDuration;                                         // 0x0190(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStopImmediately;                                         // 0x0191(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreFailure;                                           // 0x0192(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0193(0x0005) MISSED OFFSET
};

// ScriptStruct GbxAI.AIAspectSettings_NavFlyOffset
// 0x0120
struct FAIAspectSettings_NavFlyOffset
{
	struct FGbxBlackboardKeySelector                   CenterKey;                                                // 0x0000(0x0010) (Edit)
	struct FGbxParam                                   Distance;                                                 // 0x0010(0x0080) (Edit)
	struct FGbxParam                                   Height;                                                   // 0x0090(0x0080) (Edit)
	float                                              SearchRadius;                                             // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLimitSearchRadius;                                       // 0x0114(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0115(0x0003) MISSED OFFSET
	float                                              UpdatePeriod;                                             // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              bForward;                                                 // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxAI.AIAspectSettings_Plan
// 0x0020
struct FAIAspectSettings_Plan
{
	TArray<class UAIPlanData*>                         PlansAlwaysAvailableToMe;                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FGameplayTag>                        RoleTags;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GbxAI.AIAspectSettings_Stance
// 0x0010
struct FAIAspectSettings_Stance
{
	class UStanceDataProvider*                         Stance;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideBlueprint;                                       // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct GbxAI.AIAspectSettings_Ticket
// 0x0128
struct FAIAspectSettings_Ticket
{
	bool                                               bPriority;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bInterruptible;                                           // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FGbxParam                                   Value;                                                    // 0x0008(0x0080) (Edit)
	struct FGbxParam                                   HoldDuration;                                             // 0x0088(0x0080) (Edit)
	class UAITicketDataAsset*                          AITicket;                                                 // 0x0108(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGbxBlackboardKeySelector                   ActorBlackboardKey;                                       // 0x0110(0x0010) (Edit)
	bool                                               bOverrideActorBlackboardKey;                              // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyHoldOnSuccess;                                      // 0x0121(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyHoldOnFailure;                                      // 0x0122(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyHoldOnAbort;                                        // 0x0123(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAcquireTicket;                                           // 0x0124(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0125(0x0003) MISSED OFFSET
};

// ScriptStruct GbxAI.AIAspectSettings_TimedCondition
// 0x0118
struct FAIAspectSettings_TimedCondition
{
	struct FAIAspectSettings_ConditionData             Condition;                                                // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FGbxParam                                   Timer;                                                    // 0x0090(0x0080) (Edit, BlueprintVisible)
	EAIActionResultDirective                           WhenConditionFails;                                       // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAIActionResult                                    FalseResult;                                              // 0x0111(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0112(0x0006) MISSED OFFSET
};

// ScriptStruct GbxAI.AIAspectSettings_TimeLimit
// 0x0108
struct FAIAspectSettings_TimeLimit
{
	struct FGbxParam                                   SucceedTime;                                              // 0x0000(0x0080) (Edit, BlueprintVisible)
	struct FGbxParam                                   FailTime;                                                 // 0x0080(0x0080) (Edit, BlueprintVisible)
	bool                                               bUseSucceedTime;                                          // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseFailTime;                                             // 0x0101(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0102(0x0006) MISSED OFFSET
};

// ScriptStruct GbxAI.AIAspectSettings_Timer
// 0x04C8
struct FAIAspectSettings_Timer
{
	struct FGbxParam                                   CanStartWarmup;                                           // 0x0000(0x0080) (Edit, BlueprintVisible)
	bool                                               bUseCanStartWarmup;                                       // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	struct FGbxParam                                   SpawnedWarmup;                                            // 0x0088(0x0080) (Edit, BlueprintVisible)
	bool                                               bUseSpawnedWarmup;                                        // 0x0108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0109(0x0007) MISSED OFFSET
	struct FGbxParam                                   CombatStartedWarmup;                                      // 0x0110(0x0080) (Edit, BlueprintVisible)
	bool                                               bUseCombatStartedWarmup;                                  // 0x0190(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0191(0x0007) MISSED OFFSET
	struct FGbxParam                                   TargetChangedWarmup;                                      // 0x0198(0x0080) (Edit, BlueprintVisible)
	bool                                               bUseTargetChangedWarmup;                                  // 0x0218(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0219(0x0007) MISSED OFFSET
	struct FGbxParam                                   SucceededCooldown;                                        // 0x0220(0x0080) (Edit, BlueprintVisible)
	bool                                               bUseSucceededCooldown;                                    // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x02A1(0x0007) MISSED OFFSET
	struct FGbxParam                                   FailedCooldown;                                           // 0x02A8(0x0080) (Edit, BlueprintVisible)
	bool                                               bUseFailedCooldown;                                       // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0329(0x0007) MISSED OFFSET
	struct FGbxParam                                   AbortedCooldown;                                          // 0x0330(0x0080) (Edit, BlueprintVisible)
	bool                                               bUseAbortedCooldown;                                      // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x03B1(0x0007) MISSED OFFSET
	struct FGbxParam                                   SucceedTimeLimit;                                         // 0x03B8(0x0080) (Edit, BlueprintVisible)
	bool                                               bUseSucceedTimeLimit;                                     // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0439(0x0007) MISSED OFFSET
	struct FGbxParam                                   FailTimeLimit;                                            // 0x0440(0x0080) (Edit, BlueprintVisible)
	bool                                               bUseFailTimeLimit;                                        // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x04C1(0x0007) MISSED OFFSET
};

// ScriptStruct GbxAI.AIAspectSettings_ZeroRotationChannel
// 0x0003
struct FAIAspectSettings_ZeroRotationChannel
{
	bool                                               bZeroPitch;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bZeroYaw;                                                 // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bZeroRoll;                                                // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxAI.AIAspectSettings_ZeroRotation
// 0x000C
struct FAIAspectSettings_ZeroRotation
{
	struct FAIAspectSettings_ZeroRotationChannel       Body;                                                     // 0x0000(0x0003) (Edit)
	bool                                               bUseBody;                                                 // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAIAspectSettings_ZeroRotationChannel       Aim;                                                      // 0x0004(0x0003) (Edit)
	bool                                               bUseAim;                                                  // 0x0007(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAIAspectSettings_ZeroRotationChannel       Look;                                                     // 0x0008(0x0003) (Edit)
	bool                                               bUseLook;                                                 // 0x000B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxAI.CloakCondition
// 0x0010
struct FCloakCondition
{
	class UGbxCondition*                               Condition;                                                // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bCloaked;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct GbxAI.CloakRepData
// 0x0002
struct FCloakRepData
{
	bool                                               bCloaked;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCanPlayActions;                                          // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxAI.CloakPrimData
// 0x0010
struct FCloakPrimData
{
	bool                                               bWasHidden;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UPrimitiveComponent*                         PrimComp;                                                 // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct GbxAI.AITicketHandle
// 0x0010
struct FAITicketHandle
{
	class UAITicketDataAsset*                          Ticket;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AGbxAIController*                            AIController;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxAI.AITicketManager
// 0x2718
struct FAITicketManager
{
	unsigned char                                      UnknownData00[0x2718];                                    // 0x0000(0x2718) MISSED OFFSET
};

// ScriptStruct GbxAI.AICommunicationManager
// 0x0048
struct FAICommunicationManager
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct GbxAI.PlanState
// 0x0038
struct FPlanState
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct GbxAI.RoleCandidates
// 0x0018
struct FRoleCandidates
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct GbxAI.AIPlanManager
// 0x0080
struct FAIPlanManager
{
	TArray<TWeakObjectPtr<class UAIPlanData>>          AvailablePlans;                                           // 0x0000(0x0010) (ZeroConstructor, Transient)
	TArray<struct FPlanState>                          ActivePlans;                                              // 0x0010(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
	TMap<struct FName, struct FRoleCandidates>         PotentialCandidatesByRole;                                // 0x0028(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
};

// ScriptStruct GbxAI.AINodeSmartObjectData
// 0x0010
struct FAINodeSmartObjectData
{
	class AActor*                                      Object;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	float                                              Distance;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	float                                              Offset;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
};

// ScriptStruct GbxAI.AINodeLink
// 0x0020
struct FAINodeLink
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              PrevWeight;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AActor*                                      Actor;                                                    // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<struct FAINodeSmartObjectData>              SmartObjects;                                             // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst)
};

// ScriptStruct GbxAI.PlanRoleRequirements
// 0x0130
struct FPlanRoleRequirements
{
	struct FGameplayTag                                RoleTag;                                                  // 0x0000(0x0008) (Edit)
	unsigned char                                      MinInstancesOfRole;                                       // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxInstancesOfRole;                                       // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct FGbxParam                                   DistanceToLeaderForParticipation;                         // 0x0010(0x0080) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FGbxParam                                   DistanceToLeaderToRemove;                                 // 0x0090(0x0080) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UGbxCondition*                               AdditionalStartCondition;                                 // 0x0110(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bAlsoUseStartConditionAsStopCondition;                    // 0x0118(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0119(0x0007) MISSED OFFSET
	class UGbxCondition*                               AdditionalStopCondition;                                  // 0x0120(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	EPlanMemberReplacement                             MemberReplacementStrategy;                                // 0x0128(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0129(0x0007) MISSED OFFSET
};

// ScriptStruct GbxAI.SmartActionUseInfo
// 0x0018
struct FSmartActionUseInfo
{
	struct FGameplayTag                                ActionTag;                                                // 0x0000(0x0008)
	bool                                               bInterrupting;                                            // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              UseDuration;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CooldownTime;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPassiveAction;                                           // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCombatAction;                                            // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
};

// ScriptStruct GbxAI.ActionUseState
// 0x00C0
struct FActionUseState
{
	class AGbxAIController*                            Controller;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class USmartObjectComponent*                       SmartObjectComponent;                                     // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIUseSlotComponent*                         AIUseSlotComponent;                                       // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FSmartActionUseInfo                         UseInfo;                                                  // 0x0018(0x0018)
	ESmartObjectTaskState                              State;                                                    // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8F];                                      // 0x0031(0x008F) MISSED OFFSET
};

// ScriptStruct GbxAI.ActionCooldownInfo
// 0x0018
struct FActionCooldownInfo
{
	class UClass*                                      ActorClass;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                ActionTag;                                                // 0x0008(0x0008)
	float                                              CooldownTime;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct GbxAI.BTRandomEntrySettings
// 0x0110
struct FBTRandomEntrySettings
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGbxParam                                   Weight;                                                   // 0x0008(0x0080) (Edit)
	struct FGbxParam                                   LoopCountMax;                                             // 0x0088(0x0080) (Edit)
	bool                                               bUseLoopCountMax;                                         // 0x0108(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0109(0x0007) MISSED OFFSET
};

// ScriptStruct GbxAI.BTGbxLoopConditionData
// 0x0010
struct FBTGbxLoopConditionData
{
	class UGbxCondition*                               Condition;                                                // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bInvert;                                                  // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct GbxAI.CoverAdjustParams
// 0x0040
struct FCoverAdjustParams
{
	float                                              AdjustDistanceDown;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDoDownAdjustment;                                        // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              AdjustDistanceUp;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDoUpAdjustment;                                          // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              AdjustDistanceForward;                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDoForwardAdjustment;                                     // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEdgeTestLeft;                                            // 0x0015(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEdgeTestRight;                                           // 0x0016(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0017(0x0001) MISSED OFFSET
	int                                                EdgeTestSections;                                         // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EdgeTestHeightPct;                                        // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EdgeTestDistancePct;                                      // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EdgeTestWalkBackDistance;                                 // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                EdgeTestAngleThreshold;                                   // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlockTestHitPct;                                          // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlockTestDistancePct;                                     // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BlockTestHorizontalSections;                              // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BlockTestVerticalSections;                                // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BlockTestAngleThreshold;                                  // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxAI.CoverLineOfSightBlockData
// 0x0004
struct FCoverLineOfSightBlockData
{
	float                                              Distance;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxAI.CoverLineOfSightSectionData
// 0x0010
struct FCoverLineOfSightSectionData
{
	TArray<struct FCoverLineOfSightBlockData>          Blocks;                                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxAI.CoverLineOfSightParams
// 0x0028
struct FCoverLineOfSightParams
{
	int                                                NumVerticalSections;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumHorizontalSections;                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VerticalAngleUp;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VerticalAngleDown;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HorizontalAngle;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumBlockSubdivisions;                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x001C(0x000C) (Edit, IsPlainOldData)
};

// ScriptStruct GbxAI.CoverLineOfSightData
// 0x00B0
struct FCoverLineOfSightData
{
	struct FTransform                                  LocalToWorld;                                             // 0x0000(0x0030) (IsPlainOldData)
	struct FMatrix                                     WorldToLocal;                                             // 0x0030(0x0040) (IsPlainOldData)
	TArray<struct FCoverLineOfSightSectionData>        Sections;                                                 // 0x0070(0x0010) (ZeroConstructor)
	struct FCoverLineOfSightParams                     Params;                                                   // 0x0080(0x0028)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
};

// ScriptStruct GbxAI.CoverSlotViewData
// 0x00C0
struct FCoverSlotViewData
{
	class UCoverViewData*                              View;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FCoverLineOfSightData                       LosData;                                                  // 0x0010(0x00B0)
};

// ScriptStruct GbxAI.CoverSlotViewFailData
// 0x0020
struct FCoverSlotViewFailData
{
	class UCoverViewData*                              View;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ECoverAdjustFailReason                             FailReason;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class FString                                      FailDescription;                                          // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxAI.CoverTransitionStanceFilter
// 0x0018
struct FCoverTransitionStanceFilter
{
	class FString                                      Filter;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
	class UStanceDataProvider*                         Stance;                                                   // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxAI.CoverTransitionFilters
// 0x0050
struct FCoverTransitionFilters
{
	TArray<class FString>                              Use;                                                      // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<class FString>                              Corner;                                                   // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<class FString>                              High;                                                     // 0x0020(0x0010) (Edit, ZeroConstructor)
	TArray<class FString>                              Away;                                                     // 0x0030(0x0010) (Edit, ZeroConstructor)
	TArray<struct FCoverTransitionStanceFilter>        Stances;                                                  // 0x0040(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GbxAI.CoverAction
// 0x0130
struct FCoverAction
{
	class UCoverSlotComponent*                         Slot;                                                     // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCoverStyleData*                             Style;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FCoverUseParams                             Params;                                                   // 0x0018(0x0118)
};

// ScriptStruct GbxAI.CoverClientData
// 0x0028
struct FCoverClientData
{
	class UCoverStyleData*                             Style;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCoverSlotComponent*                         Slot;                                                     // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	ECoverUserState                                    DesiredState;                                             // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FName                                       TransitionName;                                           // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bFlanked;                                                 // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct GbxAI.AITicketUseData
// 0x0108
struct FAITicketUseData
{
	struct FGbxParam                                   Value;                                                    // 0x0000(0x0080) (Edit)
	struct FGbxParam                                   HoldDuration;                                             // 0x0080(0x0080) (Edit)
	class UAITicketDataAsset*                          Ticket;                                                   // 0x0100(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxAI.CoverStyleUserData
// 0x02A8
struct FCoverStyleUserData
{
	class UCoverStyleData*                             Style;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGbxParam                                   Weight;                                                   // 0x0008(0x0080) (Edit)
	bool                                               bOverrideIdleTime;                                        // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	struct FGbxParam                                   IdleTimeOverride;                                         // 0x0090(0x0080) (Edit)
	bool                                               bOverrideFireTime;                                        // 0x0110(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
	struct FGbxParam                                   FireTimeOverride;                                         // 0x0118(0x0080) (Edit)
	struct FAITicketUseData                            TicketData;                                               // 0x0198(0x0108) (Edit)
	class UGbxCondition*                               ForceUseCondition;                                        // 0x02A0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct GbxAI.CoverFaceDirections
// 0x0003
struct FCoverFaceDirections
{
	ECoverFaceDirection                                Low;                                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ECoverFaceDirection                                HighLeft;                                                 // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ECoverFaceDirection                                HighRight;                                                // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxAI.EQSDynamicPointRange
// 0x0010
struct FEQSDynamicPointRange
{
	int                                                MinPoints;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxPoints;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IdealSpacing;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinSpacing;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxAI.SmartGridSearchSet
// 0x00F0
struct FSmartGridSearchSet
{
	struct FName                                       SetName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxPoints;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UClass*                                      Center;                                                   // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyGenerateDensePoints;                                 // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FAIDataProviderFloatValue                   InnerRadius;                                              // 0x0020(0x0030) (Edit)
	struct FAIDataProviderFloatValue                   OuterRadius;                                              // 0x0050(0x0030) (Edit)
	unsigned char                                      bDefineArc : 1;                                           // 0x0080(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	struct FEnvDirection                               ArcDirection;                                             // 0x0088(0x0020) (Edit)
	struct FAIDataProviderFloatValue                   ArcAngle;                                                 // 0x00A8(0x0030) (Edit)
	float                                              PointSeparationDistanceNormal;                            // 0x00D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PointSeparationDistanceDenseSpots;                        // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RadiusApplyDenserSeparation;                              // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	class UClass*                                      DenseSpotProvider;                                        // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxAI.ExtendedTraceInfo
// 0x01D8
struct FExtendedTraceInfo
{
	class FString                                      ReadableName;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      TestComment;                                              // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bDoArcTrace;                                              // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FAIDataProviderFloatValue                   ArcSpeed;                                                 // 0x0028(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ArcAnglePercent;                                          // 0x0058(0x0030) (Edit, DisableEditOnInstance)
	int                                                NumSegments;                                              // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FEnvTraceData                               TraceData;                                                // 0x0090(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      Context;                                                  // 0x00C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EUberTraceMultiTraceRequirement                    MultipleContextRequirement;                               // 0x00C8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	float                                              MaxScoreIfFails;                                          // 0x00CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinScoreIfSucceeds;                                       // 0x00D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStopIfSucceeds;                                          // 0x00D4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStopIfFails;                                             // 0x00D5(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x00D6(0x0002) MISSED OFFSET
	struct FGbxParam                                   PassTestIfTrue;                                           // 0x00D8(0x0080) (Edit, DisableEditOnInstance)
	struct FGbxParam                                   FailTestIfTrue;                                           // 0x0158(0x0080) (Edit, DisableEditOnInstance)
};

// ScriptStruct GbxAI.SmartActionInfoContext
// 0x0030
struct FSmartActionInfoContext
{
	TWeakObjectPtr<class AActor>                       SmartObject;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FSmartActionUseInfo                         UseInfo;                                                  // 0x0008(0x0018)
	struct FVector                                     ContextLoc;                                               // 0x0020(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxAI.CoverHitReactionItem
// 0x0088
struct FCoverHitReactionItem
{
	struct FAnimMeshList                               Anims;                                                    // 0x0000(0x0078) (Edit)
	TArray<class UCoverStyleData*>                     Styles;                                                   // 0x0078(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GbxAI.SmartObjectUseRequest
// 0x0028
struct FSmartObjectUseRequest
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct GbxAI.SmartActionUser
// 0x0010
struct FSmartActionUser
{
	class AController*                                 Controller;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              UseDuration;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	ESmartObjectTaskState                              State;                                                    // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct GbxAI.SmartObjectActionState
// 0x0080
struct FSmartObjectActionState
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FGameplayTag                                ActionTag;                                                // 0x0008(0x0008) (Edit)
	class USmartObjectAction*                          ActionDefinition;                                         // 0x0010(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FColor                                      DebugColor;                                               // 0x0018(0x0004) (Edit, IsPlainOldData)
	float                                              CooldownTime;                                             // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FSmartActionUser>                    Users;                                                    // 0x0020(0x0010) (ZeroConstructor, Transient)
	TMap<class AController*, float>                    CooldownMap;                                              // 0x0030(0x0050) (ZeroConstructor, Transient)
};

// ScriptStruct GbxAI.SmartObjectActionSet
// 0x0020
struct FSmartObjectActionSet
{
	struct FGameplayTagContainer                       Actions;                                                  // 0x0000(0x0020) (Edit, BlueprintVisible)
};

// ScriptStruct GbxAI.SmartObjectPreviewState
// 0x0018 (0x00F0 - 0x00D8)
struct FSmartObjectPreviewState : public FPreviewState
{
	class UAIUseSlotComponent*                         AIUseSlotComponent;                                       // 0x00D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class USpawnFactory*>                       PreviewFactories;                                         // 0x00E0(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxAI.PlanRoleMapping
// 0x0018
struct FPlanRoleMapping
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct GbxAI.RoleController
// 0x000C
struct FRoleController
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct GbxAI.ProximitySource
// 0x000C
struct FProximitySource
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct GbxAI.ThreatSource
// 0x000C
struct FThreatSource
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct GbxAI.ThreatTerritory
// 0x0018
struct FThreatTerritory
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct GbxAI.CoverTransitionData
// 0x0060
struct FCoverTransitionData
{
	class UDataTable*                                  DataTable;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGbxAnimSet*                                 AnimSet;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FCoverTransitionFilters                     Filters;                                                  // 0x0010(0x0050) (Edit)
};

// ScriptStruct GbxAI.CoverTransitionTableRow
// 0x0070 (0x0090 - 0x0020)
struct FCoverTransitionTableRow : public FGbxAnimTableRow
{
	struct FNumericRange                               Angle;                                                    // 0x0020(0x0008) (Edit)
	struct FNumericRange                               Distance;                                                 // 0x0028(0x0008) (Edit)
	float                                              Height;                                                   // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ECoverFaceDirection                                FaceDirection;                                            // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ECoverSlotHeight                                   SlotHeight;                                               // 0x0035(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0036(0x0002) MISSED OFFSET
	TArray<class UCoverStyleData*>                     CoverStyles;                                              // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<class UCoverViewData*>                      ViewsFrom;                                                // 0x0048(0x0010) (Edit, ZeroConstructor)
	TArray<class UCoverViewData*>                      ViewsTo;                                                  // 0x0058(0x0010) (Edit, ZeroConstructor)
	bool                                               bCornerTransition;                                        // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	class UStanceDataProvider*                         Stance;                                                   // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoFill;                                                // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	struct FNumericRange                               AutoFillAngle;                                            // 0x007C(0x0008) (Edit)
	struct FNumericRange                               AutoFillDistance;                                         // 0x0084(0x0008) (Edit)
	unsigned char                                      UnknownData03[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxAI.CoverTransitionInput
// 0x0040
struct FCoverTransitionInput
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct GbxAI.CoverWalk
// 0x00E0
struct FCoverWalk
{
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0000(0x00E0) MISSED OFFSET
};

// ScriptStruct GbxAI.ActionState_CoverHitReaction
// 0x0000 (0x0468 - 0x0468)
struct FActionState_CoverHitReaction : public FActionState_SimpleAnim
{

};

// ScriptStruct GbxAI.ActionState_CoverTransition
// 0x0008 (0x00D0 - 0x00C8)
struct FActionState_CoverTransition : public FActionState_Base
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
};

// ScriptStruct GbxAI.ActionState_Navigation
// 0x0008 (0x0470 - 0x0468)
struct FActionState_Navigation : public FActionState_SimpleAnim
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0468(0x0008) MISSED OFFSET
};

// ScriptStruct GbxAI.ActionState_NavAnim
// 0x0000 (0x0470 - 0x0470)
struct FActionState_NavAnim : public FActionState_Navigation
{

};

// ScriptStruct GbxAI.ActionState_NavJump
// 0x00B0 (0x0520 - 0x0470)
struct FActionState_NavJump : public FActionState_Navigation
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0470(0x00B0) MISSED OFFSET
};

// ScriptStruct GbxAI.ActionState_NavHomingJump
// 0x0040 (0x0560 - 0x0520)
struct FActionState_NavHomingJump : public FActionState_NavJump
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0520(0x0040) MISSED OFFSET
};

// ScriptStruct GbxAI.ReplicatedJumpParams
// 0x001C
struct FReplicatedJumpParams
{
	bool                                               bStarted;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     EndLoc;                                                   // 0x0004(0x000C) (IsPlainOldData)
	struct FVector                                     TargetVel;                                                // 0x0010(0x000C) (IsPlainOldData)
};

// ScriptStruct GbxAI.ActionState_NavLerp
// 0x00C8 (0x0538 - 0x0470)
struct FActionState_NavLerp : public FActionState_Navigation
{
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0470(0x00C8) MISSED OFFSET
};

// ScriptStruct GbxAI.RouteSection
// 0x0010
struct FRouteSection
{
	class AActor*                                      Start;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      End;                                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxAI.SmartAction
// 0x0010
struct FSmartAction
{
	TWeakObjectPtr<class AActor>                       SmartObject;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                ActionTag;                                                // 0x0008(0x0008)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

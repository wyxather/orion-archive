#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_Engine_classes.hpp"
#include "BL3_GbxGameSystemCore_classes.hpp"
#include "BL3_NavigationSystem_classes.hpp"
#include "BL3_GbxRuntime_classes.hpp"
#include "BL3_CoreUObject_classes.hpp"
#include "BL3_AIModule_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GbxNav.EGbxNavMoveStyleDefault
enum class EGbxNavMoveStyleDefault : uint8_t
{
	Strafe                         = 0,
	Forward                        = 1,
	EGbxNavMoveStyleDefault_MAX    = 2
};


// Enum GbxNav.EFlightMovementState
enum class EFlightMovementState : uint8_t
{
	Approach                       = 0,
	Descent                        = 1,
	Ascent                         = 2,
	Exit                           = 3,
	DigistructingOut               = 4,
	EFlightMovementState_MAX       = 5
};


// Enum GbxNav.EGbxNavAnimTableType
enum class EGbxNavAnimTableType : uint8_t
{
	Start                          = 0,
	Stop                           = 1,
	TurnIdle                       = 2,
	TurnMove                       = 3,
	EGbxNavAnimTableType_MAX       = 4
};


// Enum GbxNav.EAvoidWhileIdle
enum class EAvoidWhileIdle : uint8_t
{
	Default                        = 0,
	AvoidWhileIdle                 = 1,
	OnlyAvoidWhileMoving           = 2,
	EAvoidWhileIdle_MAX            = 3
};


// Enum GbxNav.EGbxNavState
enum class EGbxNavState : uint8_t
{
	Idle                           = 0,
	WaitingGoal                    = 1,
	WaitingPath                    = 2,
	Moving                         = 3,
	EGbxNavState_MAX               = 4
};


// Enum GbxNav.EGbxGoalResult
enum class EGbxGoalResult : uint8_t
{
	Failed                         = 0,
	Reached                        = 1,
	Success                        = 2,
	EGbxGoalResult_MAX             = 3
};


// Enum GbxNav.EGbxNavFlyRoundingMode
enum class EGbxNavFlyRoundingMode : uint8_t
{
	RoundToZero                    = 0,
	RoundToNearest                 = 1,
	EGbxNavFlyRoundingMode_MAX     = 2
};


// Enum GbxNav.EGbxNavGoalCheats
enum class EGbxNavGoalCheats : uint8_t
{
	None                           = 0,
	MoveEvenIfUnreachable          = 1,
	ValidEvenIfNoNav               = 2,
	EGbxNavGoalCheats_MAX          = 3
};


// Enum GbxNav.EGbxOffsetType
enum class EGbxOffsetType : uint8_t
{
	Local                          = 0,
	World                          = 1,
	EGbxOffsetType_MAX             = 2
};


// Enum GbxNav.EGbxStrafeType
enum class EGbxStrafeType : uint8_t
{
	Default                        = 0,
	Strafe                         = 1,
	Forward                        = 2,
	EGbxStrafeType_MAX             = 3
};


// Enum GbxNav.EGbxNavGoalReach
enum class EGbxNavGoalReach : uint8_t
{
	Exact                          = 0,
	Pass                           = 1,
	EGbxNavGoalReach_MAX           = 2
};


// Enum GbxNav.EGbxPainterType
enum class EGbxPainterType : uint8_t
{
	Static                         = 0,
	Dynamic                        = 1,
	StaticAndDynamic               = 2,
	EGbxPainterType_MAX            = 3
};


// Enum GbxNav.EGbxPathType
enum class EGbxPathType : uint8_t
{
	None                           = 0,
	Walk                           = 1,
	Fly                            = 2,
	EGbxPathType_MAX               = 3
};


// Enum GbxNav.EGbxUserEdgeDirection
enum class EGbxUserEdgeDirection : uint8_t
{
	Blocked                        = 0,
	AToB                           = 1,
	BToA                           = 2,
	Bidirectional                  = 3,
	EGbxUserEdgeDirection_MAX      = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GbxNav.GbxNavPathingData
// 0x0010
struct FGbxNavPathingData
{
	class UGbxNavAreaData*                             Areas;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UHavokPathFindingData*                       UserEdges;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxNav.GbxNavMovementOptions
// 0x0038
struct FGbxNavMovementOptions
{
	class UHavokPathFindingData*                       PathFindingData;                                          // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FGbxNavPathingData                          PathingData;                                              // 0x0008(0x0010) (Edit)
	EGbxNavMoveStyleDefault                            MoveStyleDefault;                                         // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanReverse;                                              // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	float                                              ReverseGoalDistance;                                      // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanChangePitchWhenStrafeFlying;                          // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              IdleDirectionTime;                                        // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NearUserEdgeTimeThreshold;                                // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UserEdgeEnterDistancePercent;                             // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bMustBeFacingUserEdgeBeforeEntering;                      // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct GbxNav.GbxAvoidanceProperties
// 0x0038
struct FGbxAvoidanceProperties
{
	float                                              WallFollowingAngle;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DodgingPenalty;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VelocityHysteresis;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SidednessChangingPenalty;                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionPenalty;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PenetrationPenalty;                                       // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeedScale;                                            // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SensorSizeScale;                                          // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RadiusScale;                                              // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GoalDistanceOffsetPct;                                    // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DirectionHysteresis;                                      // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSimplifiedAvoiance;                                   // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
};

// ScriptStruct GbxNav.GbxNavAvoidanceOptions
// 0x003C
struct FGbxNavAvoidanceOptions
{
	bool                                               bAvoidanceSteering;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAvoidanceObstacle;                                       // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAvoidPawnsBehindMe;                                      // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAvoidWithNoGoal;                                         // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGbxAvoidanceProperties                     AvoidanceProperties;                                      // 0x0004(0x0038) (Edit)
};

// ScriptStruct GbxNav.GbxNavSlowdownData
// 0x0014
struct FGbxNavSlowdownData
{
	bool                                               bSlowdownNearGoal;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FStanceFloatValue                           SlowdownSpeed;                                            // 0x0004(0x0008) (Edit)
	float                                              SlowdownDistanceMin;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SlowdownDistanceMax;                                      // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxNav.GbxNavAgentProperties
// 0x0060
struct FGbxNavAgentProperties
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
	struct FGbxNavPathingData                          PathingData;                                              // 0x0050(0x0010)
};

// ScriptStruct GbxNav.GbxNavAgent
// 0x00A8
struct FGbxNavAgent
{
	struct FGbxNavAgentProperties                      Props;                                                    // 0x0000(0x0060)
	class AGbxNavWorld*                                GbxNavWorld;                                              // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Context;                                                  // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0070(0x0038) MISSED OFFSET
};

// ScriptStruct GbxNav.GbxNavForwardState
// 0x0128
struct FGbxNavForwardState
{
	float                                              MinSpeedScale;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bScaleSpeed;                                              // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              MaxTurnScale;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bScaleRotation;                                           // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              ScaleInterpTime;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNumericRange                               DistanceRange;                                            // 0x0014(0x0008) (Edit)
	float                                              WallCheckDegreesPerSegment;                               // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinTurnRadius;                                            // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UWorld*                                      World;                                                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class AGbxNavWorld*                                GbxNavWorld;                                              // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGbxNavComponent*                            NavComponent;                                             // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCharacterMovementComponent*              MovementComponent;                                        // 0x0040(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIVehicleFlightComponent*                   VehicleFlightComponent;                                   // 0x0048(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0xD8];                                      // 0x0050(0x00D8) MISSED OFFSET
};

// ScriptStruct GbxNav.GbxNavStuckState
// 0x0068
struct FGbxNavStuckState
{
	class UWorld*                                      World;                                                    // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxNavComponent*                            NavComp;                                                  // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AActor*                                      PathingActor;                                             // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxCharacterMovementComponent*              GbxMoveComp;                                              // 0x0018(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x0020(0x0024) MISSED OFFSET
	float                                              StuckDistance;                                            // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StuckVelocity;                                            // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StuckWaitTime;                                            // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStuckFixEnabled;                                         // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              StuckFixStartTime;                                        // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StuckFixStopTime;                                         // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x005C(0x000C) MISSED OFFSET
};

// ScriptStruct GbxNav.TeleportUserEdgeData
// 0x0050
struct FTeleportUserEdgeData
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
	class UClass*                                      EntryAction;                                              // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      TeleportAction;                                           // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      ExitAction;                                               // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxNav.GbxUserEdgeState
// 0x01A0
struct FGbxUserEdgeState
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
	struct FBasedPosition                              EntryPosition;                                            // 0x0040(0x0038) (Transient)
	struct FBasedPosition                              ExitPosition;                                             // 0x0078(0x0038) (Transient)
	struct FTeleportUserEdgeData                       TeleportData;                                             // 0x00B0(0x0050) (Transient)
	class AGbxNavWorld*                                GbxNavWorld;                                              // 0x0100(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxNavComponent*                            NavComp;                                                  // 0x0108(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UGbxActionComponent*                         GbxActionComp;                                            // 0x0110(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AAIController*                               AIController;                                             // 0x0118(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x80];                                      // 0x0120(0x0080) MISSED OFFSET
};

// ScriptStruct GbxNav.GbxNavCorrecter
// 0x00B8
struct FGbxNavCorrecter
{
	class UWorld*                                      World;                                                    // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AGbxNavWorld*                                GbxNavWorld;                                              // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxNavComponent*                            NavComp;                                                  // 0x0010(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AActor*                                      PathingActor;                                             // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxCharacterMovementComponent*              MoveComp;                                                 // 0x0020(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FNavAgentProperties                         NavAgentProps;                                            // 0x0028(0x0030) (Transient)
	struct FSavedCollision                             SavedCollision;                                           // 0x0058(0x0020) (Transient)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0078(0x0040) MISSED OFFSET
};

// ScriptStruct GbxNav.GbxReachabilityState
// 0x0090
struct FGbxReachabilityState
{
	class AGbxNavWorld*                                GbxNavWorld;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGbxNavComponent*                            NavComp;                                                  // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x80];                                      // 0x0010(0x0080) MISSED OFFSET
};

// ScriptStruct GbxNav.GbxUserEdgeTeleportType
// 0x0020
struct FGbxUserEdgeTeleportType
{
	class UGbxUserEdge*                                EntryEdge;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGbxUserEdge*                                ExitEdge;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      Entry;                                                    // 0x0010(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UClass*                                      Exit;                                                     // 0x0018(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct GbxNav.GbxUserEdgeData
// 0x0010
struct FGbxUserEdgeData
{
	class UHavokUserEdgeComponent*                     Edge;                                                     // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct GbxNav.GbxDynamicUserEdgeInfo
// 0x0050
struct FGbxDynamicUserEdgeInfo
{
	class UGbxNavUserEdgeTrailComponent*               Component;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0008(0x0048) MISSED OFFSET
};

// ScriptStruct GbxNav.GbxUserEdgeManager
// 0x0060
struct FGbxUserEdgeManager
{
	TArray<class UGbxUserEdge*>                        NormalEdgeTypes;                                          // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FGbxUserEdgeTeleportType>            TeleportTypes;                                            // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FGbxUserEdgeData>                    Edges;                                                    // 0x0020(0x0010) (ZeroConstructor, Transient)
	TArray<struct FGbxDynamicUserEdgeInfo>             UserEdgesToAdd;                                           // 0x0030(0x0010) (ZeroConstructor, Transient)
	TArray<uint32_t>                                   UserEdgesToRemove;                                        // 0x0040(0x0010) (ZeroConstructor, Transient)
	TArray<class UClass*>                              NormalTypes;                                              // 0x0050(0x0010) (ZeroConstructor, Deprecated)
};

// ScriptStruct GbxNav.GbxPainterData
// 0x0010
struct FGbxPainterData
{
	class UGbxNavMeshPainterComponent*                 Painter;                                                  // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct GbxNav.GbxPainterManager
// 0x0020
struct FGbxPainterManager
{
	TArray<class UGbxNavArea*>                         NavAreas;                                                 // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FGbxPainterData>                     Painters;                                                 // 0x0010(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct GbxNav.GbxNavStreamingData
// 0x0020
struct FGbxNavStreamingData
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (IsPlainOldData)
	TArray<class UHavokStreamingSet*>                  Sets;                                                     // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxNav.GbxNavLayerItem
// 0x0020
struct FGbxNavLayerItem
{
	class UGbxNavLayer*                                NavLayer;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LayerIdx;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0014(0x0004) (IsPlainOldData)
	class UClass*                                      Layer;                                                    // 0x0018(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct GbxNav.GbxNavLayerState
// 0x0018
struct FGbxNavLayerState
{
	TArray<struct FGbxNavLayerItem>                    Layers;                                                   // 0x0000(0x0010) (ZeroConstructor)
	class AGbxNavWorld*                                GbxNavWorld;                                              // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct GbxNav.GbxReachabilityTracker
// 0x00D0
struct FGbxReachabilityTracker
{
	class AGbxNavWorld*                                GbxNavWorld;                                              // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class USceneComponent*                             CachedSourceRoot;                                         // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CachedGoalRoot;                                           // 0x0010(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0018(0x00B8) MISSED OFFSET
};

// ScriptStruct GbxNav.FlightState
// 0x0028
struct FFlightState
{
	TEnumAsByte<EFlightMovementState>                  CurrentMovementState;                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class AActor*                                      VehicleSplineActor;                                       // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      DropOffSpawner;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              AscentTargetLocationZ;                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    AscentTargetRotation;                                     // 0x001C(0x000C) (IsPlainOldData)
};

// ScriptStruct GbxNav.GbxNavAreaItem
// 0x0018
struct FGbxNavAreaItem
{
	class UGbxNavArea*                                 GbxNavArea;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CostScale;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UClass*                                      NavArea;                                                  // 0x0010(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct GbxNav.GbxPainterItem
// 0x0020
struct FGbxPainterItem
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	class UPrimitiveComponent*                         Component;                                                // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct GbxNav.HavokUserEdgeItem
// 0x0020
struct FHavokUserEdgeItem
{
	class UGbxUserEdge*                                GbxUserEdge;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CostScale;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Action;                                                   // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      UserEdge;                                                 // 0x0018(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct GbxNav.HavokUserEdgeTeleportItem
// 0x0030
struct FHavokUserEdgeTeleportItem
{
	class UGbxUserEdge*                                EntryUserEdge;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGbxUserEdge*                                ExitUserEdge;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CostScale;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UClass*                                      TeleportAction;                                           // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      EntryEdge;                                                // 0x0020(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UClass*                                      ExitEdge;                                                 // 0x0028(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct GbxNav.GbxNavGoalModifiers
// 0x0028
struct FGbxNavGoalModifiers
{
	EGbxOffsetType                                     OffsetType;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     Offset;                                                   // 0x0004(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0010(0x000C) MISSED OFFSET
	bool                                               bAddAgentRadius;                                          // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAddAgentHeight;                                          // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAddGoalRadius;                                           // 0x001E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAddGoalHeight;                                           // 0x001F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAdjustHeightForMelee;                                    // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCenterOnFloor;                                           // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	float                                              VerticalFlyOffset;                                        // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxNav.GbxNavIdleTurnTableRow
// 0x0000 (0x0020 - 0x0020)
struct FGbxNavIdleTurnTableRow : public FGbxAnimTableRow
{

};

// ScriptStruct GbxNav.GbxNavAnimTableRow
// 0x0018 (0x0038 - 0x0020)
struct FGbxNavAnimTableRow : public FGbxAnimTableRow
{
	struct FNumericRange                               Angle;                                                    // 0x0020(0x0008) (Edit)
	bool                                               bCorner;                                                  // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              CornerMaxAngle;                                           // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanStretchRotation;                                      // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoFill;                                                // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct GbxNav.GbxNavBoundsTracker
// 0x0038
struct FGbxNavBoundsTracker
{
	struct FBox                                        Bounds;                                                   // 0x0000(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UPrimitiveComponent*                         PrimitiveComponent;                                       // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FVector>                             HullPoints;                                               // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxNav.GbxNavSectionBounds
// 0x0040
struct FGbxNavSectionBounds
{
	struct FBox                                        WorldBoxBound;                                            // 0x0000(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FVector>                             WorldConvexHullPoints;                                    // 0x0020(0x0010) (ZeroConstructor)
	struct FGuid                                       DominationGuid;                                           // 0x0030(0x0010) (IsPlainOldData)
};

// ScriptStruct GbxNav.HavokUserEdgePreviewItem
// 0x0018
struct FHavokUserEdgePreviewItem
{
	class UClass*                                      ActorClass;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UClass*                                      ForwardAction;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UClass*                                      ReverseAction;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

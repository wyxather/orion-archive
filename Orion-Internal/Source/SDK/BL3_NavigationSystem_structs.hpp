#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_Engine_classes.hpp"
#include "BL3_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum NavigationSystem.EHavokNavMeshVertexSelectionMethod
enum class EHavokNavMeshVertexSelectionMethod : uint8_t
{
	PROPORTIONAL_TO_AREA           = 0,
	PROPORTIONAL_TO_VERTICES       = 1,
	PROPORTIONAL_TO_MAX            = 2
};


// Enum NavigationSystem.EHavokNavMeshWalkableTriangleSeetings
enum class EHavokNavMeshWalkableTriangleSeetings : uint8_t
{
	ONLY_FIX_WALKABLE              = 0,
	PREFER_WALKABLE                = 1,
	PREFER_UNWALKABLE              = 2,
	EHavokNavMeshWalkableTriangleSeetings_MAX = 3
};


// Enum NavigationSystem.EHavokNavMeshCharacterWidthUsage
enum class EHavokNavMeshCharacterWidthUsage : uint8_t
{
	NONE                           = 0,
	BLOCK_EDGES                    = 1,
	SHRINK_NAV_MESH                = 2,
	EHavokNavMeshCharacterWidthUsage_MAX = 3
};


// Enum NavigationSystem.EHavokNavMeshEdgeMatchingMetric
enum class EHavokNavMeshEdgeMatchingMetric : uint8_t
{
	ORDER_BY_OVERLAP               = 0,
	ORDER_BY_DISTANCE              = 1,
	ORDER_BY_MAX                   = 2
};


// Enum NavigationSystem.EHavokNavVolumeCellWidthToResolutionRounding
enum class EHavokNavVolumeCellWidthToResolutionRounding : uint8_t
{
	RoundToZero                    = 0,
	RoundToNearest                 = 1,
	EHavokNavVolumeCellWidthToResolutionRounding_MAX = 2
};


// Enum NavigationSystem.EHavokUserEdgeDirection
enum class EHavokUserEdgeDirection : uint8_t
{
	Blocked                        = 0,
	AToB                           = 1,
	BToA                           = 2,
	Bidirectional                  = 3,
	EHavokUserEdgeDirection_MAX    = 4
};


// Enum NavigationSystem.EHavokNavMaterial
enum class EHavokNavMaterial : uint8_t
{
	Walkable                       = 0,
	Cutting                        = 1,
	WalkableAndCutting             = 2,
	EHavokNavMaterial_MAX          = 3
};


// Enum NavigationSystem.ERuntimeGenerationType
enum class ERuntimeGenerationType : uint8_t
{
	Static                         = 0,
	DynamicModifiersOnly           = 1,
	Dynamic                        = 2,
	LegacyGeneration               = 3,
	ERuntimeGenerationType_MAX     = 4
};


// Enum NavigationSystem.ENavCostDisplay
enum class ENavCostDisplay : uint8_t
{
	TotalCost                      = 0,
	HeuristicOnly                  = 1,
	RealCostOnly                   = 2,
	ENavCostDisplay_MAX            = 3
};


// Enum NavigationSystem.ERecastPartitioning
enum class ERecastPartitioning : uint8_t
{
	Monotone                       = 0,
	Watershed                      = 1,
	ChunkyMonotone                 = 2,
	ERecastPartitioning_MAX        = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NavigationSystem.SupportedAreaData
// 0x0020
struct FSupportedAreaData
{
	class FString                                      AreaClassName;                                            // 0x0000(0x0010) (ZeroConstructor)
	int                                                AreaID;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UClass*                                      AreaClass;                                                // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct NavigationSystem.NavigationFilterArea
// 0x0018
struct FNavigationFilterArea
{
	class UClass*                                      AreaClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TravelCostOverride;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EnteringCostOverride;                                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsExcluded : 1;                                          // 0x0010(0x0001) (Edit)
	unsigned char                                      bOverrideTravelCost : 1;                                  // 0x0010(0x0001) (Edit)
	unsigned char                                      bOverrideEnteringCost : 1;                                // 0x0010(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct NavigationSystem.NavigationFilterFlags
// 0x0004
struct FNavigationFilterFlags
{
	unsigned char                                      bNavFlag0 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag1 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag2 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag3 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag4 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag5 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag6 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag7 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag8 : 1;                                            // 0x0001(0x0001) (Edit)
	unsigned char                                      bNavFlag9 : 1;                                            // 0x0001(0x0001) (Edit)
	unsigned char                                      bNavFlag10 : 1;                                           // 0x0001(0x0001) (Edit)
	unsigned char                                      bNavFlag11 : 1;                                           // 0x0001(0x0001) (Edit)
	unsigned char                                      bNavFlag12 : 1;                                           // 0x0001(0x0001) (Edit)
	unsigned char                                      bNavFlag13 : 1;                                           // 0x0001(0x0001) (Edit)
	unsigned char                                      bNavFlag14 : 1;                                           // 0x0001(0x0001) (Edit)
	unsigned char                                      bNavFlag15 : 1;                                           // 0x0001(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
};

// ScriptStruct NavigationSystem.HavokTraversalAnalysisSettings
// 0x0020
struct FHavokTraversalAnalysisSettings
{
	TArray<class UHavokTraversalType*>                 TraversalTypes;                                           // 0x0000(0x0010) (Edit, ExportObject, ZeroConstructor)
	float                                              MinEdgeLength;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSectionDistance;                                       // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RaiseEdgeHeightLimit;                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct NavigationSystem.HavokNavMeshEdgeMatchingSettings
// 0x0028
struct FHavokNavMeshEdgeMatchingSettings
{
	float                                              MaxStepHeight;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSeparation;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxOverhang;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BehindFaceTolerance;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CosPlanarAlignmentAngle;                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CosVerticalAlignmentAngle;                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinEdgeOverlap;                                           // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EdgeParallelTolerance;                                    // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EdgeTraversibilityHorizontalEpsilon;                      // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseSafeEdgeTraversibilityHorizontalEpsilon : 1;          // 0x0024(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct NavigationSystem.HavokNavMeshRegionPruningSettings
// 0x0014
struct FHavokNavMeshRegionPruningSettings
{
	float                                              MinRegionArea;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDistanceToSeedPoints;                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BorderPreservationTolerance;                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPreserveVerticalBorderRegions : 1;                       // 0x000C(0x0001) (Edit)
	unsigned char                                      bPruneBeforeTriangulation : 1;                            // 0x000C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	bool                                               bUseRegionSeeds;                                          // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct NavigationSystem.HavokNavMeshOverlappingTrianglesSettings
// 0x000C
struct FHavokNavMeshOverlappingTrianglesSettings
{
	float                                              CoplanarityTolerance;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RayCastLengthMultiplier;                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHavokNavMeshWalkableTriangleSeetings> WalkableTriangleSetting;                                  // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct NavigationSystem.HavokNavMeshExtraVertexSettings
// 0x0024
struct FHavokNavMeshExtraVertexSettings
{
	TEnumAsByte<EHavokNavMeshVertexSelectionMethod>    VertexSelectionMethod;                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              VertexFraction;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AreaFraction;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinPartitionArea;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumSmoothingIterations;                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IterationDamping;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAddVerticesOnBoundaryEdges : 1;                          // 0x0018(0x0001) (Edit)
	unsigned char                                      bAddVerticesOnPartitionBorders : 1;                       // 0x0018(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              BoundaryEdgeSplitLength;                                  // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PartitionBordersSplitLength;                              // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NavigationSystem.HavokNavMeshSimplificationSettings
// 0x007C
struct FHavokNavMeshSimplificationSettings
{
	float                                              MaxBorderSimplifyArea;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxConcaveBorderSimlifyArea;                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinCorridorWidth;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxCorridorWidth;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HoleReplacementArea;                                      // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AabbReplacementAreaFraction;                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxLoopShrinkFraction;                                    // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxBorderHeightError;                                     // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxBorderDistanceError;                                   // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxPartitionSize;                                         // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseHeightPartitioning : 1;                               // 0x0028(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              MaxPartitionHeightError;                                  // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseConservativeHeightPartitioning : 1;                   // 0x0030(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              HertelMehlhornHeightError;                                // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CosPlanarityThreshold;                                    // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NonConvexityThreshold;                                    // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BoundaryEdgeFilterThreshold;                              // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSharedVertexHorizontalError;                           // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSharedVertexVerticalError;                             // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxBoundaryVertexHorizontalError;                         // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxBoundaryVertexVerticalError;                           // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bMergeLongestEdgesFirst : 1;                              // 0x0054(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	struct FHavokNavMeshExtraVertexSettings            ExtraVertexSettings;                                      // 0x0058(0x0024) (Edit)
};

// ScriptStruct NavigationSystem.HavokNavVolumeChunkSettings
// 0x0008
struct FHavokNavVolumeChunkSettings
{
	uint16_t                                           MaxChunkSizeX;                                            // 0x0000(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	uint16_t                                           MaxChunkSizeY;                                            // 0x0002(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	uint16_t                                           MaxChunkSizeZ;                                            // 0x0004(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDoGreedyMergeAfterCombine;                               // 0x0006(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0007(0x0001) MISSED OFFSET
};

// ScriptStruct NavigationSystem.HavokNavVolumeBorderSettings
// 0x0008
struct FHavokNavVolumeBorderSettings
{
	float                                              Border;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseBorderCells;                                          // 0x0004(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct NavigationSystem.HavokNavVolumeMergingSettings
// 0x0020
struct FHavokNavVolumeMergingSettings
{
	float                                              NodeWeight;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EdgeWeight;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEstimateNewEdges;                                        // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              IterationsStabilizationThreshold;                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxMergingIterations;                                     // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RandomSeed;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Multiplier;                                               // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSimpleFirstMergePass;                                 // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct NavigationSystem.HavokNavVolumePruningSettings
// 0x0008
struct FHavokNavVolumePruningSettings
{
	float                                              MinRegionVolume;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MinDistanceToSeedPoints;                                  // 0x0004(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
};

// ScriptStruct NavigationSystem.NavCollisionCylinder
// 0x0014
struct FNavCollisionCylinder
{
	struct FVector                                     Offset;                                                   // 0x0000(0x000C) (Edit, IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NavigationSystem.NavCollisionBox
// 0x0018
struct FNavCollisionBox
{
	struct FVector                                     Offset;                                                   // 0x0000(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     Extent;                                                   // 0x000C(0x000C) (Edit, IsPlainOldData)
};

// ScriptStruct NavigationSystem.NavGraphNode
// 0x0018
struct FNavGraphNode
{
	class UObject*                                     Owner;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct NavigationSystem.HavokNavSectionFixedBound
// 0x0048
struct FHavokNavSectionFixedBound
{
	class UClass*                                      Layer;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FBox                                        WorldBoxBound;                                            // 0x0008(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<struct FVector>                             WorldConvexHullPoints;                                    // 0x0028(0x0010) (ZeroConstructor)
	struct FGuid                                       DominationGuid;                                           // 0x0038(0x0010) (IsPlainOldData)
};

// ScriptStruct NavigationSystem.NavGraphEdge
// 0x0018
struct FNavGraphEdge
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_NavigationSystem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class NavigationSystem.NavigationSystemV1
// 0x0400 (0x0428 - 0x0028)
class UNavigationSystemV1 : public UNavigationSystemBase
{
public:
	class ANavigationData*                             MainNavData;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class ANavigationData*                             AbstractNavData;                                          // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      CrowdManagerClass;                                        // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bAutoCreateNavigationData : 1;                            // 0x0040(0x0001) (Edit, Config)
	unsigned char                                      bSpawnNavDataInNavBoundsLevel : 1;                        // 0x0040(0x0001) (Edit, Config)
	unsigned char                                      bAllowClientSideNavigation : 1;                           // 0x0040(0x0001) (Edit, Config)
	unsigned char                                      bShouldDiscardSubLevelNavData : 1;                        // 0x0040(0x0001) (Edit, Config)
	unsigned char                                      bTickWhilePaused : 1;                                     // 0x0040(0x0001) (Edit, Config)
	unsigned char                                      bSupportRebuilding : 1;                                   // 0x0040(0x0001)
	unsigned char                                      bInitialBuildingLocked : 1;                               // 0x0040(0x0001) (Edit, Config)
	unsigned char                                      UnknownData00 : 1;                                        // 0x0040(0x0001)
	unsigned char                                      bSkipAgentHeightCheckWhenPickingNavData : 1;              // 0x0041(0x0001) (Edit, Config)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	ENavDataGatheringModeConfig                        DataGatheringMode;                                        // 0x0044(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	unsigned char                                      bGenerateNavigationOnlyAroundNavigationInvokers : 1;      // 0x0048(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              ActiveTilesUpdateInterval;                                // 0x004C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FNavDataConfig>                      SupportedAgents;                                          // 0x0050(0x0010) (Edit, ZeroConstructor, Config)
	float                                              DirtyAreasUpdateFreq;                                     // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TArray<class ANavigationData*>                     NavDataSet;                                               // 0x0068(0x0010) (ZeroConstructor)
	TArray<class ANavigationData*>                     NavDataRegistrationQueue;                                 // 0x0078(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData05[0x60];                                      // 0x0088(0x0060) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnNavDataRegisteredEvent;                                 // 0x00E8(0x0010) (ZeroConstructor, Transient, InstancedReference)
	struct FScriptMulticastDelegate                    OnNavigationGenerationFinishedDelegate;                   // 0x00F8(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData06[0xCC];                                      // 0x0108(0x00CC) MISSED OFFSET
	EFNavigationSystemRunMode                          OperationMode;                                            // 0x01D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x23B];                                     // 0x01D5(0x023B) MISSED OFFSET
	struct FSoftClassPath                              NavigationDataClassName;                                  // 0x0410(0x0018) (Edit, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationSystemV1");
		return ptr;
	}


	void STATIC_SimpleMoveToLocation(class AController* Controller, const struct FVector& Goal);
	void STATIC_SimpleMoveToActor(class AController* Controller, class AActor* Goal);
	struct FVector STATIC_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent);
	void OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume);
	bool STATIC_K2_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent, struct FVector* ProjectedLocation);
	bool STATIC_K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass, struct FVector* RandomLocation);
	bool STATIC_K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass, struct FVector* RandomLocation);
	struct FVector STATIC_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
	struct FVector STATIC_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
	class UNavigationSystemV1* STATIC_GetNavigationSystem(class UObject* WorldContextObject);
};


// Class NavigationSystem.NavigationData
// 0x01C0 (0x0618 - 0x0458)
class ANavigationData : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0458(0x0008) MISSED OFFSET
	class UPrimitiveComponent*                         RenderingComp;                                            // 0x0460(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	struct FNavDataConfig                              NavDataConfig;                                            // 0x0468(0x0068)
	unsigned char                                      bEnableDrawing : 1;                                       // 0x04D0(0x0001) (Edit, Transient)
	unsigned char                                      bForceRebuildOnLoad : 1;                                  // 0x04D0(0x0001) (Edit, Config)
	unsigned char                                      bCanBeMainNavData : 1;                                    // 0x04D0(0x0001) (Edit, Config, EditConst)
	unsigned char                                      bCanSpawnOnRebuild : 1;                                   // 0x04D0(0x0001) (Edit, Config, EditConst)
	unsigned char                                      bRebuildAtRuntime : 1;                                    // 0x04D0(0x0001) (Config, Deprecated)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04D1(0x0003) MISSED OFFSET
	ERuntimeGenerationType                             RuntimeGeneration;                                        // 0x04D4(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04D5(0x0003) MISSED OFFSET
	float                                              ObservedPathsTickInterval;                                // 0x04D8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           DataVersion;                                              // 0x04DC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xD0];                                      // 0x04E0(0x00D0) MISSED OFFSET
	TArray<struct FSupportedAreaData>                  SupportedAreas;                                           // 0x05B0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x58];                                      // 0x05C0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationData");
		return ptr;
	}

};


// Class NavigationSystem.AbstractNavData
// 0x0000 (0x0618 - 0x0618)
class AAbstractNavData : public ANavigationData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.AbstractNavData");
		return ptr;
	}

};


// Class NavigationSystem.CrowdManagerBase
// 0x0000 (0x0028 - 0x0028)
class UCrowdManagerBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.CrowdManagerBase");
		return ptr;
	}

};


// Class NavigationSystem.HavokNavData
// 0x0000 (0x0028 - 0x0028)
class UHavokNavData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.HavokNavData");
		return ptr;
	}

};


// Class NavigationSystem.NavigationQueryFilter
// 0x0020 (0x0048 - 0x0028)
class UNavigationQueryFilter : public UObject
{
public:
	TArray<struct FNavigationFilterArea>               Areas;                                                    // 0x0028(0x0010) (Edit, ZeroConstructor)
	struct FNavigationFilterFlags                      IncludeFlags;                                             // 0x0038(0x0004) (Edit, IsPlainOldData)
	struct FNavigationFilterFlags                      ExcludeFlags;                                             // 0x003C(0x0004) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationQueryFilter");
		return ptr;
	}

};


// Class NavigationSystem.HavokNavigationQueryFilter
// 0x0000 (0x0048 - 0x0048)
class UHavokNavigationQueryFilter : public UNavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.HavokNavigationQueryFilter");
		return ptr;
	}

};


// Class NavigationSystem.GbxNavLayerBase
// 0x0000 (0x0030 - 0x0030)
class UGbxNavLayerBase : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.GbxNavLayerBase");
		return ptr;
	}

};


// Class NavigationSystem.HavokNavLayer
// 0x0010 (0x0038 - 0x0028)
class UHavokNavLayer : public UHavokNavLayerBase
{
public:
	class UGbxNavLayerBase*                            GbxNavLayer;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      DrawColor;                                                // 0x0030(0x0004) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.HavokNavLayer");
		return ptr;
	}

};


// Class NavigationSystem.HavokNavLayerRegistry
// 0x00E0 (0x0108 - 0x0028)
class UHavokNavLayerRegistry : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0028(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.HavokNavLayerRegistry");
		return ptr;
	}

};


// Class NavigationSystem.HavokNavMesh
// 0x0028 (0x0050 - 0x0028)
class UHavokNavMesh : public UHavokNavData
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.HavokNavMesh");
		return ptr;
	}

};


// Class NavigationSystem.NavTraversalData
// 0x0020 (0x0050 - 0x0030)
class UNavTraversalData : public UDataAsset
{
public:
	struct FHavokTraversalAnalysisSettings             Settings;                                                 // 0x0030(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavTraversalData");
		return ptr;
	}

};


// Class NavigationSystem.HavokNavMeshGenerationSettings
// 0x0160 (0x0188 - 0x0028)
class UHavokNavMeshGenerationSettings : public UObject
{
public:
	float                                              QuantizationGridSize;                                     // 0x0028(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxWalkableSlope;                                         // 0x002C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DegenerateAreaThreshold;                                  // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DegeneratedWidthThreshold;                                // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              ConvexThreshold;                                          // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxNumEdgesPerFace;                                       // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FHavokNavMeshEdgeMatchingSettings           EdgeMatchingSettings;                                     // 0x0040(0x0028) (Edit, Config)
	struct FHavokNavMeshEdgeMatchingSettings           StreamEdgeMatchingSettings;                               // 0x0068(0x0028) (Edit, Config)
	TEnumAsByte<EHavokNavMeshEdgeMatchingMetric>       EdgeMatchingMetric;                                       // 0x0090(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	int                                                EdgeConnectionIterations;                                 // 0x0094(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FHavokNavMeshRegionPruningSettings          RegionPruningSettings;                                    // 0x0098(0x0014) (Edit, Config)
	unsigned char                                      bFixupOverlappingTriangles : 1;                           // 0x00AC(0x0001) (Edit, Config)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	struct FHavokNavMeshOverlappingTrianglesSettings   OverlappingTrianglesSettings;                             // 0x00B0(0x000C) (Edit, Config)
	unsigned char                                      bWeldInputVertices : 1;                                   // 0x00BC(0x0001) (Edit, Config)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	float                                              WeldThreshold;                                            // 0x00C0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bEnableSimplification : 1;                                // 0x00C4(0x0001) (Edit, Config)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET
	struct FHavokNavMeshSimplificationSettings         SimplificationSettings;                                   // 0x00C8(0x007C) (Edit, Config)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0144(0x0004) MISSED OFFSET
	struct FHavokTraversalAnalysisSettings             TraversalAnalysisSettings;                                // 0x0148(0x0020) (Edit, Config)
	struct FSoftObjectPath                             TraversalSettingsName;                                    // 0x0168(0x0018) (Edit, Config)
	unsigned char                                      bSaveInputSnapshot : 1;                                   // 0x0180(0x0001) (Edit, Config)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0181(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.HavokNavMeshGenerationSettings");
		return ptr;
	}

};


// Class NavigationSystem.HavokNavMeshLayer
// 0x0010 (0x0048 - 0x0038)
class UHavokNavMeshLayer : public UHavokNavLayer
{
public:
	float                                              CharacterRadius;                                          // 0x0038(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              CharacterHalfHeight;                                      // 0x003C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              UserEdgeEntryDistance;                                    // 0x0040(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bErodeWidth;                                              // 0x0044(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.HavokNavMeshLayer");
		return ptr;
	}

};


// Class NavigationSystem.HavokNavMeshLayer_Default
// 0x0000 (0x0048 - 0x0048)
class UHavokNavMeshLayer_Default : public UHavokNavMeshLayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.HavokNavMeshLayer_Default");
		return ptr;
	}

};


// Class NavigationSystem.HavokNavVolume
// 0x0018 (0x0040 - 0x0028)
class UHavokNavVolume : public UHavokNavData
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.HavokNavVolume");
		return ptr;
	}

};


// Class NavigationSystem.HavokNavVolumeGenerationSettings
// 0x0040 (0x0068 - 0x0028)
class UHavokNavVolumeGenerationSettings : public UObject
{
public:
	struct FHavokNavVolumeChunkSettings                ChunkSettings;                                            // 0x0028(0x0008) (Edit, Config)
	struct FHavokNavVolumeBorderSettings               BorderSettings;                                           // 0x0030(0x0008) (Edit, Config)
	struct FHavokNavVolumeMergingSettings              MergingSettings;                                          // 0x0038(0x0020) (Edit, Config)
	struct FHavokNavVolumePruningSettings              PruningSettings;                                          // 0x0058(0x0008) (Edit, Config)
	bool                                               bSaveInputSnapshot;                                       // 0x0060(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.HavokNavVolumeGenerationSettings");
		return ptr;
	}

};


// Class NavigationSystem.HavokNavVolumeLayer
// 0x0010 (0x0048 - 0x0038)
class UHavokNavVolumeLayer : public UHavokNavLayer
{
public:
	float                                              CharacterRadius;                                          // 0x0038(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              CellWidth;                                                // 0x003C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EHavokNavVolumeCellWidthToResolutionRounding> ResolutionRoundingMode;                                   // 0x0040(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.HavokNavVolumeLayer");
		return ptr;
	}

};


// Class NavigationSystem.HavokNavVolumeLayer_Default
// 0x0000 (0x0048 - 0x0048)
class UHavokNavVolumeLayer_Default : public UHavokNavVolumeLayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.HavokNavVolumeLayer_Default");
		return ptr;
	}

};


// Class NavigationSystem.HavokTraversalType
// 0x0030 (0x0058 - 0x0028)
class UHavokTraversalType : public UObject
{
public:
	float                                              MaxPlanarAngle;                                           // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxRelativeSlopeAngle;                                    // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BaseCost;                                                 // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<class UGbxNavLayerBase*>                    AssociatedLayers;                                         // 0x0038(0x0010) (Edit, ZeroConstructor)
	class UGbxUserEdgeBase*                            GbxUserEdge;                                              // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      UserEdge;                                                 // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.HavokTraversalType");
		return ptr;
	}

};


// Class NavigationSystem.HavokTraversalType_ClimbUp
// 0x0020 (0x0078 - 0x0058)
class UHavokTraversalType_ClimbUp : public UHavokTraversalType
{
public:
	float                                              MaxUnderhang;                                             // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinUpHeight;                                              // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxUpHeight;                                              // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GrabAngle;                                                // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GrabScanDepth;                                            // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GrabMaxProfileAngle;                                      // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VerticalLipHeight;                                        // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ResolveHangExtraDist;                                     // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.HavokTraversalType_ClimbUp");
		return ptr;
	}

};


// Class NavigationSystem.HavokTraversalType_DropDown
// 0x0018 (0x0070 - 0x0058)
class UHavokTraversalType_DropDown : public UHavokTraversalType
{
public:
	float                                              MinDropDistance;                                          // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDropDistance;                                          // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxUnderhang;                                             // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinUnderhang;                                             // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VerticalLipHeight;                                        // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.HavokTraversalType_DropDown");
		return ptr;
	}

};


// Class NavigationSystem.HavokTraversalType_Jump
// 0x0018 (0x0070 - 0x0058)
class UHavokTraversalType_Jump : public UHavokTraversalType
{
public:
	float                                              MaxHorizontalDistance;                                    // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinHorizontalDistance;                                    // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxUpHeight;                                              // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDownHeight;                                            // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VerticalApex;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.HavokTraversalType_Jump");
		return ptr;
	}

};


// Class NavigationSystem.HavokTraversalType_Vault
// 0x0030 (0x0088 - 0x0058)
class UHavokTraversalType_Vault : public UHavokTraversalType
{
public:
	float                                              MinWallWidth;                                             // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxWallWidth;                                             // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinWallHeight;                                            // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxWallHeight;                                            // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxUpHeight;                                              // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDownHeight;                                            // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VerticalApex;                                             // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HandPlantAngle;                                           // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HandPlantLeftExtent;                                      // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HandPlantRightExtent;                                     // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HandPlantMaxProfileAngle;                                 // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.HavokTraversalType_Vault");
		return ptr;
	}

};


// Class NavigationSystem.GbxUserEdgeBase
// 0x0000 (0x0030 - 0x0030)
class UGbxUserEdgeBase : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.GbxUserEdgeBase");
		return ptr;
	}

};


// Class NavigationSystem.HavokUserEdge
// 0x0048 (0x0070 - 0x0028)
class UHavokUserEdge : public UObject
{
public:
	class UGbxUserEdgeBase*                            GbxUserEdge;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReverseEdge;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      DrawColor;                                                // 0x0038(0x0004) (Edit, IsPlainOldData)
	bool                                               bAlignEdges;                                              // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLimitDistanceMin;                                        // 0x003D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
	float                                              DistanceMin;                                              // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLimitDistanceMax;                                        // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              DistanceMax;                                              // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLimitHeightMin;                                          // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	float                                              HeightMin;                                                // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLimitHeightMax;                                          // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	float                                              HeightMax;                                                // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bZeroWidthEntry;                                          // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bZeroWidthExit;                                           // 0x005D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTeleportEntry;                                           // 0x005E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTeleportExit;                                            // 0x005F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              TeleportEdges;                                            // 0x0060(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.HavokUserEdge");
		return ptr;
	}

};


// Class NavigationSystem.NavArea
// 0x0040 (0x0070 - 0x0030)
class UNavArea : public UNavAreaBase
{
public:
	float                                              DefaultCost;                                              // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              FixedAreaEnteringCost;                                    // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FColor                                      DrawColor;                                                // 0x0038(0x0004) (Edit, Config, IsPlainOldData)
	struct FNavAgentSelector                           SupportedAgents;                                          // 0x003C(0x0004) (Edit, Config)
	unsigned char                                      bSupportsAgent0 : 1;                                      // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent1 : 1;                                      // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent2 : 1;                                      // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent3 : 1;                                      // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent4 : 1;                                      // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent5 : 1;                                      // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent6 : 1;                                      // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent7 : 1;                                      // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent8 : 1;                                      // 0x0041(0x0001) (Config)
	unsigned char                                      bSupportsAgent9 : 1;                                      // 0x0041(0x0001) (Config)
	unsigned char                                      bSupportsAgent10 : 1;                                     // 0x0041(0x0001) (Config)
	unsigned char                                      bSupportsAgent11 : 1;                                     // 0x0041(0x0001) (Config)
	unsigned char                                      bSupportsAgent12 : 1;                                     // 0x0041(0x0001) (Config)
	unsigned char                                      bSupportsAgent13 : 1;                                     // 0x0041(0x0001) (Config)
	unsigned char                                      bSupportsAgent14 : 1;                                     // 0x0041(0x0001) (Config)
	unsigned char                                      bSupportsAgent15 : 1;                                     // 0x0041(0x0001) (Config)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	class UObject*                                     GbxNavArea;                                               // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EHavokNavMaterial                                  HavokNavMaterial;                                         // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	TArray<class UGbxNavLayerBase*>                    IgnoreLayers;                                             // 0x0058(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      EffectiveArea;                                            // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea");
		return ptr;
	}

};


// Class NavigationSystem.NavArea_Default
// 0x0000 (0x0070 - 0x0070)
class UNavArea_Default : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea_Default");
		return ptr;
	}

};


// Class NavigationSystem.NavArea_LowHeight
// 0x0000 (0x0070 - 0x0070)
class UNavArea_LowHeight : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea_LowHeight");
		return ptr;
	}

};


// Class NavigationSystem.NavArea_Null
// 0x0000 (0x0070 - 0x0070)
class UNavArea_Null : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea_Null");
		return ptr;
	}

};


// Class NavigationSystem.NavArea_Obstacle
// 0x0000 (0x0070 - 0x0070)
class UNavArea_Obstacle : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea_Obstacle");
		return ptr;
	}

};


// Class NavigationSystem.NavAreaMeta
// 0x0000 (0x0070 - 0x0070)
class UNavAreaMeta : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavAreaMeta");
		return ptr;
	}

};


// Class NavigationSystem.NavAreaMeta_SwitchByAgent
// 0x0080 (0x00F0 - 0x0070)
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{
public:
	class UClass*                                      Agent0Area;                                               // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent1Area;                                               // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent2Area;                                               // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent3Area;                                               // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent4Area;                                               // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent5Area;                                               // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent6Area;                                               // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent7Area;                                               // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent8Area;                                               // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent9Area;                                               // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent10Area;                                              // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent11Area;                                              // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent12Area;                                              // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent13Area;                                              // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent14Area;                                              // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Agent15Area;                                              // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavAreaMeta_SwitchByAgent");
		return ptr;
	}

};


// Class NavigationSystem.NavCollision
// 0x0068 (0x00D8 - 0x0070)
class UNavCollision : public UNavCollisionBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET
	TArray<struct FNavCollisionCylinder>               CylinderCollision;                                        // 0x0080(0x0010) (Edit, ZeroConstructor)
	TArray<struct FNavCollisionBox>                    BoxCollision;                                             // 0x0090(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      AreaClass;                                                // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bGatherConvexGeometry : 1;                                // 0x00A8(0x0001) (Edit, Config)
	unsigned char                                      UnknownData01[0x2F];                                      // 0x00A9(0x002F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavCollision");
		return ptr;
	}

};


// Class NavigationSystem.NavigationGraph
// 0x0000 (0x0618 - 0x0618)
class ANavigationGraph : public ANavigationData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationGraph");
		return ptr;
	}

};


// Class NavigationSystem.NavigationGraphNode
// 0x0000 (0x0458 - 0x0458)
class ANavigationGraphNode : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationGraphNode");
		return ptr;
	}

};


// Class NavigationSystem.NavigationGraphNodeComponent
// 0x0030 (0x0300 - 0x02D0)
class UNavigationGraphNodeComponent : public USceneComponent
{
public:
	struct FNavGraphNode                               Node;                                                     // 0x02D0(0x0018)
	class UNavigationGraphNodeComponent*               NextNodeComponent;                                        // 0x02E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNavigationGraphNodeComponent*               PrevNodeComponent;                                        // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationGraphNodeComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavigationInvokerComponent
// 0x0008 (0x0180 - 0x0178)
class UNavigationInvokerComponent : public UActorComponent
{
public:
	float                                              TileGenerationRadius;                                     // 0x0178(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TileRemovalRadius;                                        // 0x017C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationInvokerComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavigationPath
// 0x0060 (0x0088 - 0x0028)
class UNavigationPath : public UObject
{
public:
	struct FScriptMulticastDelegate                    PathUpdatedNotifier;                                      // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FVector>                             PathPoints;                                               // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TEnumAsByte<ENavigationOptionFlag>                 RecalculateOnInvalidation;                                // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3F];                                      // 0x0049(0x003F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationPath");
		return ptr;
	}


	bool IsValid();
	bool IsStringPulled();
	bool IsPartial();
	float GetPathLength();
	float GetPathCost();
	class FString GetDebugString();
	void EnableRecalculationOnInvalidation(TEnumAsByte<ENavigationOptionFlag> DoRecalculation);
	void EnableDebugDrawing(bool bShouldDrawDebugData, const struct FLinearColor& PathColor);
};


// Class NavigationSystem.NavigationPathGenerator
// 0x0000 (0x0028 - 0x0028)
class UNavigationPathGenerator : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationPathGenerator");
		return ptr;
	}

};


// Class NavigationSystem.NavigationSystemModuleConfig
// 0x0008 (0x0048 - 0x0040)
class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{
public:
	unsigned char                                      bStrictlyStatic : 1;                                      // 0x0040(0x0001) (Edit)
	unsigned char                                      bCreateOnClient : 1;                                      // 0x0040(0x0001) (Edit)
	unsigned char                                      bAutoSpawnMissingNavData : 1;                             // 0x0040(0x0001) (Edit)
	unsigned char                                      bSpawnNavDataInNavBoundsLevel : 1;                        // 0x0040(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationSystemModuleConfig");
		return ptr;
	}

};


// Class NavigationSystem.NavigationTestingActor
// 0x00E8 (0x0540 - 0x0458)
class ANavigationTestingActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0458(0x0010) MISSED OFFSET
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x0468(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNavigationInvokerComponent*                 InvokerComponent;                                         // 0x0470(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      bActAsNavigationInvoker : 1;                              // 0x0478(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0479(0x0007) MISSED OFFSET
	struct FNavAgentProperties                         NavAgentProps;                                            // 0x0480(0x0030) (Edit)
	struct FVector                                     QueryingExtent;                                           // 0x04B0(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04BC(0x0004) MISSED OFFSET
	class ANavigationData*                             MyNavData;                                                // 0x04C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     ProjectedLocation;                                        // 0x04C8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	unsigned char                                      bProjectedLocationValid : 1;                              // 0x04D4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      bSearchStart : 1;                                         // 0x04D4(0x0001) (Edit)
	unsigned char                                      bUseHierarchicalPathfinding : 1;                          // 0x04D4(0x0001) (Edit)
	unsigned char                                      bGatherDetailedInfo : 1;                                  // 0x04D4(0x0001) (Edit)
	unsigned char                                      bDrawDistanceToWall : 1;                                  // 0x04D4(0x0001) (Edit)
	unsigned char                                      bShowNodePool : 1;                                        // 0x04D4(0x0001) (Edit)
	unsigned char                                      bShowBestPath : 1;                                        // 0x04D4(0x0001) (Edit)
	unsigned char                                      bShowDiffWithPreviousStep : 1;                            // 0x04D4(0x0001) (Edit)
	unsigned char                                      bShouldBeVisibleInGame : 1;                               // 0x04D5(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x2];                                       // 0x04D6(0x0002) MISSED OFFSET
	TEnumAsByte<ENavCostDisplay>                       CostDisplayMode;                                          // 0x04D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x04D9(0x0003) MISSED OFFSET
	struct FVector2D                                   TextCanvasOffset;                                         // 0x04DC(0x0008) (Edit, IsPlainOldData)
	unsigned char                                      bPathExist : 1;                                           // 0x04E4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst)
	unsigned char                                      bPathIsPartial : 1;                                       // 0x04E4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst)
	unsigned char                                      bPathSearchOutOfNodes : 1;                                // 0x04E4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst)
	unsigned char                                      UnknownData05[0x3];                                       // 0x04E5(0x0003) MISSED OFFSET
	float                                              PathfindingTime;                                          // 0x04E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	float                                              PathCost;                                                 // 0x04EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	int                                                PathfindingSteps;                                         // 0x04F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x04F4(0x0004) MISSED OFFSET
	class ANavigationTestingActor*                     OtherActor;                                               // 0x04F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // 0x0500(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ShowStepIndex;                                            // 0x0508(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData)
	float                                              OffsetFromCornersDistance;                                // 0x050C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x30];                                      // 0x0510(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationTestingActor");
		return ptr;
	}

};


// Class NavigationSystem.NavLinkComponent
// 0x0020 (0x0710 - 0x06F0)
class UNavLinkComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x06F0(0x0008) MISSED OFFSET
	TArray<struct FNavigationLink>                     Links;                                                    // 0x06F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0708(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavRelevantComponent
// 0x0030 (0x01A8 - 0x0178)
class UNavRelevantComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0178(0x0024) MISSED OFFSET
	unsigned char                                      bAttachToOwnersRoot : 1;                                  // 0x019C(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	class UObject*                                     CachedNavParent;                                          // 0x01A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavRelevantComponent");
		return ptr;
	}


	void SetNavigationRelevancy(bool bRelevant);
};


// Class NavigationSystem.NavLinkCustomComponent
// 0x00A8 (0x0250 - 0x01A8)
class UNavLinkCustomComponent : public UNavRelevantComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01A8(0x0008) MISSED OFFSET
	uint32_t                                           NavLinkUserId;                                            // 0x01B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01B4(0x0004) MISSED OFFSET
	class UClass*                                      EnabledAreaClass;                                         // 0x01B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DisabledAreaClass;                                        // 0x01C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinkRelativeStart;                                        // 0x01C8(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     LinkRelativeEnd;                                          // 0x01D4(0x000C) (Edit, IsPlainOldData)
	TEnumAsByte<ENavLinkDirection>                     LinkDirection;                                            // 0x01E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01E1(0x0003) MISSED OFFSET
	unsigned char                                      bLinkEnabled : 1;                                         // 0x01E4(0x0001) (Edit)
	unsigned char                                      bNotifyWhenEnabled : 1;                                   // 0x01E4(0x0001) (Edit)
	unsigned char                                      bNotifyWhenDisabled : 1;                                  // 0x01E4(0x0001) (Edit)
	unsigned char                                      bCreateBoxObstacle : 1;                                   // 0x01E4(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x01E5(0x0003) MISSED OFFSET
	struct FVector                                     ObstacleOffset;                                           // 0x01E8(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     ObstacleExtent;                                           // 0x01F4(0x000C) (Edit, IsPlainOldData)
	class UClass*                                      ObstacleAreaClass;                                        // 0x0200(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BroadcastRadius;                                          // 0x0208(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BroadcastInterval;                                        // 0x020C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     BroadcastChannel;                                         // 0x0210(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3F];                                      // 0x0211(0x003F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkCustomComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavLinkCustomInterface
// 0x0000 (0x0028 - 0x0028)
class UNavLinkCustomInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkCustomInterface");
		return ptr;
	}

};


// Class NavigationSystem.NavLinkHostInterface
// 0x0000 (0x0028 - 0x0028)
class UNavLinkHostInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkHostInterface");
		return ptr;
	}

};


// Class NavigationSystem.NavLinkRenderingComponent
// 0x0000 (0x06F0 - 0x06F0)
class UNavLinkRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkRenderingComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavLinkTrivial
// 0x0000 (0x0050 - 0x0050)
class UNavLinkTrivial : public UNavLinkDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkTrivial");
		return ptr;
	}

};


// Class NavigationSystem.NavMeshBoundsVolume
// 0x0008 (0x0498 - 0x0490)
class ANavMeshBoundsVolume : public AVolume
{
public:
	struct FNavAgentSelector                           SupportedAgents;                                          // 0x0490(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0494(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavMeshBoundsVolume");
		return ptr;
	}

};


// Class NavigationSystem.NavMeshRenderingComponent
// 0x0010 (0x0700 - 0x06F0)
class UNavMeshRenderingComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x06F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavMeshRenderingComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavModifierComponent
// 0x0028 (0x01D0 - 0x01A8)
class UNavModifierComponent : public UNavRelevantComponent
{
public:
	class UClass*                                      AreaClass;                                                // 0x01A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FailsafeExtent;                                           // 0x01B0(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      bIncludeAgentHeight : 1;                                  // 0x01BC(0x0001) (Edit, Config)
	unsigned char                                      UnknownData00[0x13];                                      // 0x01BD(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavModifierComponent");
		return ptr;
	}


	void SetAreaClass(class UClass* NewAreaClass);
};


// Class NavigationSystem.NavModifierVolume
// 0x0010 (0x04A0 - 0x0490)
class ANavModifierVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0490(0x0008) MISSED OFFSET
	class UClass*                                      AreaClass;                                                // 0x0498(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavModifierVolume");
		return ptr;
	}


	void SetAreaClass(class UClass* NewAreaClass);
};


// Class NavigationSystem.NavNodeInterface
// 0x0000 (0x0028 - 0x0028)
class UNavNodeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavNodeInterface");
		return ptr;
	}

};


// Class NavigationSystem.NavTestRenderingComponent
// 0x0000 (0x06F0 - 0x06F0)
class UNavTestRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavTestRenderingComponent");
		return ptr;
	}

};


// Class NavigationSystem.RecastFilter_UseDefaultArea
// 0x0000 (0x0048 - 0x0048)
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.RecastFilter_UseDefaultArea");
		return ptr;
	}

};


// Class NavigationSystem.RecastNavMesh
// 0x0090 (0x06A8 - 0x0618)
class ARecastNavMesh : public ANavigationData
{
public:
	unsigned char                                      bDrawTriangleEdges : 1;                                   // 0x0618(0x0001) (Edit)
	unsigned char                                      bDrawPolyEdges : 1;                                       // 0x0618(0x0001) (Edit, Config)
	unsigned char                                      bDrawFilledPolys : 1;                                     // 0x0618(0x0001) (Edit)
	unsigned char                                      bDrawNavMeshEdges : 1;                                    // 0x0618(0x0001) (Edit)
	unsigned char                                      bDrawTileBounds : 1;                                      // 0x0618(0x0001) (Edit)
	unsigned char                                      bDrawPathCollidingGeometry : 1;                           // 0x0618(0x0001) (Edit)
	unsigned char                                      bDrawTileLabels : 1;                                      // 0x0618(0x0001) (Edit)
	unsigned char                                      bDrawPolygonLabels : 1;                                   // 0x0618(0x0001) (Edit)
	unsigned char                                      bDrawDefaultPolygonCost : 1;                              // 0x0619(0x0001) (Edit)
	unsigned char                                      bDrawLabelsOnPathNodes : 1;                               // 0x0619(0x0001) (Edit)
	unsigned char                                      bDrawNavLinks : 1;                                        // 0x0619(0x0001) (Edit)
	unsigned char                                      bDrawFailedNavLinks : 1;                                  // 0x0619(0x0001) (Edit)
	unsigned char                                      bDrawClusters : 1;                                        // 0x0619(0x0001) (Edit)
	unsigned char                                      bDrawOctree : 1;                                          // 0x0619(0x0001) (Edit)
	unsigned char                                      bDrawOctreeDetails : 1;                                   // 0x0619(0x0001) (Edit)
	unsigned char                                      bDistinctlyDrawTilesBeingBuilt : 1;                       // 0x0619(0x0001) (Config)
	unsigned char                                      bDrawNavMesh : 1;                                         // 0x061A(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x1];                                       // 0x061B(0x0001) MISSED OFFSET
	float                                              DrawOffset;                                               // 0x061C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bFixedTilePoolSize : 1;                                   // 0x0620(0x0001) (Edit, Config)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0621(0x0003) MISSED OFFSET
	int                                                TilePoolSize;                                             // 0x0624(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              TileSizeUU;                                               // 0x0628(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CellSize;                                                 // 0x062C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CellHeight;                                               // 0x0630(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AgentRadius;                                              // 0x0634(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AgentHeight;                                              // 0x0638(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AgentMaxHeight;                                           // 0x063C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AgentMaxSlope;                                            // 0x0640(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AgentMaxStepHeight;                                       // 0x0644(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MinRegionArea;                                            // 0x0648(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MergeRegionSize;                                          // 0x064C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxSimplificationError;                                   // 0x0650(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxSimultaneousTileGenerationJobsCount;                   // 0x0654(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                TileNumberHardLimit;                                      // 0x0658(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                PolyRefTileBits;                                          // 0x065C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                PolyRefNavPolyBits;                                       // 0x0660(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                PolyRefSaltBits;                                          // 0x0664(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              DefaultDrawDistance;                                      // 0x0668(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultMaxSearchNodes;                                    // 0x066C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultMaxHierarchicalSearchNodes;                        // 0x0670(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ERecastPartitioning>                   RegionPartitioning;                                       // 0x0674(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ERecastPartitioning>                   LayerPartitioning;                                        // 0x0675(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0676(0x0002) MISSED OFFSET
	int                                                RegionChunkSplits;                                        // 0x0678(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                LayerChunkSplits;                                         // 0x067C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bSortNavigationAreasByCost : 1;                           // 0x0680(0x0001) (Edit, Config)
	unsigned char                                      bPerformVoxelFiltering : 1;                               // 0x0680(0x0001) (Edit, Config)
	unsigned char                                      bMarkLowHeightAreas : 1;                                  // 0x0680(0x0001) (Edit, Config)
	unsigned char                                      bFilterLowSpanSequences : 1;                              // 0x0680(0x0001) (Edit, Config)
	unsigned char                                      bFilterLowSpanFromTileCache : 1;                          // 0x0680(0x0001) (Edit, Config)
	unsigned char                                      bDoFullyAsyncNavDataGathering : 1;                        // 0x0680(0x0001) (Edit, Config)
	unsigned char                                      bUseBetterOffsetsFromCorners : 1;                         // 0x0680(0x0001) (Config)
	unsigned char                                      bStoreEmptyTileLayers : 1;                                // 0x0680(0x0001) (Config)
	unsigned char                                      bUseVirtualFilters : 1;                                   // 0x0681(0x0001) (Config)
	unsigned char                                      bAllowNavLinkAsPathEnd : 1;                               // 0x0681(0x0001) (Config)
	unsigned char                                      bUseVoxelCache : 1;                                       // 0x0681(0x0001) (Config)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0682(0x0002) MISSED OFFSET
	float                                              TileSetUpdateInterval;                                    // 0x0684(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              HeuristicScale;                                           // 0x0688(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              VerticalDeviationFromGroundCompensation;                  // 0x068C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x18];                                      // 0x0690(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.RecastNavMesh");
		return ptr;
	}

};


// Class NavigationSystem.RecastNavMeshDataChunk
// 0x0010 (0x0040 - 0x0030)
class URecastNavMeshDataChunk : public UNavigationDataChunk
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.RecastNavMeshDataChunk");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

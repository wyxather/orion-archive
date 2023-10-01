#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxNav_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GbxNav.GbxNavSystem
// 0x0010 (0x0438 - 0x0428)
class UGbxNavSystem : public UNavigationSystemV1
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0428(0x0008) MISSED OFFSET
	class AGbxNavWorld*                                GbxNavWorld;                                              // 0x0430(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.GbxNavSystem");
		return ptr;
	}

};


// Class GbxNav.GbxNavCharacterMovementComponent
// 0x0210 (0x2890 - 0x2680)
class UGbxNavCharacterMovementComponent : public UGbxCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x2680(0x0090) MISSED OFFSET
	struct FGbxNavMovementOptions                      NavMovementOptions;                                       // 0x2710(0x0038) (Edit)
	float                                              NavClientPopDistance;                                     // 0x2748(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGbxNavAvoidanceOptions                     NavAvoidanceOptions;                                      // 0x274C(0x003C) (Edit)
	struct FGbxNavSlowdownData                         NavSlowdownOptions;                                       // 0x2788(0x0014) (Edit)
	bool                                               bOverrideSlowdownNearGoal;                                // 0x279C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x279D(0x0003) MISSED OFFSET
	struct FStanceFloatValue                           SlowdownSpeedOverride;                                    // 0x27A0(0x0008) (Transient)
	class AGbxNavWorld*                                GbxNavWorld;                                              // 0x27A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxNavComponent*                            GbxNavComponent;                                          // 0x27B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FGbxNavAgent                                Agent;                                                    // 0x27B8(0x00A8) (Transient)
	struct FGbxNavPathingData                          PathingData;                                              // 0x2860(0x0010) (Net, Transient)
	class UGbxNavMeshLayer*                            ForcedNavMeshLayer;                                       // 0x2870(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x2878(0x0004) MISSED OFFSET
	bool                                               bOverrideMaxAcceleration;                                 // 0x287C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x287D(0x0003) MISSED OFFSET
	float                                              StanceMaxAcceleration;                                    // 0x2880(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x2884(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.GbxNavCharacterMovementComponent");
		return ptr;
	}

};


// Class GbxNav.GbxNavComponent
// 0x0978 (0x0AF0 - 0x0178)
class UGbxNavComponent : public UNavComponent
{
public:
	unsigned char                                      UnknownData00[0x3B0];                                     // 0x0178(0x03B0) MISSED OFFSET
	struct FGbxNavForwardState                         ForwardState;                                             // 0x0528(0x0128) (Edit)
	struct FGbxNavStuckState                           StuckState;                                               // 0x0650(0x0068) (Edit)
	class AGbxNavWorld*                                GbxNavWorld;                                              // 0x06B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UHavokMovementData*                          OverrideMovementData;                                     // 0x06C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UHavokPathFindingData*                       OverridePathFindingData;                                  // 0x06C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UCapsuleComponent*                           MyCapsule;                                                // 0x06D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AAIController*                               MyAIController;                                           // 0x06D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxNavCharacterMovementComponent*           MyMovement;                                               // 0x06E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FGbxNavAgent                                Agent;                                                    // 0x06E8(0x00A8) (Transient)
	struct FGbxUserEdgeState                           UserEdgeState;                                            // 0x0790(0x01A0) (Transient)
	struct FGbxNavCorrecter                            NavCorrecter;                                             // 0x0930(0x00B8) (Transient)
	struct FGbxReachabilityState                       Reachability;                                             // 0x09E8(0x0090) (Transient)
	struct FGbxNavMovementOptions                      MovementOptions;                                          // 0x0A78(0x0038) (Transient)
	struct FGbxNavAvoidanceOptions                     AvoidanceOptions;                                         // 0x0AB0(0x003C) (Transient)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0AEC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.GbxNavComponent");
		return ptr;
	}


	void TryMoving(float fDuration);
	void SetPathFindingData(class UHavokPathFindingData* NewPathFindingData);
	void ResetPathFindingData();
	class UHavokPathFindingData* GetPathFindingData();
};


// Class GbxNav.GbxNavWorld
// 0x0568 (0x0B80 - 0x0618)
class AGbxNavWorld : public ANavigationData
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0618(0x0048) MISSED OFFSET
	struct FGbxUserEdgeManager                         UserEdgeManager;                                          // 0x0660(0x0060)
	struct FGbxPainterManager                          PainterManager;                                           // 0x06C0(0x0020)
	struct FGbxNavStreamingData                        FlyStreamingData;                                         // 0x06E0(0x0020)
	struct FGbxNavStreamingData                        MeshStreamingData;                                        // 0x0700(0x0020)
	struct FGbxNavLayerState                           MeshLayers;                                               // 0x0720(0x0018)
	struct FGbxNavLayerState                           FlyLayers;                                                // 0x0738(0x0018)
	class UGbxNavComponent*                            ReachabilityBuilding;                                     // 0x0750(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UGbxNavComponent*>                    ReachabilityQueue;                                        // 0x0758(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UGbxNavComponent*>                    NavComps;                                                 // 0x0768(0x0010) (ExportObject, ZeroConstructor, Transient)
	struct FGbxReachabilityTracker                     ReachabilityTracker;                                      // 0x0778(0x00D0) (Transient)
	int                                                MaxClearanceFillsPerStep;                                 // 0x0848(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxClearanceChecksPerStep;                                // 0x084C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAsyncProcessingEnabled;                                  // 0x0850(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAsyncAgentUpdatesEnabled;                                // 0x0851(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0852(0x0006) MISSED OFFSET
	struct FSoftObjectPath                             DefaultMeshLayer;                                         // 0x0858(0x0018) (Config)
	struct FSoftObjectPath                             DefaultFlyLayer;                                          // 0x0870(0x0018) (Config)
	struct FSoftObjectPath                             DefaultNavArea;                                           // 0x0888(0x0018) (Config)
	struct FSoftObjectPath                             NullNavArea;                                              // 0x08A0(0x0018) (Config)
	TArray<struct FSoftObjectPath>                     AllNavAreas;                                              // 0x08B8(0x0010) (ZeroConstructor, Config)
	TArray<class UGbxNavArea*>                         LoadedAllNavAreas;                                        // 0x08C8(0x0010) (ZeroConstructor, Transient)
	TArray<class UGbxNavSectionComponent*>             SectionsWithDirtyTransforms;                              // 0x08D8(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x268];                                     // 0x08E8(0x0268) MISSED OFFSET
	class UHavokNavMeshGenerationSettings*             MeshGenSettings;                                          // 0x0B50(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UHavokNavVolumeGenerationSettings*           VolumeGenSettings;                                        // 0x0B58(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x20];                                      // 0x0B60(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.GbxNavWorld");
		return ptr;
	}

};


// Class GbxNav.AIVehicleFlightComponent
// 0x0090 (0x02C0 - 0x0230)
class UAIVehicleFlightComponent : public UFloatingPawnMovement
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0230(0x0010) MISSED OFFSET
	struct FRotator                                    RotationRate;                                             // 0x0240(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x024C(0x0004) MISSED OFFSET
	class UGbxNavComponent*                            GbxNavComponent;                                          // 0x0250(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0258(0x000C) MISSED OFFSET
	float                                              VelocityScaleDuringDescent;                               // 0x0264(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RotationScaleDuringDescent;                               // 0x0268(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LateralDistanceToStartDescent;                            // 0x026C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VelocityScaleDuringAscent;                                // 0x0270(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RotationScaleDuringAscent;                                // 0x0274(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxPitchInDegrees;                                        // 0x0278(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxRollInDegrees;                                         // 0x027C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFlightState                                FlightState;                                              // 0x0280(0x0028) (Net)
	unsigned char                                      UnknownData03[0x18];                                      // 0x02A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.AIVehicleFlightComponent");
		return ptr;
	}


	void OnRep_FlightState();
};


// Class GbxNav.GbxNavAnimTable
// 0x0010 (0x0058 - 0x0048)
class UGbxNavAnimTable : public UGbxAnimTable
{
public:
	EGbxNavAnimTableType                               Type;                                                     // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              MinStopDistance;                                          // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxInterpDistance;                                        // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AutoFillAngle;                                            // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.GbxNavAnimTable");
		return ptr;
	}

};


// Class GbxNav.GbxAnimStateManager_AINav
// 0x0058 (0x0090 - 0x0038)
class UGbxAnimStateManager_AINav : public UGbxAnimStateManager
{
public:
	ENavAnimState                                      Type;                                                     // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	class UGbxNavAnimTable*                            AnimTable;                                                // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAnimActionDef                              BlendSpaceRef;                                            // 0x0048(0x0018) (Edit)
	class UGbxCharacterAnimInstance*                   GbxCharAnimInstance;                                      // 0x0060(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxCharacterMovementComponent*              GbxCharMoveComponent;                                     // 0x0068(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UBlendSpaceBase*                             ResolvedBlendSpace;                                       // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ResolvedBlendSpaceYawMin;                                 // 0x0078(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ResolvedBlendSpaceYawMax;                                 // 0x007C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UBlendSpaceBase*                             BlendSpace;                                               // 0x0080(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.GbxAnimStateManager_AINav");
		return ptr;
	}


	void Owner_PostBeginPlay();
};


// Class GbxNav.GbxAnimStateManager_NavIdle
// 0x0000 (0x0038 - 0x0038)
class UGbxAnimStateManager_NavIdle : public UGbxAnimStateManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.GbxAnimStateManager_NavIdle");
		return ptr;
	}

};


// Class GbxNav.GbxNavIdleTurnTable
// 0x0000 (0x0048 - 0x0048)
class UGbxNavIdleTurnTable : public UGbxAnimTable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.GbxNavIdleTurnTable");
		return ptr;
	}

};


// Class GbxNav.GbxAnimStateManager_NavIdleTurn
// 0x0000 (0x0040 - 0x0040)
class UGbxAnimStateManager_NavIdleTurn : public UGbxAnimStateManager_RootMotion
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.GbxAnimStateManager_NavIdleTurn");
		return ptr;
	}

};


// Class GbxNav.GbxAnimStateManager_NavTable
// 0x0000 (0x0040 - 0x0040)
class UGbxAnimStateManager_NavTable : public UGbxAnimStateManager_NavIdleTurn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.GbxAnimStateManager_NavTable");
		return ptr;
	}

};


// Class GbxNav.GbxAnimStateManager_NavHop
// 0x0000 (0x0040 - 0x0040)
class UGbxAnimStateManager_NavHop : public UGbxAnimStateManager_RootMotion
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.GbxAnimStateManager_NavHop");
		return ptr;
	}

};


// Class GbxNav.GbxNavArea
// 0x0028 (0x0058 - 0x0030)
class UGbxNavArea : public UGbxNavAreaBase
{
public:
	struct FColor                                      DrawColor;                                                // 0x0030(0x0004) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<class UGbxNavMeshLayer*>                    IgnoreLayers;                                             // 0x0038(0x0010) (Edit, ZeroConstructor)
	class UGbxNavArea*                                 EffectiveArea;                                            // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EHavokNavMaterial                                  HavokNavMaterial;                                         // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.GbxNavArea");
		return ptr;
	}

};


// Class GbxNav.GbxNavAreaData
// 0x0010 (0x0040 - 0x0030)
class UGbxNavAreaData : public UDataAsset
{
public:
	TArray<struct FGbxNavAreaItem>                     NavAreas;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.GbxNavAreaData");
		return ptr;
	}

};


// Class GbxNav.GbxNavBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UGbxNavBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.GbxNavBlueprintLibrary");
		return ptr;
	}


	void STATIC_SetAINavPathType(class AActor* Actor, EGbxPathType PathType);
	void STATIC_ResourceUnlockAvoidance(class AActor* Actor, const struct FName& Reason);
	void STATIC_ResourceLockAvoidance(class AActor* Actor, const struct FName& Reason);
	void STATIC_ForceNavMeshLayer(class AActor* Actor, class UGbxNavMeshLayer* ForcedNavMeshLayer);
	bool STATIC_FindNavMeshPointForActor(class AActor* Actor, const struct FVector& Point, float Radius, struct FVector* Result);
	bool STATIC_FindNavMeshPoint(class UObject* WorldContextObject, const struct FVector& Point, float Radius, class UGbxNavMeshLayer* Layer, struct FVector* Result);
};


// Class GbxNav.GbxNavBoxComponent
// 0x0010 (0x0730 - 0x0720)
class UGbxNavBoxComponent : public UBoxComponent
{
public:
	struct FGbxTriggerProperty                         AutoResize;                                               // 0x0720(0x0001) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0721(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.GbxNavBoxComponent");
		return ptr;
	}


	void DoAutoResize();
};


// Class GbxNav.GbxNavLayer
// 0x0008 (0x0038 - 0x0030)
class UGbxNavLayer : public UGbxNavLayerBase
{
public:
	struct FColor                                      DrawColor;                                                // 0x0030(0x0004) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.GbxNavLayer");
		return ptr;
	}

};


// Class GbxNav.GbxNavFlyLayer
// 0x0010 (0x0048 - 0x0038)
class UGbxNavFlyLayer : public UGbxNavLayer
{
public:
	float                                              MaxAgentRadius;                                           // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CellWidth;                                                // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EGbxNavFlyRoundingMode                             RoundingMode;                                             // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.GbxNavFlyLayer");
		return ptr;
	}

};


// Class GbxNav.GbxNavSection
// 0x0008 (0x04A0 - 0x0498)
class AGbxNavSection : public ANavMeshBoundsVolume
{
public:
	class UGbxNavSectionComponent*                     SectionComponent;                                         // 0x0498(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.GbxNavSection");
		return ptr;
	}

};


// Class GbxNav.GbxNavFlySection
// 0x0008 (0x04A8 - 0x04A0)
class AGbxNavFlySection : public AGbxNavSection
{
public:
	class UGbxNavFlySectionComponent*                  FlySectionComponent;                                      // 0x04A0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.GbxNavFlySection");
		return ptr;
	}

};


// Class GbxNav.GbxNavSectionComponent
// 0x0070 (0x0760 - 0x06F0)
class UGbxNavSectionComponent : public UPrimitiveComponent
{
public:
	uint32_t                                           SectionID;                                                // 0x06F0(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       StreamingGuid;                                            // 0x06F4(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0704(0x0004) MISSED OFFSET
	class AGbxNavWorld*                                GbxNavWorld;                                              // 0x0708(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0710(0x0018) MISSED OFFSET
	bool                                               bAddAllConnectedComponentsToBounds;                       // 0x0728(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0729(0x0007) MISSED OFFSET
	struct FTransform                                  BuildTransform;                                           // 0x0730(0x0030) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.GbxNavSectionComponent");
		return ptr;
	}

};


// Class GbxNav.GbxNavFlySectionComponent
// 0x0070 (0x07D0 - 0x0760)
class UGbxNavFlySectionComponent : public UGbxNavSectionComponent
{
public:
	class UGbxNavFlyLayer*                             FlyLayer;                                                 // 0x0760(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData)
	class UGbxNavFlyLayer*                             BuildFlyLayer;                                            // 0x0768(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bDrawBoundingFaces;                                       // 0x0770(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDrawCells;                                               // 0x0771(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDrawFaces;                                               // 0x0772(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0773(0x0001) MISSED OFFSET
	float                                              DrawBoxSize;                                              // 0x0774(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	float                                              DrawCullDistance;                                         // 0x0778(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x24];                                      // 0x077C(0x0024) MISSED OFFSET
	class UHavokNavVolume*                             NavVolume;                                                // 0x07A0(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<uint16_t>                                   CellGroups;                                               // 0x07A8(0x0010) (ZeroConstructor)
	class UClass*                                      Layer;                                                    // 0x07B8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UClass*                                      BuildLayer;                                               // 0x07C0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x07C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.GbxNavFlySectionComponent");
		return ptr;
	}

};


// Class GbxNav.GbxNavGlobalData
// 0x0048 (0x0078 - 0x0030)
class UGbxNavGlobalData : public UGbxDataAsset
{
public:
	class UGbxNavMeshLayer*                            DefaultMeshLayer;                                         // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGbxNavFlyLayer*                             DefaultFlyLayer;                                          // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGbxNavArea*                                 DefaultMeshArea;                                          // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGbxNavArea*                                 NullMeshArea;                                             // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UGbxNavArea*>                         AllMeshAreas;                                             // 0x0050(0x0010) (Edit, ZeroConstructor)
	class UGbxUserEdge*                                DefaultUserEdge;                                          // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UGbxUserEdge*>                        GlobalUserEdges;                                          // 0x0068(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.GbxNavGlobalData");
		return ptr;
	}

};


// Class GbxNav.GbxNavMeshLayer
// 0x0018 (0x0050 - 0x0038)
class UGbxNavMeshLayer : public UGbxNavLayer
{
public:
	float                                              MaxAgentHalfHeight;                                       // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAgentRadius;                                           // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSetRadiusManually;                                       // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              UserEdgeDistance;                                         // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSetUserEdgeDistanceManually;                             // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.GbxNavMeshLayer");
		return ptr;
	}

};


// Class GbxNav.GbxNavMeshPainter
// 0x0008 (0x0498 - 0x0490)
class AGbxNavMeshPainter : public AVolume
{
public:
	class UGbxNavMeshPainterComponent*                 PainterComponent;                                         // 0x0490(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.GbxNavMeshPainter");
		return ptr;
	}


	void SetPainterEnabled(bool bNewEnabled);
	bool IsPainterEnabled();
};


// Class GbxNav.GbxNavMeshPainterComponent
// 0x00A0 (0x0218 - 0x0178)
class UGbxNavMeshPainterComponent : public UActorComponent
{
public:
	bool                                               bAlwaysEnabled;                                           // 0x0178(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0179(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x017A(0x0002) MISSED OFFSET
	float                                              IdleTime;                                                 // 0x017C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EGbxPainterType                                    PainterType;                                              // 0x0180(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0181(0x0007) MISSED OFFSET
	class UGbxNavArea*                                 GbxNavArea;                                               // 0x0188(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData)
	TArray<struct FName>                               AssociatedComponentNames;                                 // 0x0190(0x0010) (Edit, ZeroConstructor)
	uint32_t                                           PainterId;                                                // 0x01A0(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              PainterMovedThreshold;                                    // 0x01A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBlocksAutoGeneratedUserEdges;                            // 0x01A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x01A9(0x0007) MISSED OFFSET
	TArray<struct FGbxPainterItem>                     Painters;                                                 // 0x01B0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x50];                                      // 0x01C0(0x0050) MISSED OFFSET
	class UClass*                                      NavArea;                                                  // 0x0210(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.GbxNavMeshPainterComponent");
		return ptr;
	}


	void SetPainterEnabled(bool bNewEnabled);
	void SetPainterAlwaysEnabled(bool bNewAlwaysEnabled);
	void ResetToStatic();
	bool IsPainterEnabled();
};


// Class GbxNav.GbxNavMeshSection
// 0x0008 (0x04A8 - 0x04A0)
class AGbxNavMeshSection : public AGbxNavSection
{
public:
	class UGbxNavMeshSectionComponent*                 MeshSectionComponent;                                     // 0x04A0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.GbxNavMeshSection");
		return ptr;
	}

};


// Class GbxNav.GbxNavMeshSectionComponent
// 0x0060 (0x07C0 - 0x0760)
class UGbxNavMeshSectionComponent : public UGbxNavSectionComponent
{
public:
	class UGbxNavMeshLayer*                            MeshLayer;                                                // 0x0760(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData)
	class UGbxNavMeshLayer*                            BuildMeshLayer;                                           // 0x0768(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bAutoAddUserEdges;                                        // 0x0770(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2F];                                      // 0x0771(0x002F) MISSED OFFSET
	class UHavokNavMesh*                               NavMesh;                                                  // 0x07A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      Layer;                                                    // 0x07A8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UClass*                                      BuildLayer;                                               // 0x07B0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x07B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.GbxNavMeshSectionComponent");
		return ptr;
	}

};


// Class GbxNav.GbxNavUserEdgeTrailComponent
// 0x00C0 (0x0238 - 0x0178)
class UGbxNavUserEdgeTrailComponent : public UActorComponent
{
public:
	class UGbxUserEdge*                                GbxUserEdge;                                              // 0x0178(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EdgeWidth;                                                // 0x0180(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AgentRadius;                                              // 0x0184(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AgentHalfHeight;                                          // 0x0188(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NavCheckDistance;                                         // 0x018C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNumericRange                               ValidEdgeLength;                                          // 0x0190(0x0008) (Edit)
	int                                                MaxActiveEdges;                                           // 0x0198(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TraceRadius;                                              // 0x019C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class AGbxNavWorld*                                GbxNavWorld;                                              // 0x01A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGbxNavAgentProperties                      AgentProps;                                               // 0x01A8(0x0060) (Transient)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0208(0x0028) MISSED OFFSET
	class UClass*                                      UserEdge;                                                 // 0x0230(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.GbxNavUserEdgeTrailComponent");
		return ptr;
	}

};


// Class GbxNav.HavokPathFollowingComponent
// 0x0000 (0x0350 - 0x0350)
class UHavokPathFollowingComponent : public UPathFollowingComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.HavokPathFollowingComponent");
		return ptr;
	}

};


// Class GbxNav.GbxPathFollowingComponent
// 0x0000 (0x0350 - 0x0350)
class UGbxPathFollowingComponent : public UHavokPathFollowingComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.GbxPathFollowingComponent");
		return ptr;
	}

};


// Class GbxNav.GbxUserEdge
// 0x0040 (0x0070 - 0x0030)
class UGbxUserEdge : public UGbxUserEdgeBase
{
public:
	class UGbxUserEdge*                                ReverseEdge;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
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
	TArray<class UGbxUserEdge*>                        TeleportEdges;                                            // 0x0060(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.GbxUserEdge");
		return ptr;
	}

};


// Class GbxNav.GbxUserEdgeBlocker
// 0x0038 (0x04C8 - 0x0490)
class AGbxUserEdgeBlocker : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0490(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.GbxUserEdgeBlocker");
		return ptr;
	}

};


// Class GbxNav.HavokMovementData
// 0x0000 (0x0030 - 0x0030)
class UHavokMovementData : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.HavokMovementData");
		return ptr;
	}

};


// Class GbxNav.HavokNavObstacle
// 0x0048 (0x0070 - 0x0028)
class UHavokNavObstacle : public UObject
{
public:
	float                                              SphereRadius;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSphere;                                               // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	struct FVector                                     BoxSize;                                                  // 0x0030(0x000C) (Edit, IsPlainOldData)
	bool                                               bUseBox;                                                  // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FVector                                     Scale;                                                    // 0x0040(0x000C) (Edit, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class UGbxNavArea*                                 NavArea;                                                  // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         PrimitiveBase;                                            // 0x0058(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.HavokNavObstacle");
		return ptr;
	}

};


// Class GbxNav.HavokNavObstacleComponent
// 0x00A0 (0x0790 - 0x06F0)
class UHavokNavObstacleComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x06F0(0x0098) MISSED OFFSET
	class UHavokNavObstacle*                           Obstacle;                                                 // 0x0788(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.HavokNavObstacleComponent");
		return ptr;
	}


	void UnlockObstacle(const struct FName& Reason);
	void LockObstacle(const struct FName& Reason);
};


// Class GbxNav.HavokPathFindingData
// 0x0028 (0x0058 - 0x0030)
class UHavokPathFindingData : public UDataAsset
{
public:
	TArray<struct FHavokUserEdgeItem>                  UserEdges;                                                // 0x0030(0x0010) (Edit, ZeroConstructor)
	TArray<struct FHavokUserEdgeTeleportItem>          UserEdgeTeleports;                                        // 0x0040(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      DefaultTeleportAction;                                    // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.HavokPathFindingData");
		return ptr;
	}

};


// Class GbxNav.HavokStreamingSet
// 0x0018 (0x0040 - 0x0028)
class UHavokStreamingSet : public UObject
{
public:
	uint32_t                                           SectionIdA;                                               // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           SectionIdB;                                               // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.HavokStreamingSet");
		return ptr;
	}

};


// Class GbxNav.HavokUserEdge_Jump
// 0x0000 (0x0070 - 0x0070)
class UHavokUserEdge_Jump : public UHavokUserEdge
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.HavokUserEdge_Jump");
		return ptr;
	}

};


// Class GbxNav.HavokUserEdgeActor
// 0x0048 (0x04A0 - 0x0458)
class AHavokUserEdgeActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0458(0x0008) MISSED OFFSET
	struct FTransform                                  EdgeEnd;                                                  // 0x0460(0x0030) (IsPlainOldData)
	class UHavokUserEdgeComponent*                     UserEdgeComponent;                                        // 0x0490(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0498(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.HavokUserEdgeActor");
		return ptr;
	}


	void SetEdgeEnabled(bool bNewEnabled);
	bool IsEdgeEnabled();
};


// Class GbxNav.HavokUserEdgeComponent
// 0x0100 (0x07F0 - 0x06F0)
class UHavokUserEdgeComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x06F0(0x0008) MISSED OFFSET
	bool                                               bEnabled;                                                 // 0x06F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x06F9(0x0007) MISSED OFFSET
	struct FTransform                                  EdgeEnd;                                                  // 0x0700(0x0030) (Edit, IsPlainOldData)
	float                                              EdgeBeginWidth;                                           // 0x0730(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EdgeEndWidth;                                             // 0x0734(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EGbxUserEdgeDirection                              Direction;                                                // 0x0738(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0739(0x0007) MISSED OFFSET
	class UGbxUserEdge*                                GbxUserEdge;                                              // 0x0740(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TeleportRadius;                                           // 0x0748(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x074C(0x0004) MISSED OFFSET
	TArray<class UHavokUserEdgeComponent*>             TeleportEdges;                                            // 0x0750(0x0010) (Edit, ExportObject, ZeroConstructor, EditConst)
	bool                                               bAnchorEnd;                                               // 0x0760(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0761(0x0007) MISSED OFFSET
	class AActor*                                      EndAnchorBase;                                            // 0x0768(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FTransform                                  EndAnchorTransform;                                       // 0x0770(0x0030) (Edit, EditConst, IsPlainOldData)
	class USceneComponent*                             RegisteredEndAnchorRoot;                                  // 0x07A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	uint32_t                                           EdgeID;                                                   // 0x07A8(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData05[0x34];                                      // 0x07AC(0x0034) MISSED OFFSET
	class UClass*                                      UserEdge;                                                 // 0x07E0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x07E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.HavokUserEdgeComponent");
		return ptr;
	}


	void SetEdgeEnabled(bool bNewEnabled);
	bool IsEdgeEnabled();
	void AnchorDestroyed(class AActor* Actor);
};


// Class GbxNav.HavokUserEdgePreviewComponent
// 0x0000 (0x06F0 - 0x06F0)
class UHavokUserEdgePreviewComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.HavokUserEdgePreviewComponent");
		return ptr;
	}


	void OnBlueprintCompiled(class UBlueprint* BP);
};


// Class GbxNav.VehicleSplineConsumerInterface
// 0x0000 (0x0028 - 0x0028)
class UVehicleSplineConsumerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.VehicleSplineConsumerInterface");
		return ptr;
	}

};


// Class GbxNav.VehicleSplineInterface
// 0x0000 (0x0028 - 0x0028)
class UVehicleSplineInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxNav.VehicleSplineInterface");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

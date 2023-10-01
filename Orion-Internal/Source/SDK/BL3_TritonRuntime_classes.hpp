#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TritonRuntime_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TritonRuntime.TritonAcousticDataComponent
// 0x0140 (0x0410 - 0x02D0)
class UTritonAcousticDataComponent : public USceneComponent
{
public:
	TArray<struct FTritonProbeLayer>                   ProbeLayers;                                              // 0x02D0(0x0010) (Edit, ZeroConstructor)
	float                                              SpeedOfSound;                                             // 0x02E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02E4(0x0004) MISSED OFFSET
	TMap<class FString, class FString>                 ExtraTritonMaterialEquivalences;                          // 0x02E8(0x0050) (Edit, ZeroConstructor)
	TArray<struct FAudioPrepComponentFilter>           ExcludeComponentsFilters;                                 // 0x0338(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAudioPrepComponentFilter>           IncludeComponentsFilters;                                 // 0x0348(0x0010) (Edit, ZeroConstructor)
	TArray<EOcclusionVoxelThinningAlgorithm>           ThinningSteps;                                            // 0x0358(0x0010) (Edit, ZeroConstructor)
	int                                                ExtraTerrainThickness;                                    // 0x0368(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyGenerateSelected;                                    // 0x036C(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	struct FTritonUpdateDesc                           UpdateSteps;                                              // 0x036D(0x000A) (Edit, Transient)
	struct FGbxTriggerProperty                         TriggerRefreshCachedVoxelData;                            // 0x0377(0x0001) (Edit, Transient, IsPlainOldData)
	struct FGbxTriggerProperty                         TriggerVisualizeMaterials;                                // 0x0378(0x0001) (Edit, Transient, IsPlainOldData)
	struct FGbxTriggerProperty                         TriggerAuditProbeLocations;                               // 0x0379(0x0001) (Edit, Transient, IsPlainOldData)
	struct FGbxTriggerProperty                         TriggerUpdateProbeLocations;                              // 0x037A(0x0001) (Edit, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x037B(0x0005) MISSED OFFSET
	class UAudioOcclusionVoxelDataProvider*            CachedVoxelData;                                          // 0x0380(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAudioOcclusionVoxelDataProvider*            CachedVoxelDataNoThinning;                                // 0x0388(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAudioOcclusionVoxelDataProvider*            CachedNavMeshVoxelData;                                   // 0x0390(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGbxTriggerProperty                         TriggerBuildFallbackAcousticData;                         // 0x0398(0x0001) (Edit, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x77];                                      // 0x0399(0x0077) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TritonRuntime.TritonAcousticDataComponent");
		return ptr;
	}


	void VisualizeMaterials();
	void UpdateProbeLocations();
	void RefreshCachedVoxelData();
	void BuildFallbackAcousticData();
	void AuditProbeLocations();
};


// Class TritonRuntime.TritonZone
// 0x0008 (0x0460 - 0x0458)
class ATritonZone : public AActor
{
public:
	class UTritonAcousticDataComponent*                TritonDataComponent;                                      // 0x0458(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TritonRuntime.TritonZone");
		return ptr;
	}

};


// Class TritonRuntime.TritonVoxelOverrideVolume
// 0x0000 (0x0490 - 0x0490)
class ATritonVoxelOverrideVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TritonRuntime.TritonVoxelOverrideVolume");
		return ptr;
	}

};


// Class TritonRuntime.TritonProbeHelper
// 0x0018 (0x0470 - 0x0458)
class ATritonProbeHelper : public AActor
{
public:
	float                                              DistanceLimit;                                            // 0x0458(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRecording;                                               // 0x045C(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x045D(0x0003) MISSED OFFSET
	TArray<struct FVector>                             RecordedLocations;                                        // 0x0460(0x0010) (Edit, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TritonRuntime.TritonProbeHelper");
		return ptr;
	}

};


// Class TritonRuntime.TritonProbeLocationProvider
// 0x0028 (0x04B8 - 0x0490)
class ATritonProbeLocationProvider : public AVolume
{
public:
	float                                              TargetDistanceAboveGround;                                // 0x0490(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinimumHorizontalSpacing;                                 // 0x0494(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinWallDistanceForLowDensityProbes;                       // 0x0498(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpacingFactorForLowDensityProbes;                         // 0x049C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecimationThreshold;                                      // 0x04A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumberDecimations;                                     // 0x04A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class ATritonProbeLocationProvider*>        SuppressingZones;                                         // 0x04A8(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TritonRuntime.TritonProbeLocationProvider");
		return ptr;
	}


	void FindProbeLocations(const struct FBoxSphereBounds& WorldBoxSphere, class UAudioOcclusionVoxelDataProvider* GeoVoxels, class UAudioOcclusionVoxelDataProvider* NavVoxels, TArray<struct FVector>* out_ResultProbeLocations);
};


// Class TritonRuntime.TritonSettings
// 0x0010 (0x0038 - 0x0028)
class UTritonSettings : public UObject
{
public:
	struct FDirectoryPath                              TritonDataPath;                                           // 0x0028(0x0010) (Edit, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TritonRuntime.TritonSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

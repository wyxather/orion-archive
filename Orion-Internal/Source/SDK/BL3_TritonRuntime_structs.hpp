#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_Engine_classes.hpp"
#include "BL3_CoreUObject_classes.hpp"
#include "BL3_WwiseAudio_classes.hpp"
#include "BL3_GbxAudio_classes.hpp"
#include "BL3_GbxRuntime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TritonRuntime.TritonProbeSet
// 0x0030
struct FTritonProbeSet
{
	class FString                                      Label;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
	class ATritonProbeLocationProvider*                ProbeLocationProvider;                                    // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             ProbeLocations;                                           // 0x0018(0x0010) (Edit, ZeroConstructor)
	bool                                               bLowDetail;                                               // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct TritonRuntime.TritonSimulationParams
// 0x0018
struct FTritonSimulationParams
{
	float                                              SimulationFrequency;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SimulationRadius;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SimulationDepth;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SimulationHeight;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IdealVoxelmapResolutionInMeters;                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRMSForAveragingLongDistanceVolumes;                   // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseWallinessFactorForLongDistanceVolumes;                // 0x0015(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
};

// ScriptStruct TritonRuntime.TritonLayerFadeParams
// 0x0014
struct FTritonLayerFadeParams
{
	float                                              RangeMin;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VolMin;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Pivot;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RangeMax;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VolMax;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct TritonRuntime.TritonAdvancedParams
// 0x0024
struct FTritonAdvancedParams
{
	bool                                               bUseProbeStreaming;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              PreloadDistance;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxLoadedProbes;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDistanceFractionForPreload;                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SpatialInterpCacheSize;                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                VoxelDecompressionCacheSize;                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SimCellCacheSize;                                         // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowProbeAutoLoad;                                      // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              ProbeSearchDistance;                                      // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct TritonRuntime.FallbackAcousticData
// 0x0040
struct FFallbackAcousticData
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, IsPlainOldData)
	struct FWwiseEmitterAcousticData                   AcousticData;                                             // 0x000C(0x001C) (Edit)
	float                                              Outdoorness;                                              // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<float>                                      EarlyReflections;                                         // 0x0030(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct TritonRuntime.TritonProbeLayer
// 0x0178
struct FTritonProbeLayer
{
	TArray<struct FTritonProbeSet>                     ProbeLocationSets;                                        // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FTritonSimulationParams                     SimulationParams;                                         // 0x0010(0x0018) (Edit)
	struct FTritonLayerFadeParams                      FadeParams;                                               // 0x0028(0x0014) (Edit)
	struct FTritonAdvancedParams                       AdvancedParams;                                           // 0x003C(0x0024) (Edit)
	struct FDirectoryPath                              DatasetPathOverride;                                      // 0x0060(0x0010) (Edit)
	class FString                                      DatasetFile;                                              // 0x0070(0x0010) (Edit, ZeroConstructor)
	TArray<struct FFallbackAcousticData>               FallbackAcousticData;                                     // 0x0080(0x0010) (Edit, ZeroConstructor)
	struct FFallbackAcousticData                       FallbackAcousticDataAggregate;                            // 0x0090(0x0040) (Edit)
	struct FWwiseAcousticEmulationParameters           FallbackAcousticEmulationParameters;                      // 0x00D0(0x0018) (Edit)
	bool                                               bHasGeneratedEarlyReflections;                            // 0x00E8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8F];                                      // 0x00E9(0x008F) MISSED OFFSET
};

// ScriptStruct TritonRuntime.TritonUpdateDesc
// 0x000A
struct FTritonUpdateDesc
{
	bool                                               bCleanTempDirectory;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bExportVoxelizedRegion;                                   // 0x0001(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bCreateJobConfig;                                         // 0x0002(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bCreateTaskImages;                                        // 0x0003(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bRunTasks;                                                // 0x0004(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bCreateCompressedVoxMap;                                  // 0x0005(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bCollateResults;                                          // 0x0006(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bGenerateLongDistanceProbes;                              // 0x0007(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bFixupDirectionalReciprocity;                             // 0x0008(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIncorporateNewACE;                                       // 0x0009(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct TritonRuntime.CachedPerProbeAcousticData
// 0x000C
struct FCachedPerProbeAcousticData
{
	float                                              ERVolume;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LRVolume;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LRDuration;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

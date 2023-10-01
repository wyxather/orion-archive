#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TritonRuntime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TritonRuntime.TritonAcousticDataComponent.VisualizeMaterials
struct UTritonAcousticDataComponent_VisualizeMaterials_Params
{
};

// Function TritonRuntime.TritonAcousticDataComponent.UpdateProbeLocations
struct UTritonAcousticDataComponent_UpdateProbeLocations_Params
{
};

// Function TritonRuntime.TritonAcousticDataComponent.RefreshCachedVoxelData
struct UTritonAcousticDataComponent_RefreshCachedVoxelData_Params
{
};

// Function TritonRuntime.TritonAcousticDataComponent.BuildFallbackAcousticData
struct UTritonAcousticDataComponent_BuildFallbackAcousticData_Params
{
};

// Function TritonRuntime.TritonAcousticDataComponent.AuditProbeLocations
struct UTritonAcousticDataComponent_AuditProbeLocations_Params
{
};

// Function TritonRuntime.TritonProbeLocationProvider.FindProbeLocations
struct ATritonProbeLocationProvider_FindProbeLocations_Params
{
	struct FBoxSphereBounds                            WorldBoxSphere;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UAudioOcclusionVoxelDataProvider*            GeoVoxels;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UAudioOcclusionVoxelDataProvider*            NavVoxels;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             out_ResultProbeLocations;                                 // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

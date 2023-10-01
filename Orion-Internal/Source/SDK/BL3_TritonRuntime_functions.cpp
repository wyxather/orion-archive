// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TritonRuntime_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TritonRuntime.TritonAcousticDataComponent.VisualizeMaterials
// (Final, Native, Public)

void UTritonAcousticDataComponent::VisualizeMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function TritonRuntime.TritonAcousticDataComponent.VisualizeMaterials");

	UTritonAcousticDataComponent_VisualizeMaterials_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TritonRuntime.TritonAcousticDataComponent.UpdateProbeLocations
// (Final, Native, Public)

void UTritonAcousticDataComponent::UpdateProbeLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function TritonRuntime.TritonAcousticDataComponent.UpdateProbeLocations");

	UTritonAcousticDataComponent_UpdateProbeLocations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TritonRuntime.TritonAcousticDataComponent.RefreshCachedVoxelData
// (Final, Native, Public)

void UTritonAcousticDataComponent::RefreshCachedVoxelData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TritonRuntime.TritonAcousticDataComponent.RefreshCachedVoxelData");

	UTritonAcousticDataComponent_RefreshCachedVoxelData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TritonRuntime.TritonAcousticDataComponent.BuildFallbackAcousticData
// (Final, Native, Public)

void UTritonAcousticDataComponent::BuildFallbackAcousticData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TritonRuntime.TritonAcousticDataComponent.BuildFallbackAcousticData");

	UTritonAcousticDataComponent_BuildFallbackAcousticData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TritonRuntime.TritonAcousticDataComponent.AuditProbeLocations
// (Final, Native, Public)

void UTritonAcousticDataComponent::AuditProbeLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function TritonRuntime.TritonAcousticDataComponent.AuditProbeLocations");

	UTritonAcousticDataComponent_AuditProbeLocations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TritonRuntime.TritonProbeLocationProvider.FindProbeLocations
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FBoxSphereBounds        WorldBoxSphere                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UAudioOcclusionVoxelDataProvider* GeoVoxels                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UAudioOcclusionVoxelDataProvider* NavVoxels                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         out_ResultProbeLocations       (Parm, OutParm, ZeroConstructor)

void ATritonProbeLocationProvider::FindProbeLocations(const struct FBoxSphereBounds& WorldBoxSphere, class UAudioOcclusionVoxelDataProvider* GeoVoxels, class UAudioOcclusionVoxelDataProvider* NavVoxels, TArray<struct FVector>* out_ResultProbeLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function TritonRuntime.TritonProbeLocationProvider.FindProbeLocations");

	ATritonProbeLocationProvider_FindProbeLocations_Params params;
	params.WorldBoxSphere = WorldBoxSphere;
	params.GeoVoxels = GeoVoxels;
	params.NavVoxels = NavVoxels;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_ResultProbeLocations != nullptr)
		*out_ResultProbeLocations = params.out_ResultProbeLocations;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

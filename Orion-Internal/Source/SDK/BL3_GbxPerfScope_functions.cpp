// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxPerfScope_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GbxPerfScope.GbxPerfScopePerfSampleData.GetMapGPUHotspots
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumSamples                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)

void UGbxPerfScopePerfSampleData::GetMapGPUHotspots(class UObject* WorldContext, int NumSamples, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxPerfScope.GbxPerfScopePerfSampleData.GetMapGPUHotspots");

	UGbxPerfScopePerfSampleData_GetMapGPUHotspots_Params params;
	params.WorldContext = WorldContext;
	params.NumSamples = NumSamples;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

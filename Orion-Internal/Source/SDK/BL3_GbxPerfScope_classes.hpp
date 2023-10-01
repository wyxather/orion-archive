#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxPerfScope_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GbxPerfScope.GbxPerfScopeOptions
// 0x0010 (0x0038 - 0x0028)
class UGbxPerfScopeOptions : public UObject
{
public:
	class FString                                      AnalyticsURL;                                             // 0x0028(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxPerfScope.GbxPerfScopeOptions");
		return ptr;
	}

};


// Class GbxPerfScope.GbxPerfScopePerfSampleData
// 0x0010 (0x0038 - 0x0028)
class UGbxPerfScopePerfSampleData : public UObject
{
public:
	TArray<struct FPerfSample>                         Samples;                                                  // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxPerfScope.GbxPerfScopePerfSampleData");
		return ptr;
	}


	void GetMapGPUHotspots(class UObject* WorldContext, int NumSamples, const struct FLatentActionInfo& LatentInfo);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

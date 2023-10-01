#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BroadcastRadio_Visual_DataAsset_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BroadcastRadio_Visual_DataAsset.BroadcastRadio_Visual_DataAsset_C
// 0x0084 (0x00B4 - 0x0030)
class UBroadcastRadio_Visual_DataAsset_C : public UGbxDataAssetBlueprintable
{
public:
	class UStaticMesh*                                 StaticMesh;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstance*>                   OverrideMaterialInstances;                                // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                             BroadcastingParticle;                                     // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  BroadcastingParticleTransform;                            // 0x0050(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  WwiseLocationTransform;                                   // 0x0080(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Gain;                                                     // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BroadcastRadio_Visual_DataAsset.BroadcastRadio_Visual_DataAsset_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

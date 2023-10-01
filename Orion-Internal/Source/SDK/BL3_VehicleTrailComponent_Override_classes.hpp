#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_VehicleTrailComponent_Override_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VehicleTrailComponent_Override.VehicleTrailComponent_Override_C
// 0x01C5 (0x01ED - 0x0028)
class UVehicleTrailComponent_Override_C : public UObject
{
public:
	TEnumAsByte<ETickingGroup>                         TrailTickGroup;                                           // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TArray<struct FVehicleTrailData>                   TrailData;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              MinSpeedForTrail;                                         // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TrailUpOffset;                                            // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SkidMarkSize;                                             // 0x0048(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MinRPMForFastSpin;                                        // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSpeedForFastSpin;                                      // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinSpeedToActivateBigCore;                                // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinRPMToActivateBigCore;                                  // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasUpgrade01;                                            // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasUpgrade02;                                            // 0x0065(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0066(0x0002) MISSED OFFSET
	struct FActorComponentTickFunction                 PrimaryComponentTick;                                     // 0x0068(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FName>                               ComponentTags;                                            // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTickOptimizationData                       ComponentTickOptimizationData;                            // 0x00D0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bReplicates;                                              // 0x00DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoActivate;                                            // 0x00DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEditableWhenInherited;                                   // 0x00DE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsEditorOnly;                                            // 0x00DF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TrailTranslucentSortPriority;                             // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	struct FVehicleTrailParticleSystemData             DefaultParticleSystem;                                    // 0x00E8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UPhysicalMaterial*, struct FVehicleTrailParticleSystemData> ParticlePerPhysicalMaterial;                              // 0x0100(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              FrameIndex;                                               // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
	TArray<class UAssetUserData*>                      AssetUserData;                                            // 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bExcludeFromReplicationProxy;                             // 0x0168(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0169(0x0007) MISSED OFFSET
	TMap<class UElementalInteractionData*, struct FVehicleTrailParticleSystemData> WadeParticleSystems;                                      // 0x0170(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVehicleTrailParticleSystemData             DefaultWadeParticleSystem;                                // 0x01C0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FExtraWadingData>                    ExtraWadingEffects;                                       // 0x01D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              ParticleDriftVelocity;                                    // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIgnoreBoundsInEditor;                                    // 0x01EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VehicleTrailComponent_Override.VehicleTrailComponent_Override_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

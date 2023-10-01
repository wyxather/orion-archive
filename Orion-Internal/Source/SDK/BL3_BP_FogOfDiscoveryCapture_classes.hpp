#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_FogOfDiscoveryCapture_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C
// 0x0048 (0x04E0 - 0x0498)
class ABP_FogOfDiscoveryCapture_C : public AFogOfDiscoveryCapture
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0498(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            Sphere;                                                   // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneCaptureComponent2D*                    SceneCaptureComponent2D;                                  // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Render_Target_Size;                                       // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04B4(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        MapCaptureComponent;                                      // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     PreviousLocation;                                         // 0x04C0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04CC(0x0004) MISSED OFFSET
	class UZoneMapData*                                ZoneMapData;                                              // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 MeshOverride;                                             // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C");
		return ptr;
	}


	void FinishZoneMapFoD();
	void CaptureZoneMapFoD();
	void UserConstructionScript();
	void GetData();
	void OnFogLevelLoaded(class UZoneMapData** UpdatedZoneMap);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_FogOfDiscoveryCapture(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

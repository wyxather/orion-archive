#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_RiftWalker_PostProcessFX_Player_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RiftWalker_PostProcessFX_Player.BP_RiftWalker_PostProcessFX_Player_C
// 0x0048 (0x0378 - 0x0330)
class ABP_RiftWalker_PostProcessFX_Player_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTweenComponent*                             Tween;                                                    // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                       PostProcess;                                              // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Intensity_Contrast_FE2712754CD8CE37C3E7B88C926B887E;      // 0x0350(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Intensity_Intensity_FE2712754CD8CE37C3E7B88C926B887E;     // 0x0354(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Intensity__Direction_FE2712754CD8CE37C3E7B88C926B887E;    // 0x0358(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0359(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Intensity;                                                // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistortionAndColor_DistortionAndColor_7A32DAC140ADBDB8B8F02F943BE8BCB7;// 0x0368(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    DistortionAndColor__Direction_7A32DAC140ADBDB8B8F02F943BE8BCB7;// 0x036C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x3];                                       // 0x036D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          DistortionAndColor;                                       // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RiftWalker_PostProcessFX_Player.BP_RiftWalker_PostProcessFX_Player_C");
		return ptr;
	}


	void DistortionAndColor__FinishedFunc();
	void DistortionAndColor__UpdateFunc();
	void Intensity__FinishedFunc();
	void Intensity__UpdateFunc();
	void OnNotifyAllWorldReset();
	void ReceiveBeginPlay();
	void OnWorldReset();
	void RiftTrigger_User();
	void ExecuteUbergraph_BP_RiftWalker_PostProcessFX_Player(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

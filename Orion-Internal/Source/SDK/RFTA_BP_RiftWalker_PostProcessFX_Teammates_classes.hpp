#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_RiftWalker_PostProcessFX_Teammates_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RiftWalker_PostProcessFX_Teammates.BP_RiftWalker_PostProcessFX_Teammates_C
// 0x0048 (0x0378 - 0x0330)
class ABP_RiftWalker_PostProcessFX_Teammates_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTweenComponent*                             Tween;                                                    // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                       PostProcess;                                              // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              IntensityAndContrast_Contrast_B0C4D17F4507AFCF690462B6F75C42C3;// 0x0350(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IntensityAndContrast_Intensity_B0C4D17F4507AFCF690462B6F75C42C3;// 0x0354(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    IntensityAndContrast__Direction_B0C4D17F4507AFCF690462B6F75C42C3;// 0x0358(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0359(0x0007) MISSED OFFSET
	class UTimelineComponent*                          IntensityAndContrast;                                     // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistortionAndColor_DistortionAndColor_F1C31B3C4467B51F352AA2957C166018;// 0x0368(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    DistortionAndColor__Direction_F1C31B3C4467B51F352AA2957C166018;// 0x036C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x3];                                       // 0x036D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          DistortionAndColor;                                       // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RiftWalker_PostProcessFX_Teammates.BP_RiftWalker_PostProcessFX_Teammates_C");
		return ptr;
	}


	void DistortionAndColor__FinishedFunc();
	void DistortionAndColor__UpdateFunc();
	void IntensityAndContrast__FinishedFunc();
	void IntensityAndContrast__UpdateFunc();
	void OnNotifyAllWorldReset();
	void ReceiveBeginPlay();
	void OnWorldReset();
	void RiftTrigger_Team();
	void ExecuteUbergraph_BP_RiftWalker_PostProcessFX_Teammates(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

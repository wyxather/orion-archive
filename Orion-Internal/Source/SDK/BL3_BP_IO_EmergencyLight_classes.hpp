#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_IO_EmergencyLight_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_IO_EmergencyLight.BP_IO_EmergencyLight_C
// 0x00E0 (0x0630 - 0x0550)
class ABP_IO_EmergencyLight_C : public AInteractiveObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0550(0x0008) (Transient, DuplicateTransient)
	class USpotLightComponent*                         Spot_Rotating;                                            // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URotatingMovementComponent*                  RotatingMovement;                                         // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         Spot_Non_Rotating;                                        // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        Point_Area;                                               // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Light_Caution;                                         // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_Delta_E3DA4E0B425C6FB52B405A96875FD9D9;        // 0x0588(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_E3DA4E0B425C6FB52B405A96875FD9D9;   // 0x058C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x058D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EnumState_EmergencyLight_Behavior>     State_Behavior;                                           // 0x0598(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EnumState_EmergencyLight_Color>        State_Color;                                              // 0x0599(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EnumState_EmergencyLight_Behavior>     PreviewState_Behavior;                                    // 0x059A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EnumState_EmergencyLight_Color>        PreviewState_Color;                                       // 0x059B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MeshLightIntensityMultiplier;                             // 0x059C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                CurrentColor;                                             // 0x05A0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              LightRotationSpeed;                                       // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x05B4(0x0004) MISSED OFFSET
	TArray<struct FLinearColor>                        ColorArray;                                               // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class APostProcessVolume*                          PostProcessVolumeToAffect;                                // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicMeshMaterial_LightOn;                              // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicMeshMaterial_LightOff;                             // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CurrentDynamicMaterial;                                   // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EnumState_EmergencySiren_OnOff>        State_SirenAudio;                                         // 0x05E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x05E9(0x0007) MISSED OFFSET
	class UGbxCondition*                               Cond_State_Behavior_NewEnumerator3;                       // 0x05F0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_State_Behavior_NewEnumerator1;                       // 0x05F8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_State_Behavior_NewEnumerator2;                       // 0x0600(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_State_Color_NewEnumerator1;                          // 0x0608(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_State_Color_NewEnumerator3;                          // 0x0610(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_State_Color_NewEnumerator4;                          // 0x0618(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_State_Color_NewEnumerator5;                          // 0x0620(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_State_SirenAudio_NewEnumerator1;                     // 0x0628(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_IO_EmergencyLight.BP_IO_EmergencyLight_C");
		return ptr;
	}


	void SetLightColor(int ColorArrayIndex);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void __UserState_State_Color_4(bool bFromLoad);
	void __UserState_State_Color_5(bool bFromLoad);
	void Preview_Color_01();
	void Preview_Color_02();
	void Preview_Color_03();
	void Preview_Color_04();
	void Preview_Color_05();
	void __UserState_State_Behavior_1(bool bFromLoad);
	void __UserState_State_Behavior_3(bool bFromLoad);
	void __UserState_State_Behavior_4(bool bFromLoad);
	void Preview_BehaviorNone();
	void Preview_BehaviorPulse();
	void Preview_BehaviorPulseAndSpin();
	void __UserState_State_Behavior_2(bool bFromLoad);
	void PreviewBehavior_On_NoMovement();
	void __UserState_State_Color_3(bool bFromLoad);
	void __UserState_State_Color_2(bool bFromLoad);
	void __UserState_State_Color_1(bool bFromLoad);
	void ReceiveBeginPlay();
	void __UserState_State_SirenAudio_1(bool bFromLoad);
	void __UserState_State_SirenAudio_2(bool bFromLoad);
	void SetColorState(int Color_Array_Index);
	void SetEmergencyLightColorState(TEnumAsByte<EnumState_EmergencyLight_Color> StateColorEnum);
	void ExecuteUbergraph_BP_IO_EmergencyLight(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

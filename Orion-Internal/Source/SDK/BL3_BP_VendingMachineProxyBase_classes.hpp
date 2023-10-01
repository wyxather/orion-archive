#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_VendingMachineProxyBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VendingMachineProxyBase.BP_VendingMachineProxyBase_C
// 0x009C (0x0A9C - 0x0A00)
class ABP_VendingMachineProxyBase_C : public AVendingMachineProxy
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A00(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x0A08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Faceplate;                                                // 0x0A10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Dark_Background;                                          // 0x0A18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        InteriorLight;                                            // 0x0A20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        ExteriorLight;                                            // 0x0A28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    NearbyPlayerFX_Deactivate;                                // 0x0A30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    NearbyPlayerFX_StartAndLoop;                              // 0x0A38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              InteriorLightOnFlicker_Intensity_91B61C0D48D36A8B9DB815A09D9577BB;// 0x0A40(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    InteriorLightOnFlicker__Direction_91B61C0D48D36A8B9DB815A09D9577BB;// 0x0A44(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0A45(0x0003) MISSED OFFSET
	class UTimelineComponent*                          InteriorLightOnFlicker;                                   // 0x0A48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              InteriorLightIdleFlicker02_Intensity_F478F26B45D0AC3B0BA120A4C65DA846;// 0x0A50(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    InteriorLightIdleFlicker02__Direction_F478F26B45D0AC3B0BA120A4C65DA846;// 0x0A54(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0A55(0x0003) MISSED OFFSET
	class UTimelineComponent*                          InteriorLightIdleFlicker02;                               // 0x0A58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              InteriorLightIdleFlicker01_Intensity_58BFA2824EF612DBCD4AB09469040806;// 0x0A60(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    InteriorLightIdleFlicker01__Direction_58BFA2824EF612DBCD4AB09469040806;// 0x0A64(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0A65(0x0003) MISSED OFFSET
	class UTimelineComponent*                          InteriorLightIdleFlicker01;                               // 0x0A68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ExteriorLightOff_Intensity_03E80D8345D0DFF74B5D78A6FC21924E;// 0x0A70(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ExteriorLightOff__Direction_03E80D8345D0DFF74B5D78A6FC21924E;// 0x0A74(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0A75(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ExteriorLightOff;                                         // 0x0A78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ExteriorLightOn_Intensity_67573662403B2E5F0F377785A30E539E;// 0x0A80(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ExteriorLightOn__Direction_67573662403B2E5F0F377785A30E539E;// 0x0A84(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0A85(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ExteriorLightOn;                                          // 0x0A88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               MachineInUse;                                             // 0x0A90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0A91(0x0003) MISSED OFFSET
	float                                              InteriorLightIntensity;                                   // 0x0A94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExteriorLightIntensity;                                   // 0x0A98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VendingMachineProxyBase.BP_VendingMachineProxyBase_C");
		return ptr;
	}


	void UserConstructionScript();
	void InteriorLightOnFlicker__FinishedFunc();
	void InteriorLightOnFlicker__UpdateFunc();
	void InteriorLightOnFlicker__AudioEvent__EventFunc();
	void ExteriorLightOff__FinishedFunc();
	void ExteriorLightOff__UpdateFunc();
	void ExteriorLightOn__FinishedFunc();
	void ExteriorLightOn__UpdateFunc();
	void InteriorLightIdleFlicker01__FinishedFunc();
	void InteriorLightIdleFlicker01__UpdateFunc();
	void InteriorLightIdleFlicker01__AudioEvent__EventFunc();
	void InteriorLightIdleFlicker02__FinishedFunc();
	void InteriorLightIdleFlicker02__UpdateFunc();
	void InteriorLightIdleFlicker02__AudioEvent__EventFunc();
	void OnOwningPlayerExitedInteractRange();
	void PlayStartupAnim();
	void OnStartInteractionSequenceFinished();
	void OnStopInteractionSequenceFinished();
	void OnOwningPlayerEnteredInteractRange();
	void PlayFrontPanelSFX();
	void TurnOffInteriorLight();
	void TurnOnExteriorLight();
	void AttemptInteriorLightFlicker();
	void OnOwningPlayerStoppedInteraction();
	void ReceiveBeginPlay();
	void OnOwningPlayerStartedInteraction();
	void K2_OnBoughtSomething(EVendingMachineBuyType* Type, class AActor** InventoryActor);
	void K2_OnSoldAllJunk();
	void K2_OnSoldSomething(class AActor** InventoryActor);
	void ExecuteUbergraph_BP_VendingMachineProxyBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

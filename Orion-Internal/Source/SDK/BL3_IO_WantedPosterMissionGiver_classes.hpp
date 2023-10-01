#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_WantedPosterMissionGiver_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_WantedPosterMissionGiver.IO_WantedPosterMissionGiver_C
// 0x00B0 (0x0660 - 0x05B0)
class AIO_WantedPosterMissionGiver_C : public AWantedPoster
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05B0(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    PS_WantedPoster_Attract;                                  // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneBodySwitchComponent*                   AttractParticleSwitch;                                    // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        HologramAudio;                                            // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   CharacterMesh;                                            // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakMinimapIconComponent*                    OakMinimapIcon;                                           // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   PosterMesh;                                               // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ProjectorFXOn;                                            // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneBodySwitchComponent*                   ProjectorSwitch;                                          // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               UsabilityBox;                                             // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               TouchBox;                                                 // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakMissionDirectorComponent*                OakMissionDirector;                                       // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMissionObserverComponent*                   MissionObserver;                                          // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_UsableComponent_C*                       BP_UsableComponent;                                       // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_LerpAlpha_38142AA54BB220E3234BC585C32C70E9;    // 0x0620(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_38142AA54BB220E3234BC585C32C70E9;   // 0x0624(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0625(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      CurrentUser;                                              // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               MissionAccepted;                                          // 0x0638(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0639(0x0003) MISSED OFFSET
	float                                              MaterialParameterVisibleState;                            // 0x063C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaterialParameterHiddenState;                             // 0x0640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TransitionDuration;                                       // 0x0644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_WantedPosterDefinition_C*                WantedPosterDefinition;                                   // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 StartHologramLoop;                                        // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 EndHologramLoop;                                          // 0x0658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_WantedPosterMissionGiver.IO_WantedPosterMissionGiver_C");
		return ptr;
	}


	void UpdateHologramText();
	void SetMinimapIconEnabled(bool Enabled);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void BndEvt__BP_UsableComponent_K2Node_ComponentBoundEvent_4_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_WantedPosterPrototype(class AController* UserController, class UPrimitiveComponent* UsedComponent);
	void OnDisabling();
	void OnDisabled();
	void BndEvt__MissionObserver_K2Node_ComponentBoundEvent_7_MissionObserverMissionUpdate__DelegateSignature_BP_IO_WantedPosterPrototype(class UClass* Mission, EMissionEvent MissionEvent);
	void OnEnabled();
	void SetToDisabled();
	void OnHologramActiveChanged();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_IO_WantedPosterMissionGiver(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

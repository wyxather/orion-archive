#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_IO_BroadcastRadio_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C
// 0x0110 (0x0660 - 0x0550)
class ABP_IO_BroadcastRadio_C : public AInteractiveObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0550(0x0008) (Transient, DuplicateTransient)
	class UTextRenderComponent*                        TextRender;                                               // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PlayingParticles;                                         // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMissionObserverComponent*                   MissionObserver;                                          // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUsableComponent*                            Usable;                                                   // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        RadioMesh;                                                // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBroadcastRadio_Visual_DataAsset_C*          Broadcast_VisualDef;                                      // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstance*>                   OverrideMaterialInstances;                                // 0x0590(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FRandomStream                               Seed;                                                     // 0x05A0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UWwiseEvent*>                         MissionNewsWwiseEvent;                                    // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UWwiseEvent*                                 StaticWwiseEvent;                                         // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBroadcastRadio_Audio_DataAsset_C*           BroadcastRadio_AudioDef;                                  // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABP_IO_BroadcastControlBox_C*                AssociatedBroadcastTower;                                 // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TEnumAsByte<Enum_RadioState>                       RadioState;                                               // 0x05D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x05D1(0x0007) MISSED OFFSET
	class UMissionRadioAudioDataAsset_C*               MissionRadioAudio;                                        // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       NeedRadioDef;                                             // 0x05E0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       NeedSpeakerDef;                                           // 0x05F8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UBroadcastRadio_Channel_DataAsset_C*         MusicChannel;                                             // 0x0610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBroadcastRadio_Channel_DataAsset_C*         AdsChannel;                                               // 0x0618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 AudioToPlay;                                              // 0x0620(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_RadioAudio>                       AudioChannel;                                             // 0x0628(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0629(0x0007) MISSED OFFSET
	class UWwiseEvent*                                 LastAudioPlayed;                                          // 0x0630(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGbxCondition*                               Cond_RadioState_NewEnumerator1;                           // 0x0638(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_RadioState_NewEnumerator3;                           // 0x0640(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_RadioState_NewEnumerator2;                           // 0x0648(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_AudioChannel_NewEnumerator1;                         // 0x0650(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_AudioChannel_NewEnumerator3;                         // 0x0658(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_IO_BroadcastRadio.BP_IO_BroadcastRadio_C");
		return ptr;
	}


	void ChangeRadioChannel();
	void CheckMissionRadio(const struct FMissionRadio& Mission_Radio);
	void UserConstructionScript();
	void PlayNewAudio();
	void ReceiveBeginPlay();
	void __UserState_RadioState_2(bool bFromLoad);
	void __UserState_RadioState_1(bool bFromLoad);
	void __UserState_RadioState_4(bool bFromLoad);
	void __UserState_RadioState_3(bool bFromLoad);
	void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_BroadcastRadio(class AController* UserController, class UPrimitiveComponent* UsedComponent);
	void BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_BroadcastRadio(class AController* UserController, class UPrimitiveComponent* UsedComponent);
	void BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionUpdate__DelegateSignature_BP_IO_BroadcastRadio(class UClass* Mission, EMissionEvent MissionEvent);
	void ExecuteUbergraph_BP_IO_BroadcastRadio(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

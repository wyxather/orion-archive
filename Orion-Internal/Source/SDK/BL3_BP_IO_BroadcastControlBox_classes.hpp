#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_IO_BroadcastControlBox_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C
// 0x0198 (0x06E8 - 0x0550)
class ABP_IO_BroadcastControlBox_C : public AInteractiveObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0550(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Spark3;                                                   // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Spark2;                                                   // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Spark1;                                                   // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUsableComponent*                            Usable;                                                   // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMissionObserverComponent*                   MissionObserver;                                          // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_CrewChallengeComponent_Sabotage_C*       BP_CrewChallengeComponent_Sabotage;                       // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    RedLight;                                                 // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Disabled;                                                 // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        ButtonAudio;                                              // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        TransmitterAudio;                                         // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneBodySwitchComponent*                   FXSwitch;                                                 // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    GreenLight;                                               // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Enabled;                                                  // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class ABP_IO_BroadcastRadio_C*>             MyAssociatedBroadcastSpeakers;                            // 0x05E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class UMaterialInterface*                          EnabledScreenMaterial;                                    // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          DisabledScreenMaterial;                                   // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          DisablingScreenMaterial;                                  // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           TransitionAnim;                                           // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBroadcastRadio_Audio_DataAsset_C*           PreSabotageAudioData;                                     // 0x0610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBroadcastRadio_Audio_DataAsset_C*           PostSabotageAudioData;                                    // 0x0618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_BroadcastControlState>            TowerState;                                               // 0x0620(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0621(0x0007) MISSED OFFSET
	TArray<class UWwiseEvent*>                         MissionNewsWwiseEvent;                                    // 0x0628(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<Enum_RadioState>                       RadioState;                                               // 0x0638(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0639(0x0007) MISSED OFFSET
	class UWwiseEvent*                                 StaticWwiseEvent;                                         // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRandomStream                               Seed;                                                     // 0x0648(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ShowConnectedRadios;                                      // 0x0650(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0651(0x0007) MISSED OFFSET
	class UMissionRadioAudioDataAsset_C*               MissionRadio;                                             // 0x0658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBroadcastRadio_Channel_DataAsset_C*         MusicChannel;                                             // 0x0660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBroadcastRadio_Channel_DataAsset_C*         AdsChannel;                                               // 0x0668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 AudioToPlay;                                              // 0x0670(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_RadioAudio>                       AudioChannel;                                             // 0x0678(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0679(0x0007) MISSED OFFSET
	class UWwiseEvent*                                 LastAudioPlayed;                                          // 0x0680(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableRowHandle                         MoxxiMail;                                                // 0x0688(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         MoxxiExtraFootnoteMail;                                   // 0x0698(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UGbxCondition*                               Cond_TowerState_NewEnumerator1;                           // 0x06A8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_TowerState_NewEnumerator2;                           // 0x06B0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_TowerState_NewEnumerator3;                           // 0x06B8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_RadioState_NewEnumerator1;                           // 0x06C0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_RadioState_NewEnumerator3;                           // 0x06C8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_RadioState_NewEnumerator2;                           // 0x06D0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_AudioChannel_NewEnumerator1;                         // 0x06D8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_AudioChannel_NewEnumerator3;                         // 0x06E0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_IO_BroadcastControlBox.BP_IO_BroadcastControlBox_C");
		return ptr;
	}


	void CheckMissionRadio(const struct FMissionRadio& MissionRadio);
	void UpdateAudioDef();
	void ChangeAudioChannel();
	void UpdateRadioLocations();
	void RegisterNewRadio(class ABP_IO_BroadcastRadio_C* AssociatedRadio);
	void UserConstructionScript();
	void BndEvt__BP_CrewChallengeComponent_Sabotage_K2Node_ComponentBoundEvent_1_ChallengePlayerEvent__DelegateSignature_BP_IO_BroadcastControlBox(class UChallengesComponent* PlayerChallenges);
	void __UserState_TowerState_2(bool bFromLoad);
	void __UserState_TowerState_1(bool bFromLoad);
	void __UserState_TowerState_3(bool bFromLoad);
	void __UserState_TowerState_4(bool bFromLoad);
	void BndEvt__Usable_K2Node_ComponentBoundEvent_2_UsableUsedOnChannelSignature__DelegateSignature_BP_IO_BroadcastControlBox(class AController* UserController, class UPrimitiveComponent* UsedComponent);
	void ReceiveBeginPlay();
	void __UserState_RadioState_2(bool bFromLoad);
	void __UserState_RadioState_3(bool bFromLoad);
	void PlayNewAudio();
	void __UserState_RadioState_1(bool bFromLoad);
	void BndEvt__MissionObserver_K2Node_ComponentBoundEvent_2_MissionObserverMissionUpdate__DelegateSignature_BP_IO_BroadcastRadio(class UClass* Mission, EMissionEvent MissionEvent);
	void ExecuteUbergraph_BP_IO_BroadcastControlBox(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

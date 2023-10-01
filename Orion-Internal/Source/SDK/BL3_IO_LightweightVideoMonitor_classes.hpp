#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_LightweightVideoMonitor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_LightweightVideoMonitor.IO_LightweightVideoMonitor_C
// 0x00A0 (0x06A8 - 0x0608)
class AIO_LightweightVideoMonitor_C : public AMission_InteractiveObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0608(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               TriggerBox;                                               // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakTriggerComponent*                        OakTrigger;                                               // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USocketComponent*                            ProjectorSocket;                                          // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        MonitorScreen;                                            // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMesh*                                 MonitorMesh;                                              // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaterialIndexToOverride;                                  // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x064C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          OnMaterial;                                               // 0x0650(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          OffMaterial;                                              // 0x0658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MuteAudio;                                                // 0x0660(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0661(0x0007) MISSED OFFSET
	class UGbxMediaData*                               SimpleMovieToPlay;                                        // 0x0668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FStruct_HelperMonitorSetup>          SecondaryMeshes;                                          // 0x0670(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<Enum_MissionVideoMonitorStates>        MonitorStates;                                            // 0x0680(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0681(0x0007) MISSED OFFSET
	class UMediaPlayer*                                PlayingMedia;                                             // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FWwiseLocationOverride>              AudioLocations;                                           // 0x0690(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UGbxCondition*                               Cond_MonitorStates_NewEnumerator1;                        // 0x06A0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_LightweightVideoMonitor.IO_LightweightVideoMonitor_C");
		return ptr;
	}


	void SetAudioLocations();
	void OverrideSecondaryMeshes(class UMediaTexture* Media_Texture);
	void UserConstructionScript();
	void __UserState_MonitorStates_2(bool bFromLoad);
	void __UserState_MonitorStates_1(bool bFromLoad);
	void BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_IO_LightweightVideoMonitor(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void MovieEnd();
	void ExecuteUbergraph_IO_LightweightVideoMonitor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

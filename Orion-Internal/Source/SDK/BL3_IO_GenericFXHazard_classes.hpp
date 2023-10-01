#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_GenericFXHazard_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_GenericFXHazard.IO_GenericFXHazard_C
// 0x00D0 (0x0620 - 0x0550)
class AIO_GenericFXHazard_C : public AInteractiveObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0550(0x0008) (Transient, DuplicateTransient)
	class ULightAudioComponent*                        Audio;                                                    // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxNavBoxComponent*                         GbxNavBox;                                                // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URegionBalanceStateComponent*                RegionBalanceState;                                       // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxNavMeshPainterComponent*                 GbxNavMeshPainter;                                        // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UElementalInteractionComponent*              ElementalInteraction;                                     // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Particle;                                                 // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDA_GenericFXHazard_C*                       DataAsset;                                                // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Active_on_Start;                                          // 0x05B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_GenericFXHazardState>             FireState;                                                // 0x05B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x05B2(0x0006) MISSED OFFSET
	class UElementalInteractionData*                   ElementalInteractionData;                                 // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    Event_BeginPlayerOverlap;                                 // 0x05C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               FireBeginOverlapDispatchEvents;                           // 0x05D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x05D1(0x0007) MISSED OFFSET
	TArray<class ALight*>                              AssociatedLights;                                         // 0x05D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	float                                              ActiveLightIntensity;                                     // 0x05E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InactiveLightIntensity;                                   // 0x05EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FWwisePlaybackInstance                      Audio_WarmupInstance;                                     // 0x05F0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FWwiseLocationOverride>              Audio_WorldLocations;                                     // 0x0608(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UGbxCondition*                               Cond_FireState_NewEnumerator1;                            // 0x0618(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_GenericFXHazard.IO_GenericFXHazard_C");
		return ptr;
	}


	void ConvertRelativeLocationsToWorld();
	void Audio_PlayShutdown(class UDA_GenericFXHazard_C* self3);
	void Audio_PlayWarmup(class UDA_GenericFXHazard_C* DataAsset);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void __UserState_FireState_1(bool bFromLoad);
	void __UserState_FireState_2(bool bFromLoad);
	void OnActivate();
	void OnDeactivate();
	void SetPlaceableFireState(bool On);
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_IO_GenericFXHazard(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_IO_GenericFXHazard(int EntryPoint);
	void Event_BeginPlayerOverlap__DelegateSignature(class AGbxPlayerController* GbxPlayerController);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Mus_Recruitment_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Mus_Recruitment.BP_Mus_Recruitment_C
// 0x004D (0x054D - 0x0500)
class ABP_Mus_Recruitment_C : public AOakMusicProvider
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0500(0x0008) (Transient, DuplicateTransient)
	class UMissionObserverComponent*                   MissionObserver;                                          // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        BossMusicAudioComponent;                                  // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FWwisePlaybackInstance                      MouthpiecePlaybackInstance;                               // 0x0518(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ComponentMaxRadius;                                       // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0534(0x0004) MISSED OFFSET
	TArray<struct FWwiseLocationOverride>              SpeakerLocations;                                         // 0x0538(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                AmbientScoreIndex;                                        // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPreShiv;                                                 // 0x054C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Mus_Recruitment.BP_Mus_Recruitment_C");
		return ptr;
	}


	void SetAudioComponentLocationOverride(float Radius);
	void PopulateSpeakerLocations(TArray<class UObject*>* Speaker_Proxies);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void BndEvt__MissionObserver_K2Node_ComponentBoundEvent_1_MissionObserverMissionsInitialized__DelegateSignature_BP_Mus_Recruitment();
	void BndEvt__MissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionObjectiveUpdate__DelegateSignature_BP_Mus_Recruitment(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void ExecuteUbergraph_BP_Mus_Recruitment(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

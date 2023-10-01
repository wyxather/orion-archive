#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Prologue_Audio_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Prologue_Audio.Prologue_Audio_C
// 0x0038 (0x04B0 - 0x0478)
class APrologue_Audio_C : public AOakLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (Transient, DuplicateTransient)
	TArray<struct FWwiseLocationOverride>              AlarmLocations;                                           // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FWwisePlaybackInstance                      AlarmPlaybackInstance;                                    // 0x0490(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AWwiseAmbientSound*                          Seq_Prologue_Tannis_Fixing_Map_Banging_ExecuteUbergraph_Prologue_Audio_RefProperty;// 0x04A8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Prologue_Audio.Prologue_Audio_C");
		return ptr;
	}


	void BndEvt__LevelMissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionObjectiveUpdate__DelegateSignature_Prologue_Audio(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void BndEvt__LevelMissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionObjectiveUpdate__DelegateSignature_Prologue_Audio_UNIX1561576679(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void BndEvt__LevelMissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionObjectiveUpdate__DelegateSignature_Prologue_Audio_UNIX1561726199(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void BndEvt__LevelMissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionObjectiveUpdate__DelegateSignature_Prologue_Audio_UNIX1561727335(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void ExecuteUbergraph_Prologue_Audio(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

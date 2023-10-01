#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_MissionScripted_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_MissionScripted.IO_MissionScripted_C
// 0x00B8 (0x06C0 - 0x0608)
class AIO_MissionScripted_C : public AMission_InteractiveObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0608(0x0008) (Transient, DuplicateTransient)
	class UMissionObserverComponent*                   MissionObserver;                                          // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FMissionEventReference                      MissionEventToSendOnScriptedAction;                       // 0x0620(0x0010) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    MissionScripted_ScriptedActionStarted;                    // 0x0630(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TEnumAsByte<EMissionScriptedStates>                MissionScriptedState;                                     // 0x0640(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0641(0x0007) MISSED OFFSET
	class AGbxLevelSequenceActor*                      LevelSequenceToPlay;                                      // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              DelayBeforePlayingSequence;                               // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0654(0x0004) MISSED OFFSET
	struct FMissionEventReference                      MissionEventToSendOnSequenceFinished;                     // 0x0658(0x0010) (Edit, BlueprintVisible)
	struct FMissionObjectiveReference                  SequenceFailsafeObjective;                                // 0x0668(0x0030) (Edit, BlueprintVisible)
	bool                                               SequenceIsMissionSafe;                                    // 0x0698(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0699(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    MissionScripted_SequenceFinished;                         // 0x06A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               OnLateJoin_GoToEndAndStop;                                // 0x06B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x06B1(0x0007) MISSED OFFSET
	class UGbxCondition*                               Cond_MissionScriptedState_NewEnumerator1;                 // 0x06B8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_MissionScripted.IO_MissionScripted_C");
		return ptr;
	}


	void CheckForMissionSequenceFailsafe();
	void SetMissionScriptedState(TEnumAsByte<Enum_MissionScriptedState> State);
	void UserConstructionScript();
	void Play_Feedback_Default(bool FromLoad);
	void Play_Feedback_ScriptedActionStarted();
	void Play_Feedback_ScriptedActionFinished();
	void __UserState_MissionScriptedState_1(bool bFromLoad);
	void __UserState_MissionScriptedState_2(bool bFromLoad);
	void BndEvt__LevelSequenceToPlay_K2Node_ComponentBoundEvent_0_OnMovieSceneSequencePlayerEvent__DelegateSignature_IO_MissionScripted();
	void ExecuteUbergraph_IO_MissionScripted(int EntryPoint);
	void MissionScripted_SequenceFinished__DelegateSignature();
	void MissionScripted_ScriptedActionStarted__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

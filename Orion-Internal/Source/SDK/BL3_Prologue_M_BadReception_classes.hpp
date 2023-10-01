#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Prologue_M_BadReception_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Prologue_M_BadReception.Prologue_M_BadReception_C
// 0x0028 (0x04A0 - 0x0478)
class APrologue_M_BadReception_C : public AOakLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (Transient, DuplicateTransient)
	int                                                CurrentLine;                                              // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0484(0x0004) MISSED OFFSET
	struct FTimerHandle                                Current_Timer;                                            // 0x0488(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                SpeakingLineForTink;                                      // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TinkHasntSpokenForABit;                                   // 0x0494(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SwitchOff;                                                // 0x0495(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0496(0x0002) MISSED OFFSET
	class AOakMissionSpawner*                          OakMissionSpawner_BadReception_TinkSpawner_ExecuteUbergraph_Prologue_M_BadReception_RefProperty;// 0x0498(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Prologue_M_BadReception.Prologue_M_BadReception_C");
		return ptr;
	}


	void BndEvt__OakTriggerCapsule_BadReceptionOpenDoor_K2Node_ActorBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void BndEvt__OakTriggerCapsule_BadReceptionOpenDoor_K2Node_ActorBoundEvent_1_OakUnTouchedTriggerDelegate__DelegateSignature(class AActor* LeavingActor, bool bIsPlayer);
	void CE_TimerForClaptrapHintButtSlamDoor();
	void BndEvt__OakTriggerCapsule_BadReception_DestroySattelite_K2Node_ActorBoundEvent_2_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void BndEvt__OakTriggerCapsule_BadReception_DestroySattelite_K2Node_ActorBoundEvent_3_OakUnTouchedTriggerDelegate__DelegateSignature(class AActor* LeavingActor, bool bIsPlayer);
	void CE_TimerForClimbingSatellite();
	void BndEvt__OakTriggerCapsule_3_K2Node_ActorBoundEvent_4_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void BndEvt__OakTriggerCapsule_3_K2Node_ActorBoundEvent_5_OakUnTouchedTriggerDelegate__DelegateSignature(class AActor* LeavingActor, bool bIsPlayer);
	void CE_TimerClaptrapHelpsShutOffElectricity();
	void BndEvt__OakTriggerCapsule_5_K2Node_ActorBoundEvent_8_OakUnTouchedTriggerDelegate__DelegateSignature(class AActor* LeavingActor, bool bIsPlayer);
	void BndEvt__OakTriggerCapsule_BadReception_SlideUnderDoor_K2Node_ActorBoundEvent_9_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void CE_TimerClaptrapTellsUsToSlide();
	void CE_TimerAllowTinkToSpeak();
	void BndEvt__IO_Door_400x400_SlideUp_Pandora_Generic_2_K2Node_ActorBoundEvent_10_On_DoorClosing__DelegateSignature();
	void BndEvt__SpawnMesh_CardboardBox_1_K2Node_ActorBoundEvent_11_SpawnPointEvent__DelegateSignature(class ASpawnPoint* SpawnPoint, class AActor* Actor);
	void BndEvt__IO_ElectricGenerator_WallSwitch_Combat_5_K2Node_ActorBoundEvent_5_OnElectrifiedStop__DelegateSignature();
	void BndEvt__OakTriggerBox_GetIntoTinkHouse_K2Node_ActorBoundEvent_12_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void BndEvt__LevelMissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionObjectiveUpdate__DelegateSignature_Prologue_M_BadReception(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void BndEvt__LevelMissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionObjectiveUpdate__DelegateSignature_Prologue_M_BadReception_UNIX1553358146(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void BndEvt__IO_ElectricGenerator_WallSwitch_Combat_5_K2Node_ActorBoundEvent_4_OnElectrifiedStart__DelegateSignature();
	void ExecuteUbergraph_Prologue_M_BadReception(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

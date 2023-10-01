#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Prologue_Dynamic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Prologue_Dynamic.Prologue_Dynamic_C
// 0x00C0 (0x0538 - 0x0478)
class APrologue_Dynamic_C : public AOakLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      Lilith;                                                   // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      Claptrap;                                                 // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    Pad1Particle;                                             // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Pad2Particle;                                             // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                HintsGiven;                                               // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NoPlayersNearDumptruckSpawn;                              // 0x04A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LilithInOffice;                                           // 0x04A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ClaptrapPatrolling;                                       // 0x04A6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               VaughnInHisOffice;                                        // 0x04A7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AIO_Door_400x400_SlideUpAndDown_Prison_C*    IO_Door_400x400_SlideUpAndDown_Prison_666_ExecuteUbergraph_Prologue_Dynamic_RefProperty;// 0x04A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AIO_MissionScripted_TrapDoorContainer_C*     IO_MissionScripted_TrapDoorContainer_839_ExecuteUbergraph_Prologue_Dynamic_RefProperty;// 0x04B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATerritory*                                  Ep04_TannisTerritory_ExecuteUbergraph_Prologue_Dynamic_RefProperty;// 0x04B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ALevelTravelStationObject_C*                 LevelTravelStationObject_5246_ExecuteUbergraph_Prologue_Dynamic_RefProperty;// 0x04C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATerritory*                                  Territory_Ellie_SpaceshipBunker_ExecuteUbergraph_Prologue_Dynamic_RefProperty;// 0x04C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATerritory*                                  Territory_Ellie_GetBiofuel_ExecuteUbergraph_Prologue_Dynamic_RefProperty;// 0x04D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATerritory*                                  Territory_Ellie_ByDoor_ExecuteUbergraph_Prologue_Dynamic_RefProperty;// 0x04D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AIO_ElectricGenerator_GroundSwitch_Combat_C* IO_ElectricGenerator_GroundSwitch_Combat_2071_ExecuteUbergraph_Prologue_Dynamic_RefProperty;// 0x04E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AOakTriggerCapsule*                          OakTriggerCapsule_ScoopersBullyHint_ExecuteUbergraph_Prologue_Dynamic_RefProperty;// 0x04E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AIO_Combat_PipeValve_Normal_Small_C*         IO_Combat_PipeValve_Normal_Small_58_ExecuteUbergraph_Prologue_Dynamic_RefProperty;// 0x04F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATerritory*                                  Territory_LilithIdle_ExecuteUbergraph_Prologue_Dynamic_RefProperty;// 0x04F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     AINode_LilithReturnToOfficeFromPatrol_ExecuteUbergraph_Prologue_Dynamic_RefProperty;// 0x0500(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATerritory*                                  Territory_ClaptrapIdle_ExecuteUbergraph_Prologue_Dynamic_RefProperty;// 0x0508(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATerritory*                                  Territory_VaugnAtLilithOffice_ExecuteUbergraph_Prologue_Dynamic_RefProperty;// 0x0510(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     AINode_VaughnGoesBackToOffice_ExecuteUbergraph_Prologue_Dynamic_RefProperty;// 0x0518(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     AINode_VaughnToHisOffice_ExecuteUbergraph_Prologue_Dynamic_RefProperty;// 0x0520(0x0008) (ZeroConstructor, IsPlainOldData)
	class AOakMissionSpawner*                          OakMissionSpawner_Ellie_ExecuteUbergraph_Prologue_Dynamic_RefProperty;// 0x0528(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     EllieNearLilith_ExecuteUbergraph_Prologue_Dynamic_RefProperty;// 0x0530(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Prologue_Dynamic.Prologue_Dynamic_C");
		return ptr;
	}


	void OnDialogSequenceFinished_7();
	void OnDialogSequenceFinished_6();
	void OnDialogSequenceFinished_5();
	void OnCompleted_8CD412424660729536FDAAABA7F71C06();
	void OnAborted_8CD412424660729536FDAAABA7F71C06();
	void OnCompleted_E22D4831433739E3497ED98C407B1B96();
	void OnAborted_E22D4831433739E3497ED98C407B1B96();
	void OnCompleted_0DB2EDD4419E47CF555D42854F8D5E1F();
	void OnAborted_0DB2EDD4419E47CF555D42854F8D5E1F();
	void OnCompleted_67A132E2438161A9634F5690D992B607();
	void OnAborted_67A132E2438161A9634F5690D992B607();
	void OnCompleted_30D82B574A45C65E247C079C5AD754A4();
	void OnAborted_30D82B574A45C65E247C079C5AD754A4();
	void BndEvt__IO_Switch_CoV_Kitbash_V_898_K2Node_ActorBoundEvent_71_On_SwitchTurningOff__DelegateSignature(class AActor* LastActorToUseSwitch);
	void BndEvt__IO_Switch_CoV_Kitbash_V_898_K2Node_ActorBoundEvent_70_On_SwitchTurningOn__DelegateSignature(class AActor* LastActorToUseSwitch);
	void BndEvt__BP_CatchARide_Console_66_K2Node_ActorBoundEvent_24_PlayerBeginInteraction__DelegateSignature(class AOakPlayerController* InteractingPlayer);
	void BndEvt__IO_ElectricRouter_Controller_482_K2Node_ActorBoundEvent_79_OnElectrifiedStart__DelegateSignature();
	void BndEvt__BP_CatchARide_Platform_ElliesRight_K2Node_ActorBoundEvent_3_VehicleScanned__DelegateSignature();
	void BndEvt__BP_CatchARide_Platform_ElliesLeft_K2Node_ActorBoundEvent_4_VehicleScanned__DelegateSignature();
	void BndEvt__OakMissionSpawner_Tannis_K2Node_ActorBoundEvent_1_SpawnerEvent__DelegateSignature(class ASpawner* Spawner, class AActor* Actor);
	void MRE_UnlockTravelStation_PrologueDesert();
	void BndEvt__LevelMissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionObjectiveUpdate__DelegateSignature_Prologue_Dynamic_UNIX1552498802(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void BndEvt__LevelMissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionObjectiveUpdate__DelegateSignature_Prologue_Dynamic_UNIX1552498972(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MRE_DespawnLilith();
	void BndEvt__IO_Combat_PipeValve_Normal_Small_58_K2Node_ActorBoundEvent_0_On_PipeFlow_On__DelegateSignature();
	void MRE_CheckPipeState();
	void MRE_CheckSwitchState();
	void BndEvt__IO_ElectricGenerator_GroundSwitch_Combat_2071_K2Node_ActorBoundEvent_2_OnElectrifiedStart__DelegateSignature();
	void MRE_GiveHints();
	void BndEvt__OakTriggerCapsule_ScoopersBullyHint_K2Node_ActorBoundEvent_6_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void BndEvt__LevelMissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionObjectiveUpdate__DelegateSignature_Prologue_Dynamic_UNIX1557916427(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void BndEvt__LevelMissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionObjectiveUpdate__DelegateSignature_Prologue_Dynamic_UNIX1558201975(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void BndEvt__BP_CatchARide_Console_2_K2Node_ActorBoundEvent_5_PlayerBeginInteraction__DelegateSignature(class AOakPlayerController* InteractingPlayer);
	void BndEvt__BP_CatchARide_Platform_0_K2Node_ActorBoundEvent_7_VehicleScanned__DelegateSignature();
	void BndEvt__BP_CatchARide_Platform_1089_K2Node_ActorBoundEvent_8_VehicleScanned__DelegateSignature();
	void BndEvt__LevelMissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionObjectiveUpdate__DelegateSignature_Prologue_Dynamic_UNIX1559814245(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void BndEvt__LevelMissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionObjectiveUpdate__DelegateSignature_Prologue_Dynamic_UNIX1559814467(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void BndEvt__LevelMissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionObjectiveUpdate__DelegateSignature_Prologue_Dynamic_UNIX1559814738(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void BndEvt__LevelMissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionObjectiveUpdate__DelegateSignature_Prologue_Dynamic_UNIX1559814975(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void BndEvt__LevelMissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionObjectiveUpdate__DelegateSignature_Prologue_Dynamic_UNIX1559815525(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void BndEvt__LevelMissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionObjectiveUpdate__DelegateSignature_Prologue_Dynamic_UNIX1559820181(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void BndEvt__LevelMissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionObjectiveUpdate__DelegateSignature_Prologue_Dynamic_UNIX1559830285(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void BndEvt__LevelMissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionObjectiveUpdate__DelegateSignature_Prologue_Dynamic_UNIX1559835341(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void RemoteVehicleScanned();
	void BndEvt__BP_CatchARide_Console_2_K2Node_ActorBoundEvent_5_PlayerBeginInteraction__DelegateSignature_UNIX1560096125(class AOakPlayerController* InteractingPlayer);
	void RemoteCatchARideUsed();
	void BndEvt__BP_CatchARide_Platform_0_K2Node_ActorBoundEvent_7_VehicleScanned__DelegateSignature_UNIX1560096744();
	void BndEvt__BP_CatchARide_Platform_1089_K2Node_ActorBoundEvent_8_VehicleScanned__DelegateSignature_UNIX1560096744();
	void BndEvt__LevelMissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionObjectiveUpdate__DelegateSignature_Prologue_Dynamic_UNIX1561130784(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void ExecuteUbergraph_Prologue_Dynamic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

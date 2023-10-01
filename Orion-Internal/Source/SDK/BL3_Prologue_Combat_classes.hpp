#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Prologue_Combat_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Prologue_Combat.Prologue_Combat_C
// 0x00C0 (0x0538 - 0x0478)
class APrologue_Combat_C : public AOakLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      Sunsmasher_RoofCombatant;                                 // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                Counter;                                                  // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x048C(0x0004) MISSED OFFSET
	class AActor*                                      SunsmasherMove1;                                          // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      SunsmasherMove2;                                          // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      SunsmasherMove3;                                          // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      Dumptruck;                                                // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AOakSpawner*                                 OakSpawner_32_ExecuteUbergraph_Prologue_Combat_RefProperty;// 0x04B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AHavokUserEdgeActor*                         HavokUserEdgeActor_Sunsmasher_ExecuteUbergraph_Prologue_Combat_RefProperty;// 0x04B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAINode*                                     AINode_2_ExecuteUbergraph_Prologue_Combat_RefProperty;    // 0x04C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AOakSpawner*                                 OakSpawner_SunSmasher_ExecuteUbergraph_Prologue_Combat_RefProperty;// 0x04C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AOakSpawner*                                 OakSpawner_Sunsmasher_0_ExecuteUbergraph_Prologue_Combat_RefProperty;// 0x04D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AOakMissionSpawner*                          OakMissionSpawner_PowerfulConnections_Skags_ExecuteUbergraph_Prologue_Combat_RefProperty;// 0x04D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AOakMissionSpawner*                          OakMissionSpawner_SkagCampOutsideRecruitment_1_ExecuteUbergraph_Prologue_Combat_RefProperty;// 0x04E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AOakMissionSpawner*                          OakMissionSpawner_3_ExecuteUbergraph_Prologue_Combat_RefProperty;// 0x04E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AOakMissionSpawner*                          OakMissionSpawner_7_ExecuteUbergraph_Prologue_Combat_RefProperty;// 0x04F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AOakMissionSpawner*                          OakMissionSpawner_8_ExecuteUbergraph_Prologue_Combat_RefProperty;// 0x04F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AOakMissionSpawner*                          OakMissionSpawner_12_ExecuteUbergraph_Prologue_Combat_RefProperty;// 0x0500(0x0008) (ZeroConstructor, IsPlainOldData)
	class AOakSpawner*                                 OakSpawner_14_ExecuteUbergraph_Prologue_Combat_RefProperty;// 0x0508(0x0008) (ZeroConstructor, IsPlainOldData)
	class AOakSpawner*                                 OakSpawner_13_ExecuteUbergraph_Prologue_Combat_RefProperty;// 0x0510(0x0008) (ZeroConstructor, IsPlainOldData)
	class AOakSpawner*                                 OakSpawner_SkagsNearVehicles_ExecuteUbergraph_Prologue_Combat_RefProperty;// 0x0518(0x0008) (ZeroConstructor, IsPlainOldData)
	class AOakSpawner*                                 OakSpawner_0_ExecuteUbergraph_Prologue_Combat_RefProperty;// 0x0520(0x0008) (ZeroConstructor, IsPlainOldData)
	class AOakMissionSpawner*                          OakMissionSpawner_0_ExecuteUbergraph_Prologue_Combat_RefProperty;// 0x0528(0x0008) (ZeroConstructor, IsPlainOldData)
	class AOakSpawner*                                 OakSpawner_15_ExecuteUbergraph_Prologue_Combat_RefProperty;// 0x0530(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Prologue_Combat.Prologue_Combat_C");
		return ptr;
	}


	void ResetSpawnerIfAllAreDead(class AOakSpawner* SpawnerToEvaluate);
	void OnCompleted_D8CA171E4B6231997D2B44A057502A49();
	void OnAborted_D8CA171E4B6231997D2B44A057502A49();
	void OnCompleted_262B7C864039379B93683583D8DA0D8B();
	void OnAborted_262B7C864039379B93683583D8DA0D8B();
	void OnCompleted_564ECBCE402F604C41A869ACEC2FC00C();
	void OnAborted_564ECBCE402F604C41A869ACEC2FC00C();
	void BndEvt__OakSpawner_SunSmasher_K2Node_ActorBoundEvent_0_SpawnerEvent__DelegateSignature(class ASpawner* Spawner, class AActor* Actor);
	void BndEvt__OakTriggerVolume_2_K2Node_ActorBoundEvent_6_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void BndEvt__OakTriggerBox3_BoatCamp_MoveBanditsTrigger_K2Node_ActorBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void BndEvt__SpawnMesh_Sunsmasher_884_K2Node_ActorBoundEvent_3_SpawnPointEvent__DelegateSignature(class ASpawnPoint* SpawnPoint, class AActor* Actor);
	void BndEvt__SpawnMesh_Sunsmasher_3_K2Node_ActorBoundEvent_4_SpawnPointEvent__DelegateSignature(class ASpawnPoint* SpawnPoint, class AActor* Actor);
	void BndEvt__SpawnMesh_DoorSmall_382_K2Node_ActorBoundEvent_5_SpawnPointEvent__DelegateSignature(class ASpawnPoint* SpawnPoint, class AActor* Actor);
	void CE_AreAllDeadSectionOneBoat();
	void CD_AreAllDeadSectionTwoBoat();
	void CD_AreAllDeadSectionThreeBoat();
	void MRE_CheckForSkags();
	void BndEvt__OakMissionSpawner_PowerfulConnections_Skags_K2Node_ActorBoundEvent_9_SpawnerDoneEvent__DelegateSignature(class ASpawner* Spawner);
	void BndEvt__OakMissionSpawner_SkagCampOutsideRecruitment_1_K2Node_ActorBoundEvent_2_SpawnerDoneEvent__DelegateSignature(class ASpawner* Spawner);
	void BndEvt__OakSpawner_40_K2Node_ActorBoundEvent_7_SpawnerDoneEvent__DelegateSignature(class ASpawner* Spawner);
	void BndEvt__OakMissionSpawner_7_K2Node_ActorBoundEvent_13_SpawnerEvent__DelegateSignature(class ASpawner* Spawner, class AActor* Actor);
	void BndEvt__OakMissionSpawner_7_K2Node_ActorBoundEvent_13_SpawnerEvent__DelegateSignature_UNIX1555328363(class ASpawner* Spawner, class AActor* Actor);
	void BndEvt__OakMissionSpawner_7_K2Node_ActorBoundEvent_13_SpawnerEvent__DelegateSignature_UNIX1555328373(class ASpawner* Spawner, class AActor* Actor);
	void BndEvt__OakSpawnPoint_Undertaker_K2Node_ActorBoundEvent_8_SpawnPointEvent__DelegateSignature(class ASpawnPoint* SpawnPoint, class AActor* Actor);
	void MRE_SpawnSuccSkags();
	void BndEvt__OakMissionSpawner_DumpTruck_K2Node_ActorBoundEvent_16_SpawnerEvent__DelegateSignature(class ASpawner* Spawner, class AActor* Actor);
	void CE_WasButtholed();
	void MRE_ResetCoVSpawner();
	void BndEvt__SpawnMesh_SkagDen_660_K2Node_ActorBoundEvent_17_SpawnPointEvent__DelegateSignature(class ASpawnPoint* SpawnPoint, class AActor* Actor);
	void BndEvt__SpawnMesh_SkagDen_660_K2Node_ActorBoundEvent_18_SpawnPointEvent__DelegateSignature(class ASpawnPoint* SpawnPoint, class AActor* Actor);
	void BndEvt__LevelMissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionObjectiveUpdate__DelegateSignature_Prologue_Combat(const struct FMissionObjectiveReference& Objective, EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void ExecuteUbergraph_Prologue_Combat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

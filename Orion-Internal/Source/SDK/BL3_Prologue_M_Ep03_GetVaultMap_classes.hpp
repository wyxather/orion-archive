#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Prologue_M_Ep03_GetVaultMap_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Prologue_M_Ep03_GetVaultMap.Prologue_M_Ep03_GetVaultMap_C
// 0x0028 (0x04A0 - 0x0478)
class APrologue_M_Ep03_GetVaultMap_C : public AOakLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (Transient, DuplicateTransient)
	class AOakVehicle*                                 Vehicle_Two;                                              // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AOakVehicle*                                 Vehicle_Three;                                            // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AOakVehicle*                                 Vehicle_One;                                              // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AOakVehicle*                                 Player_Occupied_Vehicle;                                  // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Prologue_M_Ep03_GetVaultMap.Prologue_M_Ep03_GetVaultMap_C");
		return ptr;
	}


	void CE_PlayerHijackedVehicleOne(class UVehicleSeatComponent* Seat, class AOakCharacter* Character);
	void CE_PlayerHijackedVehicleTwo(class UVehicleSeatComponent* Seat, class AOakCharacter* Character);
	void CE_PlayerHijackedVehicleThree(class UVehicleSeatComponent* Seat, class AOakCharacter* Character);
	void CE_PlayerEnteredVehicleOne(class UVehicleSeatComponent* Seat, class AOakCharacter* Character);
	void CE_PlayerEnteredVehicleTwo(class UVehicleSeatComponent* Seat, class AOakCharacter* Character);
	void CE_PlayerEnteredVehicleThree(class UVehicleSeatComponent* Seat, class AOakCharacter* Character);
	void CE_PlayerExitedVehicleOne(class UVehicleSeatComponent* Seat, class AOakCharacter* Character);
	void CE_PlayerExitedVehicleTwo(class UVehicleSeatComponent* Seat, class AOakCharacter* Character);
	void CE_PlayerExitedVehicleThree(class UVehicleSeatComponent* Seat, class AOakCharacter* Character);
	void CE_VehicleOneBlewUp(class UVehicleSeatComponent* Seat, class AOakCharacter* Character);
	void CE_VehicleTwoBlewUp(class UVehicleSeatComponent* Seat, class AOakCharacter* Character);
	void CE_VehicleThreeBlewUp(class UVehicleSeatComponent* Seat, class AOakCharacter* Character);
	void BndEvt__OakVehicleSpawnPoint_VehicleNearEllies_5_K2Node_ActorBoundEvent_2_VehicleSpawnPointEvent__DelegateSignature(class AOakVehicleSpawnPoint* VehicleSpawnPoint, class AOakVehicle* Vehicle);
	void BndEvt__OakVehicleSpawnPoint_VehicleNearEllies_K2Node_ActorBoundEvent_3_VehicleSpawnPointEvent__DelegateSignature(class AOakVehicleSpawnPoint* VehicleSpawnPoint, class AOakVehicle* Vehicle);
	void BndEvt__OakTriggerVolume_LeavingEllie_K2Node_ActorBoundEvent_0_OakUnTouchedTriggerDelegate__DelegateSignature(class AActor* LeavingActor, bool bIsPlayer);
	void MRE_BindVehicleOne();
	void MRE_BindVehicleTwo();
	void MRE_BindVehicleThree();
	void BndEvt__OakTriggerVolume_DriveIntoElliesWithVehicle_K2Node_ActorBoundEvent_4_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void BndEvt__LevelMissionObserver_K2Node_ComponentBoundEvent_0_MissionObserverMissionsInitialized__DelegateSignature_Prologue_M_Ep03_GetVaultMap();
	void BndEvt__OakTriggerCapsule_3_K2Node_ActorBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void BndEvt__OakTriggerCapsule_PlayerPassedOldGasStation_K2Node_ActorBoundEvent_5_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void BndEvt__OakTriggerCapsule_EllieCommentsOnBandits_K2Node_ActorBoundEvent_7_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void BndEvt__OakTriggerCapsule_EllieRecommendsHijacking_K2Node_ActorBoundEvent_8_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void MRE_VaughnDoesPushups();
	void MRE_StopVaughnDoingPushups();
	void BndEvt__OakTriggerCapsule_VaughnAndLilithSpeak_K2Node_ActorBoundEvent_9_OakTouchedTriggerDelegate__DelegateSignature(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void MRE_VaughnAndLilithLookAtEachOther();
	void MRE_VaughAndLilithStopLookingAtEachOther();
	void BndEvt__OakMissionSpawner_ElliesVehicleStationary_K2Node_ActorBoundEvent_12_SpawnerEvent__DelegateSignature(class ASpawner* Spawner, class AActor* Actor);
	void BndEvt__OakVehicleSpawnPoint_ElliesStationary_K2Node_ActorBoundEvent_6_SpawnPointEvent__DelegateSignature(class ASpawnPoint* SpawnPoint, class AActor* Actor);
	void ExecuteUbergraph_Prologue_M_Ep03_GetVaultMap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_CartelSpawner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_CartelSpawner.IO_CartelSpawner_C
// 0x01BC (0x070C - 0x0550)
class AIO_CartelSpawner_C : public AInteractiveObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0550(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpawnOptionData*                            CartelSpawnOption;                                        // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTimeTillSpawn;                                         // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x056C(0x0004) MISSED OFFSET
	class USpawnerComponent*                           OwnerSpawnerComponent;                                    // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bNextKillSquadCanSpawnLt;                                 // 0x0578(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0579(0x0007) MISSED OFFSET
	struct FEnvQueryParams                             EQS_CartelSpawnLocs;                                      // 0x0580(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                             PotentialCartelSpawnLocs;                                 // 0x0638(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     BackupSpawnFXLocation;                                    // 0x0648(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0654(0x0004) MISSED OFFSET
	TMap<TEnumAsByte<EMapNames>, class USpawnOptionData*> MapNameToOptions_Thugs;                                   // 0x0658(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<EMapNames>, class USpawnOptionData*> MapNameToOptions_Underbosses;                             // 0x06A8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AOakSpawner*>                         CreatedOakSpawners;                                       // 0x06F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                OutstandingSpawnersBeforeCleanup;                         // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_CartelSpawner.IO_CartelSpawner_C");
		return ptr;
	}


	void SetSpawnedEnemyProvoke(class AActor* Actor);
	void HandleTestmapEnemySpawns(TEnumAsByte<ECartelSpawnerType> SpawnType);
	void CheckForSpawnCollisions(const struct FVector& CapsulePos, bool* CanSpawn);
	void SpawnCartelFX(const struct FVector& BackupFX_Location);
	void InitCartelIO();
	void SpawnNewKillSquadMember(class USpawnOptionData* SpawnOptions, TEnumAsByte<ECartelSpawnerType> SpawnType);
	void BeginCleanup();
	void UpdateCartelMission();
	void UserConstructionScript();
	void GbxAsyncRequest_Miss_71E9269F48E315C85EAA629E6FCD3C50(const struct FHitResult& Result);
	void GbxAsyncRequest_Hit_71E9269F48E315C85EAA629E6FCD3C50(const struct FHitResult& Result);
	void ReceiveBeginPlay();
	void SpawnCartelKillSquad();
	void SpawnUnderbossWithAllies();
	void StartAsyncSpawnTrace();
	void DoStartupPresentation();
	void OnAllDied_Underboss(class ASpawner* Spawner);
	void OnAllDied_ThugSpawner(class ASpawner* Spawner);
	void OnSuspend_Underboss(class ASpawner* Spawner, class AActor* Actor);
	void OnSuspend_Thug(class ASpawner* Spawner, class AActor* Actor);
	void BeginFailsafeTimer();
	void OnSpawned_ThugSpawner(class ASpawner* Spawner, class AActor* Actor);
	void OnSpawned_Underboss(class ASpawner* Spawner, class AActor* Actor);
	void ExecuteUbergraph_IO_CartelSpawner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

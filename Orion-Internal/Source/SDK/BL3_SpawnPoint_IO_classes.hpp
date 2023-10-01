#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_SpawnPoint_IO_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpawnPoint_IO.SpawnPoint_IO_C
// 0x0030 (0x04F8 - 0x04C8)
class ASpawnPoint_IO_C : public AOakSpawnPoint
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C8(0x0008) (Transient, DuplicateTransient)
	class UGbxNavMeshPainterComponent*                 GbxNavMeshPainter;                                        // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               NavBox;                                                   // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NavCollisionSize;                                         // 0x04E0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     NavCollisionSize_Min;                                     // 0x04EC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpawnPoint_IO.SpawnPoint_IO_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void IOSpawner_ActorDied(class ASpawnPoint* SpawnPoint, class AActor* Actor);
	void IOSpawner_ActorSpawned(class ASpawnPoint* SpawnPoint, class AActor* Actor);
	void IOSpawner_ActorFracture(const struct FVector& HitPoint, const struct FVector& HitDirection);
	void IOSpawner_ActorDestroyed(class AActor* DestroyedActor);
	void ExecuteUbergraph_SpawnPoint_IO(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

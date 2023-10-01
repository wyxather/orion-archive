#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_SpawnDLCScript_BloodyHarvest_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpawnDLCScript_BloodyHarvest.SpawnDLCScript_BloodyHarvest_C
// 0x0008 (0x0030 - 0x0028)
class USpawnDLCScript_BloodyHarvest_C : public USpawnDLCScript
{
public:
	class UGbxCondition*                               ConditionalRequiredMissionState;                          // 0x0028(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpawnDLCScript_BloodyHarvest.SpawnDLCScript_BloodyHarvest_C");
		return ptr;
	}


	void GetSpawnTransform(class AActor* ActorThatDied, struct FTransform* Output);
	void SpawnEnemyAsHaunted(class AActor* Enemy);
	void OnActorSpawned(class USpawnerComponent** SpawnerComponent, class AActor** Actor);
	void OnActorDied(class USpawnerComponent** SpawnerComponent, class AActor** Actor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

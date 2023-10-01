#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_IO_LootSpawnComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_IO_LootSpawnComponent.BP_IO_LootSpawnComponent_C
// 0x0036 (0x01AE - 0x0178)
class UBP_IO_LootSpawnComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0178(0x0008) (Transient, DuplicateTransient)
	float                                              DelayBeforeSpawningLoot;                                  // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0184(0x0004) MISSED OFFSET
	class AActor*                                      ContextActor;                                             // 0x0188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UItemPoolListInterface*                      ItemPool;                                                 // 0x0190(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULootSpawnPatternData*                       SpawnPattern;                                             // 0x01A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeToSpawnLootOver;                                      // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AttachLoot;                                               // 0x01AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MissionLootFailsafe;                                      // 0x01AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_IO_LootSpawnComponent.BP_IO_LootSpawnComponent_C");
		return ptr;
	}


	void SpawnLoot(bool FromLoad);
	void SetLootVariables(float DelayBeforeSpawningLoot, class AActor* ContextActor, class UItemPoolListInterface* ItemPool, const struct FName& SocketName, class ULootSpawnPatternData* SpawnPattern, float TimeToSpawnLootOver, bool AttachLoot, bool MissionLootFailsafe);
	void ExecuteUbergraph_BP_IO_LootSpawnComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_IO_LootSpawnComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_IO_LootSpawnComponent.BP_IO_LootSpawnComponent_C.SpawnLoot
struct UBP_IO_LootSpawnComponent_C_SpawnLoot_Params
{
	bool                                               FromLoad;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_LootSpawnComponent.BP_IO_LootSpawnComponent_C.SetLootVariables
struct UBP_IO_LootSpawnComponent_C_SetLootVariables_Params
{
	float                                              DelayBeforeSpawningLoot;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ContextActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItemPoolListInterface*                      ItemPool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ULootSpawnPatternData*                       SpawnPattern;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeToSpawnLootOver;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AttachLoot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MissionLootFailsafe;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IO_LootSpawnComponent.BP_IO_LootSpawnComponent_C.ExecuteUbergraph_BP_IO_LootSpawnComponent
struct UBP_IO_LootSpawnComponent_C_ExecuteUbergraph_BP_IO_LootSpawnComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

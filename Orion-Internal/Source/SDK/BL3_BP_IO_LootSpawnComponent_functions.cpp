// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_IO_LootSpawnComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_IO_LootSpawnComponent.BP_IO_LootSpawnComponent_C.SpawnLoot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FromLoad                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_IO_LootSpawnComponent_C::SpawnLoot(bool FromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_LootSpawnComponent.BP_IO_LootSpawnComponent_C.SpawnLoot");

	UBP_IO_LootSpawnComponent_C_SpawnLoot_Params params;
	params.FromLoad = FromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_LootSpawnComponent.BP_IO_LootSpawnComponent_C.SetLootVariables
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DelayBeforeSpawningLoot        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ContextActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UItemPoolListInterface*  ItemPool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ULootSpawnPatternData*   SpawnPattern                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeToSpawnLootOver            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AttachLoot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           MissionLootFailsafe            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_IO_LootSpawnComponent_C::SetLootVariables(float DelayBeforeSpawningLoot, class AActor* ContextActor, class UItemPoolListInterface* ItemPool, const struct FName& SocketName, class ULootSpawnPatternData* SpawnPattern, float TimeToSpawnLootOver, bool AttachLoot, bool MissionLootFailsafe)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_LootSpawnComponent.BP_IO_LootSpawnComponent_C.SetLootVariables");

	UBP_IO_LootSpawnComponent_C_SetLootVariables_Params params;
	params.DelayBeforeSpawningLoot = DelayBeforeSpawningLoot;
	params.ContextActor = ContextActor;
	params.ItemPool = ItemPool;
	params.SocketName = SocketName;
	params.SpawnPattern = SpawnPattern;
	params.TimeToSpawnLootOver = TimeToSpawnLootOver;
	params.AttachLoot = AttachLoot;
	params.MissionLootFailsafe = MissionLootFailsafe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IO_LootSpawnComponent.BP_IO_LootSpawnComponent_C.ExecuteUbergraph_BP_IO_LootSpawnComponent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_IO_LootSpawnComponent_C::ExecuteUbergraph_BP_IO_LootSpawnComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IO_LootSpawnComponent.BP_IO_LootSpawnComponent_C.ExecuteUbergraph_BP_IO_LootSpawnComponent");

	UBP_IO_LootSpawnComponent_C_ExecuteUbergraph_BP_IO_LootSpawnComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

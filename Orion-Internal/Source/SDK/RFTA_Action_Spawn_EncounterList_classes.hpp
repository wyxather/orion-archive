#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Spawn_EncounterList_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Spawn_EncounterList.Action_Spawn_EncounterList_C
// 0x0048 (0x0270 - 0x0228)
class UAction_Spawn_EncounterList_C : public UActionBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USpawnTable*                                 SpawnTable;                                               // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<struct FName>                               SpawnTableTags;                                           // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	int                                                Rating;                                                   // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                MaxEncounters;                                            // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UEncounterInstance*                          EncounterInstance;                                        // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Cooldown;                                                 // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              CooldownMin;                                              // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              CooldownMax;                                              // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FName                                       ActiveCooldown;                                           // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Spawn_EncounterList.Action_Spawn_EncounterList_C");
		return ptr;
	}


	void DestroyAllSpawns();
	void SetCooldown();
	void LockCooldown();
	void SetAggroGroup();
	void CanSpawn(bool* Out);
	void GetEncounterManager(class UEncounterManager** EncounterMan);
	void OnActionStart();
	void OnActionStop();
	void OnComplete_Event_1(class UEncounterInstance** Encounter);
	void ExecuteUbergraph_Action_Spawn_EncounterList(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

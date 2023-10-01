#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_SeedCaller_Minion_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Character_SeedCaller_Minion.Character_SeedCaller_Minion_C
// 0x0048 (0x0CE0 - 0x0C98)
class ACharacter_SeedCaller_Minion_C : public ACharacter_Root_Hollow_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C98(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             VFX_Ambient;                                              // 0x0CA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             SFX_Seed_Caller_Despawn;                                  // 0x0CA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             SFX_Seed_Caller_Spawn;                                    // 0x0CB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              HealthMax;                                                // 0x0CB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              Damage;                                                   // 0x0CBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              Duration;                                                 // 0x0CC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               IsDissolving;                                             // 0x0CC4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0CC5(0x0003) MISSED OFFSET
	float                                              SpawnTime;                                                // 0x0CC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0CCC(0x0004) MISSED OFFSET
	class AActor*                                      WeaponCause;                                              // 0x0CD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              BuildUpTimeBeforeDetonation;                              // 0x0CD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WeakSpotMod;                                              // 0x0CDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_SeedCaller_Minion.Character_SeedCaller_Minion_C");
		return ptr;
	}


	void GetMinionOwner(class AActor** Owner);
	void GetCauseDamageScalar(float* Scalar);
	void MinionHasDamageTag(bool* ExtraDamage, float* DamageScalar);
	void HasSoulEmberTrinket(bool* Out);
	void GetSpawnTime(float* Time);
	void IsValidMinion(bool* Out);
	void GetBrutalMarkDamageMod(struct FDamageInfo* InputPin, float* DamageMod);
	void GetArmorScalars(struct FDamageInfo* DamageInfo, float* MinionDamageScalar);
	void GetPunisherDamageMod(class AActor** Target, float* PunisherMod);
	void ModifyDamage(struct FDamageInfo* Info, bool* Rtn);
	void MC_Explosion();
	void ReceiveBeginPlay();
	void OnPostComputeStats();
	void OnDead_Event_1(unsigned char* Reason, class ACharacterGunfire** Character, class AActor** Cause);
	void NotifyHitTarget(struct FDamageInfo* DamageInfo);
	void DestroyMinion();
	void OnOwnerComputeStats();
	void OnDead_Event_2(unsigned char* Reason, class ACharacterGunfire** Character, class AActor** Cause);
	void MC_BuildUp();
	void MulticastDissolveOut();
	void ExecuteUbergraph_Character_SeedCaller_Minion(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Wasteland_VeryGoodBoy_Minion_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C
// 0x004C (0x0CE5 - 0x0C99)
class ACharacter_Wasteland_VeryGoodBoy_Minion_C : public ACharacter_Wasteland_Hound_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0C99(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             Interact_Node;                                            // 0x0CA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             SFX_VeryGoodBoy_Spawn;                                    // 0x0CB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              HealthMax;                                                // 0x0CB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              Damage;                                                   // 0x0CBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              Duration;                                                 // 0x0CC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               IsDissolving;                                             // 0x0CC4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0CC5(0x0003) MISSED OFFSET
	float                                              SpawnTime;                                                // 0x0CC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0CCC(0x0004) MISSED OFFSET
	class AActor*                                      WeaponCause;                                              // 0x0CD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              BuildUpTimeBeforeDetonation;                              // 0x0CD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WeakSpotMod;                                              // 0x0CDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LifeExtentionPeriod;                                      // 0x0CE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PetBlocker;                                               // 0x0CE4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C");
		return ptr;
	}


	void GetMinionOwner(class AActor** Owner);
	void GetSpawnTime(float* Time);
	void IsValidMinion(bool* Out);
	void HasSoulEmberTrinket(bool* Out);
	void MinionHasDamageTag(bool* ExtraDamage, float* DamageScalar);
	void GetCauseDamageScalar(float* Scalar);
	void GetFriendsForBuff(class AActor** InputPin, TArray<class ACharacterGunfire*>* Characters);
	void GetBrutalMarkDamageMod(struct FDamageInfo* InputPin, float* DamageMod);
	void GetArmorScalars(struct FDamageInfo* DamageInfo, float* MinionDamageScalar);
	void GetPunisherDamageMod(class AActor** Target, float* PunisherMod);
	void ModifyDamage(struct FDamageInfo* Info, bool* Rtn);
	void MC_BuildUp();
	void MC_Explosion();
	void ReceiveBeginPlay();
	void OnOwnerComputeStats();
	void OnDead_Event_2(unsigned char* Reason, class ACharacterGunfire** Character, class AActor** Cause);
	void MulticastDissolveOut();
	void DestroyMinion();
	void OnPostComputeStats();
	void NotifyHitTarget(struct FDamageInfo* DamageInfo);
	void DissolveOut();
	void GoodBoyBuff();
	void OnDead_Event_1(unsigned char* Reason, class ACharacterGunfire** Character, class AActor** Cause);
	void ExecuteUbergraph_Character_Wasteland_VeryGoodBoy_Minion(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Wasteland_Beckon_Minion_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Character_Wasteland_Beckon_Minion.Character_Wasteland_Beckon_Minion_C
// 0x0044 (0x0D44 - 0x0D00)
class ACharacter_Wasteland_Beckon_Minion_C : public ACharacter_Wasteland_Skull_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D00(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             VFX_Ambient;                                              // 0x0D08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             SFX_CallOfTheUndying_Minion_Despawn;                      // 0x0D10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             SFX_CallOfTheUndying_Minion_Spawn;                        // 0x0D18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                 // 0x0D20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              Damage;                                                   // 0x0D24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              HealthMax;                                                // 0x0D28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              SpawnTime;                                                // 0x0D2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsDissolving;                                             // 0x0D30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0D31(0x0007) MISSED OFFSET
	class AActor*                                      WeaponCause;                                              // 0x0D38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              WeakSpotMod;                                              // 0x0D40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Wasteland_Beckon_Minion.Character_Wasteland_Beckon_Minion_C");
		return ptr;
	}


	void GetMinionOwner(class AActor** Owner);
	void GetCauseDamageScalar(float* Scalar);
	void MinionHasDamageTag(bool* ExtraDamage, float* DamageScalar);
	void HasSoulEmberTrinket(bool* Out);
	void IsValidMinion(bool* Out);
	void GetSpawnTime(float* Time);
	void GetBrutalMarkDamageMod(struct FDamageInfo* InputPin, float* DamageMod);
	void GetArmorScalars(struct FDamageInfo* DamageInfo, float* MinionDamageScalar);
	void GetPunisherDamageMod(class AActor** Target, float* PunisherMod);
	void ModifyDamage(struct FDamageInfo* Info, bool* Rtn);
	void MC_BuildUp();
	void OnDead_Event_1(unsigned char* Reason, class ACharacterGunfire** Character, class AActor** Cause);
	void ReceiveBeginPlay();
	void MulticastDissolveOut();
	void DissolveOut();
	void OnPostComputeStats();
	void NotifyHitTarget(struct FDamageInfo* DamageInfo);
	void DestroyMinion();
	void OnOwnerComputeStats();
	void OnDead_Event_2(unsigned char* Reason, class ACharacterGunfire** Character, class AActor** Cause);
	void MC_Explosion();
	void Beam_Attack();
	void ExecuteUbergraph_Character_Wasteland_Beckon_Minion(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

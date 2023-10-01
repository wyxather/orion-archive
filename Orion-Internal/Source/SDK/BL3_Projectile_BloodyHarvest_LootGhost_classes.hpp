#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_BloodyHarvest_LootGhost_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C
// 0x002C (0x0838 - 0x080C)
class AProjectile_BloodyHarvest_LootGhost_C : public AProjectile_BloodyHarvest_Ghost_Drone_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x080C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0810(0x0008) (Transient, DuplicateTransient)
	int                                                TimerIteration;                                           // 0x0818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TotalMaxLootSprays;                                       // 0x081C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanSprayLoot;                                            // 0x0820(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0821(0x0007) MISSED OFFSET
	TArray<struct FAttributeEffectData>                BHLootAttributeEffects_2;                                 // 0x0828(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C");
		return ptr;
	}


	void IncrementStats(bool* Out);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void DoEndSpawnPresentation(bool* ForceInstantSpawn_);
	void SpawnLootBadass();
	void BeginFleeing();
	void BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_Projectile_BloodyHarvest_LootGhost(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
	void OnExplode();
	void ExecuteUbergraph_Projectile_BloodyHarvest_LootGhost(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

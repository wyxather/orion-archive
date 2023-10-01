#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_TinkLoot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_TinkLoot.BPChar_TinkLoot_C
// 0x0098 (0x24B9 - 0x2421)
class ABPChar_TinkLoot_C : public ABPChar_Tink_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x2421(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2428(0x0008) (Transient, DuplicateTransient)
	class UOakLootableComponent*                       Lootable_BackupLoot2;                                     // 0x2430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakLootableComponent*                       Lootable_BackupLoot1;                                     // 0x2438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USocketComponent*                            Sockt_BonusLoot;                                          // 0x2440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakLootableComponent*                       Lootable_CashExplosion;                                   // 0x2448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpawnPointComponent*                        SpawnPoint_LootPack;                                      // 0x2450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USocketComponent*                            CashSpawnLoc;                                             // 0x2458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakLootableComponent*                       Lootable_CashTrail;                                       // 0x2460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        Comp_DigAudio;                                            // 0x2468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      NullActor;                                                // 0x2470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      MyKiller;                                                 // 0x2478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      DamageCauserOwner;                                        // 0x2480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HitDirection;                                             // 0x2488(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x2494(0x0004) MISSED OFFSET
	class USpawnFactory*                               SpawnFactory_LootPackIO;                                  // 0x2498(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AActor*                                      MyLootPack;                                               // 0x24A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               LootTinkIsDead;                                           // 0x24A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x24A9(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    PortalFx;                                                 // 0x24B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               IsNormalDeath;                                            // 0x24B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_TinkLoot.BPChar_TinkLoot_C");
		return ptr;
	}


	void OnRep_NewVar_1();
	void UserConstructionScript();
	void GbxAsyncRequest_Spawned_2BA7668345A67AB11E48B9808BFC6CCA(class AActor* Actor);
	void TinkLoot_ClearEscapeMound();
	void TinkLoot_DeathProtection(bool IsActivated);
	void ReceiveBeginPlay();
	void TinkLoot_TimeToEscape();
	void TinkLoot_StartDig();
	void TinkLoot_DigInterupted();
	void TinkLoot_Escaped();
	void CE_RunAwayCoolDown();
	void TinkLoot_AllowHiding();
	void TinkLoot_DeathLoot();
	void TinkLoot_OnTargetChanged();
	void BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_TinkLoot(class AActor* DamageReceiver, class AActor* DamageCauser);
	void TinkLoot_StartCashTrail();
	void TinkLoot_StopCashTrail();
	void TinkLoot_StartAnnounce();
	void TinkLoot_StopAnnounce();
	void TinkLoot_TriggerRunAwayDialog();
	void CE_OpenCashTrailStart_DoOnce();
	void BndEvt__StatusEffectManagerComponent_K2Node_ComponentBoundEvent_0_CryoFreezeEvent__DelegateSignature_BPChar_TinkLoot();
	void BndEvt__StatusEffectManagerComponent_K2Node_ComponentBoundEvent_1_CryoFreezeEvent__DelegateSignature_BPChar_TinkLoot();
	void TinkLoot_DeathPreamble();
	void TinkLoot_NormalDeathStart();
	void ExecuteUbergraph_BPChar_TinkLoot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

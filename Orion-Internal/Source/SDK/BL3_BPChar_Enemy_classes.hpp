#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Enemy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_Enemy.BPChar_Enemy_C
// 0x0039 (0x2381 - 0x2348)
class ABPChar_Enemy_C : public ABPChar_AI_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2348(0x0008) (Transient, DuplicateTransient)
	class UOakMinimapIconComponent*                    OakMinimapIcon;                                           // 0x2350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBodyWeaponHoldManagerComponent*             BodyWeaponHoldManager;                                    // 0x2358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakAIWeaponUserComponent*                   AIWeaponUser_1;                                           // 0x2360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIDodgeComponent*                           AIDodge;                                                  // 0x2368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakHitRegionComponent*                      HitRegion;                                                // 0x2370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIBalanceStateComponent*                    AIBalanceState;                                           // 0x2378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               HasShield;                                                // 0x2380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_Enemy.BPChar_Enemy_C");
		return ptr;
	}


	void UserConstructionScript();
	void Enemy_OnThoughtLockStart();
	void Enemy_OnThoughtLockStop();
	void Player_SpawnTransfusionProjectile(class UClass* DataBlueprint__Override_, class UClass* DamageType__Override_, class AActor* SourceActor, class AActor* TargetActor, float Damage, class AActor* Causer__Override_);
	void ReceiveBeginPlay();
	void Enemy_OnPhaseLockStop();
	void BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_ElementalDeathDelegate__DelegateSignature_BPChar_Enemy(EOakElementalType Type);
	void Enemy_OnPhaseLockStart();
	void Radation_DeathExplosion(class AActor* DamageReceiver, class AActor* DamageCauser);
	void Player_HealthDepleted(class AOakCharacter* Character);
	void ExecuteUbergraph_BPChar_Enemy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

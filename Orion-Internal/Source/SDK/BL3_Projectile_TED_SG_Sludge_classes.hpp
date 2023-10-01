#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_TED_SG_Sludge_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C
// 0x0027 (0x07B1 - 0x078A)
class AProjectile_TED_SG_Sludge_C : public AProj_Weapon_BaseProjectile_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x078A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0790(0x0008) (Transient, DuplicateTransient)
	class UProjectileHomingComponent*                  ProjectileHoming;                                         // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABPWeap_Tediore_BaseWeapon_C*                Weapon;                                                   // 0x07A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPostStick;                                               // 0x07B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnHitWorld(struct FHitResult* Hit);
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void GoToTarget(class AActor* HitActor, const struct FVector& HitLocation);
	void ReceiveBeginPlay();
	void OnExplode();
	void BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Projectile_TED_SG_Sludge();
	void BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_1_ProjectileHomingComponentEvent__DelegateSignature_Projectile_TED_SG_Sludge();
	void OnHitEnemy(struct FHitResult* Hit);
	void ExecuteUbergraph_Projectile_TED_SG_Sludge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_SkagBadass_Bomb_Sputter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_SkagBadass_Bomb_Sputter.Proj_SkagBadass_Bomb_Sputter_C
// 0x0030 (0x0710 - 0x06E0)
class AProj_SkagBadass_Bomb_Sputter_C : public AOakAIBalancedProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    SputterFX;                                                // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxProjectileMovementComponent*             GbxProjectileMovement;                                    // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      Sputter_DamageType;                                       // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UExplosionData*                              Sputter_ExplosionData;                                    // 0x0708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_SkagBadass_Bomb_Sputter.Proj_SkagBadass_Bomb_Sputter_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnHitDamagableObject(struct FHitResult* Hit);
	void OnHitWorld(struct FHitResult* Hit);
	void OnExplode();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Proj_SkagBadass_Bomb_Sputter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

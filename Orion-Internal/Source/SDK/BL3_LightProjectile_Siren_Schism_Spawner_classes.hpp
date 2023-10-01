#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Siren_Schism_Spawner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_Siren_Schism_Spawner.LightProjectile_Siren_Schism_Spawner_C
// 0x0010 (0x0350 - 0x0340)
class ULightProjectile_Siren_Schism_Spawner_C : public UOakLightProjectileData
{
public:
	class UClass*                                      SchismDamageType;                                         // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UImpactData*                                 SchismImpactData;                                         // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_Siren_Schism_Spawner.LightProjectile_Siren_Schism_Spawner_C");
		return ptr;
	}


	void CalcSchismFireTrajectory(const struct FVector& SpawnLocation, class APawn* Instigator, struct FVector* res);
	void FireSchismProjectilesAtTargets(float SchismDamage, class APawn* ProjectileOwner, const struct FVector& Location, TArray<class AActor*>* Targets);
	void ExplodeProjectile(class UOakLightProjectile* Projectile);
	void OnExplode(class ULightProjectile** Projectile);
	void OnLifetimeExpired(class ULightProjectile** Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

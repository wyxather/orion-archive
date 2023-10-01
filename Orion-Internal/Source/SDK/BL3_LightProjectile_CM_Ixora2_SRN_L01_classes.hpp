#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_CM_Ixora2_SRN_L01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_CM_Ixora2_SRN_L01.LightProjectile_CM_Ixora2_SRN_L01_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_CM_Ixora2_SRN_L01_C : public UOakLightProjectileData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_CM_Ixora2_SRN_L01.LightProjectile_CM_Ixora2_SRN_L01_C");
		return ptr;
	}


	void OnExplode(class ULightProjectile** Projectile);
	void OnImpact(class ULightProjectile** Projectile, struct FHitResult* Hit);
	void OnLifetimeExpired(class ULightProjectile** Projectile);
	void TryEnableProjectileHoming(class UOakLightProjectile* Projectile);
	void EnableProjectileHoming(class UOakLightProjectile* LightProjectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

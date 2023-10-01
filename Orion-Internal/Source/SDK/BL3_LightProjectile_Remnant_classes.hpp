#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Remnant_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_Remnant.LightProjectile_Remnant_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_Remnant_C : public UOakLightProjectileData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_Remnant.LightProjectile_Remnant_C");
		return ptr;
	}


	void OnLifetimeExpired(class ULightProjectile** Projectile);
	void TryEnableProjectileHoming(class UOakLightProjectile* Projectile);
	void EnableProjectileHoming(class UOakLightProjectile* LightProjectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

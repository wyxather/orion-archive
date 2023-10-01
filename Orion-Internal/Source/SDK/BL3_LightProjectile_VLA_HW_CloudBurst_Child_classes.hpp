#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_VLA_HW_CloudBurst_Child_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_VLA_HW_CloudBurst_Child.LightProjectile_VLA_HW_CloudBurst_Child_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_VLA_HW_CloudBurst_Child_C : public ULightProjectile_TOR_GyroJet_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_VLA_HW_CloudBurst_Child.LightProjectile_VLA_HW_CloudBurst_Child_C");
		return ptr;
	}


	void OnExplode(class ULightProjectile** Projectile);
	void Split(class UOakLightProjectile* Projectile);
	void OnLifetimeExpired(class ULightProjectile** Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

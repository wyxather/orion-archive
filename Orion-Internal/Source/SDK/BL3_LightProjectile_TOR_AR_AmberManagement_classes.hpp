#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_TOR_AR_AmberManagement_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_TOR_AR_AmberManagement.LightProjectile_TOR_AR_AmberManagement_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_TOR_AR_AmberManagement_C : public ULightProjectile_TOR_AR_GyroJet_Normal_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_TOR_AR_AmberManagement.LightProjectile_TOR_AR_AmberManagement_C");
		return ptr;
	}


	void OnBegin(class ULightProjectile** Projectile);
	void OnDamage(class ULightProjectile** Projectile, struct FHitResult* Hit, bool* bCritical);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_TOR_SG_CriticalThug_Ricochet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_TOR_SG_CriticalThug_Ricochet.LightProjectile_TOR_SG_CriticalThug_Ricochet_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_TOR_SG_CriticalThug_Ricochet_C : public ULightProjectile_TOR_GyroJet_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_TOR_SG_CriticalThug_Ricochet.LightProjectile_TOR_SG_CriticalThug_Ricochet_C");
		return ptr;
	}


	void OnLifetimeExpired(class ULightProjectile** Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

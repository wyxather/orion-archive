#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Copybeast_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_Copybeast.LightProjectile_Copybeast_C
// 0x00B8 (0x03F8 - 0x0340)
class ULightProjectile_Copybeast_C : public ULightProjectile_TOR_AR_GyroJet_Sticky_C
{
public:
	struct FEnvQueryParams                             EnvQuery;                                                 // 0x0340(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_Copybeast.LightProjectile_Copybeast_C");
		return ptr;
	}


	void OnDamage(class ULightProjectile** Projectile, struct FHitResult* Hit, bool* bCritical);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

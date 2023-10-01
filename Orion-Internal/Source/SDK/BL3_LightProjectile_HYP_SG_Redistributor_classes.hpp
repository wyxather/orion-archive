#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_HYP_SG_Redistributor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_HYP_SG_Redistributor.LightProjectile_HYP_SG_Redistributor_C
// 0x00B8 (0x03F8 - 0x0340)
class ULightProjectile_HYP_SG_Redistributor_C : public ULightProjectile_Shotgun_C
{
public:
	struct FEnvQueryParams                             Query;                                                    // 0x0340(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_HYP_SG_Redistributor.LightProjectile_HYP_SG_Redistributor_C");
		return ptr;
	}


	void OnDamage(class ULightProjectile** Projectile, struct FHitResult* Hit, bool* bCritical);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

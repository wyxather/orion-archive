#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_HYP_SG_ConferenceCall_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_HYP_SG_ConferenceCall.LightProjectile_HYP_SG_ConferenceCall_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_HYP_SG_ConferenceCall_C : public ULightProjectile_Shotgun_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_HYP_SG_ConferenceCall.LightProjectile_HYP_SG_ConferenceCall_C");
		return ptr;
	}


	void SpawnChild(class UOakLightProjectile* Projectile);
	void OnDamage(class ULightProjectile** Projectile, struct FHitResult* Hit, bool* bCritical);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

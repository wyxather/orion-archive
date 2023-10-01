#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_TOR_PS_Voice_Sticky_3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_TOR_PS_Voice_Sticky_3.LightProjectile_TOR_PS_Voice_Sticky_2_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_TOR_PS_Voice_Sticky_2_C : public ULightProjectile_TOR_GyroJet_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_TOR_PS_Voice_Sticky_3.LightProjectile_TOR_PS_Voice_Sticky_2_C");
		return ptr;
	}


	void OnExplode(class ULightProjectile** Projectile);
	void OnAttached(class ULightProjectile** Projectile, class AActor** AttachedActor);
	void OnLifetimeExpired(class ULightProjectile** Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

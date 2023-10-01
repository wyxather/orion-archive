#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_TheSeventhSense_Implosion_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_TheSeventhSense_Implosion.LightProjectile_TheSeventhSense_Implosion_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_TheSeventhSense_Implosion_C : public UOakLightProjectileData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_TheSeventhSense_Implosion.LightProjectile_TheSeventhSense_Implosion_C");
		return ptr;
	}


	void OnAttached(class ULightProjectile** Projectile, class AActor** AttachedActor);
	void EnableHoming(class ULightProjectile* Projectile);
	void OnLifetimeExpired(class ULightProjectile** Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

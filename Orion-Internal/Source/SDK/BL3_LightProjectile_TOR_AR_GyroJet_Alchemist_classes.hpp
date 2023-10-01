#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_TOR_AR_GyroJet_Alchemist_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_TOR_AR_GyroJet_Alchemist.LightProjectile_TOR_AR_GyroJet_Alchemist_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_TOR_AR_GyroJet_Alchemist_C : public ULightProjectile_TOR_GyroJet_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_TOR_AR_GyroJet_Alchemist.LightProjectile_TOR_AR_GyroJet_Alchemist_C");
		return ptr;
	}


	void OnAttached(class ULightProjectile** Projectile, class AActor** AttachedActor);
	void OnLifetimeExpired(class ULightProjectile** Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

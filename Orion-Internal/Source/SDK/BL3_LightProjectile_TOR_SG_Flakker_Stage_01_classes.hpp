#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_TOR_SG_Flakker_Stage_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_TOR_SG_Flakker_Stage_01.LightProjectile_TOR_SG_Flakker_Stage_01_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_TOR_SG_Flakker_Stage_01_C : public ULightProjectile_TOR_GyroJet_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_TOR_SG_Flakker_Stage_01.LightProjectile_TOR_SG_Flakker_Stage_01_C");
		return ptr;
	}


	void OnExplode(class ULightProjectile** Projectile);
	void OnLifetimeExpired(class ULightProjectile** Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

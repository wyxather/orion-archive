#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Siren_DLCSKill_Attack_8_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_Siren_DLCSKill_Attack_8.LightProjectile_Siren_DLCSKill_Attack_7_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_Siren_DLCSKill_Attack_7_C : public UOakLightProjectileData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_Siren_DLCSKill_Attack_8.LightProjectile_Siren_DLCSKill_Attack_7_C");
		return ptr;
	}


	void EnableHoming(class UOakLightProjectile* Projectile);
	void TryEnableHoming(class UOakLightProjectile* Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

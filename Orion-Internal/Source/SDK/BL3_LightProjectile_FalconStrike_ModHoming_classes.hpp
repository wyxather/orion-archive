#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_FalconStrike_ModHoming_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_FalconStrike_ModHoming.LightProjectile_FalconStrike_ModHoming_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_FalconStrike_ModHoming_C : public ULightProjectile_FalconStrike_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_FalconStrike_ModHoming.LightProjectile_FalconStrike_ModHoming_C");
		return ptr;
	}


	void OnExplode(class ULightProjectile** Projectile);
	void HomeToTarget03(class UOakLightProjectile* Projectile);
	void HomeToTarget02(class UOakLightProjectile* Projectile);
	void HomeToTarget(class UOakLightProjectile* Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

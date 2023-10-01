#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_TheNothing5_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_TheNothing5.LightProjectile_TheNothing5_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_TheNothing5_C : public ULightProjectile_TheNothing_Child_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_TheNothing5.LightProjectile_TheNothing5_C");
		return ptr;
	}


	void OnRicochet(class ULightProjectile** Projectile, struct FHitResult* Hit, struct FVector* ImpactVelocity);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

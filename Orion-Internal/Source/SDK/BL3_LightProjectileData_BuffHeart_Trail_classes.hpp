#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectileData_BuffHeart_Trail_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectileData_BuffHeart_Trail.LightProjectileData_BuffHeart_Trail_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectileData_BuffHeart_Trail_C : public UOakLightProjectileData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectileData_BuffHeart_Trail.LightProjectileData_BuffHeart_Trail_C");
		return ptr;
	}


	void OnProxyImpact(class ULightProjectile** Projectile, struct FHitResult* Hit);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_ATL_Freeman_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_ATL_Freeman.LightProjectile_ATL_Freeman_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_ATL_Freeman_C : public ULightProjectile_Heavy_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_ATL_Freeman.LightProjectile_ATL_Freeman_C");
		return ptr;
	}


	void OnLifetimeExpired(class ULightProjectile** Projectile);
	void OnBegin(class ULightProjectile** Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

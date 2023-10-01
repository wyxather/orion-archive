#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Salamander_Mod3_Splat_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_Salamander_Mod3_Splat.LightProjectile_Salamander_Mod3_Splat_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_Salamander_Mod3_Splat_C : public ULightProjectile_Salamander_Mod3_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_Salamander_Mod3_Splat.LightProjectile_Salamander_Mod3_Splat_C");
		return ptr;
	}


	void OnExplode(class ULightProjectile** Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

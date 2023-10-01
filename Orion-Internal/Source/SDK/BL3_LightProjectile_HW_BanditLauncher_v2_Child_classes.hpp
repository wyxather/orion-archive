#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_HW_BanditLauncher_v2_Child_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_HW_BanditLauncher_v2_Child.LightProjectile_HW_BanditLauncher_v2_Child_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_HW_BanditLauncher_v2_Child_C : public ULightProjectile_GM_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_HW_BanditLauncher_v2_Child.LightProjectile_HW_BanditLauncher_v2_Child_C");
		return ptr;
	}


	void Home(class UOakLightProjectile* Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

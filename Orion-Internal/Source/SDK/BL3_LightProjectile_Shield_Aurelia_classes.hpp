#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Shield_Aurelia_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_Shield_Aurelia.LightProjectile_Shield_Aurelia_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_Shield_Aurelia_C : public UOakLightProjectileData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_Shield_Aurelia.LightProjectile_Shield_Aurelia_C");
		return ptr;
	}


	void GoToTarget(class UOakLightProjectile* LightProjectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_MAL_SMG_Barrel_DestructoSpin_Secondary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_MAL_SMG_Barrel_DestructoSpin_Secondary.LightProjectile_MAL_SMG_Barrel_DestructoSpin_Secondary_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_MAL_SMG_Barrel_DestructoSpin_Secondary_C : public ULightProjectile_MAL_SMG_Barrel_DestructoSpin_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_MAL_SMG_Barrel_DestructoSpin_Secondary.LightProjectile_MAL_SMG_Barrel_DestructoSpin_Secondary_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

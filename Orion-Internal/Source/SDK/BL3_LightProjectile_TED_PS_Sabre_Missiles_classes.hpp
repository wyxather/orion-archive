#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_TED_PS_Sabre_Missiles_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_TED_PS_Sabre_Missiles.LightProjectile_TED_PS_Sabre_Missiles_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_TED_PS_Sabre_Missiles_C : public UOakLightProjectileData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_TED_PS_Sabre_Missiles.LightProjectile_TED_PS_Sabre_Missiles_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

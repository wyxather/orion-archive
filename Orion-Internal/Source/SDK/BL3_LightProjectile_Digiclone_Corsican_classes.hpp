#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Digiclone_Corsican_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_Digiclone_Corsican.LightProjectile_Digiclone_Corsican_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_Digiclone_Corsican_C : public ULightProjectile_Player_Healing_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_Digiclone_Corsican.LightProjectile_Digiclone_Corsican_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

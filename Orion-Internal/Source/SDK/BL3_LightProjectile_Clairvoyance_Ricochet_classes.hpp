#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Clairvoyance_Ricochet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_Clairvoyance_Ricochet.LightProjectile_Clairvoyance_Ricochet_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_Clairvoyance_Ricochet_C : public ULightProjectile_TOR_AR_GyroJet_Normal_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_Clairvoyance_Ricochet.LightProjectile_Clairvoyance_Ricochet_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

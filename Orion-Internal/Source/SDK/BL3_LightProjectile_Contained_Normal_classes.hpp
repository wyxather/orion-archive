#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Contained_Normal_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_Contained_Normal.LightProjectile_Contained_Normal_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_Contained_Normal_C : public ULightProjectile_TOR_GyroJet_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_Contained_Normal.LightProjectile_Contained_Normal_C");
		return ptr;
	}


	void OnBegin(class ULightProjectile** Projectile);
	void Split(class ULightProjectile* Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

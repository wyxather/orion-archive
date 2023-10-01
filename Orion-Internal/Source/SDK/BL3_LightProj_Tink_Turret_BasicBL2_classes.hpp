#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProj_Tink_Turret_BasicBL2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProj_Tink_Turret_BasicBL2.LightProj_Tink_Turret_BasicBL2_C
// 0x0000 (0x0340 - 0x0340)
class ULightProj_Tink_Turret_BasicBL2_C : public UWeapon_Default_LightProjectile_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProj_Tink_Turret_BasicBL2.LightProj_Tink_Turret_BasicBL2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_HYP_SM_Crossroad_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_HYP_SM_Crossroad.LightProjectile_HYP_SM_Crossroad_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_HYP_SM_Crossroad_C : public ULightProjectile_SMG_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_HYP_SM_Crossroad.LightProjectile_HYP_SM_Crossroad_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

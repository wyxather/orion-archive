#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_MAL_SM_Tsunami_Elemental_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_MAL_SM_Tsunami_Elemental.LightProjectile_MAL_SM_Tsunami_Elemental_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_MAL_SM_Tsunami_Elemental_C : public ULightProjectile_MAL_SM_Tsunami_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_MAL_SM_Tsunami_Elemental.LightProjectile_MAL_SM_Tsunami_Elemental_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

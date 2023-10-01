#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_HYP_SG_ConferenceCallSPlit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_HYP_SG_ConferenceCallSPlit.LightProjectile_HYP_SG_ConferenceCallSPlit_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_HYP_SG_ConferenceCallSPlit_C : public ULightProjectile_Shotgun_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_HYP_SG_ConferenceCallSPlit.LightProjectile_HYP_SG_ConferenceCallSPlit_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

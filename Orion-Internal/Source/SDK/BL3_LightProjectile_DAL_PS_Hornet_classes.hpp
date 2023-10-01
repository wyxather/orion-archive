#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_DAL_PS_Hornet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_DAL_PS_Hornet.LightProjectile_DAL_PS_Hornet_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_DAL_PS_Hornet_C : public ULightProjectile_Pistol_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_DAL_PS_Hornet.LightProjectile_DAL_PS_Hornet_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

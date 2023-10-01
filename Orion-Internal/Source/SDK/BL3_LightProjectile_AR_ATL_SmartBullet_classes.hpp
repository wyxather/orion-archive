#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_AR_ATL_SmartBullet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_AR_ATL_SmartBullet.LightProjectile_AR_ATL_SmartBullet_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_AR_ATL_SmartBullet_C : public ULightProjectile_ATL_SmartBullet_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_AR_ATL_SmartBullet.LightProjectile_AR_ATL_SmartBullet_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

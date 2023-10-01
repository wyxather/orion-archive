#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_COV_HW_HotDroplet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_COV_HW_HotDroplet.LightProjectile_COV_HW_HotDroplet_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_COV_HW_HotDroplet_C : public ULightProjectile_Heavy_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_COV_HW_HotDroplet.LightProjectile_COV_HW_HotDroplet_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

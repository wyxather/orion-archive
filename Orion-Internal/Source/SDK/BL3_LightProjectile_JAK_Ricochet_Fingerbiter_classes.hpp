#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_JAK_Ricochet_Fingerbiter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_JAK_Ricochet_Fingerbiter.LightProjectile_JAK_Ricochet_Fingerbiter_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_JAK_Ricochet_Fingerbiter_C : public ULightProjectile_JAK_Ricochet_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_JAK_Ricochet_Fingerbiter.LightProjectile_JAK_Ricochet_Fingerbiter_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Artifact_CorrosiveSlide_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_Artifact_CorrosiveSlide.LightProjectile_Artifact_CorrosiveSlide_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_Artifact_CorrosiveSlide_C : public UWeapon_Default_LightProjectile_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_Artifact_CorrosiveSlide.LightProjectile_Artifact_CorrosiveSlide_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

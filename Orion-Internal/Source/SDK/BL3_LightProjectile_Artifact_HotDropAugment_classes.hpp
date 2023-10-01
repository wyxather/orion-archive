#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Artifact_HotDropAugment_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_Artifact_HotDropAugment.LightProjectile_Artifact_HotDropAugment_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_Artifact_HotDropAugment_C : public ULightProjectile_Artifact_Default_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_Artifact_HotDropAugment.LightProjectile_Artifact_HotDropAugment_C");
		return ptr;
	}


	void OnExplode(class ULightProjectile** Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

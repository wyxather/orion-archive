#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Artifact_SalvoMissiles_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_Artifact_SalvoMissiles.LightProjectile_Artifact_SalvoMissiles_C
// 0x00B8 (0x03F8 - 0x0340)
class ULightProjectile_Artifact_SalvoMissiles_C : public UOakLightProjectileData
{
public:
	struct FEnvQueryParams                             Query;                                                    // 0x0340(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_Artifact_SalvoMissiles.LightProjectile_Artifact_SalvoMissiles_C");
		return ptr;
	}


	void StartHoming(class ULightProjectile* Projectile);
	void OnLifetimeExpired(class ULightProjectile** Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Anarchy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_Anarchy.LightProjectile_Anarchy_C
// 0x00C4 (0x0404 - 0x0340)
class ULightProjectile_Anarchy_C : public UOakLightProjectileData
{
public:
	struct FEnvQueryParams                             EQS;                                                      // 0x0340(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               AnarchyRicochet;                                          // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03F9(0x0003) MISSED OFFSET
	float                                              RicochetChance;                                           // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RicochetScale;                                            // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_Anarchy.LightProjectile_Anarchy_C");
		return ptr;
	}


	void OnRicochet(class ULightProjectile** Projectile, struct FHitResult* Hit, struct FVector* ImpactVelocity);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

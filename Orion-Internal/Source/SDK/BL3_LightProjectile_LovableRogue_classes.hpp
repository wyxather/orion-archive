#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_LovableRogue_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_LovableRogue.LightProjectile_LovableRogue_C
// 0x017C (0x04BC - 0x0340)
class ULightProjectile_LovableRogue_C : public ULightProjectile_TOR_AR_GyroJet_Sticky_C
{
public:
	struct FEnvQueryParams                             EnvQuery;                                                 // 0x0340(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FEnvQueryParams                             EnvQuery2;                                                // 0x03F8(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      RicochetProj;                                             // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumChildProj;                                          // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_LovableRogue.LightProjectile_LovableRogue_C");
		return ptr;
	}


	void OnExplode(class ULightProjectile** Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Drone_MachineGuns_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_Drone_MachineGuns.LightProjectile_Drone_MachineGuns_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_Drone_MachineGuns_C : public UOakLightProjectileData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_Drone_MachineGuns.LightProjectile_Drone_MachineGuns_C");
		return ptr;
	}


	void OnBegin(class ULightProjectile** Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

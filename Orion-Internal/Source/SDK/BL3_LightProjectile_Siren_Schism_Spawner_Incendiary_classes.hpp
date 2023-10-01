#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Siren_Schism_Spawner_Incendiary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_Siren_Schism_Spawner_Incendiary.LightProjectile_Siren_Schism_Spawner_Incendiary_C
// 0x0000 (0x0350 - 0x0350)
class ULightProjectile_Siren_Schism_Spawner_Incendiary_C : public ULightProjectile_Siren_Schism_Spawner_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_Siren_Schism_Spawner_Incendiary.LightProjectile_Siren_Schism_Spawner_Incendiary_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

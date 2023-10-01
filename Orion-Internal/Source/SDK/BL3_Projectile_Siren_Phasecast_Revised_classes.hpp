#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Siren_Phasecast_Revised_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Projectile_Siren_Phasecast_Revised.Projectile_Siren_Phasecast_Revised_C
// 0x0000 (0x07C0 - 0x07C0)
class AProjectile_Siren_Phasecast_Revised_C : public AProjectile_Siren_Phasecast_Revised_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_Siren_Phasecast_Revised.Projectile_Siren_Phasecast_Revised_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

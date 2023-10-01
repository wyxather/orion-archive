#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_MAL_SR_Krakatoa_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_MAL_SR_Krakatoa.LightProjectile_MAL_SR_Krakatoa_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_MAL_SR_Krakatoa_C : public ULightProjectile_SniperRifle_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_MAL_SR_Krakatoa.LightProjectile_MAL_SR_Krakatoa_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_SR_Masterwork_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_SR_Masterwork.LightProjectile_SR_Masterwork_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_SR_Masterwork_C : public ULightProjectile_SniperRifle_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_SR_Masterwork.LightProjectile_SR_Masterwork_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

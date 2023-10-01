#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_DAL_SR_AutoAime_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_DAL_SR_AutoAime.LightProjectile_DAL_SR_AutoAime_C
// 0x0000 (0x0490 - 0x0490)
class ULightProjectile_DAL_SR_AutoAime_C : public ULightProjectile_JAK_PS_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_DAL_SR_AutoAime.LightProjectile_DAL_SR_AutoAime_C");
		return ptr;
	}


	void HomeIn(class UOakLightProjectile* Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

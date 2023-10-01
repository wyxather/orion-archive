#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_VLA_SR_ETechUnderbarrel_Child_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_VLA_SR_ETechUnderbarrel_Child.LightProjectile_VLA_SR_ETechUnderbarrel_Child_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_VLA_SR_ETechUnderbarrel_Child_C : public ULightProjectile_VLA_AR_ETechUnderbarrel_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_VLA_SR_ETechUnderbarrel_Child.LightProjectile_VLA_SR_ETechUnderbarrel_Child_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

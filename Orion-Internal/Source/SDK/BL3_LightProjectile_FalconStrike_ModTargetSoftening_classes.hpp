#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_FalconStrike_ModTargetSoftening_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_FalconStrike_ModTargetSoftening.LightProjectile_FalconStrike_ModTargetSoftening_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_FalconStrike_ModTargetSoftening_C : public ULightProjectile_FalconStrike_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_FalconStrike_ModTargetSoftening.LightProjectile_FalconStrike_ModTargetSoftening_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

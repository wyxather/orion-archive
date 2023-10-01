#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightBeam_Weapon_PS_VLA_TaserChain_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightBeam_Weapon_PS_VLA_TaserChain.LightBeam_Weapon_PS_VLA_TaserChain_C
// 0x0000 (0x01C8 - 0x01C8)
class ULightBeam_Weapon_PS_VLA_TaserChain_C : public ULightBeam_Weapon_PS_VLA_Taser_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightBeam_Weapon_PS_VLA_TaserChain.LightBeam_Weapon_PS_VLA_TaserChain_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPCamShake_WeaponMelee_PS_Success_Impact_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPCamShake_WeaponMelee_PS_Success_Impact.BPCamShake_WeaponMelee_PS_Success_Impact_C
// 0x0000 (0x0180 - 0x0180)
class UBPCamShake_WeaponMelee_PS_Success_Impact_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPCamShake_WeaponMelee_PS_Success_Impact.BPCamShake_WeaponMelee_PS_Success_Impact_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

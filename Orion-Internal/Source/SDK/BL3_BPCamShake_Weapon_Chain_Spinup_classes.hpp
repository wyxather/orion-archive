#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPCamShake_Weapon_Chain_Spinup_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPCamShake_Weapon_Chain_Spinup.BPCamShake_Weapon_Chain_Spinup_C
// 0x0000 (0x0180 - 0x0180)
class UBPCamShake_Weapon_Chain_Spinup_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPCamShake_Weapon_Chain_Spinup.BPCamShake_Weapon_Chain_Spinup_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

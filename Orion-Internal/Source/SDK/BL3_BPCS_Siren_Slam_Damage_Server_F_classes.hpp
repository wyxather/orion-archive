#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPCS_Siren_Slam_Damage_Server_F_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPCS_Siren_Slam_Damage_Server_F.BPCS_Siren_Slam_Damage_Server_F_C
// 0x0000 (0x0180 - 0x0180)
class UBPCS_Siren_Slam_Damage_Server_F_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPCS_Siren_Slam_Damage_Server_F.BPCS_Siren_Slam_Damage_Server_F_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_DamageData_PlayerMelee_Gunner_Miss_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DamageData_PlayerMelee_Gunner_Miss.DamageData_PlayerMelee_Gunner_Miss_C
// 0x0000 (0x0310 - 0x0310)
class UDamageData_PlayerMelee_Gunner_Miss_C : public UDamageData_PlayerMelee_Miss_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DamageData_PlayerMelee_Gunner_Miss.DamageData_PlayerMelee_Gunner_Miss_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

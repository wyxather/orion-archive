#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_DamageData_Siren_DLCSkill_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DamageData_Siren_DLCSkill.DamageData_Siren_DLCSkill_C
// 0x0000 (0x0310 - 0x0310)
class UDamageData_Siren_DLCSkill_C : public UDamageData_PlayerMelee_Success_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DamageData_Siren_DLCSkill.DamageData_Siren_DLCSkill_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

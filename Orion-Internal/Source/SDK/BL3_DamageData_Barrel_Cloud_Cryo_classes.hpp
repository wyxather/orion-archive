#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_DamageData_Barrel_Cloud_Cryo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DamageData_Barrel_Cloud_Cryo.DamageData_Barrel_Cloud_Cryo_C
// 0x0000 (0x0310 - 0x0310)
class UDamageData_Barrel_Cloud_Cryo_C : public UDamageData_Barrel_Cloud_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DamageData_Barrel_Cloud_Cryo.DamageData_Barrel_Cloud_Cryo_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Damage_Tink_Anointed_Dynatmite_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Damage_Tink_Anointed_Dynatmite.Damage_Tink_Anointed_Dynatmite_C
// 0x0000 (0x0310 - 0x0310)
class UDamage_Tink_Anointed_Dynatmite_C : public UOakDamageData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Damage_Tink_Anointed_Dynatmite.Damage_Tink_Anointed_Dynatmite_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

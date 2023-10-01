#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Damage_Operative_Corsican_Digiclone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Damage_Operative_Corsican_Digiclone.Damage_Operative_Corsican_Digiclone_C
// 0x0000 (0x0310 - 0x0310)
class UDamage_Operative_Corsican_Digiclone_C : public UOakDamageData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Damage_Operative_Corsican_Digiclone.Damage_Operative_Corsican_Digiclone_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

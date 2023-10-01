#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Damage_COV_Explosive_Dynamite_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Damage_COV_Explosive_Dynamite.Damage_COV_Explosive_Dynamite_C
// 0x0000 (0x0310 - 0x0310)
class UDamage_COV_Explosive_Dynamite_C : public UOakDamageData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Damage_COV_Explosive_Dynamite.Damage_COV_Explosive_Dynamite_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

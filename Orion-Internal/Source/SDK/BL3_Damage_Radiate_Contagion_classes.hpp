#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Damage_Radiate_Contagion_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Damage_Radiate_Contagion.Damage_Radiate_Contagion_C
// 0x0000 (0x0310 - 0x0310)
class UDamage_Radiate_Contagion_C : public UDamage_Shield_Radiate_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Damage_Radiate_Contagion.Damage_Radiate_Contagion_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

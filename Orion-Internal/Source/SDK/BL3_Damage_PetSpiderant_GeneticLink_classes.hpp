#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Damage_PetSpiderant_GeneticLink_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Damage_PetSpiderant_GeneticLink.Damage_PetSpiderant_GeneticLink_C
// 0x0000 (0x0310 - 0x0310)
class UDamage_PetSpiderant_GeneticLink_C : public UOakDamageData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Damage_PetSpiderant_GeneticLink.Damage_PetSpiderant_GeneticLink_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

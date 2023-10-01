#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CE_Incendiary_Tech_Death_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CE_Incendiary_Tech_Death.BP_CE_Incendiary_Tech_Death_C
// 0x0000 (0x0148 - 0x0148)
class UBP_CE_Incendiary_Tech_Death_C : public UBP_CE_TechDeath_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CE_Incendiary_Tech_Death.BP_CE_Incendiary_Tech_Death_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

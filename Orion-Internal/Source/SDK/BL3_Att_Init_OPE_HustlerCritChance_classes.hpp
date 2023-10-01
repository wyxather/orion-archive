#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Att_Init_OPE_HustlerCritChance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Att_Init_OPE_HustlerCritChance.Att_Init_OPE_HustlerCritChance_C
// 0x0000 (0x0030 - 0x0030)
class UAtt_Init_OPE_HustlerCritChance_C : public UAttributeInitializer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Att_Init_OPE_HustlerCritChance.Att_Init_OPE_HustlerCritChance_C");
		return ptr;
	}


	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

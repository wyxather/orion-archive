#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_Operative_ConfidentCompetence_Accuracy_Impulse_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_Operative_ConfidentCompetence_Accuracy_Impulse.Init_Operative_ConfidentCompetence_Accuracy_Impulse_C
// 0x0000 (0x0030 - 0x0030)
class UInit_Operative_ConfidentCompetence_Accuracy_Impulse_C : public UInit_Players_PassiveAbility_Parent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_Operative_ConfidentCompetence_Accuracy_Impulse.Init_Operative_ConfidentCompetence_Accuracy_Impulse_C");
		return ptr;
	}


	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

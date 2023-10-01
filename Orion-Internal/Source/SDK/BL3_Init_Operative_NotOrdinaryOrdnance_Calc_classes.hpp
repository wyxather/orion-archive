#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_Operative_NotOrdinaryOrdnance_Calc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_Operative_NotOrdinaryOrdnance_Calc.Init_Operative_NotOrdinaryOrdnance_Calc_C
// 0x0000 (0x0030 - 0x0030)
class UInit_Operative_NotOrdinaryOrdnance_Calc_C : public UInit_Operative_KillSkill_Parent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_Operative_NotOrdinaryOrdnance_Calc.Init_Operative_NotOrdinaryOrdnance_Calc_C");
		return ptr;
	}


	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

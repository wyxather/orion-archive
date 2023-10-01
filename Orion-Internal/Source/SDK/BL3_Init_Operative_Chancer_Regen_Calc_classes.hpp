#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_Operative_Chancer_Regen_Calc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_Operative_Chancer_Regen_Calc.Init_Operative_Chancer_Regen_Calc_C
// 0x0004 (0x0034 - 0x0030)
class UInit_Operative_Chancer_Regen_Calc_C : public UInit_Players_PassiveAbility_Parent_C
{
public:
	float                                              Scalar;                                                   // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_Operative_Chancer_Regen_Calc.Init_Operative_Chancer_Regen_Calc_C");
		return ptr;
	}


	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

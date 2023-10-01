#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_GrenadeLauncher_Damage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_GrenadeLauncher_Damage.Init_GrenadeLauncher_Damage_C
// 0x0004 (0x0034 - 0x0030)
class UInit_GrenadeLauncher_Damage_C : public UInit_IronBearHardpoint_DamageCalc_C
{
public:
	float                                              Test;                                                     // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_GrenadeLauncher_Damage.Init_GrenadeLauncher_Damage_C");
		return ptr;
	}


	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

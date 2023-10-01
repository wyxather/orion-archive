#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_IronBearHardpoint_DamageCalc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_IronBearHardpoint_DamageCalc.Init_IronBearHardpoint_DamageCalc_C
// 0x0000 (0x0030 - 0x0030)
class UInit_IronBearHardpoint_DamageCalc_C : public UAttributeInitializer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_IronBearHardpoint_DamageCalc.Init_IronBearHardpoint_DamageCalc_C");
		return ptr;
	}


	void GetStrengthThroughBalanceScalar(class AOakCharacter_IronBear* InIronBear, float* res);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

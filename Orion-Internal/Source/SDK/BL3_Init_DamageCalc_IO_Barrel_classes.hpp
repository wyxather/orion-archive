#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_DamageCalc_IO_Barrel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_DamageCalc_IO_Barrel.Init_DamageCalc_IO_Barrel_C
// 0x0000 (0x0048 - 0x0048)
class UInit_DamageCalc_IO_Barrel_C : public UInit_DamageCalc_IO_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_DamageCalc_IO_Barrel.Init_DamageCalc_IO_Barrel_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

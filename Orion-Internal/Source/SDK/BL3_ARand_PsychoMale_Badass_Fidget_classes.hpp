#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARand_PsychoMale_Badass_Fidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ARand_PsychoMale_Badass_Fidget.ARand_PsychoMale_Badass_Fidget_C
// 0x0000 (0x0070 - 0x0070)
class UARand_PsychoMale_Badass_Fidget_C : public UGbxAction_RandomContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ARand_PsychoMale_Badass_Fidget.ARand_PsychoMale_Badass_Fidget_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

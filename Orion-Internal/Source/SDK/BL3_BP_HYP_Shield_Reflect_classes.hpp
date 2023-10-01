#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_HYP_Shield_Reflect_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HYP_Shield_Reflect.BP_HYP_Shield_Reflect_C
// 0x0000 (0x0358 - 0x0358)
class UBP_HYP_Shield_Reflect_C : public UBP_HYP_Shield_Basic_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HYP_Shield_Reflect.BP_HYP_Shield_Reflect_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

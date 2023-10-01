#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALI_Challenge_Mission_Plot_EP04_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ALI_Challenge_Mission_Plot_EP04.ALI_Challenge_Mission_Plot_EP04_C
// 0x0000 (0x0270 - 0x0270)
class UALI_Challenge_Mission_Plot_EP04_C : public UChallenge_Mission_Plot_Achievement_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ALI_Challenge_Mission_Plot_EP04.ALI_Challenge_Mission_Plot_EP04_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

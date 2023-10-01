#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALI_Challenge_Crew_Anger3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ALI_Challenge_Crew_Anger3.ALI_Challenge_Crew_Anger3_C
// 0x0000 (0x0368 - 0x0368)
class UALI_Challenge_Crew_Anger3_C : public UALI_Challenge_Crew_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ALI_Challenge_Crew_Anger3.ALI_Challenge_Crew_Anger3_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

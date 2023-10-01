#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Sabotage_DLC1_Group_Strip_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Sabotage_DLC1_Group_Strip.Challenge_Sabotage_DLC1_Group_Strip_C
// 0x0000 (0x0260 - 0x0260)
class UChallenge_Sabotage_DLC1_Group_Strip_C : public UChallenge_Sabotage_Group_DLC1_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Sabotage_DLC1_Group_Strip.Challenge_Sabotage_DLC1_Group_Strip_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

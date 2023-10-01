#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Salvage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Salvage.Challenge_Salvage_C
// 0x0040 (0x0378 - 0x0338)
class UChallenge_Salvage_C : public UChallenge_Crew_C
{
public:
	struct FDialogTimeSlotReference                    Claptrap___GF_Dialog;                                     // 0x0338(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Salvage.Challenge_Salvage_C");
		return ptr;
	}


	void GetClaptrapGFDialog(struct FDialogTimeSlotReference* Dialog_);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Crew_Ger_Tannery_00_AllComplete_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Crew_Ger_Tannery_00_AllComplete.Challenge_Crew_Ger_Tannery_00_AllComplete_C
// 0x001C (0x0358 - 0x033C)
class UChallenge_Crew_Ger_Tannery_00_AllComplete_C : public UChallenge_Crew_Geranium_Tannery_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x033C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0340(0x0008) (Transient, DuplicateTransient)
	struct FDataTableRowHandle                         CrewChallengeMailRow;                                     // 0x0348(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Crew_Ger_Tannery_00_AllComplete.Challenge_Crew_Ger_Tannery_00_AllComplete_C");
		return ptr;
	}


	void CompletedChallenge(class AGbxPlayerController** CompletedPlayer);
	void ExecuteUbergraph_Challenge_Crew_Ger_Tannery_00_AllComplete(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

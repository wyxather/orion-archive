#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_MissionGraph_DLC1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionGraph_DLC1.MissionGraph_DLC1_C
// 0x0008 (0x0070 - 0x0068)
class UMissionGraph_DLC1_C : public UMissionGraph
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0068(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionGraph_DLC1.MissionGraph_DLC1_C");
		return ptr;
	}


	void _Playing_with_Fire_(void* Unlocks, void* Next_Mission);
	void _The_Plan_(void* Unlocks, void* Next_Mission);
	void _One_Man_s_Treasure_(void* Unlocks, void* Next_Mission);
	void _Jack_s_Wild_(void* Unlocks, void* Next_Mission);
	void _Winners_and_Losers_(void* Unlocks, void* Next_Mission);
	void _All_Bets_Off_(void* Unlocks, void* Next_Mission);
	void _Regaining_One_s_Feet_(void* Unlocks, void* Next_Mission);
	void _The_Handsome_Jackpot_(void* Unlocks, void* Next_Mission);
	void _Acid_Trip_(void* Unlocks, void* Next_Mission);
	void _Do_it_for_Digby__Part_1__(void* Unlocks, void* Next_Mission);
	void _Raging_Bot_(void* Unlocks, void* Next_Mission);
	void _Too_Much_Of_A_Good_Thing_(void* Unlocks, void* Next_Mission);
	void _Sisterly_Love_(void* Unlocks, void* Next_Mission);
	void _Do_it_for_Digby__Part_2__(void* Unlocks, void* Next_Mission);
	void _The_Great_Escape_(void* Unlocks, void* Next_Mission);
	void _Do_it_for_Digby__Part_3__(void* Unlocks, void* Next_Mission);
	void _Heart_of_Gold_(void* Unlocks, void* Next_Mission);
	void _Double_Down_(void* Unlocks, void* Next_Mission);
	void ExecuteUbergraph_MissionGraph_DLC1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

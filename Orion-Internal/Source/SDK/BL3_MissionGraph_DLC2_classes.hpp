#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_MissionGraph_DLC2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionGraph_DLC2.MissionGraph_DLC2_C
// 0x0008 (0x0070 - 0x0068)
class UMissionGraph_DLC2_C : public UMissionGraph
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0068(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionGraph_DLC2.MissionGraph_DLC2_C");
		return ptr;
	}


	void _The_Call_of_Gythian_(void* Unlocks, void* Next_Mission);
	void _On_the_Mountain_of_Mayhem_(void* Unlocks, void* Next_Mission);
	void _The_Horror_in_the_Woods_(void* Unlocks, void* Next_Mission);
	void _The_Case_of_Wainwright_Jakobs_(void* Unlocks, void* Next_Mission);
	void _The_Shadow_Over_Cursehaven_(void* Unlocks, void* Next_Mission);
	void _We_Slass!_(void* Unlocks, void* Next_Mission);
	void _Sinister_Sounds_(void* Unlocks, void* Next_Mission);
	void _Call_of_the_Deep_(void* Unlocks, void* Next_Mission);
	void _Cold_Case__Forgotten_Answers_(void* Unlocks, void* Next_Mission);
	void _Happily_Ever_After_(void* Unlocks, void* Next_Mission);
	void _The_Madness_Beneath_(void* Unlocks, void* Next_Mission);
	void _Cold_Case__Restless_Memories_(void* Unlocks, void* Next_Mission);
	void _Cold_Case__Buried_Questions_(void* Unlocks, void* Next_Mission);
	void _The_Nibblenomicon_(void* Unlocks, void* Next_Mission);
	void _The_Proprietor__Empty_Bottles_(void* Unlocks, void* Next_Mission);
	void _The_Proprietor__Rare_Vintage_(void* Unlocks, void* Next_Mission);
	void _We_Slass!__Part_2__(void* Unlocks, void* Next_Mission);
	void _We_Slass!__Part_3__(void* Unlocks, void* Next_Mission);
	void _The_Great_Escape__Part_2__(void* Unlocks, void* Next_Mission);
	void _The_Party_Out_of_Space_(void* Unlocks, void* Next_Mission);
	void _Kill_Fungal_Gorger_(void* Unlocks, void* Next_Mission);
	void _Kill_Shiverous_the_Unscathed_(void* Unlocks, void* Next_Mission);
	void _Kill_Voltborn_(void* Unlocks, void* Next_Mission);
	void _Kill_Amach_(void* Unlocks, void* Next_Mission);
	void ExecuteUbergraph_MissionGraph_DLC2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

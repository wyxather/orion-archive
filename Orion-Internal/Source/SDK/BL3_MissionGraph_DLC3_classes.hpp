#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_MissionGraph_DLC3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionGraph_DLC3.MissionGraph_DLC3_C
// 0x0008 (0x0070 - 0x0068)
class UMissionGraph_DLC3_C : public UMissionGraph
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0068(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionGraph_DLC3.MissionGraph_DLC3_C");
		return ptr;
	}


	void _Riding_to_Ruin_(void* Unlocks, void* Next_Mission);
	void _Devil_Rustlers_(void* Unlocks, void* Next_Mission);
	void _Saurdew_Valley_(void* Unlocks, void* Next_Mission);
	void _Dirty_Deeds_(void* Unlocks, void* Next_Mission);
	void _The_Legend_of_McSmugger_(void* Unlocks, void* Next_Mission);
	void _The_Meatman_Prophecy_(void* Unlocks, void* Next_Mission);
	void _Lost_and_Found_(void* Unlocks, void* Next_Mission);
	void _The_Dandy_and_Damsel_(void* Unlocks, void* Next_Mission);
	void _Of_Blood_and_Beans_(void* Unlocks, void* Next_Mission);
	void _Miracle_Elixir_Fixer_(void* Unlocks, void* Next_Mission);
	void _Money_Back_Guarantee_(void* Unlocks, void* Next_Mission);
	void _The_Quick_and_the_Quickerer_(void* Unlocks, void* Next_Mission);
	void _Where_it_all_Started_(void* Unlocks, void* Next_Mission);
	void _Off_the_Rails_(void* Unlocks, void* Next_Mission);
	void _The_Name_of_the_Law_(void* Unlocks, void* Next_Mission);
	void _Blood_From_a_Stone_(void* Unlocks, void* Next_Mission);
	void ExecuteUbergraph_MissionGraph_DLC3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

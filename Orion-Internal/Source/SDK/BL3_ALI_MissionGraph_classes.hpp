#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALI_MissionGraph_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ALI_MissionGraph.ALI_MissionGraph_C
// 0x0008 (0x0070 - 0x0068)
class UALI_MissionGraph_C : public UMissionGraph
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0068(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ALI_MissionGraph.ALI_MissionGraph_C");
		return ptr;
	}


	void _Siege_of_Castle_Crimson_(void* Unlocks, void* Next_Mission);
	void _What_Love_Remains_(void* Unlocks, void* Next_Mission);
	void _Inhuman_Trials_(void* Unlocks, void* Next_Mission);
	void _Locus_of_Rage_(void* Unlocks, void* Next_Mission);
	void _Enter_the_Psychoscape_(void* Unlocks, void* Next_Mission);
	void _A_Good_Egg_(void* Unlocks, void* Next_Mission);
	void _Don_t_Call_it_a_Rorschach_(void* Unlocks, void* Next_Mission);
	void _Remodel_Behavior_(void* Unlocks, void* Next_Mission);
	void _It_s_an_Allegory_(void* Unlocks, void* Next_Mission);
	void _Does_a_Body_Good_(void* Unlocks, void* Next_Mission);
	void _That_Rings_a_Something_(void* Unlocks, void* Next_Mission);
	void _Krieg_s_on_Parade_(void* Unlocks, void* Next_Mission);
	void _Scratch,_Don_t_Sniff_(void* Unlocks, void* Next_Mission);
	void _Brainstorm_(void* Unlocks, void* Next_Mission);
	void _Check,_Please_(void* Unlocks, void* Next_Mission);
	void _Laid_to_Rust_(void* Unlocks, void* Next_Mission);
	void _Blast_Requests_(void* Unlocks, void* Next_Mission);
	void _Hot_and_Unbothered_(void* Unlocks, void* Next_Mission);
	void ExecuteUbergraph_ALI_MissionGraph(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

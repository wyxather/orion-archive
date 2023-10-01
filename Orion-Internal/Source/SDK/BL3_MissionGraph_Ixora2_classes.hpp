#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_MissionGraph_Ixora2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionGraph_Ixora2.MissionGraph_Ixora2_C
// 0x0008 (0x0070 - 0x0068)
class UMissionGraph_Ixora2_C : public UMissionGraph
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0068(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionGraph_Ixora2.MissionGraph_Ixora2_C");
		return ptr;
	}


	void _Mysteriouslier__Murder_on_Eschaton_Row_(void* Unlocks, void* Next_Mission);
	void _Mysteriouslier__The_Vanishing_of_Hizzen_Mays_(void* Unlocks, void* Next_Mission);
	void _Mysteriouslier__Ghosts_of_Karass_Canyon_(void* Unlocks, void* Next_Mission);
	void _Mysteriouslier__Horror_at_Scryer_s_Crypt_(void* Unlocks, void* Next_Mission);
	void _You__Will__Die___Over_and_Over___(void* Unlocks, void* Next_Mission);
	void ExecuteUbergraph_MissionGraph_Ixora2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_MissionGraph_Takedown2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionGraph_Takedown2.MissionGraph_Takedown2_C
// 0x0008 (0x0070 - 0x0068)
class UMissionGraph_Takedown2_C : public UMissionGraph
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0068(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionGraph_Takedown2.MissionGraph_Takedown2_C");
		return ptr;
	}


	void _Takedown_at_the_Guardian_Breach_(void* Unlocks, void* Next_Mission);
	void _Discovery__Takedown_at_the_Guardian_Breach_(void* Unlocks, void* Next_Mission);
	void ExecuteUbergraph_MissionGraph_Takedown2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_MissionGraph_CitizenScience_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionGraph_CitizenScience.MissionGraph_CitizenScience_C
// 0x0008 (0x0070 - 0x0068)
class UMissionGraph_CitizenScience_C : public UMissionGraph
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0068(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionGraph_CitizenScience.MissionGraph_CitizenScience_C");
		return ptr;
	}


	void _Borderlands_Science!_(void* Unlocks, void* Next_Mission);
	void ExecuteUbergraph_MissionGraph_CitizenScience(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

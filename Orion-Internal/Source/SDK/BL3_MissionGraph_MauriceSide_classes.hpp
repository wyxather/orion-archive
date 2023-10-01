#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_MissionGraph_MauriceSide_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionGraph_MauriceSide.MissionGraph_MauriceSide_C
// 0x0008 (0x0070 - 0x0068)
class UMissionGraph_MauriceSide_C : public UMissionGraph
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0068(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionGraph_MauriceSide.MissionGraph_MauriceSide_C");
		return ptr;
	}


	void _Saurian_Not_Saurian_(void* Unlocks, void* Next_Mission);
	void ExecuteUbergraph_MissionGraph_MauriceSide(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

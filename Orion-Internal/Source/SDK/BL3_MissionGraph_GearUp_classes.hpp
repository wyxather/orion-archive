#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_MissionGraph_GearUp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionGraph_GearUp.MissionGraph_GearUp_C
// 0x0008 (0x0070 - 0x0068)
class UMissionGraph_GearUp_C : public UMissionGraph
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0068(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionGraph_GearUp.MissionGraph_GearUp_C");
		return ptr;
	}


	void _Shlooting_Spree__Introduction_(void* Unlocks, void* Next_Mission);
	void _Shlooting_Spree_(void* Unlocks, void* Next_Mission);
	void ExecuteUbergraph_MissionGraph_GearUp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

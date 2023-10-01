#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TravelGraph_BloodyHarvest_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TravelGraph_BloodyHarvest.TravelGraph_BloodyHarvest_C
// 0x0008 (0x0098 - 0x0090)
class UTravelGraph_BloodyHarvest_C : public UTravelGraph
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0090(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TravelGraph_BloodyHarvest.TravelGraph_BloodyHarvest_C");
		return ptr;
	}


	void ExecuteUbergraph_TravelGraph_BloodyHarvest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

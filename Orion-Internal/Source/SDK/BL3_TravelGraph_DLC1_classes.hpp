#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TravelGraph_DLC1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TravelGraph_DLC1.TravelGraph_DLC1_C
// 0x0008 (0x0098 - 0x0090)
class UTravelGraph_DLC1_C : public UTravelGraph
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0090(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TravelGraph_DLC1.TravelGraph_DLC1_C");
		return ptr;
	}


	void ExecuteUbergraph_TravelGraph_DLC1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

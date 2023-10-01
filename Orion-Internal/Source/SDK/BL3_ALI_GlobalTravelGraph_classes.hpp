#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALI_GlobalTravelGraph_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ALI_GlobalTravelGraph.ALI_GlobalTravelGraph_C
// 0x0008 (0x0098 - 0x0090)
class UALI_GlobalTravelGraph_C : public UTravelGraph
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0090(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ALI_GlobalTravelGraph.ALI_GlobalTravelGraph_C");
		return ptr;
	}


	void ExecuteUbergraph_ALI_GlobalTravelGraph(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

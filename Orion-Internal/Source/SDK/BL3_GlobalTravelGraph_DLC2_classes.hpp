#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GlobalTravelGraph_DLC2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GlobalTravelGraph_DLC2.GlobalTravelGraph_DLC2_C
// 0x0008 (0x0098 - 0x0090)
class UGlobalTravelGraph_DLC2_C : public UTravelGraph
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0090(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GlobalTravelGraph_DLC2.GlobalTravelGraph_DLC2_C");
		return ptr;
	}


	void ExecuteUbergraph_GlobalTravelGraph_DLC2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

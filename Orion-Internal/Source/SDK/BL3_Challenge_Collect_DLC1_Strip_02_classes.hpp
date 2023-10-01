#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Collect_DLC1_Strip_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Collect_DLC1_Strip_02.Challenge_Collect_DLC1_Strip_02_C
// 0x0008 (0x0350 - 0x0348)
class UChallenge_Collect_DLC1_Strip_02_C : public UChallenge_Collect_DLC1_C
{
public:
	class UClass*                                      ParentChallenge;                                          // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Collect_DLC1_Strip_02.Challenge_Collect_DLC1_Strip_02_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

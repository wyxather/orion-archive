#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Condition_ReloadType_Jakobs_AR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Condition_ReloadType_Jakobs_AR.Condition_ReloadType_Jakobs_AR_C
// 0x0002 (0x008A - 0x0088)
class UCondition_ReloadType_Jakobs_AR_C : public UGbxCondition_Blueprint
{
public:
	unsigned char                                      ReloadSlot;                                               // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      BoltType;                                                 // 0x0089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Condition_ReloadType_Jakobs_AR.Condition_ReloadType_Jakobs_AR_C");
		return ptr;
	}


	bool EvaluateCondition(class UObject** Context, class UObject** OptionalContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

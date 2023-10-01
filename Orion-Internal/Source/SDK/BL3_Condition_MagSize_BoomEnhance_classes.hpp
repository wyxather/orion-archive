#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Condition_MagSize_BoomEnhance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Condition_MagSize_BoomEnhance.Condition_MagSize_BoomEnhance_C
// 0x0008 (0x0090 - 0x0088)
class UCondition_MagSize_BoomEnhance_C : public UGbxCondition_Blueprint
{
public:
	int                                                MagSizeGreaterThan;                                       // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MagSizeLessThan;                                          // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Condition_MagSize_BoomEnhance.Condition_MagSize_BoomEnhance_C");
		return ptr;
	}


	bool EvaluateCondition(class UObject** Context, class UObject** OptionalContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

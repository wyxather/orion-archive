#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Condition_TargetIsWithinRange_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Condition_TargetIsWithinRange.Condition_TargetIsWithinRange_C
// 0x0081 (0x0109 - 0x0088)
class UCondition_TargetIsWithinRange_C : public UGbxCondition_Blueprint
{
public:
	struct FGbxParam                                   Range;                                                    // 0x0088(0x0080) (Edit, BlueprintVisible)
	bool                                               InvertResult;                                             // 0x0108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Condition_TargetIsWithinRange.Condition_TargetIsWithinRange_C");
		return ptr;
	}


	bool EvaluateCondition(class UObject** Context, class UObject** OptionalContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

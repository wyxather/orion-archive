#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Condition_TargetinFrontofQuerrier_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Condition_TargetinFrontofQuerrier.Condition_TargetinFrontofQuerrier_C
// 0x0004 (0x008C - 0x0088)
class UCondition_TargetinFrontofQuerrier_C : public UGbxCondition_Blueprint
{
public:
	float                                              DotCompare;                                               // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Condition_TargetinFrontofQuerrier.Condition_TargetinFrontofQuerrier_C");
		return ptr;
	}


	bool EvaluateCondition(class UObject** Context, class UObject** OptionalContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

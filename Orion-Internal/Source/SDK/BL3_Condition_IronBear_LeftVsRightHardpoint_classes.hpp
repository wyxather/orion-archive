#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Condition_IronBear_LeftVsRightHardpoint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Condition_IronBear_LeftVsRightHardpoint.Condition_IronBear_LeftVsRightHardpoint_C
// 0x0001 (0x0089 - 0x0088)
class UCondition_IronBear_LeftVsRightHardpoint_C : public UGbxCondition_Blueprint
{
public:
	bool                                               Right_Hardpoint_;                                         // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Condition_IronBear_LeftVsRightHardpoint.Condition_IronBear_LeftVsRightHardpoint_C");
		return ptr;
	}


	bool EvaluateCondition(class UObject** Context, class UObject** OptionalContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Conditional_IronBear_CurrentModSlot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Conditional_IronBear_CurrentModSlot.Conditional_IronBear_CurrentModSlot_C
// 0x0001 (0x0089 - 0x0088)
class UConditional_IronBear_CurrentModSlot_C : public UGbxCondition_Blueprint
{
public:
	EIronBearModType                                   ModType;                                                  // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Conditional_IronBear_CurrentModSlot.Conditional_IronBear_CurrentModSlot_C");
		return ptr;
	}


	bool EvaluateCondition(class UObject** Context, class UObject** OptionalContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

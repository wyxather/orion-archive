#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Condition_GetActivePetHealthState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Condition_GetActivePetHealthState.Condition_GetActivePetHealthState_C
// 0x0002 (0x008A - 0x0088)
class UCondition_GetActivePetHealthState_C : public UGbxCondition_Blueprint
{
public:
	TEnumAsByte<Enum_Pet_HealthState>                  DesiredHealthState;                                       // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PetIsDirectContext_;                                      // 0x0089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Condition_GetActivePetHealthState.Condition_GetActivePetHealthState_C");
		return ptr;
	}


	bool EvaluateCondition(class UObject** Context, class UObject** OptionalContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

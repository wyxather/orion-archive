#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Condition_HasGrenadeModBehaviors_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Condition_HasGrenadeModBehaviors.Condition_HasGrenadeModBehaviors_C
// 0x0010 (0x0098 - 0x0088)
class UCondition_HasGrenadeModBehaviors_C : public UGbxCondition_Blueprint
{
public:
	TArray<class UGbxAttributeData*>                   GrenadeTiers;                                             // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Condition_HasGrenadeModBehaviors.Condition_HasGrenadeModBehaviors_C");
		return ptr;
	}


	bool EvaluateCondition(class UObject** Context, class UObject** OptionalContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

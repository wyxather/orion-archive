#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Condition_InteractiveObjectLockState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Condition_InteractiveObjectLockState.Condition_InteractiveObjectLockState_C
// 0x0001 (0x0089 - 0x0088)
class UCondition_InteractiveObjectLockState_C : public UGbxCondition_Blueprint
{
public:
	EInteractiveObjectLockState                        Object_LockState;                                         // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Condition_InteractiveObjectLockState.Condition_InteractiveObjectLockState_C");
		return ptr;
	}


	bool EvaluateCondition(class UObject** Context, class UObject** OptionalContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

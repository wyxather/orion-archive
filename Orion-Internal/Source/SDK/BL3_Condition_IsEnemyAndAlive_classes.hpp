#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Condition_IsEnemyAndAlive_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Condition_IsEnemyAndAlive.Condition_IsEnemyAndAlive_C
// 0x0008 (0x0090 - 0x0088)
class UCondition_IsEnemyAndAlive_C : public UGbxCondition_Blueprint
{
public:
	class UTeam*                                       CompareAgainstTeam;                                       // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Condition_IsEnemyAndAlive.Condition_IsEnemyAndAlive_C");
		return ptr;
	}


	bool EvaluateCondition(class UObject** Context, class UObject** OptionalContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

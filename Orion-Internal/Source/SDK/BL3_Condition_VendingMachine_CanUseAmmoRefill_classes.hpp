#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Condition_VendingMachine_CanUseAmmoRefill_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Condition_VendingMachine_CanUseAmmoRefill.Condition_VendingMachine_CanUseAmmoRefill_C
// 0x0000 (0x0088 - 0x0088)
class UCondition_VendingMachine_CanUseAmmoRefill_C : public UGbxCondition_Blueprint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Condition_VendingMachine_CanUseAmmoRefill.Condition_VendingMachine_CanUseAmmoRefill_C");
		return ptr;
	}


	void AmmoIsFull(class AOakCharacter* Character, class UGbxAttributeData* Current, class UGbxAttributeData* Max, bool* Full);
	bool EvaluateCondition(class UObject** Context, class UObject** OptionalContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

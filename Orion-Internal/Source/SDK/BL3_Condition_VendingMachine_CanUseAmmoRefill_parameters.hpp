#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Condition_VendingMachine_CanUseAmmoRefill_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Condition_VendingMachine_CanUseAmmoRefill.Condition_VendingMachine_CanUseAmmoRefill_C.AmmoIsFull
struct UCondition_VendingMachine_CanUseAmmoRefill_C_AmmoIsFull_Params
{
	class AOakCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxAttributeData*                           Current;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxAttributeData*                           Max;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Full;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Condition_VendingMachine_CanUseAmmoRefill.Condition_VendingMachine_CanUseAmmoRefill_C.EvaluateCondition
struct UCondition_VendingMachine_CanUseAmmoRefill_C_EvaluateCondition_Params
{
	class UObject**                                    Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    OptionalContext;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

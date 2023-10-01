#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Item_Potion_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Item_Potion_Base.Item_Potion_Base_C.ValidateUse
struct AItem_Potion_Base_C_ValidateUse_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Item_Potion_Base.Item_Potion_Base_C.DoAction
struct AItem_Potion_Base_C_DoAction_Params
{
	class UActionComponent**                           ActionComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Cause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Item_Potion_Base.Item_Potion_Base_C.Use
struct AItem_Potion_Base_C_Use_Params
{
};

// Function Item_Potion_Base.Item_Potion_Base_C.OnActivate
struct AItem_Potion_Base_C_OnActivate_Params
{
};

// Function Item_Potion_Base.Item_Potion_Base_C.ExecuteUbergraph_Item_Potion_Base
struct AItem_Potion_Base_C_ExecuteUbergraph_Item_Potion_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Self_Revive_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Self_Revive.Action_Self_Revive_C.Set Dragon Heart Quantity
struct UAction_Self_Revive_C_Set_Dragon_Heart_Quantity_Params
{
	class UObject**                                    Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Self_Revive.Action_Self_Revive_C.OnActionStart
struct UAction_Self_Revive_C_OnActionStart_Params
{
};

// Function Action_Self_Revive.Action_Self_Revive_C.ExecuteUbergraph_Action_Self_Revive
struct UAction_Self_Revive_C_ExecuteUbergraph_Action_Self_Revive_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

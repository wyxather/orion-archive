#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Land_High_Unarmed_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Land_High_Unarmed.Action_Land_High_Unarmed_C.OnBegin
struct UAction_Land_High_Unarmed_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Land_High_Unarmed.Action_Land_High_Unarmed_C.ExecuteUbergraph_Action_Land_High_Unarmed
struct UAction_Land_High_Unarmed_C_ExecuteUbergraph_Action_Land_High_Unarmed_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

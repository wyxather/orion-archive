#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PS_TED_PutDown_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_PS_TED_PutDown.Action_PS_TED_PutDown_C.OnBegin
struct UAction_PS_TED_PutDown_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PS_TED_PutDown.Action_PS_TED_PutDown_C.ExecuteUbergraph_Action_PS_TED_PutDown
struct UAction_PS_TED_PutDown_C_ExecuteUbergraph_Action_PS_TED_PutDown_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PS_TED_Fire_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_PS_TED_Fire.Action_PS_TED_Fire_C.OnBegin
struct UAction_PS_TED_Fire_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PS_TED_Fire.Action_PS_TED_Fire_C.ExecuteUbergraph_Action_PS_TED_Fire
struct UAction_PS_TED_Fire_C_ExecuteUbergraph_Action_PS_TED_Fire_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Enter_Air_Gunner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Enter_Air_Gunner.Action_Enter_Air_Gunner_C.OnBegin
struct UAction_Enter_Air_Gunner_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Enter_Air_Gunner.Action_Enter_Air_Gunner_C.ExecuteUbergraph_Action_Enter_Air_Gunner
struct UAction_Enter_Air_Gunner_C_ExecuteUbergraph_Action_Enter_Air_Gunner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

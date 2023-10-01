#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_AnimDeath_InRevolver_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_AnimDeath_InRevolver.Action_AnimDeath_InRevolver_C.OnBegin
struct UAction_AnimDeath_InRevolver_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_AnimDeath_InRevolver.Action_AnimDeath_InRevolver_C.ExecuteUbergraph_Action_AnimDeath_InRevolver
struct UAction_AnimDeath_InRevolver_C_ExecuteUbergraph_Action_AnimDeath_InRevolver_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

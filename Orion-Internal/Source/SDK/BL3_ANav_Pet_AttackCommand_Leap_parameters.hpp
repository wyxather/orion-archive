#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ANav_Pet_AttackCommand_Leap_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ANav_Pet_AttackCommand_Leap.ANav_Pet_AttackCommand_Leap_C.Notify_Landed
struct UANav_Pet_AttackCommand_Leap_C_Notify_Landed_Params
{
};

// Function ANav_Pet_AttackCommand_Leap.ANav_Pet_AttackCommand_Leap_C.OnBegin
struct UANav_Pet_AttackCommand_Leap_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ANav_Pet_AttackCommand_Leap.ANav_Pet_AttackCommand_Leap_C.ExecuteUbergraph_ANav_Pet_AttackCommand_Leap
struct UANav_Pet_AttackCommand_Leap_C_ExecuteUbergraph_ANav_Pet_AttackCommand_Leap_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

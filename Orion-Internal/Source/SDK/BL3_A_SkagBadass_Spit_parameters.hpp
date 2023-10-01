#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_SkagBadass_Spit_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_SkagBadass_Spit.A_SkagBadass_Spit_C.OnBegin
struct UA_SkagBadass_Spit_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_SkagBadass_Spit.A_SkagBadass_Spit_C.OnEnd
struct UA_SkagBadass_Spit_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_SkagBadass_Spit.A_SkagBadass_Spit_C.NotifyState_Spit_Begin
struct UA_SkagBadass_Spit_C_NotifyState_Spit_Begin_Params
{
};

// Function A_SkagBadass_Spit.A_SkagBadass_Spit_C.NotifyState_Spit_End
struct UA_SkagBadass_Spit_C_NotifyState_Spit_End_Params
{
};

// Function A_SkagBadass_Spit.A_SkagBadass_Spit_C.NotifyState_Spit_Abort
struct UA_SkagBadass_Spit_C_NotifyState_Spit_Abort_Params
{
};

// Function A_SkagBadass_Spit.A_SkagBadass_Spit_C.ExecuteUbergraph_A_SkagBadass_Spit
struct UA_SkagBadass_Spit_C_ExecuteUbergraph_A_SkagBadass_Spit_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

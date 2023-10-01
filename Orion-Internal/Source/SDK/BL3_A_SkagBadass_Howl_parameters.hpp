#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_SkagBadass_Howl_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_SkagBadass_Howl.A_SkagBadass_Howl_C.OnBegin
struct UA_SkagBadass_Howl_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_SkagBadass_Howl.A_SkagBadass_Howl_C.OnEnd
struct UA_SkagBadass_Howl_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_SkagBadass_Howl.A_SkagBadass_Howl_C.Notify_Transform
struct UA_SkagBadass_Howl_C_Notify_Transform_Params
{
};

// Function A_SkagBadass_Howl.A_SkagBadass_Howl_C.Notify_Howl
struct UA_SkagBadass_Howl_C_Notify_Howl_Params
{
};

// Function A_SkagBadass_Howl.A_SkagBadass_Howl_C.Notify_Howl_Jump
struct UA_SkagBadass_Howl_C_Notify_Howl_Jump_Params
{
};

// Function A_SkagBadass_Howl.A_SkagBadass_Howl_C.ExecuteUbergraph_A_SkagBadass_Howl
struct UA_SkagBadass_Howl_C_ExecuteUbergraph_A_SkagBadass_Howl_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

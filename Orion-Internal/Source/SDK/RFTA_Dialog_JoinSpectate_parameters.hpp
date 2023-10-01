#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_JoinSpectate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Dialog_JoinSpectate.Dialog_JoinSpectate_C.OnInvalidTarget
struct ADialog_JoinSpectate_C_OnInvalidTarget_Params
{
};

// Function Dialog_JoinSpectate.Dialog_JoinSpectate_C.OnValidTarget
struct ADialog_JoinSpectate_C_OnValidTarget_Params
{
};

// Function Dialog_JoinSpectate.Dialog_JoinSpectate_C.EvemtClosedCharacterSelect
struct ADialog_JoinSpectate_C_EvemtClosedCharacterSelect_Params
{
	struct FName*                                      Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Dialog_JoinSpectate.Dialog_JoinSpectate_C.PostTravel
struct ADialog_JoinSpectate_C_PostTravel_Params
{
};

// Function Dialog_JoinSpectate.Dialog_JoinSpectate_C.ExecuteUbergraph_Dialog_JoinSpectate
struct ADialog_JoinSpectate_C_ExecuteUbergraph_Dialog_JoinSpectate_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

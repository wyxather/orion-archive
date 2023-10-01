#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PsychoMale_Shared_PsychoWalkShort_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_PsychoMale_Shared_PsychoWalkShort.A_PsychoMale_Shared_PsychoWalkShort_C.OnBegin
struct UA_PsychoMale_Shared_PsychoWalkShort_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_PsychoMale_Shared_PsychoWalkShort.A_PsychoMale_Shared_PsychoWalkShort_C.OnEnd
struct UA_PsychoMale_Shared_PsychoWalkShort_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_PsychoMale_Shared_PsychoWalkShort.A_PsychoMale_Shared_PsychoWalkShort_C.MeleeStrike
struct UA_PsychoMale_Shared_PsychoWalkShort_C_MeleeStrike_Params
{
};

// Function A_PsychoMale_Shared_PsychoWalkShort.A_PsychoMale_Shared_PsychoWalkShort_C.ExecuteUbergraph_A_PsychoMale_Shared_PsychoWalkShort
struct UA_PsychoMale_Shared_PsychoWalkShort_C_ExecuteUbergraph_A_PsychoMale_Shared_PsychoWalkShort_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ADeath_Punk_Anointed_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ADeath_Punk_Anointed.ADeath_Punk_Anointed_C.OnBegin
struct UADeath_Punk_Anointed_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ADeath_Punk_Anointed.ADeath_Punk_Anointed_C.OnEnd
struct UADeath_Punk_Anointed_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ADeath_Punk_Anointed.ADeath_Punk_Anointed_C.ExecuteUbergraph_ADeath_Punk_Anointed
struct UADeath_Punk_Anointed_C_ExecuteUbergraph_ADeath_Punk_Anointed_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

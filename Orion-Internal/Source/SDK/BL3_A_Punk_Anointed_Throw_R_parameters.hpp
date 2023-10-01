#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Punk_Anointed_Throw_R_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_Punk_Anointed_Throw_R.A_Punk_Anointed_Throw_R_C.OnBegin
struct UA_Punk_Anointed_Throw_R_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Punk_Anointed_Throw_R.A_Punk_Anointed_Throw_R_C.OnAnimEnd
struct UA_Punk_Anointed_Throw_R_C_OnAnimEnd_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Punk_Anointed_Throw_R.A_Punk_Anointed_Throw_R_C.Throw
struct UA_Punk_Anointed_Throw_R_C_Throw_Params
{
};

// Function A_Punk_Anointed_Throw_R.A_Punk_Anointed_Throw_R_C.ExecuteUbergraph_A_Punk_Anointed_Throw_R
struct UA_Punk_Anointed_Throw_R_C_ExecuteUbergraph_A_Punk_Anointed_Throw_R_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

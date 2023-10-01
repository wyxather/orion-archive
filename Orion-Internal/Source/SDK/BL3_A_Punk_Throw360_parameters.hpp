#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Punk_Throw360_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_Punk_Throw360.A_Punk_Throw360_C.OnBegin
struct UA_Punk_Throw360_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Punk_Throw360.A_Punk_Throw360_C.Melee180Strike
struct UA_Punk_Throw360_C_Melee180Strike_Params
{
};

// Function A_Punk_Throw360.A_Punk_Throw360_C.ExecuteUbergraph_A_Punk_Throw360
struct UA_Punk_Throw360_C_ExecuteUbergraph_A_Punk_Throw360_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

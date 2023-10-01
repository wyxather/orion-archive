#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Pet_RevivePlayer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_Pet_RevivePlayer.A_Pet_RevivePlayer_C.OnServerBegin
struct UA_Pet_RevivePlayer_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Pet_RevivePlayer.A_Pet_RevivePlayer_C.ExecuteUbergraph_A_Pet_RevivePlayer
struct UA_Pet_RevivePlayer_C_ExecuteUbergraph_A_Pet_RevivePlayer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

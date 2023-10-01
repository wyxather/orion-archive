#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CE_Cartel_TeleportIn_Thug_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CE_Cartel_TeleportIn_Thug.BP_CE_Cartel_TeleportIn_Thug_C.OnServerEnd
struct UBP_CE_Cartel_TeleportIn_Thug_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CE_Cartel_TeleportIn_Thug.BP_CE_Cartel_TeleportIn_Thug_C.OnServerBegin
struct UBP_CE_Cartel_TeleportIn_Thug_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CE_Cartel_TeleportIn_Thug.BP_CE_Cartel_TeleportIn_Thug_C.ExecuteUbergraph_BP_CE_Cartel_TeleportIn_Thug
struct UBP_CE_Cartel_TeleportIn_Thug_C_ExecuteUbergraph_BP_CE_Cartel_TeleportIn_Thug_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPFiringComponent_TOR_Contained_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPFiringComponent_TOR_Contained.BPFiringComponent_TOR_Contained_C.ReceiveBeginPlay
struct UBPFiringComponent_TOR_Contained_C_ReceiveBeginPlay_Params
{
};

// Function BPFiringComponent_TOR_Contained.BPFiringComponent_TOR_Contained_C.NotifyReloadStarted_Event
struct UBPFiringComponent_TOR_Contained_C_NotifyReloadStarted_Event_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPFiringComponent_TOR_Contained.BPFiringComponent_TOR_Contained_C.K2_OnDeactivated
struct UBPFiringComponent_TOR_Contained_C_K2_OnDeactivated_Params
{
};

// Function BPFiringComponent_TOR_Contained.BPFiringComponent_TOR_Contained_C.ExecuteUbergraph_BPFiringComponent_TOR_Contained
struct UBPFiringComponent_TOR_Contained_C_ExecuteUbergraph_BPFiringComponent_TOR_Contained_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

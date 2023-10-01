#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Op_ActivateCannon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_Op_ActivateCannon.A_Op_ActivateCannon_C.OnServerEnd
struct UA_Op_ActivateCannon_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Op_ActivateCannon.A_Op_ActivateCannon_C.AN_ShowDevice
struct UA_Op_ActivateCannon_C_AN_ShowDevice_Params
{
};

// Function A_Op_ActivateCannon.A_Op_ActivateCannon_C.AN_HideDevice
struct UA_Op_ActivateCannon_C_AN_HideDevice_Params
{
};

// Function A_Op_ActivateCannon.A_Op_ActivateCannon_C.OnEnd
struct UA_Op_ActivateCannon_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Op_ActivateCannon.A_Op_ActivateCannon_C.OnBeginBringUpWeapon
struct UA_Op_ActivateCannon_C_OnBeginBringUpWeapon_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Op_ActivateCannon.A_Op_ActivateCannon_C.Notify_SwapPlaces
struct UA_Op_ActivateCannon_C_Notify_SwapPlaces_Params
{
};

// Function A_Op_ActivateCannon.A_Op_ActivateCannon_C.OnServerBegin
struct UA_Op_ActivateCannon_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Op_ActivateCannon.A_Op_ActivateCannon_C.ExecuteUbergraph_A_Op_ActivateCannon
struct UA_Op_ActivateCannon_C_ExecuteUbergraph_A_Op_ActivateCannon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

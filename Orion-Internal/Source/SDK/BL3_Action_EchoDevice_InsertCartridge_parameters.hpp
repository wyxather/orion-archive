#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_EchoDevice_InsertCartridge_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_EchoDevice_InsertCartridge.Action_EchoDevice_InsertCartridge_C.OnBegin
struct UAction_EchoDevice_InsertCartridge_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_EchoDevice_InsertCartridge.Action_EchoDevice_InsertCartridge_C.OnEnd
struct UAction_EchoDevice_InsertCartridge_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_EchoDevice_InsertCartridge.Action_EchoDevice_InsertCartridge_C.PlayEchoDeviceScreen
struct UAction_EchoDevice_InsertCartridge_C_PlayEchoDeviceScreen_Params
{
};

// Function Action_EchoDevice_InsertCartridge.Action_EchoDevice_InsertCartridge_C.ExecuteUbergraph_Action_EchoDevice_InsertCartridge
struct UAction_EchoDevice_InsertCartridge_C_ExecuteUbergraph_Action_EchoDevice_InsertCartridge_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

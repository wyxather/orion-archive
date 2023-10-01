#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Actor_Ping_Main_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Actor_Ping_Main.Actor_Ping_Main_C.OnDialogStarted
struct AActor_Ping_Main_C_OnDialogStarted_Params
{
};

// Function Actor_Ping_Main.Actor_Ping_Main_C.ReceiveBeginPlay
struct AActor_Ping_Main_C_ReceiveBeginPlay_Params
{
};

// Function Actor_Ping_Main.Actor_Ping_Main_C.SetPingDetails
struct AActor_Ping_Main_C_SetPingDetails_Params
{
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D**                                 Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor*                                     Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETailType*                                         Tail;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Actor_Ping_Main.Actor_Ping_Main_C.ExecuteUbergraph_Actor_Ping_Main
struct AActor_Ping_Main_C_ExecuteUbergraph_Actor_Ping_Main_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Actor_Ping_Main.Actor_Ping_Main_C.OnContextSet__DelegateSignature
struct AActor_Ping_Main_C_OnContextSet__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

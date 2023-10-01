#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_PartyStatus_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_PartyStatus.Widget_PartyStatus_C.PlayerLeft
struct UWidget_PartyStatus_C_PlayerLeft_Params
{
	class APlayerState**                               Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_PartyStatus.Widget_PartyStatus_C.PlayerJoined
struct UWidget_PartyStatus_C_PlayerJoined_Params
{
	class APlayerState**                               Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_PartyStatus.Widget_PartyStatus_C.OnPlayerJoined_Event_1
struct UWidget_PartyStatus_C_OnPlayerJoined_Event_1_Params
{
	class APlayerState**                               Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_PartyStatus.Widget_PartyStatus_C.OnPlayerLeft_Event_1
struct UWidget_PartyStatus_C_OnPlayerLeft_Event_1_Params
{
	class APlayerState**                               Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_PartyStatus.Widget_PartyStatus_C.RebuildList
struct UWidget_PartyStatus_C_RebuildList_Params
{
};

// Function Widget_PartyStatus.Widget_PartyStatus_C.Tick
struct UWidget_PartyStatus_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_PartyStatus.Widget_PartyStatus_C.Init
struct UWidget_PartyStatus_C_Init_Params
{
};

// Function Widget_PartyStatus.Widget_PartyStatus_C.TryInit
struct UWidget_PartyStatus_C_TryInit_Params
{
};

// Function Widget_PartyStatus.Widget_PartyStatus_C.Construct
struct UWidget_PartyStatus_C_Construct_Params
{
};

// Function Widget_PartyStatus.Widget_PartyStatus_C.ExecuteUbergraph_Widget_PartyStatus
struct UWidget_PartyStatus_C_ExecuteUbergraph_Widget_PartyStatus_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

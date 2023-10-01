#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_CheckpointNotifications_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_CheckpointNotifications.Widget_CheckpointNotifications_C.MakePlayerIDAndName
struct UWidget_CheckpointNotifications_C_MakePlayerIDAndName_Params
{
	class FString*                                     PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString*                                     Prefix;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FName                                       NameID;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Name;                                                     // (Parm, OutParm)
};

// Function Widget_CheckpointNotifications.Widget_CheckpointNotifications_C.AddCustomNotification
struct UWidget_CheckpointNotifications_C_AddCustomNotification_Params
{
	struct FName*                                      NameID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             TimeOverride;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText*                                      CustomText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D**                                 CustomIcon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CheckpointNotifications.Widget_CheckpointNotifications_C.ClearAllNotifications
struct UWidget_CheckpointNotifications_C_ClearAllNotifications_Params
{
};

// Function Widget_CheckpointNotifications.Widget_CheckpointNotifications_C.RemoveNotification
struct UWidget_CheckpointNotifications_C_RemoveNotification_Params
{
	struct FName*                                      NameID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CheckpointNotifications.Widget_CheckpointNotifications_C.CanAddNotification
struct UWidget_CheckpointNotifications_C_CanAddNotification_Params
{
	struct FName*                                      NameID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_CheckpointNotifications.Widget_CheckpointNotifications_C.AddNotification
struct UWidget_CheckpointNotifications_C_AddNotification_Params
{
	struct FName*                                      NameID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             TimeOverride;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CheckpointNotifications.Widget_CheckpointNotifications_C.Construct
struct UWidget_CheckpointNotifications_C_Construct_Params
{
};

// Function Widget_CheckpointNotifications.Widget_CheckpointNotifications_C.PlayerJoined
struct UWidget_CheckpointNotifications_C_PlayerJoined_Params
{
	class FString*                                     PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Widget_CheckpointNotifications.Widget_CheckpointNotifications_C.PlayerLeft
struct UWidget_CheckpointNotifications_C_PlayerLeft_Params
{
	class FString*                                     PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Widget_CheckpointNotifications.Widget_CheckpointNotifications_C.ExecuteUbergraph_Widget_CheckpointNotifications
struct UWidget_CheckpointNotifications_C_ExecuteUbergraph_Widget_CheckpointNotifications_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

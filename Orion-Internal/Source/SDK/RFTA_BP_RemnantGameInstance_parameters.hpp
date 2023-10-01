#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_RemnantGameInstance_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.SpawnControllerDialog
struct UBP_RemnantGameInstance_C_SpawnControllerDialog_Params
{
};

// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.SpawnStatusChangeDialog
struct UBP_RemnantGameInstance_C_SpawnStatusChangeDialog_Params
{
	struct FText*                                      Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.AddStatusChangeDialog
struct UBP_RemnantGameInstance_C_AddStatusChangeDialog_Params
{
	struct FText*                                      Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnFailure_439D53B841727DC5E85A82B7BA56C0C0
struct UBP_RemnantGameInstance_C_OnFailure_439D53B841727DC5E85A82B7BA56C0C0_Params
{
	EGfeSDKReturnCode*                                 GfeSdkReturnCode;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnSuccess_439D53B841727DC5E85A82B7BA56C0C0
struct UBP_RemnantGameInstance_C_OnSuccess_439D53B841727DC5E85A82B7BA56C0C0_Params
{
	EGfeSDKReturnCode*                                 GfeSdkReturnCode;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGfeSDKCreateResponse*                      GfeSdkProperties;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnFailure_52FD5A90473978B64A90089314AE6DE0
struct UBP_RemnantGameInstance_C_OnFailure_52FD5A90473978B64A90089314AE6DE0_Params
{
	EGfeSDKReturnCode*                                 GfeSdkReturnCode;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnSuccess_52FD5A90473978B64A90089314AE6DE0
struct UBP_RemnantGameInstance_C_OnSuccess_52FD5A90473978B64A90089314AE6DE0_Params
{
	EGfeSDKReturnCode*                                 GfeSdkReturnCode;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnFailure_943CEC884E25F69E09D832B4BA241281
struct UBP_RemnantGameInstance_C_OnFailure_943CEC884E25F69E09D832B4BA241281_Params
{
	EGfeSDKReturnCode*                                 GfeSdkReturnCode;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnSuccess_943CEC884E25F69E09D832B4BA241281
struct UBP_RemnantGameInstance_C_OnSuccess_943CEC884E25F69E09D832B4BA241281_Params
{
	EGfeSDKReturnCode*                                 GfeSdkReturnCode;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.ReceiveInit
struct UBP_RemnantGameInstance_C_ReceiveInit_Params
{
};

// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.CreatePersistenceIOWidget
struct UBP_RemnantGameInstance_C_CreatePersistenceIOWidget_Params
{
};

// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnControllerConnectionChanged_Event_1
struct UBP_RemnantGameInstance_C_OnControllerConnectionChanged_Event_1_Params
{
	bool*                                              Connected;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.ReceiveShutdown
struct UBP_RemnantGameInstance_C_ReceiveShutdown_Params
{
};

// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.CheckConnectionStatusChanges
struct UBP_RemnantGameInstance_C_CheckConnectionStatusChanges_Params
{
};

// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnStatusChanged_Event_1
struct UBP_RemnantGameInstance_C_OnStatusChanged_Event_1_Params
{
};

// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.StatusChangeDialogResult
struct UBP_RemnantGameInstance_C_StatusChangeDialogResult_Params
{
	struct FName*                                      Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.CheckStatusChangeDialogQueue
struct UBP_RemnantGameInstance_C_CheckStatusChangeDialogQueue_Params
{
};

// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.CheckConnectionStatus
struct UBP_RemnantGameInstance_C_CheckConnectionStatus_Params
{
};

// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnOnlineUnavailable_Event_1
struct UBP_RemnantGameInstance_C_OnOnlineUnavailable_Event_1_Params
{
};

// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnShowEventMessage_Event_1
struct UBP_RemnantGameInstance_C_OnShowEventMessage_Event_1_Params
{
	struct FText*                                      Heading;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText*                                      Message;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnWaitDialog_Event_1
struct UBP_RemnantGameInstance_C_OnWaitDialog_Event_1_Params
{
	bool*                                              Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnNetWaitDialog_Event_1
struct UBP_RemnantGameInstance_C_OnNetWaitDialog_Event_1_Params
{
	bool*                                              Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnPreQuitToMainMenu
struct UBP_RemnantGameInstance_C_OnPreQuitToMainMenu_Params
{
};

// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnShowMatchmakingEventMessage_Event_1
struct UBP_RemnantGameInstance_C_OnShowMatchmakingEventMessage_Event_1_Params
{
	struct FText*                                      Heading;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText*                                      Message;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool*                                              AlwaysOnTop;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnPresenceJoinResult_Event_1
struct UBP_RemnantGameInstance_C_OnPresenceJoinResult_Event_1_Params
{
	EPresenceJoinResult*                               Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnDialogResult_Event_1
struct UBP_RemnantGameInstance_C_OnDialogResult_Event_1_Params
{
	struct FName*                                      Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnWaitCustomLoginDialog_Event_1
struct UBP_RemnantGameInstance_C_OnWaitCustomLoginDialog_Event_1_Params
{
	bool*                                              Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnLoginCompleted_Event_1
struct UBP_RemnantGameInstance_C_OnLoginCompleted_Event_1_Params
{
};

// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnExternalAuthFail_Event_1
struct UBP_RemnantGameInstance_C_OnExternalAuthFail_Event_1_Params
{
};

// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnFullGameAvailable
struct UBP_RemnantGameInstance_C_OnFullGameAvailable_Params
{
};

// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.ExecuteUbergraph_BP_RemnantGameInstance
struct UBP_RemnantGameInstance_C_ExecuteUbergraph_BP_RemnantGameInstance_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.EventOnPreQuitToMainMenu__DelegateSignature
struct UBP_RemnantGameInstance_C_EventOnPreQuitToMainMenu__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

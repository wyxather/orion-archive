// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_RemnantGameInstance_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.SpawnControllerDialog
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_RemnantGameInstance_C::SpawnControllerDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.SpawnControllerDialog");

	UBP_RemnantGameInstance_C_SpawnControllerDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.SpawnStatusChangeDialog
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Message                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_RemnantGameInstance_C::SpawnStatusChangeDialog(struct FText* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.SpawnStatusChangeDialog");

	UBP_RemnantGameInstance_C_SpawnStatusChangeDialog_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.AddStatusChangeDialog
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Message                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_RemnantGameInstance_C::AddStatusChangeDialog(struct FText* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.AddStatusChangeDialog");

	UBP_RemnantGameInstance_C_AddStatusChangeDialog_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnFailure_439D53B841727DC5E85A82B7BA56C0C0
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode*             GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RemnantGameInstance_C::OnFailure_439D53B841727DC5E85A82B7BA56C0C0(EGfeSDKReturnCode* GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnFailure_439D53B841727DC5E85A82B7BA56C0C0");

	UBP_RemnantGameInstance_C_OnFailure_439D53B841727DC5E85A82B7BA56C0C0_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnSuccess_439D53B841727DC5E85A82B7BA56C0C0
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode*             GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGfeSDKCreateResponse*  GfeSdkProperties               (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_RemnantGameInstance_C::OnSuccess_439D53B841727DC5E85A82B7BA56C0C0(EGfeSDKReturnCode* GfeSdkReturnCode, struct FGfeSDKCreateResponse* GfeSdkProperties)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnSuccess_439D53B841727DC5E85A82B7BA56C0C0");

	UBP_RemnantGameInstance_C_OnSuccess_439D53B841727DC5E85A82B7BA56C0C0_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;
	params.GfeSdkProperties = GfeSdkProperties;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnFailure_52FD5A90473978B64A90089314AE6DE0
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode*             GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RemnantGameInstance_C::OnFailure_52FD5A90473978B64A90089314AE6DE0(EGfeSDKReturnCode* GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnFailure_52FD5A90473978B64A90089314AE6DE0");

	UBP_RemnantGameInstance_C_OnFailure_52FD5A90473978B64A90089314AE6DE0_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnSuccess_52FD5A90473978B64A90089314AE6DE0
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode*             GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RemnantGameInstance_C::OnSuccess_52FD5A90473978B64A90089314AE6DE0(EGfeSDKReturnCode* GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnSuccess_52FD5A90473978B64A90089314AE6DE0");

	UBP_RemnantGameInstance_C_OnSuccess_52FD5A90473978B64A90089314AE6DE0_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnFailure_943CEC884E25F69E09D832B4BA241281
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode*             GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RemnantGameInstance_C::OnFailure_943CEC884E25F69E09D832B4BA241281(EGfeSDKReturnCode* GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnFailure_943CEC884E25F69E09D832B4BA241281");

	UBP_RemnantGameInstance_C_OnFailure_943CEC884E25F69E09D832B4BA241281_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnSuccess_943CEC884E25F69E09D832B4BA241281
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode*             GfeSdkReturnCode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RemnantGameInstance_C::OnSuccess_943CEC884E25F69E09D832B4BA241281(EGfeSDKReturnCode* GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnSuccess_943CEC884E25F69E09D832B4BA241281");

	UBP_RemnantGameInstance_C_OnSuccess_943CEC884E25F69E09D832B4BA241281_Params params;
	params.GfeSdkReturnCode = GfeSdkReturnCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.ReceiveInit
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UBP_RemnantGameInstance_C::ReceiveInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.ReceiveInit");

	UBP_RemnantGameInstance_C_ReceiveInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.CreatePersistenceIOWidget
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UBP_RemnantGameInstance_C::CreatePersistenceIOWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.CreatePersistenceIOWidget");

	UBP_RemnantGameInstance_C_CreatePersistenceIOWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnControllerConnectionChanged_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Connected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_RemnantGameInstance_C::OnControllerConnectionChanged_Event_1(bool* Connected)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnControllerConnectionChanged_Event_1");

	UBP_RemnantGameInstance_C_OnControllerConnectionChanged_Event_1_Params params;
	params.Connected = Connected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.ReceiveShutdown
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UBP_RemnantGameInstance_C::ReceiveShutdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.ReceiveShutdown");

	UBP_RemnantGameInstance_C_ReceiveShutdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.CheckConnectionStatusChanges
// 00007FF6F8B35350
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_RemnantGameInstance_C::CheckConnectionStatusChanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.CheckConnectionStatusChanges");

	UBP_RemnantGameInstance_C_CheckConnectionStatusChanges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnStatusChanged_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UBP_RemnantGameInstance_C::OnStatusChanged_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnStatusChanged_Event_1");

	UBP_RemnantGameInstance_C_OnStatusChanged_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.StatusChangeDialogResult
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RemnantGameInstance_C::StatusChangeDialogResult(struct FName* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.StatusChangeDialogResult");

	UBP_RemnantGameInstance_C_StatusChangeDialogResult_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.CheckStatusChangeDialogQueue
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UBP_RemnantGameInstance_C::CheckStatusChangeDialogQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.CheckStatusChangeDialogQueue");

	UBP_RemnantGameInstance_C_CheckStatusChangeDialogQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.CheckConnectionStatus
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UBP_RemnantGameInstance_C::CheckConnectionStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.CheckConnectionStatus");

	UBP_RemnantGameInstance_C_CheckConnectionStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnOnlineUnavailable_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UBP_RemnantGameInstance_C::OnOnlineUnavailable_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnOnlineUnavailable_Event_1");

	UBP_RemnantGameInstance_C_OnOnlineUnavailable_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnShowEventMessage_Event_1
// 00007FF6F8B35350
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Heading                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText*                  Message                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_RemnantGameInstance_C::OnShowEventMessage_Event_1(struct FText* Heading, struct FText* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnShowEventMessage_Event_1");

	UBP_RemnantGameInstance_C_OnShowEventMessage_Event_1_Params params;
	params.Heading = Heading;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnWaitDialog_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_RemnantGameInstance_C::OnWaitDialog_Event_1(bool* Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnWaitDialog_Event_1");

	UBP_RemnantGameInstance_C_OnWaitDialog_Event_1_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnNetWaitDialog_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_RemnantGameInstance_C::OnNetWaitDialog_Event_1(bool* Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnNetWaitDialog_Event_1");

	UBP_RemnantGameInstance_C_OnNetWaitDialog_Event_1_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnPreQuitToMainMenu
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UBP_RemnantGameInstance_C::OnPreQuitToMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnPreQuitToMainMenu");

	UBP_RemnantGameInstance_C_OnPreQuitToMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnShowMatchmakingEventMessage_Event_1
// 00007FF6F8B35350
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Heading                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText*                  Message                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool*                          AlwaysOnTop                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_RemnantGameInstance_C::OnShowMatchmakingEventMessage_Event_1(struct FText* Heading, struct FText* Message, bool* AlwaysOnTop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnShowMatchmakingEventMessage_Event_1");

	UBP_RemnantGameInstance_C_OnShowMatchmakingEventMessage_Event_1_Params params;
	params.Heading = Heading;
	params.Message = Message;
	params.AlwaysOnTop = AlwaysOnTop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnPresenceJoinResult_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPresenceJoinResult*           Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RemnantGameInstance_C::OnPresenceJoinResult_Event_1(EPresenceJoinResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnPresenceJoinResult_Event_1");

	UBP_RemnantGameInstance_C_OnPresenceJoinResult_Event_1_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnDialogResult_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RemnantGameInstance_C::OnDialogResult_Event_1(struct FName* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnDialogResult_Event_1");

	UBP_RemnantGameInstance_C_OnDialogResult_Event_1_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnWaitCustomLoginDialog_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_RemnantGameInstance_C::OnWaitCustomLoginDialog_Event_1(bool* Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnWaitCustomLoginDialog_Event_1");

	UBP_RemnantGameInstance_C_OnWaitCustomLoginDialog_Event_1_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnLoginCompleted_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UBP_RemnantGameInstance_C::OnLoginCompleted_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnLoginCompleted_Event_1");

	UBP_RemnantGameInstance_C_OnLoginCompleted_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnExternalAuthFail_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UBP_RemnantGameInstance_C::OnExternalAuthFail_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnExternalAuthFail_Event_1");

	UBP_RemnantGameInstance_C_OnExternalAuthFail_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnFullGameAvailable
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UBP_RemnantGameInstance_C::OnFullGameAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.OnFullGameAvailable");

	UBP_RemnantGameInstance_C_OnFullGameAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.ExecuteUbergraph_BP_RemnantGameInstance
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RemnantGameInstance_C::ExecuteUbergraph_BP_RemnantGameInstance(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.ExecuteUbergraph_BP_RemnantGameInstance");

	UBP_RemnantGameInstance_C_ExecuteUbergraph_BP_RemnantGameInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.EventOnPreQuitToMainMenu__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_RemnantGameInstance_C::EventOnPreQuitToMainMenu__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantGameInstance.BP_RemnantGameInstance_C.EventOnPreQuitToMainMenu__DelegateSignature");

	UBP_RemnantGameInstance_C_EventOnPreQuitToMainMenu__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

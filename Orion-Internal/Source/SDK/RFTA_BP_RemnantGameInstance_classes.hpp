#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_RemnantGameInstance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RemnantGameInstance.BP_RemnantGameInstance_C
// 0x00D0 (0x03E0 - 0x0310)
class UBP_RemnantGameInstance_C : public URemnantGameInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0310(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FText>                               StatusChangeDialogQueue;                                  // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsSinglePlayer;                                           // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ForceShow;                                                // 0x0329(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData00[0x6];                                       // 0x032A(0x0006) MISSED OFFSET
	TMap<class FString, class FString>                 MatchmakingEventQueue;                                    // 0x0330(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    EventOnPreQuitToMainMenu;                                 // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TSoftObjectPtr<class UClass>                       DialogJoinGame;                                           // 0x0390(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UClass>                       DialogPressAnyKey;                                        // 0x03B8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RemnantGameInstance.BP_RemnantGameInstance_C");
		return ptr;
	}


	void SpawnControllerDialog();
	void SpawnStatusChangeDialog(struct FText* Message);
	void AddStatusChangeDialog(struct FText* Message);
	void OnFailure_439D53B841727DC5E85A82B7BA56C0C0(EGfeSDKReturnCode* GfeSdkReturnCode);
	void OnSuccess_439D53B841727DC5E85A82B7BA56C0C0(EGfeSDKReturnCode* GfeSdkReturnCode, struct FGfeSDKCreateResponse* GfeSdkProperties);
	void OnFailure_52FD5A90473978B64A90089314AE6DE0(EGfeSDKReturnCode* GfeSdkReturnCode);
	void OnSuccess_52FD5A90473978B64A90089314AE6DE0(EGfeSDKReturnCode* GfeSdkReturnCode);
	void OnFailure_943CEC884E25F69E09D832B4BA241281(EGfeSDKReturnCode* GfeSdkReturnCode);
	void OnSuccess_943CEC884E25F69E09D832B4BA241281(EGfeSDKReturnCode* GfeSdkReturnCode);
	void ReceiveInit();
	void CreatePersistenceIOWidget();
	void OnControllerConnectionChanged_Event_1(bool* Connected);
	void ReceiveShutdown();
	void CheckConnectionStatusChanges();
	void OnStatusChanged_Event_1();
	void StatusChangeDialogResult(struct FName* Result);
	void CheckStatusChangeDialogQueue();
	void CheckConnectionStatus();
	void OnOnlineUnavailable_Event_1();
	void OnShowEventMessage_Event_1(struct FText* Heading, struct FText* Message);
	void OnWaitDialog_Event_1(bool* Show);
	void OnNetWaitDialog_Event_1(bool* Show);
	void OnPreQuitToMainMenu();
	void OnShowMatchmakingEventMessage_Event_1(struct FText* Heading, struct FText* Message, bool* AlwaysOnTop);
	void OnPresenceJoinResult_Event_1(EPresenceJoinResult* Result);
	void OnDialogResult_Event_1(struct FName* Result);
	void OnWaitCustomLoginDialog_Event_1(bool* Show);
	void OnLoginCompleted_Event_1();
	void OnExternalAuthFail_Event_1();
	void OnFullGameAvailable();
	void ExecuteUbergraph_BP_RemnantGameInstance(int* EntryPoint);
	void EventOnPreQuitToMainMenu__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

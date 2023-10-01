// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxTwitch_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GbxTwitch.TwitchAPI.RequestTwitchStreams
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            MaxNbStreams                   (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  GameName                       (Parm, ZeroConstructor)
// class FString                  UserLogin                      (Parm, ZeroConstructor)
// class FString                  Language                       (Parm, ZeroConstructor)
// struct FScriptDelegate         StreamInfoReceivedDelegate     (Parm, ZeroConstructor)

void UTwitchAPI::STATIC_RequestTwitchStreams(int MaxNbStreams, const class FString& GameName, const class FString& UserLogin, const class FString& Language, const struct FScriptDelegate& StreamInfoReceivedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTwitch.TwitchAPI.RequestTwitchStreams");

	UTwitchAPI_RequestTwitchStreams_Params params;
	params.MaxNbStreams = MaxNbStreams;
	params.GameName = GameName;
	params.UserLogin = UserLogin;
	params.Language = Language;
	params.StreamInfoReceivedDelegate = StreamInfoReceivedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTwitch.TwitchIRCClient.SendChatMessage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  ChannelName                    (Parm, ZeroConstructor)
// class FString                  MESSAGE                        (Parm, ZeroConstructor)

void UTwitchIRCClient::STATIC_SendChatMessage(const class FString& ChannelName, const class FString& MESSAGE)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTwitch.TwitchIRCClient.SendChatMessage");

	UTwitchIRCClient_SendChatMessage_Params params;
	params.ChannelName = ChannelName;
	params.MESSAGE = MESSAGE;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTwitch.TwitchIRCClient.QuitChannel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  ChannelName                    (Parm, ZeroConstructor)

void UTwitchIRCClient::STATIC_QuitChannel(const class FString& ChannelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTwitch.TwitchIRCClient.QuitChannel");

	UTwitchIRCClient_QuitChannel_Params params;
	params.ChannelName = ChannelName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTwitch.TwitchIRCClient.JoinChannel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  ChannelName                    (Parm, ZeroConstructor)
// struct FScriptDelegate         OnMessageReceived              (Parm, ZeroConstructor)

void UTwitchIRCClient::STATIC_JoinChannel(const class FString& ChannelName, const struct FScriptDelegate& OnMessageReceived)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTwitch.TwitchIRCClient.JoinChannel");

	UTwitchIRCClient_JoinChannel_Params params;
	params.ChannelName = ChannelName;
	params.OnMessageReceived = OnMessageReceived;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTwitch.TwitchIRCClient.InitChatBot
// (Final, Native, Static, Public, BlueprintCallable)

void UTwitchIRCClient::STATIC_InitChatBot()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTwitch.TwitchIRCClient.InitChatBot");

	UTwitchIRCClient_InitChatBot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxTwitch.TwitchIRCClient.ExitChatBot
// (Final, Native, Static, Public, BlueprintCallable)

void UTwitchIRCClient::STATIC_ExitChatBot()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxTwitch.TwitchIRCClient.ExitChatBot");

	UTwitchIRCClient_ExitChatBot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

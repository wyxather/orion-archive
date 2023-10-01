#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxTwitch_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GbxTwitch.TwitchAPI.RequestTwitchStreams
struct UTwitchAPI_RequestTwitchStreams_Params
{
	int                                                MaxNbStreams;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      GameName;                                                 // (Parm, ZeroConstructor)
	class FString                                      UserLogin;                                                // (Parm, ZeroConstructor)
	class FString                                      Language;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             StreamInfoReceivedDelegate;                               // (Parm, ZeroConstructor)
};

// Function GbxTwitch.TwitchIRCClient.SendChatMessage
struct UTwitchIRCClient_SendChatMessage_Params
{
	class FString                                      ChannelName;                                              // (Parm, ZeroConstructor)
	class FString                                      MESSAGE;                                                  // (Parm, ZeroConstructor)
};

// Function GbxTwitch.TwitchIRCClient.QuitChannel
struct UTwitchIRCClient_QuitChannel_Params
{
	class FString                                      ChannelName;                                              // (Parm, ZeroConstructor)
};

// Function GbxTwitch.TwitchIRCClient.JoinChannel
struct UTwitchIRCClient_JoinChannel_Params
{
	class FString                                      ChannelName;                                              // (Parm, ZeroConstructor)
	struct FScriptDelegate                             OnMessageReceived;                                        // (Parm, ZeroConstructor)
};

// Function GbxTwitch.TwitchIRCClient.InitChatBot
struct UTwitchIRCClient_InitChatBot_Params
{
};

// Function GbxTwitch.TwitchIRCClient.ExitChatBot
struct UTwitchIRCClient_ExitChatBot_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

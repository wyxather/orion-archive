#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxTwitch_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GbxTwitch.GbxTwitchSettings
// 0x0050 (0x0078 - 0x0028)
class UGbxTwitchSettings : public UObject
{
public:
	class FString                                      AppClientID;                                              // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      AppClientID_Stable;                                       // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      AppClientID_Cert;                                         // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      ExtensionID;                                              // 0x0058(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      GameID;                                                   // 0x0068(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxTwitch.GbxTwitchSettings");
		return ptr;
	}

};


// Class GbxTwitch.TwitchAPI
// 0x0110 (0x0138 - 0x0028)
class UTwitchAPI : public UObject
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0028(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxTwitch.TwitchAPI");
		return ptr;
	}


	void STATIC_RequestTwitchStreams(int MaxNbStreams, const class FString& GameName, const class FString& UserLogin, const class FString& Language, const struct FScriptDelegate& StreamInfoReceivedDelegate);
};


// Class GbxTwitch.TwitchIRCClient
// 0x0070 (0x0098 - 0x0028)
class UTwitchIRCClient : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET
	TArray<struct FTwitchChannel>                      PendingChannels;                                          // 0x0058(0x0010) (ZeroConstructor, Transient)
	TArray<struct FTwitchChannel>                      ConnectedChannels;                                        // 0x0068(0x0010) (ZeroConstructor, Transient)
	TArray<class FString>                              IRCCommandsMessages;                                      // 0x0078(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0088(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxTwitch.TwitchIRCClient");
		return ptr;
	}


	void STATIC_SendChatMessage(const class FString& ChannelName, const class FString& MESSAGE);
	void STATIC_QuitChannel(const class FString& ChannelName);
	void STATIC_JoinChannel(const class FString& ChannelName, const struct FScriptDelegate& OnMessageReceived);
	void STATIC_InitChatBot();
	void STATIC_ExitChatBot();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GbxTwitch.TwitchChannelMessage
// 0x0030
struct FTwitchChannelMessage
{
	class FString                                      Channel;                                                  // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      UserName;                                                 // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      UserMessage;                                              // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct GbxTwitch.TwitchChannel
// 0x0058
struct FTwitchChannel
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class FString                                      ChannelName;                                              // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      ChannelDescription;                                       // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class FString>                              ChannelActiveUsers;                                       // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FTwitchChannelMessage>               IncomingChannelMessage;                                   // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptDelegate                             OnMessageReceived;                                        // 0x0048(0x0014) (ZeroConstructor, InstancedReference)
};

// ScriptStruct GbxTwitch.TwitchStreamInfo
// 0x00A0
struct FTwitchStreamInfo
{
	class FString                                      StreamID;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      UserID;                                                   // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      UserDisplayName;                                          // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      UserLogin;                                                // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      GameID;                                                   // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      GameName;                                                 // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bIsLive;                                                  // 0x0060(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	class FString                                      Title;                                                    // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                ViewerCount;                                              // 0x0078(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	class FString                                      StartedAt;                                                // 0x0080(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      Language;                                                 // 0x0090(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct GbxTwitch.TwitchStreamsRequest
// 0x0068
struct FTwitchStreamsRequest
{
	struct FGuid                                       RequestGuid;                                              // 0x0000(0x0010) (IsPlainOldData)
	TArray<struct FTwitchStreamInfo>                   StreamsFound;                                             // 0x0010(0x0010) (ZeroConstructor)
	struct FScriptDelegate                             OnStreamInfoReceived;                                     // 0x0020(0x0014) (ZeroConstructor, InstancedReference)
	bool                                               bResponseReceived;                                        // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bGameNameResolved;                                        // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUserNameResolved;                                        // 0x0032(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0033(0x0001) MISSED OFFSET
	int                                                MaxNbStreams;                                             // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	class FString                                      GameName;                                                 // 0x0038(0x0010) (ZeroConstructor)
	class FString                                      UserLogin;                                                // 0x0048(0x0010) (ZeroConstructor)
	class FString                                      Language;                                                 // 0x0058(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxTwitch.TwitchExtensionInfo
// 0x0050
struct FTwitchExtensionInfo
{
	class FString                                      ID;                                                       // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      Version;                                                  // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      Name;                                                     // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bCanActivate;                                             // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	TArray<class FString>                              Type;                                                     // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bActive;                                                  // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct GbxTwitch.TwitchActiveExtensionsInfo
// 0x0030
struct FTwitchActiveExtensionsInfo
{
	TArray<struct FTwitchExtensionInfo>                PanelExtensions;                                          // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FTwitchExtensionInfo>                OverlayExtensions;                                        // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FTwitchExtensionInfo>                ComponentExtensions;                                      // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct GbxTwitch.TwitchUserInfo
// 0x0058
struct FTwitchUserInfo
{
	class FString                                      ID;                                                       // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      Login;                                                    // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      DisplayName;                                              // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      Type;                                                     // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      Description;                                              // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                ViewCount;                                                // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

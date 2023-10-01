#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_Engine_classes.hpp"
#include "BL3_GbxRuntime_classes.hpp"
#include "BL3_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GbxDynamicRoom.DynamicRoomReplicationInfo
// 0x0010
struct FDynamicRoomReplicationInfo
{
	class UDynamicRoomBaseData*                        RoomToLoad;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                RoomUniqueIndex;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               RoomLoadedOnHost;                                         // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct GbxDynamicRoom.DynamicRoomInstanceInfo
// 0x0018
struct FDynamicRoomInstanceInfo
{
	struct FName                                       RoomUniqueName;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     LoadingData;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     RoomInstance;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

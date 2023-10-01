#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxDynamicRoom_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GbxDynamicRoom.DynamicRoomBase
// 0x0098 (0x04F0 - 0x0458)
class ADynamicRoomBase : public AActor
{
public:
	TArray<class UDynamicRoomBaseData*>                SelectableLevels;                                         // 0x0458(0x0010) (Edit, ZeroConstructor)
	bool                                               bShowRandomRoomOnStartup;                                 // 0x0468(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0469(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnRoomLoaded;                                             // 0x0470(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRoomUnloaded;                                           // 0x0480(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRoomVisible;                                            // 0x0490(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRoomVisibleForAllPlayers;                               // 0x04A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FDynamicRoomReplicationInfo                 RoomInfoToLoad;                                           // 0x04B0(0x0010) (Net, IsPlainOldData)
	struct FDynamicRoomInstanceInfo                    InstanceInfo;                                             // 0x04C0(0x0018)
	class UBillboardComponent*                         SpriteComponent;                                          // 0x04D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDynamicRoomBaseData*                        CachedRoomDataReference;                                  // 0x04E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x04E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDynamicRoom.DynamicRoomBase");
		return ptr;
	}


	bool VisibleForAllPlayers();
	void UnloadRoom();
	void SelectedRoomVisible();
	void SelectedRoomLoaded();
	void SelectedRoomClassLoaded();
	void OnRep_RoomInfoToLoad(struct FDynamicRoomReplicationInfo* OldRoomInfoToLoad);
	void InstanceRoom(class UDynamicRoomBaseData* RoomToLoad);
	void InstanceRandomRoom();
	void GetPlayersInLevel(TArray<class AGbxCharacter*>* Players);
	class UDynamicRoomBaseData* GetCurrentRoomData();
	void GetAvailableRoomData(TArray<class UDynamicRoomBaseData*>* AvailableRooms);
	void AllPlayerVisibilityTest();
};


// Class GbxDynamicRoom.DynamicRoomBaseData
// 0x0058 (0x0088 - 0x0030)
class UDynamicRoomBaseData : public UGbxDataAsset
{
public:
	struct FText                                       DisplayName;                                              // 0x0030(0x0028) (Edit)
	struct FText                                       Description;                                              // 0x0048(0x0028) (Edit)
	TSoftObjectPtr<class UTexture>                     PreviewPicture;                                           // 0x0060(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDynamicRoom.DynamicRoomBaseData");
		return ptr;
	}

};


// Class GbxDynamicRoom.DynamicRoomLevelData
// 0x0018 (0x00A0 - 0x0088)
class UDynamicRoomLevelData : public UDynamicRoomBaseData
{
public:
	struct FSoftObjectPath                             DynamicRoomAssetName;                                     // 0x0088(0x0018) (Edit, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDynamicRoom.DynamicRoomLevelData");
		return ptr;
	}

};


// Class GbxDynamicRoom.DynamicRoomActor
// 0x0000 (0x0458 - 0x0458)
class ADynamicRoomActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDynamicRoom.DynamicRoomActor");
		return ptr;
	}

};


// Class GbxDynamicRoom.DynamicRoomActorData
// 0x0018 (0x00A0 - 0x0088)
class UDynamicRoomActorData : public UDynamicRoomBaseData
{
public:
	struct FSoftClassPath                              DynamicRoomAssetName;                                     // 0x0088(0x0018) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDynamicRoom.DynamicRoomActorData");
		return ptr;
	}


	void HandleDynamicRoomActorSpawned(class AActor* SpawnedActor, int InstanceIndex);
};


// Class GbxDynamicRoom.DynamicRoomModuleSettings
// 0x0000 (0x0028 - 0x0028)
class UDynamicRoomModuleSettings : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxDynamicRoom.DynamicRoomModuleSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

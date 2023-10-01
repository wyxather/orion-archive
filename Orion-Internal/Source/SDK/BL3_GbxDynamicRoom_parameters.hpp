#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxDynamicRoom_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GbxDynamicRoom.DynamicRoomBase.VisibleForAllPlayers
struct ADynamicRoomBase_VisibleForAllPlayers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxDynamicRoom.DynamicRoomBase.UnloadRoom
struct ADynamicRoomBase_UnloadRoom_Params
{
};

// Function GbxDynamicRoom.DynamicRoomBase.SelectedRoomVisible
struct ADynamicRoomBase_SelectedRoomVisible_Params
{
};

// Function GbxDynamicRoom.DynamicRoomBase.SelectedRoomLoaded
struct ADynamicRoomBase_SelectedRoomLoaded_Params
{
};

// Function GbxDynamicRoom.DynamicRoomBase.SelectedRoomClassLoaded
struct ADynamicRoomBase_SelectedRoomClassLoaded_Params
{
};

// Function GbxDynamicRoom.DynamicRoomBase.OnRep_RoomInfoToLoad
struct ADynamicRoomBase_OnRep_RoomInfoToLoad_Params
{
	struct FDynamicRoomReplicationInfo                 OldRoomInfoToLoad;                                        // (Parm, OutParm, IsPlainOldData)
};

// Function GbxDynamicRoom.DynamicRoomBase.InstanceRoom
struct ADynamicRoomBase_InstanceRoom_Params
{
	class UDynamicRoomBaseData*                        RoomToLoad;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxDynamicRoom.DynamicRoomBase.InstanceRandomRoom
struct ADynamicRoomBase_InstanceRandomRoom_Params
{
};

// Function GbxDynamicRoom.DynamicRoomBase.GetPlayersInLevel
struct ADynamicRoomBase_GetPlayersInLevel_Params
{
	TArray<class AGbxCharacter*>                       Players;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function GbxDynamicRoom.DynamicRoomBase.GetCurrentRoomData
struct ADynamicRoomBase_GetCurrentRoomData_Params
{
	class UDynamicRoomBaseData*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxDynamicRoom.DynamicRoomBase.GetAvailableRoomData
struct ADynamicRoomBase_GetAvailableRoomData_Params
{
	TArray<class UDynamicRoomBaseData*>                AvailableRooms;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function GbxDynamicRoom.DynamicRoomBase.AllPlayerVisibilityTest
struct ADynamicRoomBase_AllPlayerVisibilityTest_Params
{
};

// Function GbxDynamicRoom.DynamicRoomActorData.HandleDynamicRoomActorSpawned
struct UDynamicRoomActorData_HandleDynamicRoomActorSpawned_Params
{
	class AActor*                                      SpawnedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

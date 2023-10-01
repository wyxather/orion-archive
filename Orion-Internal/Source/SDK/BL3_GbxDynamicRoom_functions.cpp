// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxDynamicRoom_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GbxDynamicRoom.DynamicRoomBase.VisibleForAllPlayers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADynamicRoomBase::VisibleForAllPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDynamicRoom.DynamicRoomBase.VisibleForAllPlayers");

	ADynamicRoomBase_VisibleForAllPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxDynamicRoom.DynamicRoomBase.UnloadRoom
// (Native, Public, BlueprintCallable)

void ADynamicRoomBase::UnloadRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDynamicRoom.DynamicRoomBase.UnloadRoom");

	ADynamicRoomBase_UnloadRoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxDynamicRoom.DynamicRoomBase.SelectedRoomVisible
// (Final, Native, Public)

void ADynamicRoomBase::SelectedRoomVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDynamicRoom.DynamicRoomBase.SelectedRoomVisible");

	ADynamicRoomBase_SelectedRoomVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxDynamicRoom.DynamicRoomBase.SelectedRoomLoaded
// (Final, Native, Public)

void ADynamicRoomBase::SelectedRoomLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDynamicRoom.DynamicRoomBase.SelectedRoomLoaded");

	ADynamicRoomBase_SelectedRoomLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxDynamicRoom.DynamicRoomBase.SelectedRoomClassLoaded
// (Final, Native, Public)

void ADynamicRoomBase::SelectedRoomClassLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDynamicRoom.DynamicRoomBase.SelectedRoomClassLoaded");

	ADynamicRoomBase_SelectedRoomClassLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxDynamicRoom.DynamicRoomBase.OnRep_RoomInfoToLoad
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FDynamicRoomReplicationInfo OldRoomInfoToLoad              (Parm, OutParm, IsPlainOldData)

void ADynamicRoomBase::OnRep_RoomInfoToLoad(struct FDynamicRoomReplicationInfo* OldRoomInfoToLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDynamicRoom.DynamicRoomBase.OnRep_RoomInfoToLoad");

	ADynamicRoomBase_OnRep_RoomInfoToLoad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OldRoomInfoToLoad != nullptr)
		*OldRoomInfoToLoad = params.OldRoomInfoToLoad;
}


// Function GbxDynamicRoom.DynamicRoomBase.InstanceRoom
// (Native, Public, BlueprintCallable)
// Parameters:
// class UDynamicRoomBaseData*    RoomToLoad                     (Parm, ZeroConstructor, IsPlainOldData)

void ADynamicRoomBase::InstanceRoom(class UDynamicRoomBaseData* RoomToLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDynamicRoom.DynamicRoomBase.InstanceRoom");

	ADynamicRoomBase_InstanceRoom_Params params;
	params.RoomToLoad = RoomToLoad;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxDynamicRoom.DynamicRoomBase.InstanceRandomRoom
// (Native, Public, BlueprintCallable)

void ADynamicRoomBase::InstanceRandomRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDynamicRoom.DynamicRoomBase.InstanceRandomRoom");

	ADynamicRoomBase_InstanceRandomRoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxDynamicRoom.DynamicRoomBase.GetPlayersInLevel
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class AGbxCharacter*>   Players                        (Parm, OutParm, ZeroConstructor)

void ADynamicRoomBase::GetPlayersInLevel(TArray<class AGbxCharacter*>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDynamicRoom.DynamicRoomBase.GetPlayersInLevel");

	ADynamicRoomBase_GetPlayersInLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;
}


// Function GbxDynamicRoom.DynamicRoomBase.GetCurrentRoomData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDynamicRoomBaseData*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDynamicRoomBaseData* ADynamicRoomBase::GetCurrentRoomData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDynamicRoom.DynamicRoomBase.GetCurrentRoomData");

	ADynamicRoomBase_GetCurrentRoomData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxDynamicRoom.DynamicRoomBase.GetAvailableRoomData
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UDynamicRoomBaseData*> AvailableRooms                 (Parm, OutParm, ZeroConstructor)

void ADynamicRoomBase::GetAvailableRoomData(TArray<class UDynamicRoomBaseData*>* AvailableRooms)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDynamicRoom.DynamicRoomBase.GetAvailableRoomData");

	ADynamicRoomBase_GetAvailableRoomData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AvailableRooms != nullptr)
		*AvailableRooms = params.AvailableRooms;
}


// Function GbxDynamicRoom.DynamicRoomBase.AllPlayerVisibilityTest
// (Final, Native, Private)

void ADynamicRoomBase::AllPlayerVisibilityTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDynamicRoom.DynamicRoomBase.AllPlayerVisibilityTest");

	ADynamicRoomBase_AllPlayerVisibilityTest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxDynamicRoom.DynamicRoomActorData.HandleDynamicRoomActorSpawned
// (Final, Native, Private)
// Parameters:
// class AActor*                  SpawnedActor                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UDynamicRoomActorData::HandleDynamicRoomActorSpawned(class AActor* SpawnedActor, int InstanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxDynamicRoom.DynamicRoomActorData.HandleDynamicRoomActorSpawned");

	UDynamicRoomActorData_HandleDynamicRoomActorSpawned_Params params;
	params.SpawnedActor = SpawnedActor;
	params.InstanceIndex = InstanceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

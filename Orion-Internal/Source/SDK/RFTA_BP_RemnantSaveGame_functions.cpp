// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_RemnantSaveGame_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_RemnantSaveGame.BP_RemnantSaveGame_C.UpdateSaveInfo
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstanceGunfire**   GameInstance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RemnantSaveGame_C::UpdateSaveInfo(class UGameInstanceGunfire** GameInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantSaveGame.BP_RemnantSaveGame_C.UpdateSaveInfo");

	UBP_RemnantSaveGame_C_UpdateSaveInfo_Params params;
	params.GameInstance = GameInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantSaveGame.BP_RemnantSaveGame_C.UpdateTimePlayed
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RemnantSaveGame_C::UpdateTimePlayed(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantSaveGame.BP_RemnantSaveGame_C.UpdateTimePlayed");

	UBP_RemnantSaveGame_C_UpdateTimePlayed_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantSaveGame.BP_RemnantSaveGame_C.PreCommit
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPersistenceManager**    PersistenceManager             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RemnantSaveGame_C::PreCommit(class UPersistenceManager** PersistenceManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantSaveGame.BP_RemnantSaveGame_C.PreCommit");

	UBP_RemnantSaveGame_C_PreCommit_Params params;
	params.PersistenceManager = PersistenceManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantSaveGame.BP_RemnantSaveGame_C.ExecuteUbergraph_BP_RemnantSaveGame
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RemnantSaveGame_C::ExecuteUbergraph_BP_RemnantSaveGame(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantSaveGame.BP_RemnantSaveGame_C.ExecuteUbergraph_BP_RemnantSaveGame");

	UBP_RemnantSaveGame_C_ExecuteUbergraph_BP_RemnantSaveGame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

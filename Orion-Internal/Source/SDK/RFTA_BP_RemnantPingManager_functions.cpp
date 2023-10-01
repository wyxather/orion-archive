// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_RemnantPingManager_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_RemnantPingManager.BP_RemnantPingManager_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UBP_RemnantPingManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantPingManager.BP_RemnantPingManager_C.ReceiveBeginPlay");

	UBP_RemnantPingManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantPingManager.BP_RemnantPingManager_C.OnCharacterPing_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActionPing*            Ping                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_RemnantPingManager_C::OnCharacterPing_Event_1(class AActor** Character, struct FActionPing* Ping)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantPingManager.BP_RemnantPingManager_C.OnCharacterPing_Event_1");

	UBP_RemnantPingManager_C_OnCharacterPing_Event_1_Params params;
	params.Character = Character;
	params.Ping = Ping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemnantPingManager.BP_RemnantPingManager_C.ExecuteUbergraph_BP_RemnantPingManager
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RemnantPingManager_C::ExecuteUbergraph_BP_RemnantPingManager(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantPingManager.BP_RemnantPingManager_C.ExecuteUbergraph_BP_RemnantPingManager");

	UBP_RemnantPingManager_C_ExecuteUbergraph_BP_RemnantPingManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

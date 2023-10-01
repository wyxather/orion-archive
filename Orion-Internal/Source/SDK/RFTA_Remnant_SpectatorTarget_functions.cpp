// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Remnant_SpectatorTarget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Remnant_SpectatorTarget.Remnant_SpectatorTarget_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void URemnant_SpectatorTarget_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_SpectatorTarget.Remnant_SpectatorTarget_C.ReceiveBeginPlay");

	URemnant_SpectatorTarget_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_SpectatorTarget.Remnant_SpectatorTarget_C.OnDead_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char*                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URemnant_SpectatorTarget_C::OnDead_Event_1(unsigned char* Reason, class ACharacterGunfire** Character, class AActor** Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_SpectatorTarget.Remnant_SpectatorTarget_C.OnDead_Event_1");

	URemnant_SpectatorTarget_C_OnDead_Event_1_Params params;
	params.Reason = Reason;
	params.Character = Character;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_SpectatorTarget.Remnant_SpectatorTarget_C.ReceiveEndPlay
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URemnant_SpectatorTarget_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_SpectatorTarget.Remnant_SpectatorTarget_C.ReceiveEndPlay");

	URemnant_SpectatorTarget_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Remnant_SpectatorTarget.Remnant_SpectatorTarget_C.ExecuteUbergraph_Remnant_SpectatorTarget
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URemnant_SpectatorTarget_C::ExecuteUbergraph_Remnant_SpectatorTarget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Remnant_SpectatorTarget.Remnant_SpectatorTarget_C.ExecuteUbergraph_Remnant_SpectatorTarget");

	URemnant_SpectatorTarget_C_ExecuteUbergraph_Remnant_SpectatorTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

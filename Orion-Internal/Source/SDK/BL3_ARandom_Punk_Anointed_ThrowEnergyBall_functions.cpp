// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARandom_Punk_Anointed_ThrowEnergyBall_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ARandom_Punk_Anointed_ThrowEnergyBall.ARandom_Punk_Anointed_ThrowEnergyBall_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARandom_Punk_Anointed_ThrowEnergyBall_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARandom_Punk_Anointed_ThrowEnergyBall.ARandom_Punk_Anointed_ThrowEnergyBall_C.OnBegin");

	UARandom_Punk_Anointed_ThrowEnergyBall_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARandom_Punk_Anointed_ThrowEnergyBall.ARandom_Punk_Anointed_ThrowEnergyBall_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARandom_Punk_Anointed_ThrowEnergyBall_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARandom_Punk_Anointed_ThrowEnergyBall.ARandom_Punk_Anointed_ThrowEnergyBall_C.OnEnd");

	UARandom_Punk_Anointed_ThrowEnergyBall_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARandom_Punk_Anointed_ThrowEnergyBall.ARandom_Punk_Anointed_ThrowEnergyBall_C.MeleeStrike
// (BlueprintCallable, BlueprintEvent)

void UARandom_Punk_Anointed_ThrowEnergyBall_C::MeleeStrike()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARandom_Punk_Anointed_ThrowEnergyBall.ARandom_Punk_Anointed_ThrowEnergyBall_C.MeleeStrike");

	UARandom_Punk_Anointed_ThrowEnergyBall_C_MeleeStrike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARandom_Punk_Anointed_ThrowEnergyBall.ARandom_Punk_Anointed_ThrowEnergyBall_C.ThrowLeftHand
// (BlueprintCallable, BlueprintEvent)

void UARandom_Punk_Anointed_ThrowEnergyBall_C::ThrowLeftHand()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARandom_Punk_Anointed_ThrowEnergyBall.ARandom_Punk_Anointed_ThrowEnergyBall_C.ThrowLeftHand");

	UARandom_Punk_Anointed_ThrowEnergyBall_C_ThrowLeftHand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARandom_Punk_Anointed_ThrowEnergyBall.ARandom_Punk_Anointed_ThrowEnergyBall_C.ExecuteUbergraph_ARandom_Punk_Anointed_ThrowEnergyBall
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARandom_Punk_Anointed_ThrowEnergyBall_C::ExecuteUbergraph_ARandom_Punk_Anointed_ThrowEnergyBall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARandom_Punk_Anointed_ThrowEnergyBall.ARandom_Punk_Anointed_ThrowEnergyBall_C.ExecuteUbergraph_ARandom_Punk_Anointed_ThrowEnergyBall");

	UARandom_Punk_Anointed_ThrowEnergyBall_C_ExecuteUbergraph_ARandom_Punk_Anointed_ThrowEnergyBall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

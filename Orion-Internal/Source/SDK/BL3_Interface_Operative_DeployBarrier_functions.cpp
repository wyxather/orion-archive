// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Interface_Operative_DeployBarrier_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.IsHoldingBarrier
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_Operative_DeployBarrier_C::IsHoldingBarrier(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.IsHoldingBarrier");

	UInterface_Operative_DeployBarrier_C_IsHoldingBarrier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.RefillBarrierHealth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_Operative_DeployBarrier_C::RefillBarrierHealth(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.RefillBarrierHealth");

	UInterface_Operative_DeployBarrier_C_RefillBarrierHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.GiveBarrierHealth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Health                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          New_Health                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_Operative_DeployBarrier_C::GiveBarrierHealth(float Health, float* New_Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.GiveBarrierHealth");

	UInterface_Operative_DeployBarrier_C_GiveBarrierHealth_Params params;
	params.Health = Health;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (New_Health != nullptr)
		*New_Health = params.New_Health;
}


// Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.GetBarrierReference
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Barrier                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_Operative_DeployBarrier_C::GetBarrierReference(class AActor** Barrier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.GetBarrierReference");

	UInterface_Operative_DeployBarrier_C_GetBarrierReference_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Barrier != nullptr)
		*Barrier = params.Barrier;
}


// Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.ActivateHighlyUnstableFromCarry
// (Public, BlueprintCallable, BlueprintEvent)

void UInterface_Operative_DeployBarrier_C::ActivateHighlyUnstableFromCarry()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.ActivateHighlyUnstableFromCarry");

	UInterface_Operative_DeployBarrier_C_ActivateHighlyUnstableFromCarry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.ActivateHighlyUnstable
// (Public, BlueprintCallable, BlueprintEvent)

void UInterface_Operative_DeployBarrier_C::ActivateHighlyUnstable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.ActivateHighlyUnstable");

	UInterface_Operative_DeployBarrier_C_ActivateHighlyUnstable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.GetBarrierHealthPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HealthPercent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_Operative_DeployBarrier_C::GetBarrierHealthPercent(float* HealthPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.GetBarrierHealthPercent");

	UInterface_Operative_DeployBarrier_C_GetBarrierHealthPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HealthPercent != nullptr)
		*HealthPercent = params.HealthPercent;
}


// Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.StartHoldingBarrier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInterface_Operative_DeployBarrier_C::StartHoldingBarrier(class AActor* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.StartHoldingBarrier");

	UInterface_Operative_DeployBarrier_C_StartHoldingBarrier_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.DeployNewBarrierInHand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInterface_Operative_DeployBarrier_C::DeployNewBarrierInHand(class AActor* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.DeployNewBarrierInHand");

	UInterface_Operative_DeployBarrier_C_DeployNewBarrierInHand_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.DeployNewBarrierAroundPlayer
// (Public, BlueprintCallable, BlueprintEvent)

void UInterface_Operative_DeployBarrier_C::DeployNewBarrierAroundPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Operative_DeployBarrier.Interface_Operative_DeployBarrier_C.DeployNewBarrierAroundPlayer");

	UInterface_Operative_DeployBarrier_C_DeployNewBarrierAroundPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

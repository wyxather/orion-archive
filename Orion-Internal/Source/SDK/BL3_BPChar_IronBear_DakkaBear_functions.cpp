// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_IronBear_DakkaBear_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.BootGunnersNestOccupant
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronBear_DakkaBear_C::BootGunnersNestOccupant(bool* InputPin, float* Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.BootGunnersNestOccupant");

	ABPChar_IronBear_DakkaBear_C_BootGunnersNestOccupant_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Delay != nullptr)
		*Delay = params.Delay;
}


// Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.KickPlayerOutOfGunnersNest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          zKilled_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronBear_DakkaBear_C::KickPlayerOutOfGunnersNest(bool* zKilled_, float* Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.KickPlayerOutOfGunnersNest");

	ABPChar_IronBear_DakkaBear_C_KickPlayerOutOfGunnersNest_Params params;
	params.zKilled_ = zKilled_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Delay != nullptr)
		*Delay = params.Delay;
}


// Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_IronBear_DakkaBear_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.UserConstructionScript");

	ABPChar_IronBear_DakkaBear_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.OnRep_GunnersNestOccupied
// (BlueprintCallable, BlueprintEvent)

void ABPChar_IronBear_DakkaBear_C::OnRep_GunnersNestOccupied()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.OnRep_GunnersNestOccupied");

	ABPChar_IronBear_DakkaBear_C_OnRep_GunnersNestOccupied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.OnAttachStateChanged_GunnersNest
// (BlueprintCallable, BlueprintEvent)

void ABPChar_IronBear_DakkaBear_C::OnAttachStateChanged_GunnersNest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.OnAttachStateChanged_GunnersNest");

	ABPChar_IronBear_DakkaBear_C_OnAttachStateChanged_GunnersNest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.StartGunnersNestBonus
// (BlueprintCallable, BlueprintEvent)

void ABPChar_IronBear_DakkaBear_C::StartGunnersNestBonus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.StartGunnersNestBonus");

	ABPChar_IronBear_DakkaBear_C_StartGunnersNestBonus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.StopGunnersNextBonus
// (BlueprintCallable, BlueprintEvent)

void ABPChar_IronBear_DakkaBear_C::StopGunnersNextBonus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.StopGunnersNextBonus");

	ABPChar_IronBear_DakkaBear_C_StopGunnersNextBonus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.CalculateAutoBearDuration
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_IronBear_DakkaBear_C::CalculateAutoBearDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.CalculateAutoBearDuration");

	ABPChar_IronBear_DakkaBear_C_CalculateAutoBearDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.ExecuteUbergraph_BPChar_IronBear_DakkaBear
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_IronBear_DakkaBear_C::ExecuteUbergraph_BPChar_IronBear_DakkaBear(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.ExecuteUbergraph_BPChar_IronBear_DakkaBear");

	ABPChar_IronBear_DakkaBear_C_ExecuteUbergraph_BPChar_IronBear_DakkaBear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

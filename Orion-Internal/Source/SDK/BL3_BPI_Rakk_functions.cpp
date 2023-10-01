// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_Rakk_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_Rakk.BPI_Rakk_C.StopAttackLoopAudio
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Rakk_C::StopAttackLoopAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Rakk.BPI_Rakk_C.StopAttackLoopAudio");

	UBPI_Rakk_C_StopAttackLoopAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Rakk.BPI_Rakk_C.StartAttackLoopAudio
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Rakk_C::StartAttackLoopAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Rakk.BPI_Rakk_C.StartAttackLoopAudio");

	UBPI_Rakk_C_StartAttackLoopAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Rakk.BPI_Rakk_C.StopAttackAction
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Rakk_C::StopAttackAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Rakk.BPI_Rakk_C.StopAttackAction");

	UBPI_Rakk_C_StopAttackAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Rakk.BPI_Rakk_C.StartAttackAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ActionClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Rakk_C::StartAttackAction(class UClass* ActionClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Rakk.BPI_Rakk_C.StartAttackAction");

	UBPI_Rakk_C_StartAttackAction_Params params;
	params.ActionClass = ActionClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Rakk.BPI_Rakk_C.ChromaticSwitchCooldown
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Rakk_C::ChromaticSwitchCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Rakk.BPI_Rakk_C.ChromaticSwitchCooldown");

	UBPI_Rakk_C_ChromaticSwitchCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Rakk.BPI_Rakk_C.ChromaticSwitchWarmup
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Rakk_C::ChromaticSwitchWarmup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Rakk.BPI_Rakk_C.ChromaticSwitchWarmup");

	UBPI_Rakk_C_ChromaticSwitchWarmup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Rakk.BPI_Rakk_C.SetBreathFXSwitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Rakk_C::SetBreathFXSwitch(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Rakk.BPI_Rakk_C.SetBreathFXSwitch");

	UBPI_Rakk_C_SetBreathFXSwitch_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Rakk.BPI_Rakk_C.TryChromaticSwitch
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Rakk_C::TryChromaticSwitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Rakk.BPI_Rakk_C.TryChromaticSwitch");

	UBPI_Rakk_C_TryChromaticSwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Rakk.BPI_Rakk_C.SpreadDamageAura
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SpreadToActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Rakk_C::SpreadDamageAura(class AActor* SpreadToActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Rakk.BPI_Rakk_C.SpreadDamageAura");

	UBPI_Rakk_C_SpreadDamageAura_Params params;
	params.SpreadToActor = SpreadToActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Rakk.BPI_Rakk_C.SetDamageAuraActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Rakk_C::SetDamageAuraActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Rakk.BPI_Rakk_C.SetDamageAuraActive");

	UBPI_Rakk_C_SetDamageAuraActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Rakk.BPI_Rakk_C.ImbueWithElement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOakElementalType              ElementalType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Rakk_C::ImbueWithElement(EOakElementalType ElementalType, class AActor* Source, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Rakk.BPI_Rakk_C.ImbueWithElement");

	UBPI_Rakk_C_ImbueWithElement_Params params;
	params.ElementalType = ElementalType;
	params.Source = Source;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Rakk.BPI_Rakk_C.OnKilled
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Rakk_C::OnKilled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Rakk.BPI_Rakk_C.OnKilled");

	UBPI_Rakk_C_OnKilled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

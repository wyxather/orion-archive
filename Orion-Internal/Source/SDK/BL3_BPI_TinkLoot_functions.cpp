// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_TinkLoot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_TinkLoot.BPI_TinkLoot_C.TinkLoot_NormalDeathStart
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_TinkLoot_C::TinkLoot_NormalDeathStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TinkLoot.BPI_TinkLoot_C.TinkLoot_NormalDeathStart");

	UBPI_TinkLoot_C_TinkLoot_NormalDeathStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_TinkLoot.BPI_TinkLoot_C.TinkLoot_DeathPreamble
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_TinkLoot_C::TinkLoot_DeathPreamble()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TinkLoot.BPI_TinkLoot_C.TinkLoot_DeathPreamble");

	UBPI_TinkLoot_C_TinkLoot_DeathPreamble_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_TinkLoot.BPI_TinkLoot_C.TinkLoot_DeathProtection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActivated                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_TinkLoot_C::TinkLoot_DeathProtection(bool IsActivated)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TinkLoot.BPI_TinkLoot_C.TinkLoot_DeathProtection");

	UBPI_TinkLoot_C_TinkLoot_DeathProtection_Params params;
	params.IsActivated = IsActivated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_TinkLoot.BPI_TinkLoot_C.TinkLoot_ClearEscapeMound
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_TinkLoot_C::TinkLoot_ClearEscapeMound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TinkLoot.BPI_TinkLoot_C.TinkLoot_ClearEscapeMound");

	UBPI_TinkLoot_C_TinkLoot_ClearEscapeMound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_TinkLoot.BPI_TinkLoot_C.TinkLoot_TriggerRunAwayDialog
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_TinkLoot_C::TinkLoot_TriggerRunAwayDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TinkLoot.BPI_TinkLoot_C.TinkLoot_TriggerRunAwayDialog");

	UBPI_TinkLoot_C_TinkLoot_TriggerRunAwayDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_TinkLoot.BPI_TinkLoot_C.TinkLoot_StopAnnounce
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_TinkLoot_C::TinkLoot_StopAnnounce()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TinkLoot.BPI_TinkLoot_C.TinkLoot_StopAnnounce");

	UBPI_TinkLoot_C_TinkLoot_StopAnnounce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_TinkLoot.BPI_TinkLoot_C.TinkLoot_StartAnnounce
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_TinkLoot_C::TinkLoot_StartAnnounce()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TinkLoot.BPI_TinkLoot_C.TinkLoot_StartAnnounce");

	UBPI_TinkLoot_C_TinkLoot_StartAnnounce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_TinkLoot.BPI_TinkLoot_C.TinkLoot_StopCashTrail
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_TinkLoot_C::TinkLoot_StopCashTrail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TinkLoot.BPI_TinkLoot_C.TinkLoot_StopCashTrail");

	UBPI_TinkLoot_C_TinkLoot_StopCashTrail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_TinkLoot.BPI_TinkLoot_C.TinkLoot_StartCashTrail
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_TinkLoot_C::TinkLoot_StartCashTrail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TinkLoot.BPI_TinkLoot_C.TinkLoot_StartCashTrail");

	UBPI_TinkLoot_C_TinkLoot_StartCashTrail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_TinkLoot.BPI_TinkLoot_C.TinkLoot_OnTargetChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_TinkLoot_C::TinkLoot_OnTargetChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TinkLoot.BPI_TinkLoot_C.TinkLoot_OnTargetChanged");

	UBPI_TinkLoot_C_TinkLoot_OnTargetChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_TinkLoot.BPI_TinkLoot_C.TinkLoot_DeathLoot
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_TinkLoot_C::TinkLoot_DeathLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TinkLoot.BPI_TinkLoot_C.TinkLoot_DeathLoot");

	UBPI_TinkLoot_C_TinkLoot_DeathLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_TinkLoot.BPI_TinkLoot_C.TinkLoot_AllowHiding
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_TinkLoot_C::TinkLoot_AllowHiding()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TinkLoot.BPI_TinkLoot_C.TinkLoot_AllowHiding");

	UBPI_TinkLoot_C_TinkLoot_AllowHiding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_TinkLoot.BPI_TinkLoot_C.TinkLoot_Escaped
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_TinkLoot_C::TinkLoot_Escaped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TinkLoot.BPI_TinkLoot_C.TinkLoot_Escaped");

	UBPI_TinkLoot_C_TinkLoot_Escaped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_TinkLoot.BPI_TinkLoot_C.TinkLoot_DigInterupted
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_TinkLoot_C::TinkLoot_DigInterupted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TinkLoot.BPI_TinkLoot_C.TinkLoot_DigInterupted");

	UBPI_TinkLoot_C_TinkLoot_DigInterupted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_TinkLoot.BPI_TinkLoot_C.TinkLoot_StartDig
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_TinkLoot_C::TinkLoot_StartDig()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TinkLoot.BPI_TinkLoot_C.TinkLoot_StartDig");

	UBPI_TinkLoot_C_TinkLoot_StartDig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_TinkLoot.BPI_TinkLoot_C.TinkLoot_TimeToEscape
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_TinkLoot_C::TinkLoot_TimeToEscape()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TinkLoot.BPI_TinkLoot_C.TinkLoot_TimeToEscape");

	UBPI_TinkLoot_C_TinkLoot_TimeToEscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

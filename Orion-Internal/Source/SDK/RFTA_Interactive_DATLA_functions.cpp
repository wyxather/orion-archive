// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Interactive_DATLA_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Interactive_DATLA.Interactive_DATLA_C.IsLocked
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AInteractive_DATLA_C::IsLocked(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DATLA.Interactive_DATLA_C.IsLocked");

	AInteractive_DATLA_C_IsLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Interactive_DATLA.Interactive_DATLA_C.Initialize Crystal
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AInteractive_DATLA_C::Initialize_Crystal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DATLA.Interactive_DATLA_C.Initialize Crystal");

	AInteractive_DATLA_C_Initialize_Crystal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_DATLA.Interactive_DATLA_C.IsInitialized
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Bool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AInteractive_DATLA_C::IsInitialized(bool* Bool)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DATLA.Interactive_DATLA_C.IsInitialized");

	AInteractive_DATLA_C_IsInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bool != nullptr)
		*Bool = params.Bool;
}


// Function Interactive_DATLA.Interactive_DATLA_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void AInteractive_DATLA_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DATLA.Interactive_DATLA_C.ReceiveBeginPlay");

	AInteractive_DATLA_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_DATLA.Interactive_DATLA_C.ActivateCrystal
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AInteractive_DATLA_C::ActivateCrystal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DATLA.Interactive_DATLA_C.ActivateCrystal");

	AInteractive_DATLA_C_ActivateCrystal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_DATLA.Interactive_DATLA_C.ExecuteUbergraph_Interactive_DATLA
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_DATLA_C::ExecuteUbergraph_Interactive_DATLA(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DATLA.Interactive_DATLA_C.ExecuteUbergraph_Interactive_DATLA");

	AInteractive_DATLA_C_ExecuteUbergraph_Interactive_DATLA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

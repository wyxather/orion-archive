// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Interface_IO_Operative_ShoulderCannon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeShoulderCannonCreateLightProjectile
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_IO_Operative_ShoulderCannon_C::OperativeShoulderCannonCreateLightProjectile(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeShoulderCannonCreateLightProjectile");

	UInterface_IO_Operative_ShoulderCannon_C_OperativeShoulderCannonCreateLightProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeShoulderCannonSetState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EOperativeShoulderCannon> NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_IO_Operative_ShoulderCannon_C::OperativeShoulderCannonSetState(TEnumAsByte<EOperativeShoulderCannon> NewState, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeShoulderCannonSetState");

	UInterface_IO_Operative_ShoulderCannon_C_OperativeShoulderCannonSetState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeShoulderCannonReload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Start                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInterface_IO_Operative_ShoulderCannon_C::OperativeShoulderCannonReload(bool Start)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeShoulderCannonReload");

	UInterface_IO_Operative_ShoulderCannon_C_OperativeShoulderCannonReload_Params params;
	params.Start = Start;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeRemoveShoulderCannon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Fast                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInterface_IO_Operative_ShoulderCannon_C::OperativeRemoveShoulderCannon(bool Fast)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeRemoveShoulderCannon");

	UInterface_IO_Operative_ShoulderCannon_C_OperativeRemoveShoulderCannon_Params params;
	params.Fast = Fast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeShoulderCannonDigistructFinished
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DigistructIn                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_IO_Operative_ShoulderCannon_C::OperativeShoulderCannonDigistructFinished(bool DigistructIn, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeShoulderCannonDigistructFinished");

	UInterface_IO_Operative_ShoulderCannon_C_OperativeShoulderCannonDigistructFinished_Params params;
	params.DigistructIn = DigistructIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeFireShoulderCannon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_IO_Operative_ShoulderCannon_C::OperativeFireShoulderCannon(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeFireShoulderCannon");

	UInterface_IO_Operative_ShoulderCannon_C_OperativeFireShoulderCannon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

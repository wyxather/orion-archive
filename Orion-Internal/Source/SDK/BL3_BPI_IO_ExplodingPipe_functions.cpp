// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_IO_ExplodingPipe_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.GetPipeFlowState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasFlow                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_IO_ExplodingPipe_C::GetPipeFlowState(bool* HasFlow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.GetPipeFlowState");

	UBPI_IO_ExplodingPipe_C_GetPipeFlowState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasFlow != nullptr)
		*HasFlow = params.HasFlow;
}


// Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.GetPipeDestroyedState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Destroyed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_IO_ExplodingPipe_C::GetPipeDestroyedState(bool* Destroyed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.GetPipeDestroyedState");

	UBPI_IO_ExplodingPipe_C_GetPipeDestroyedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destroyed != nullptr)
		*Destroyed = params.Destroyed;
}


// Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.SetPipeState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_IO_ExplodingPipe_DestroyedState> PipeState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_IO_ExplodingPipe_C::SetPipeState(TEnumAsByte<Enum_IO_ExplodingPipe_DestroyedState> PipeState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.SetPipeState");

	UBPI_IO_ExplodingPipe_C_SetPipeState_Params params;
	params.PipeState = PipeState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.SetPipeFlowState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasFlow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_IO_ExplodingPipe_C::SetPipeFlowState(bool HasFlow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.SetPipeFlowState");

	UBPI_IO_ExplodingPipe_C_SetPipeFlowState_Params params;
	params.HasFlow = HasFlow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.DestroyPipe
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_IO_ExplodingPipe_C::DestroyPipe()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_IO_ExplodingPipe.BPI_IO_ExplodingPipe_C.DestroyPipe");

	UBPI_IO_ExplodingPipe_C_DestroyPipe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_ElectricalSystem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IO_ElectricalSystem.IO_ElectricalSystem_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AIO_ElectricalSystem_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricalSystem.IO_ElectricalSystem_C.UserConstructionScript");

	AIO_ElectricalSystem_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricalSystem.IO_ElectricalSystem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AIO_ElectricalSystem_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricalSystem.IO_ElectricalSystem_C.ReceiveBeginPlay");

	AIO_ElectricalSystem_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricalSystem.IO_ElectricalSystem_C.ExecuteUbergraph_IO_ElectricalSystem
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_ElectricalSystem_C::ExecuteUbergraph_IO_ElectricalSystem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricalSystem.IO_ElectricalSystem_C.ExecuteUbergraph_IO_ElectricalSystem");

	AIO_ElectricalSystem_C_ExecuteUbergraph_IO_ElectricalSystem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricalSystem.IO_ElectricalSystem_C.OnElectrifiedStop__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AIO_ElectricalSystem_C::OnElectrifiedStop__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricalSystem.IO_ElectricalSystem_C.OnElectrifiedStop__DelegateSignature");

	AIO_ElectricalSystem_C_OnElectrifiedStop__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricalSystem.IO_ElectricalSystem_C.OnElectrifiedStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AIO_ElectricalSystem_C::OnElectrifiedStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricalSystem.IO_ElectricalSystem_C.OnElectrifiedStart__DelegateSignature");

	AIO_ElectricalSystem_C_OnElectrifiedStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

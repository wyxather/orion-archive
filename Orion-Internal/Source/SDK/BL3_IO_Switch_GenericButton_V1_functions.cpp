// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_Switch_GenericButton_V1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IO_Switch_GenericButton_V1.IO_Switch_GenericButton_V1_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AIO_Switch_GenericButton_V1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Switch_GenericButton_V1.IO_Switch_GenericButton_V1_C.UserConstructionScript");

	AIO_Switch_GenericButton_V1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Switch_GenericButton_V1.IO_Switch_GenericButton_V1_C.Animation__FinishedFunc
// (BlueprintEvent)

void AIO_Switch_GenericButton_V1_C::Animation__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Switch_GenericButton_V1.IO_Switch_GenericButton_V1_C.Animation__FinishedFunc");

	AIO_Switch_GenericButton_V1_C_Animation__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Switch_GenericButton_V1.IO_Switch_GenericButton_V1_C.Animation__UpdateFunc
// (BlueprintEvent)

void AIO_Switch_GenericButton_V1_C::Animation__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Switch_GenericButton_V1.IO_Switch_GenericButton_V1_C.Animation__UpdateFunc");

	AIO_Switch_GenericButton_V1_C_Animation__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Switch_GenericButton_V1.IO_Switch_GenericButton_V1_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AIO_Switch_GenericButton_V1_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Switch_GenericButton_V1.IO_Switch_GenericButton_V1_C.Timeline_0__FinishedFunc");

	AIO_Switch_GenericButton_V1_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Switch_GenericButton_V1.IO_Switch_GenericButton_V1_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AIO_Switch_GenericButton_V1_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Switch_GenericButton_V1.IO_Switch_GenericButton_V1_C.Timeline_0__UpdateFunc");

	AIO_Switch_GenericButton_V1_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Switch_GenericButton_V1.IO_Switch_GenericButton_V1_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void AIO_Switch_GenericButton_V1_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Switch_GenericButton_V1.IO_Switch_GenericButton_V1_C.Timeline_1__FinishedFunc");

	AIO_Switch_GenericButton_V1_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Switch_GenericButton_V1.IO_Switch_GenericButton_V1_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void AIO_Switch_GenericButton_V1_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Switch_GenericButton_V1.IO_Switch_GenericButton_V1_C.Timeline_1__UpdateFunc");

	AIO_Switch_GenericButton_V1_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Switch_GenericButton_V1.IO_Switch_GenericButton_V1_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AIO_Switch_GenericButton_V1_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Switch_GenericButton_V1.IO_Switch_GenericButton_V1_C.ReceiveBeginPlay");

	AIO_Switch_GenericButton_V1_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Switch_GenericButton_V1.IO_Switch_GenericButton_V1_C.PlaySwitchMovement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_Switch_ReasonForMoving>* Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Switch_GenericButton_V1_C::PlaySwitchMovement(TEnumAsByte<Enum_Switch_ReasonForMoving>* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Switch_GenericButton_V1.IO_Switch_GenericButton_V1_C.PlaySwitchMovement");

	AIO_Switch_GenericButton_V1_C_PlaySwitchMovement_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Switch_GenericButton_V1.IO_Switch_GenericButton_V1_C.FailedUse
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AIO_Switch_GenericButton_V1_C::FailedUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Switch_GenericButton_V1.IO_Switch_GenericButton_V1_C.FailedUse");

	AIO_Switch_GenericButton_V1_C_FailedUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_Switch_GenericButton_V1.IO_Switch_GenericButton_V1_C.ExecuteUbergraph_IO_Switch_GenericButton_V1
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_Switch_GenericButton_V1_C::ExecuteUbergraph_IO_Switch_GenericButton_V1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_Switch_GenericButton_V1.IO_Switch_GenericButton_V1_C.ExecuteUbergraph_IO_Switch_GenericButton_V1");

	AIO_Switch_GenericButton_V1_C_ExecuteUbergraph_IO_Switch_GenericButton_V1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

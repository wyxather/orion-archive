// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_EridianWriting_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IO_EridianWriting.IO_EridianWriting_C.ChallengeCompleted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChallengesComponent*    ChallengeComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UClass*                  ChallengeClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_EridianWriting_C::ChallengeCompleted(class UChallengesComponent* ChallengeComponent, class UClass* ChallengeClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_EridianWriting.IO_EridianWriting_C.ChallengeCompleted");

	AIO_EridianWriting_C_ChallengeCompleted_Params params;
	params.ChallengeComponent = ChallengeComponent;
	params.ChallengeClass = ChallengeClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_EridianWriting.IO_EridianWriting_C.EvaluateState
// (Public, BlueprintCallable, BlueprintEvent)

void AIO_EridianWriting_C::EvaluateState()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_EridianWriting.IO_EridianWriting_C.EvaluateState");

	AIO_EridianWriting_C_EvaluateState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_EridianWriting.IO_EridianWriting_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AIO_EridianWriting_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_EridianWriting.IO_EridianWriting_C.UserConstructionScript");

	AIO_EridianWriting_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_EridianWriting.IO_EridianWriting_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AIO_EridianWriting_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_EridianWriting.IO_EridianWriting_C.Timeline_0__FinishedFunc");

	AIO_EridianWriting_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_EridianWriting.IO_EridianWriting_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AIO_EridianWriting_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_EridianWriting.IO_EridianWriting_C.Timeline_0__UpdateFunc");

	AIO_EridianWriting_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_EridianWriting.IO_EridianWriting_C.OnAnimEnd_06EA3FDA411DCB031E1BBF9C1F25FFA5
// (BlueprintCallable, BlueprintEvent)

void AIO_EridianWriting_C::OnAnimEnd_06EA3FDA411DCB031E1BBF9C1F25FFA5()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_EridianWriting.IO_EridianWriting_C.OnAnimEnd_06EA3FDA411DCB031E1BBF9C1F25FFA5");

	AIO_EridianWriting_C_OnAnimEnd_06EA3FDA411DCB031E1BBF9C1F25FFA5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_EridianWriting.IO_EridianWriting_C.OnEnd_06EA3FDA411DCB031E1BBF9C1F25FFA5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGbxActionEndState             EndState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_EridianWriting_C::OnEnd_06EA3FDA411DCB031E1BBF9C1F25FFA5(EGbxActionEndState EndState, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_EridianWriting.IO_EridianWriting_C.OnEnd_06EA3FDA411DCB031E1BBF9C1F25FFA5");

	AIO_EridianWriting_C_OnEnd_06EA3FDA411DCB031E1BBF9C1F25FFA5_Params params;
	params.EndState = EndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_EridianWriting.IO_EridianWriting_C.__UserState_EridianWritingState_1
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_EridianWriting_C::__UserState_EridianWritingState_1(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_EridianWriting.IO_EridianWriting_C.__UserState_EridianWritingState_1");

	AIO_EridianWriting_C___UserState_EridianWritingState_1_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_EridianWriting.IO_EridianWriting_C.__UserState_EridianWritingState_2
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_EridianWriting_C::__UserState_EridianWritingState_2(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_EridianWriting.IO_EridianWriting_C.__UserState_EridianWritingState_2");

	AIO_EridianWriting_C___UserState_EridianWritingState_2_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_EridianWriting.IO_EridianWriting_C.__UserState_EridianWritingState_3
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_EridianWriting_C::__UserState_EridianWritingState_3(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_EridianWriting.IO_EridianWriting_C.__UserState_EridianWritingState_3");

	AIO_EridianWriting_C___UserState_EridianWritingState_3_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_EridianWriting.IO_EridianWriting_C.BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_IO_EridianWriting_UNIX1551725399
// (BlueprintEvent)
// Parameters:
// class AController*             UserController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     UsedComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AIO_EridianWriting_C::BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_IO_EridianWriting_UNIX1551725399(class AController* UserController, class UPrimitiveComponent* UsedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_EridianWriting.IO_EridianWriting_C.BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_IO_EridianWriting_UNIX1551725399");

	AIO_EridianWriting_C_BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_IO_EridianWriting_UNIX1551725399_Params params;
	params.UserController = UserController;
	params.UsedComponent = UsedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_EridianWriting.IO_EridianWriting_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AIO_EridianWriting_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_EridianWriting.IO_EridianWriting_C.ReceiveBeginPlay");

	AIO_EridianWriting_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_EridianWriting.IO_EridianWriting_C.EchoLogFinished
// (BlueprintCallable, BlueprintEvent)

void AIO_EridianWriting_C::EchoLogFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_EridianWriting.IO_EridianWriting_C.EchoLogFinished");

	AIO_EridianWriting_C_EchoLogFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_EridianWriting.IO_EridianWriting_C.BndEvt__Usable1_K2Node_ComponentBoundEvent_3_UsableUsedOnChannelSignature__DelegateSignature_IO_EridianWriting
// (BlueprintEvent)
// Parameters:
// class AController*             UserController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     UsedComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AIO_EridianWriting_C::BndEvt__Usable1_K2Node_ComponentBoundEvent_3_UsableUsedOnChannelSignature__DelegateSignature_IO_EridianWriting(class AController* UserController, class UPrimitiveComponent* UsedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_EridianWriting.IO_EridianWriting_C.BndEvt__Usable1_K2Node_ComponentBoundEvent_3_UsableUsedOnChannelSignature__DelegateSignature_IO_EridianWriting");

	AIO_EridianWriting_C_BndEvt__Usable1_K2Node_ComponentBoundEvent_3_UsableUsedOnChannelSignature__DelegateSignature_IO_EridianWriting_Params params;
	params.UserController = UserController;
	params.UsedComponent = UsedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_EridianWriting.IO_EridianWriting_C.ExecuteUbergraph_IO_EridianWriting
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_EridianWriting_C::ExecuteUbergraph_IO_EridianWriting(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_EridianWriting.IO_EridianWriting_C.ExecuteUbergraph_IO_EridianWriting");

	AIO_EridianWriting_C_ExecuteUbergraph_IO_EridianWriting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_EridianWriting.IO_EridianWriting_C.WritingRevealed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AIO_EridianWriting_C::WritingRevealed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_EridianWriting.IO_EridianWriting_C.WritingRevealed__DelegateSignature");

	AIO_EridianWriting_C_WritingRevealed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

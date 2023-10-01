// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Ellie_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_Ellie.BPChar_Ellie_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Ellie_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Ellie.BPChar_Ellie_C.UserConstructionScript");

	ABPChar_Ellie_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Ellie.BPChar_Ellie_C.SetScaleOverTimeEnter__FinishedFunc
// (BlueprintEvent)

void ABPChar_Ellie_C::SetScaleOverTimeEnter__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Ellie.BPChar_Ellie_C.SetScaleOverTimeEnter__FinishedFunc");

	ABPChar_Ellie_C_SetScaleOverTimeEnter__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Ellie.BPChar_Ellie_C.SetScaleOverTimeEnter__UpdateFunc
// (BlueprintEvent)

void ABPChar_Ellie_C::SetScaleOverTimeEnter__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Ellie.BPChar_Ellie_C.SetScaleOverTimeEnter__UpdateFunc");

	ABPChar_Ellie_C_SetScaleOverTimeEnter__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Ellie.BPChar_Ellie_C.SetScaleOverTimeExit__FinishedFunc
// (BlueprintEvent)

void ABPChar_Ellie_C::SetScaleOverTimeExit__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Ellie.BPChar_Ellie_C.SetScaleOverTimeExit__FinishedFunc");

	ABPChar_Ellie_C_SetScaleOverTimeExit__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Ellie.BPChar_Ellie_C.SetScaleOverTimeExit__UpdateFunc
// (BlueprintEvent)

void ABPChar_Ellie_C::SetScaleOverTimeExit__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Ellie.BPChar_Ellie_C.SetScaleOverTimeExit__UpdateFunc");

	ABPChar_Ellie_C_SetScaleOverTimeExit__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Ellie.BPChar_Ellie_C.BndEvt__Usable_K2Node_ComponentBoundEvent_24_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Typhon_UNIX1509007700
// (BlueprintEvent)
// Parameters:
// class AController**            UserController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    UsedComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABPChar_Ellie_C::BndEvt__Usable_K2Node_ComponentBoundEvent_24_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Typhon_UNIX1509007700(class AController** UserController, class UPrimitiveComponent** UsedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Ellie.BPChar_Ellie_C.BndEvt__Usable_K2Node_ComponentBoundEvent_24_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Typhon_UNIX1509007700");

	ABPChar_Ellie_C_BndEvt__Usable_K2Node_ComponentBoundEvent_24_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Typhon_UNIX1509007700_Params params;
	params.UserController = UserController;
	params.UsedComponent = UsedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Ellie.BPChar_Ellie_C.OnEnterVehicle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPawnAttachSlotComponent* PawnAttachSlotComponent        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABPChar_Ellie_C::OnEnterVehicle(class UPawnAttachSlotComponent* PawnAttachSlotComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Ellie.BPChar_Ellie_C.OnEnterVehicle");

	ABPChar_Ellie_C_OnEnterVehicle_Params params;
	params.PawnAttachSlotComponent = PawnAttachSlotComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Ellie.BPChar_Ellie_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPChar_Ellie_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Ellie.BPChar_Ellie_C.ReceiveBeginPlay");

	ABPChar_Ellie_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Ellie.BPChar_Ellie_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPawnAttachSlotComponent* PawnAttachSlotComponent        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABPChar_Ellie_C::CustomEvent(class UPawnAttachSlotComponent* PawnAttachSlotComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Ellie.BPChar_Ellie_C.CustomEvent");

	ABPChar_Ellie_C_CustomEvent_Params params;
	params.PawnAttachSlotComponent = PawnAttachSlotComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Ellie.BPChar_Ellie_C.ExecuteUbergraph_BPChar_Ellie
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Ellie_C::ExecuteUbergraph_BPChar_Ellie(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Ellie.BPChar_Ellie_C.ExecuteUbergraph_BPChar_Ellie");

	ABPChar_Ellie_C_ExecuteUbergraph_BPChar_Ellie_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_InspectableAbstract_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_InspectableAbstract.BP_InspectableAbstract_C.Get Inspector
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APlayerController*       Player_Controller              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InspectableAbstract_C::Get_Inspector(class APlayerController** Player_Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InspectableAbstract.BP_InspectableAbstract_C.Get Inspector");

	ABP_InspectableAbstract_C_Get_Inspector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player_Controller != nullptr)
		*Player_Controller = params.Player_Controller;
}


// Function BP_InspectableAbstract.BP_InspectableAbstract_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_InteractiveDelegate__DelegateSignature
// 00007FF6F8B35350
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FName*                  StateName                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InspectableAbstract_C::BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_InteractiveDelegate__DelegateSignature(struct FName* StateName, class AActor** Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InspectableAbstract.BP_InspectableAbstract_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_InteractiveDelegate__DelegateSignature");

	ABP_InspectableAbstract_C_BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_InteractiveDelegate__DelegateSignature_Params params;
	params.StateName = StateName;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InspectableAbstract.BP_InspectableAbstract_C.Everyone Start Inspect
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController**      Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InspectableAbstract_C::Everyone_Start_Inspect(class APlayerController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InspectableAbstract.BP_InspectableAbstract_C.Everyone Start Inspect");

	ABP_InspectableAbstract_C_Everyone_Start_Inspect_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InspectableAbstract.BP_InspectableAbstract_C.Everyone End Inspect
// 00007FF6F8B35350
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController**      Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InspectableAbstract_C::Everyone_End_Inspect(class APlayerController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InspectableAbstract.BP_InspectableAbstract_C.Everyone End Inspect");

	ABP_InspectableAbstract_C_Everyone_End_Inspect_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InspectableAbstract.BP_InspectableAbstract_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ABP_InspectableAbstract_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InspectableAbstract.BP_InspectableAbstract_C.ReceiveBeginPlay");

	ABP_InspectableAbstract_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InspectableAbstract.BP_InspectableAbstract_C.ExecuteUbergraph_BP_InspectableAbstract
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InspectableAbstract_C::ExecuteUbergraph_BP_InspectableAbstract(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InspectableAbstract.BP_InspectableAbstract_C.ExecuteUbergraph_BP_InspectableAbstract");

	ABP_InspectableAbstract_C_ExecuteUbergraph_BP_InspectableAbstract_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InspectableAbstract.BP_InspectableAbstract_C.InspectEnd__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_InspectableAbstract_C::InspectEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InspectableAbstract.BP_InspectableAbstract_C.InspectEnd__DelegateSignature");

	ABP_InspectableAbstract_C_InspectEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InspectableAbstract.BP_InspectableAbstract_C.InspectStart__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_InspectableAbstract_C::InspectStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InspectableAbstract.BP_InspectableAbstract_C.InspectStart__DelegateSignature");

	ABP_InspectableAbstract_C_InspectStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

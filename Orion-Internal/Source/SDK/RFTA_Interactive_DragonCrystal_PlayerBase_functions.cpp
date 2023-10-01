// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Interactive_DragonCrystal_PlayerBase_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Interactive_DragonCrystal_PlayerBase.Interactive_DragonCrystal_PlayerBase_C.IsIntroCrystal
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AInteractive_DragonCrystal_PlayerBase_C::IsIntroCrystal(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DragonCrystal_PlayerBase.Interactive_DragonCrystal_PlayerBase_C.IsIntroCrystal");

	AInteractive_DragonCrystal_PlayerBase_C_IsIntroCrystal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Interactive_DragonCrystal_PlayerBase.Interactive_DragonCrystal_PlayerBase_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void AInteractive_DragonCrystal_PlayerBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DragonCrystal_PlayerBase.Interactive_DragonCrystal_PlayerBase_C.ReceiveBeginPlay");

	AInteractive_DragonCrystal_PlayerBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_DragonCrystal_PlayerBase.Interactive_DragonCrystal_PlayerBase_C.ActivationCameraFinished
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AInteractive_DragonCrystal_PlayerBase_C::ActivationCameraFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DragonCrystal_PlayerBase.Interactive_DragonCrystal_PlayerBase_C.ActivationCameraFinished");

	AInteractive_DragonCrystal_PlayerBase_C_ActivationCameraFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_DragonCrystal_PlayerBase.Interactive_DragonCrystal_PlayerBase_C.TriggerFade
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AInteractive_DragonCrystal_PlayerBase_C::TriggerFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DragonCrystal_PlayerBase.Interactive_DragonCrystal_PlayerBase_C.TriggerFade");

	AInteractive_DragonCrystal_PlayerBase_C_TriggerFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_DragonCrystal_PlayerBase.Interactive_DragonCrystal_PlayerBase_C.ColorizeCrystal
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AInteractive_DragonCrystal_PlayerBase_C::ColorizeCrystal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DragonCrystal_PlayerBase.Interactive_DragonCrystal_PlayerBase_C.ColorizeCrystal");

	AInteractive_DragonCrystal_PlayerBase_C_ColorizeCrystal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_DragonCrystal_PlayerBase.Interactive_DragonCrystal_PlayerBase_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_StateChangeDelegate__DelegateSignature
// 00007FF6F8B35350
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FName*                  StateName                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName*                  PreviousStateName              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_DragonCrystal_PlayerBase_C::BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_StateChangeDelegate__DelegateSignature(struct FName* StateName, struct FName* PreviousStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DragonCrystal_PlayerBase.Interactive_DragonCrystal_PlayerBase_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_StateChangeDelegate__DelegateSignature");

	AInteractive_DragonCrystal_PlayerBase_C_BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_StateChangeDelegate__DelegateSignature_Params params;
	params.StateName = StateName;
	params.PreviousStateName = PreviousStateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_DragonCrystal_PlayerBase.Interactive_DragonCrystal_PlayerBase_C.ExecuteUbergraph_Interactive_DragonCrystal_PlayerBase
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_DragonCrystal_PlayerBase_C::ExecuteUbergraph_Interactive_DragonCrystal_PlayerBase(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_DragonCrystal_PlayerBase.Interactive_DragonCrystal_PlayerBase_C.ExecuteUbergraph_Interactive_DragonCrystal_PlayerBase");

	AInteractive_DragonCrystal_PlayerBase_C_ExecuteUbergraph_Interactive_DragonCrystal_PlayerBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_Tutorial_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dialog_Tutorial.Dialog_Tutorial_C.Init
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Tutorial                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 ContextActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          Left                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADialog_Tutorial_C::Init(class UClass** Tutorial, class AActor** ContextActor, bool* Left)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Tutorial.Dialog_Tutorial_C.Init");

	ADialog_Tutorial_C_Init_Params params;
	params.Tutorial = Tutorial;
	params.ContextActor = ContextActor;
	params.Left = Left;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_Tutorial.Dialog_Tutorial_C.OnEndDialog
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ADialog_Tutorial_C::OnEndDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Tutorial.Dialog_Tutorial_C.OnEndDialog");

	ADialog_Tutorial_C_OnEndDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_Tutorial.Dialog_Tutorial_C.ExecuteUbergraph_Dialog_Tutorial
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADialog_Tutorial_C::ExecuteUbergraph_Dialog_Tutorial(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Tutorial.Dialog_Tutorial_C.ExecuteUbergraph_Dialog_Tutorial");

	ADialog_Tutorial_C_ExecuteUbergraph_Dialog_Tutorial_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

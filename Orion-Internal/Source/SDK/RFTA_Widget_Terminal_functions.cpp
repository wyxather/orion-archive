// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Terminal_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Terminal.Widget_Terminal_C.SetFocusParentForChildren
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                FocusParent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Terminal_C::SetFocusParentForChildren(class UWidget** FocusParent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Terminal.Widget_Terminal_C.SetFocusParentForChildren");

	UWidget_Terminal_C_SetFocusParentForChildren_Params params;
	params.FocusParent = FocusParent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Terminal.Widget_Terminal_C.Get Screen
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_Screen_C*        Screen                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Terminal_C::Get_Screen(class UWidget_Screen_C** Screen)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Terminal.Widget_Terminal_C.Get Screen");

	UWidget_Terminal_C_Get_Screen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Screen != nullptr)
		*Screen = params.Screen;
}


// Function Widget_Terminal.Widget_Terminal_C.Initialize Terminal
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDialogComponent**       DialogComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Computer_C**         Computer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget**                FocusParent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Terminal_C::Initialize_Terminal(class UDialogComponent** DialogComponent, class ABP_Computer_C** Computer, class UWidget** FocusParent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Terminal.Widget_Terminal_C.Initialize Terminal");

	UWidget_Terminal_C_Initialize_Terminal_Params params;
	params.DialogComponent = DialogComponent;
	params.Computer = Computer;
	params.FocusParent = FocusParent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Terminal.Widget_Terminal_C.Set Stage
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WidgetName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Terminal_C::Set_Stage(struct FName* WidgetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Terminal.Widget_Terminal_C.Set Stage");

	UWidget_Terminal_C_Set_Stage_Params params;
	params.WidgetName = WidgetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Terminal.Widget_Terminal_C.OnDialogBegin
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Terminal_C::OnDialogBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Terminal.Widget_Terminal_C.OnDialogBegin");

	UWidget_Terminal_C_OnDialogBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Terminal.Widget_Terminal_C.OnDialogSetStage
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Terminal_C::OnDialogSetStage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Terminal.Widget_Terminal_C.OnDialogSetStage");

	UWidget_Terminal_C_OnDialogSetStage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Terminal.Widget_Terminal_C.ExecuteUbergraph_Widget_Terminal
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Terminal_C::ExecuteUbergraph_Widget_Terminal(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Terminal.Widget_Terminal_C.ExecuteUbergraph_Widget_Terminal");

	UWidget_Terminal_C_ExecuteUbergraph_Widget_Terminal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

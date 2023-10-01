// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Screen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Screen.Widget_Screen_C.OptionsUpdated
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Screen_C::OptionsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen.Widget_Screen_C.OptionsUpdated");

	UWidget_Screen_C_OptionsUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Screen.Widget_Screen_C.InitScreen
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Screen_C::InitScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen.Widget_Screen_C.InitScreen");

	UWidget_Screen_C_InitScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Screen.Widget_Screen_C.Get Context Color Parent 
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWidget_Screen_C::Get_Context_Color_Parent_()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen.Widget_Screen_C.Get Context Color Parent ");

	UWidget_Screen_C_Get_Context_Color_Parent__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Screen.Widget_Screen_C.Set Button Style
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_Screen_Option_C** Option_Button                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Screen_C::Set_Button_Style(class UWidget_Screen_Option_C** Option_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen.Widget_Screen_C.Set Button Style");

	UWidget_Screen_C_Set_Button_Style_Params params;
	params.Option_Button = Option_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Screen.Widget_Screen_C.Get Inspector
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APlayerController*       Player_Controller              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Screen_C::Get_Inspector(class APlayerController** Player_Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen.Widget_Screen_C.Get Inspector");

	UWidget_Screen_C_Get_Inspector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player_Controller != nullptr)
		*Player_Controller = params.Player_Controller;
}


// Function Widget_Screen.Widget_Screen_C.RefreshFocus
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Screen_C::RefreshFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen.Widget_Screen_C.RefreshFocus");

	UWidget_Screen_C_RefreshFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Screen.Widget_Screen_C.GetAttributeValue
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName*                  Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Value                          (Parm, OutParm)

void UWidget_Screen_C::GetAttributeValue(struct FName* Key, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen.Widget_Screen_C.GetAttributeValue");

	UWidget_Screen_C_GetAttributeValue_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function Widget_Screen.Widget_Screen_C.InitScreenInternal
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDialogComponent**       DialogueComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget_Terminal_C**     Terminal                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget**                FocusParent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Screen_C::InitScreenInternal(class UDialogComponent** DialogueComponent, class UWidget_Terminal_C** Terminal, class UWidget** FocusParent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen.Widget_Screen_C.InitScreenInternal");

	UWidget_Screen_C_InitScreenInternal_Params params;
	params.DialogueComponent = DialogueComponent;
	params.Terminal = Terminal;
	params.FocusParent = FocusParent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Screen.Widget_Screen_C.Clear Options
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Screen_C::Clear_Options()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen.Widget_Screen_C.Clear Options");

	UWidget_Screen_C_Clear_Options_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Screen.Widget_Screen_C.Add Option
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_Screen_Option_C** Option                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Screen_C::Add_Option(class UWidget_Screen_Option_C** Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen.Widget_Screen_C.Add Option");

	UWidget_Screen_C_Add_Option_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Screen.Widget_Screen_C.Update Options
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Screen_C::Update_Options()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen.Widget_Screen_C.Update Options");

	UWidget_Screen_C_Update_Options_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Screen.Widget_Screen_C.OnOptionsUpdate
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Screen_C::OnOptionsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen.Widget_Screen_C.OnOptionsUpdate");

	UWidget_Screen_C_OnOptionsUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Screen.Widget_Screen_C.OnDialogUpdate
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Screen_C::OnDialogUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen.Widget_Screen_C.OnDialogUpdate");

	UWidget_Screen_C_OnDialogUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Screen.Widget_Screen_C.ExecuteUbergraph_Widget_Screen
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Screen_C::ExecuteUbergraph_Widget_Screen(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen.Widget_Screen_C.ExecuteUbergraph_Widget_Screen");

	UWidget_Screen_C_ExecuteUbergraph_Widget_Screen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

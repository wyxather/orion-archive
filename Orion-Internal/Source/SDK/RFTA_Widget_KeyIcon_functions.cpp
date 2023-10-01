// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_KeyIcon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_KeyIcon.Widget_KeyIcon_C.GetInputActionName
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InputActionName                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UWidget_KeyIcon_C::GetInputActionName(class FString* InputActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeyIcon.Widget_KeyIcon_C.GetInputActionName");

	UWidget_KeyIcon_C_GetInputActionName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputActionName != nullptr)
		*InputActionName = params.InputActionName;
}


// Function Widget_KeyIcon.Widget_KeyIcon_C.ModifyKeyName
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 KeyName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                  Result                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UWidget_KeyIcon_C::ModifyKeyName(class FString* KeyName, class FString* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeyIcon.Widget_KeyIcon_C.ModifyKeyName");

	UWidget_KeyIcon_C_ModifyKeyName_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Widget_KeyIcon.Widget_KeyIcon_C.SetActionText
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 ActionKey                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWidget_KeyIcon_C::SetActionText(class FString* ActionKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeyIcon.Widget_KeyIcon_C.SetActionText");

	UWidget_KeyIcon_C_SetActionText_Params params;
	params.ActionKey = ActionKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KeyIcon.Widget_KeyIcon_C.ExecuteUbergraph_Widget_KeyIcon
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_KeyIcon_C::ExecuteUbergraph_Widget_KeyIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeyIcon.Widget_KeyIcon_C.ExecuteUbergraph_Widget_KeyIcon");

	UWidget_KeyIcon_C_ExecuteUbergraph_Widget_KeyIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

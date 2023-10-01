// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Screen_Option_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Screen_Option.Widget_Screen_Option_C.On Option Selected
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Screen_Option_C::On_Option_Selected()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen_Option.Widget_Screen_Option_C.On Option Selected");

	UWidget_Screen_Option_C_On_Option_Selected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Screen_Option.Widget_Screen_Option_C.Set Option Value
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_Screen_C**       Screen                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDialogOption*          Option                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_Screen_Option_C::Set_Option_Value(class UWidget_Screen_C** Screen, struct FDialogOption* Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen_Option.Widget_Screen_Option_C.Set Option Value");

	UWidget_Screen_Option_C_Set_Option_Value_Params params;
	params.Screen = Screen;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

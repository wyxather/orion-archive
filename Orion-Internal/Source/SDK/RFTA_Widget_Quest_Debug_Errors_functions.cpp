// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Quest_Debug_Errors_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Quest_Debug_Errors.Widget_Quest_Debug_Errors_C.SetComponent
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestComponent**        QuestComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Quest_Debug_Errors_C::SetComponent(class UQuestComponent** QuestComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Quest_Debug_Errors.Widget_Quest_Debug_Errors_C.SetComponent");

	UWidget_Quest_Debug_Errors_C_SetComponent_Params params;
	params.QuestComponent = QuestComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Quest_Debug_Errors.Widget_Quest_Debug_Errors_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Quest_Debug_Errors_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Quest_Debug_Errors.Widget_Quest_Debug_Errors_C.Construct");

	UWidget_Quest_Debug_Errors_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Quest_Debug_Errors.Widget_Quest_Debug_Errors_C.ExecuteUbergraph_Widget_Quest_Debug_Errors
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Quest_Debug_Errors_C::ExecuteUbergraph_Widget_Quest_Debug_Errors(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Quest_Debug_Errors.Widget_Quest_Debug_Errors_C.ExecuteUbergraph_Widget_Quest_Debug_Errors");

	UWidget_Quest_Debug_Errors_C_ExecuteUbergraph_Widget_Quest_Debug_Errors_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

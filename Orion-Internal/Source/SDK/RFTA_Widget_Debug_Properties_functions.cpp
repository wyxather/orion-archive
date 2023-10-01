// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Debug_Properties_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Debug_Properties.Widget_Debug_Properties_C.SetComponent
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestComponent**        QuestComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Debug_Properties_C::SetComponent(class UQuestComponent** QuestComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Debug_Properties.Widget_Debug_Properties_C.SetComponent");

	UWidget_Debug_Properties_C_SetComponent_Params params;
	params.QuestComponent = QuestComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Debug_Properties.Widget_Debug_Properties_C.ClearProperties
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Debug_Properties_C::ClearProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Debug_Properties.Widget_Debug_Properties_C.ClearProperties");

	UWidget_Debug_Properties_C_ClearProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Debug_Properties.Widget_Debug_Properties_C.AddProperty
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_Debug_Properties_C::AddProperty(struct FText* Name, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Debug_Properties.Widget_Debug_Properties_C.AddProperty");

	UWidget_Debug_Properties_C_AddProperty_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Debug_Properties.Widget_Debug_Properties_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Debug_Properties_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Debug_Properties.Widget_Debug_Properties_C.Construct");

	UWidget_Debug_Properties_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Debug_Properties.Widget_Debug_Properties_C.ExecuteUbergraph_Widget_Debug_Properties
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Debug_Properties_C::ExecuteUbergraph_Widget_Debug_Properties(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Debug_Properties.Widget_Debug_Properties_C.ExecuteUbergraph_Widget_Debug_Properties");

	UWidget_Debug_Properties_C_ExecuteUbergraph_Widget_Debug_Properties_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Archetype_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Archetype.Widget_Archetype_C.CheckHasAnyFocus
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HasAnyFocus                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_Archetype_C::CheckHasAnyFocus(bool* HasAnyFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Archetype.Widget_Archetype_C.CheckHasAnyFocus");

	UWidget_Archetype_C_CheckHasAnyFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasAnyFocus != nullptr)
		*HasAnyFocus = params.HasAnyFocus;
}


// Function Widget_Archetype.Widget_Archetype_C.InitArchetypeLabels
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 HunterArchetypeRef             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass**                 CultistArchetypeRef            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass**                 ScrapperArchetypeRef           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Archetype_C::InitArchetypeLabels(class UClass** HunterArchetypeRef, class UClass** CultistArchetypeRef, class UClass** ScrapperArchetypeRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Archetype.Widget_Archetype_C.InitArchetypeLabels");

	UWidget_Archetype_C_InitArchetypeLabels_Params params;
	params.HunterArchetypeRef = HunterArchetypeRef;
	params.CultistArchetypeRef = CultistArchetypeRef;
	params.ScrapperArchetypeRef = ScrapperArchetypeRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Archetype.Widget_Archetype_C.Pin_Opacity
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UWidget_Archetype_C::Pin_Opacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Archetype.Widget_Archetype_C.Pin_Opacity");

	UWidget_Archetype_C_Pin_Opacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Archetype.Widget_Archetype_C.InitFocus
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_ButtonEx_C*      ExitMenuButton                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFocusWidget**           ParentFocusWidget              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Archetype_C::InitFocus(class UFocusWidget** ParentFocusWidget, class UWidget_ButtonEx_C** ExitMenuButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Archetype.Widget_Archetype_C.InitFocus");

	UWidget_Archetype_C_InitFocus_Params params;
	params.ParentFocusWidget = ParentFocusWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExitMenuButton != nullptr)
		*ExitMenuButton = params.ExitMenuButton;
}


// Function Widget_Archetype.Widget_Archetype_C.SetArchetypeBP
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Archetype                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Archetype_C::SetArchetypeBP(class UClass** Archetype)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Archetype.Widget_Archetype_C.SetArchetypeBP");

	UWidget_Archetype_C_SetArchetypeBP_Params params;
	params.Archetype = Archetype;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Archetype.Widget_Archetype_C.SetArchetype
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URemnantArchetype**      Archetype                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Archetype_C::SetArchetype(class URemnantArchetype** Archetype)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Archetype.Widget_Archetype_C.SetArchetype");

	UWidget_Archetype_C_SetArchetype_Params params;
	params.Archetype = Archetype;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Archetype.Widget_Archetype_C.Get_Description_Text_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_Archetype_C::Get_Description_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Archetype.Widget_Archetype_C.Get_Description_Text_1");

	UWidget_Archetype_C_Get_Description_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Archetype.Widget_Archetype_C.Get_Label_Text_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_Archetype_C::Get_Label_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Archetype.Widget_Archetype_C.Get_Label_Text_1");

	UWidget_Archetype_C_Get_Label_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Archetype.Widget_Archetype_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Archetype_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Archetype.Widget_Archetype_C.Construct");

	UWidget_Archetype_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Archetype.Widget_Archetype_C.BndEvt__HunterButton_K2Node_ComponentBoundEvent_334_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Archetype_C::BndEvt__HunterButton_K2Node_ComponentBoundEvent_334_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Archetype.Widget_Archetype_C.BndEvt__HunterButton_K2Node_ComponentBoundEvent_334_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Archetype_C_BndEvt__HunterButton_K2Node_ComponentBoundEvent_334_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Archetype.Widget_Archetype_C.BndEvt__CultistButton_K2Node_ComponentBoundEvent_437_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Archetype_C::BndEvt__CultistButton_K2Node_ComponentBoundEvent_437_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Archetype.Widget_Archetype_C.BndEvt__CultistButton_K2Node_ComponentBoundEvent_437_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Archetype_C_BndEvt__CultistButton_K2Node_ComponentBoundEvent_437_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Archetype.Widget_Archetype_C.BndEvt__ScrapperButton_K2Node_ComponentBoundEvent_495_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Archetype_C::BndEvt__ScrapperButton_K2Node_ComponentBoundEvent_495_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Archetype.Widget_Archetype_C.BndEvt__ScrapperButton_K2Node_ComponentBoundEvent_495_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Archetype_C_BndEvt__ScrapperButton_K2Node_ComponentBoundEvent_495_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Archetype.Widget_Archetype_C.OnExitClicked
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Archetype_C::OnExitClicked(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Archetype.Widget_Archetype_C.OnExitClicked");

	UWidget_Archetype_C_OnExitClicked_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Archetype.Widget_Archetype_C.BndEvt__HunterButton_K2Node_ComponentBoundEvent_276_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Archetype_C::BndEvt__HunterButton_K2Node_ComponentBoundEvent_276_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Archetype.Widget_Archetype_C.BndEvt__HunterButton_K2Node_ComponentBoundEvent_276_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Archetype_C_BndEvt__HunterButton_K2Node_ComponentBoundEvent_276_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Archetype.Widget_Archetype_C.BndEvt__CultistButton_K2Node_ComponentBoundEvent_346_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Archetype_C::BndEvt__CultistButton_K2Node_ComponentBoundEvent_346_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Archetype.Widget_Archetype_C.BndEvt__CultistButton_K2Node_ComponentBoundEvent_346_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Archetype_C_BndEvt__CultistButton_K2Node_ComponentBoundEvent_346_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Archetype.Widget_Archetype_C.BndEvt__ScrapperButton_K2Node_ComponentBoundEvent_403_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Archetype_C::BndEvt__ScrapperButton_K2Node_ComponentBoundEvent_403_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Archetype.Widget_Archetype_C.BndEvt__ScrapperButton_K2Node_ComponentBoundEvent_403_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Archetype_C_BndEvt__ScrapperButton_K2Node_ComponentBoundEvent_403_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Archetype.Widget_Archetype_C.BndEvt__ScrapperButton_K2Node_ComponentBoundEvent_216_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Archetype_C::BndEvt__ScrapperButton_K2Node_ComponentBoundEvent_216_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Archetype.Widget_Archetype_C.BndEvt__ScrapperButton_K2Node_ComponentBoundEvent_216_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Archetype_C_BndEvt__ScrapperButton_K2Node_ComponentBoundEvent_216_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Archetype.Widget_Archetype_C.BndEvt__CultistButton_K2Node_ComponentBoundEvent_265_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Archetype_C::BndEvt__CultistButton_K2Node_ComponentBoundEvent_265_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Archetype.Widget_Archetype_C.BndEvt__CultistButton_K2Node_ComponentBoundEvent_265_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Archetype_C_BndEvt__CultistButton_K2Node_ComponentBoundEvent_265_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Archetype.Widget_Archetype_C.BndEvt__HunterButton_K2Node_ComponentBoundEvent_321_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Archetype_C::BndEvt__HunterButton_K2Node_ComponentBoundEvent_321_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Archetype.Widget_Archetype_C.BndEvt__HunterButton_K2Node_ComponentBoundEvent_321_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Archetype_C_BndEvt__HunterButton_K2Node_ComponentBoundEvent_321_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Archetype.Widget_Archetype_C.ExecuteUbergraph_Widget_Archetype
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Archetype_C::ExecuteUbergraph_Widget_Archetype(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Archetype.Widget_Archetype_C.ExecuteUbergraph_Widget_Archetype");

	UWidget_Archetype_C_ExecuteUbergraph_Widget_Archetype_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Archetype.Widget_Archetype_C.SelectArchetype__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URemnantArchetype**      Archetype                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Archetype_C::SelectArchetype__DelegateSignature(class URemnantArchetype** Archetype)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Archetype.Widget_Archetype_C.SelectArchetype__DelegateSignature");

	UWidget_Archetype_C_SelectArchetype__DelegateSignature_Params params;
	params.Archetype = Archetype;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

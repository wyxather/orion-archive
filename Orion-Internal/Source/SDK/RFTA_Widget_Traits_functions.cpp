// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Traits_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Traits.Widget_Traits_C.HasNoTraitManualLevelUp
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWidget_Traits_C::HasNoTraitManualLevelUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Traits.Widget_Traits_C.HasNoTraitManualLevelUp");

	UWidget_Traits_C_HasNoTraitManualLevelUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Traits.Widget_Traits_C.Get_SpendTraitBtn_bIsEnabled_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWidget_Traits_C::Get_SpendTraitBtn_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Traits.Widget_Traits_C.Get_SpendTraitBtn_bIsEnabled_1");

	UWidget_Traits_C_Get_SpendTraitBtn_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Traits.Widget_Traits_C.Get_LegacyExperienceBar_Percent_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWidget_Traits_C::Get_LegacyExperienceBar_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Traits.Widget_Traits_C.Get_LegacyExperienceBar_Percent_1");

	UWidget_Traits_C_Get_LegacyExperienceBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Traits.Widget_Traits_C.Get_TraitPoints_Text_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_Traits_C::Get_TraitPoints_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Traits.Widget_Traits_C.Get_TraitPoints_Text_1");

	UWidget_Traits_C_Get_TraitPoints_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Traits.Widget_Traits_C.Get_LegacyExperience_Text_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_Traits_C::Get_LegacyExperience_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Traits.Widget_Traits_C.Get_LegacyExperience_Text_1");

	UWidget_Traits_C_Get_LegacyExperience_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Traits.Widget_Traits_C.Get_LegacyLevel_Text_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_Traits_C::Get_LegacyLevel_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Traits.Widget_Traits_C.Get_LegacyLevel_Text_1");

	UWidget_Traits_C_Get_LegacyLevel_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Traits.Widget_Traits_C.UpdateTraitInfo
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Traits_C::UpdateTraitInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Traits.Widget_Traits_C.UpdateTraitInfo");

	UWidget_Traits_C_UpdateTraitInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Traits.Widget_Traits_C.BndEvt__Widget_TraitList_K2Node_ComponentBoundEvent_106_OnSelectTrait__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FTraitInfo*             TraitInfo                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UWidget_Trait_C**        TraitWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Traits_C::BndEvt__Widget_TraitList_K2Node_ComponentBoundEvent_106_OnSelectTrait__DelegateSignature(struct FTraitInfo* TraitInfo, class UWidget_Trait_C** TraitWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Traits.Widget_Traits_C.BndEvt__Widget_TraitList_K2Node_ComponentBoundEvent_106_OnSelectTrait__DelegateSignature");

	UWidget_Traits_C_BndEvt__Widget_TraitList_K2Node_ComponentBoundEvent_106_OnSelectTrait__DelegateSignature_Params params;
	params.TraitInfo = TraitInfo;
	params.TraitWidget = TraitWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Traits.Widget_Traits_C.BndEvt__ExitBtn_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Traits_C::BndEvt__ExitBtn_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Traits.Widget_Traits_C.BndEvt__ExitBtn_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Traits_C_BndEvt__ExitBtn_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Traits.Widget_Traits_C.BndEvt__AdvancedStatsBtn_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Traits_C::BndEvt__AdvancedStatsBtn_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Traits.Widget_Traits_C.BndEvt__AdvancedStatsBtn_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Traits_C_BndEvt__AdvancedStatsBtn_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Traits.Widget_Traits_C.BndEvt__SpendTraitBtn_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Traits_C::BndEvt__SpendTraitBtn_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Traits.Widget_Traits_C.BndEvt__SpendTraitBtn_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Traits_C_BndEvt__SpendTraitBtn_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Traits.Widget_Traits_C.BndEvt__ToggleDescription_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Traits_C::BndEvt__ToggleDescription_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Traits.Widget_Traits_C.BndEvt__ToggleDescription_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Traits_C_BndEvt__ToggleDescription_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Traits.Widget_Traits_C.RefocusScrollList
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Traits_C::RefocusScrollList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Traits.Widget_Traits_C.RefocusScrollList");

	UWidget_Traits_C_RefocusScrollList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Traits.Widget_Traits_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Traits_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Traits.Widget_Traits_C.Construct");

	UWidget_Traits_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Traits.Widget_Traits_C.ExecuteUbergraph_Widget_Traits
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Traits_C::ExecuteUbergraph_Widget_Traits(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Traits.Widget_Traits_C.ExecuteUbergraph_Widget_Traits");

	UWidget_Traits_C_ExecuteUbergraph_Widget_Traits_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Traits.Widget_Traits_C.AdvancedStats__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_Traits_C::AdvancedStats__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Traits.Widget_Traits_C.AdvancedStats__DelegateSignature");

	UWidget_Traits_C_AdvancedStats__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_TraitList_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_TraitList.Widget_TraitList_C.CreateBackgroundSlots
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_TraitList_C::CreateBackgroundSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitList.Widget_TraitList_C.CreateBackgroundSlots");

	UWidget_TraitList_C_CreateBackgroundSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TraitList.Widget_TraitList_C.SetShowLore
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ShowLore                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_TraitList_C::SetShowLore(bool* ShowLore)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitList.Widget_TraitList_C.SetShowLore");

	UWidget_TraitList_C_SetShowLore_Params params;
	params.ShowLore = ShowLore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TraitList.Widget_TraitList_C.GetVisibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_TraitList_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitList.Widget_TraitList_C.GetVisibility_1");

	UWidget_TraitList_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_TraitList.Widget_TraitList_C.ClearTraits
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_TraitList_C::ClearTraits()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitList.Widget_TraitList_C.ClearTraits");

	UWidget_TraitList_C_ClearTraits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TraitList.Widget_TraitList_C.IsEmpty
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_TraitList_C::IsEmpty(bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitList.Widget_TraitList_C.IsEmpty");

	UWidget_TraitList_C_IsEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Widget_TraitList.Widget_TraitList_C.AddTrait
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTraitInfo*             TraitInfo                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_TraitList_C::AddTrait(struct FTraitInfo* TraitInfo, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitList.Widget_TraitList_C.AddTrait");

	UWidget_TraitList_C_AddTrait_Params params;
	params.TraitInfo = TraitInfo;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TraitList.Widget_TraitList_C.HasTrait
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Trait                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_TraitList_C::HasTrait(class UClass** Trait, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitList.Widget_TraitList_C.HasTrait");

	UWidget_TraitList_C_HasTrait_Params params;
	params.Trait = Trait;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Widget_TraitList.Widget_TraitList_C.UpdateTraitList
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_TraitList_C::UpdateTraitList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitList.Widget_TraitList_C.UpdateTraitList");

	UWidget_TraitList_C_UpdateTraitList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TraitList.Widget_TraitList_C.Focus
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_TraitList_C::Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitList.Widget_TraitList_C.Focus");

	UWidget_TraitList_C_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TraitList.Widget_TraitList_C.BuildTraitList
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_TraitList_C::BuildTraitList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitList.Widget_TraitList_C.BuildTraitList");

	UWidget_TraitList_C_BuildTraitList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TraitList.Widget_TraitList_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_TraitList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitList.Widget_TraitList_C.Construct");

	UWidget_TraitList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TraitList.Widget_TraitList_C.OnTraitAdded_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Trait                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_TraitList_C::OnTraitAdded_Event_1(class UClass** Trait)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitList.Widget_TraitList_C.OnTraitAdded_Event_1");

	UWidget_TraitList_C_OnTraitAdded_Event_1_Params params;
	params.Trait = Trait;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TraitList.Widget_TraitList_C.ExecuteUbergraph_Widget_TraitList
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_TraitList_C::ExecuteUbergraph_Widget_TraitList(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitList.Widget_TraitList_C.ExecuteUbergraph_Widget_TraitList");

	UWidget_TraitList_C_ExecuteUbergraph_Widget_TraitList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TraitList.Widget_TraitList_C.OnTraitClicked__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTraitInfo*             TraitInfo                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWidget_TraitList_C::OnTraitClicked__DelegateSignature(struct FTraitInfo* TraitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitList.Widget_TraitList_C.OnTraitClicked__DelegateSignature");

	UWidget_TraitList_C_OnTraitClicked__DelegateSignature_Params params;
	params.TraitInfo = TraitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TraitList.Widget_TraitList_C.OnSelectTrait__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTraitInfo*             TraitInfo                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UWidget_Trait_C**        TraitWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_TraitList_C::OnSelectTrait__DelegateSignature(struct FTraitInfo* TraitInfo, class UWidget_Trait_C** TraitWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitList.Widget_TraitList_C.OnSelectTrait__DelegateSignature");

	UWidget_TraitList_C_OnSelectTrait__DelegateSignature_Params params;
	params.TraitInfo = TraitInfo;
	params.TraitWidget = TraitWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

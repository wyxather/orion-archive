// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_MainMenuItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_MainMenuItem.Widget_MainMenuItem_C.ForceLeftAlign
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_MainMenuItem_C::ForceLeftAlign(bool* Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MainMenuItem.Widget_MainMenuItem_C.ForceLeftAlign");

	UWidget_MainMenuItem_C_ForceLeftAlign_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MainMenuItem.Widget_MainMenuItem_C.SetItemBP
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MainMenuItem_C::SetItemBP(class UClass** ItemBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MainMenuItem.Widget_MainMenuItem_C.SetItemBP");

	UWidget_MainMenuItem_C_SetItemBP_Params params;
	params.ItemBP = ItemBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MainMenuItem.Widget_MainMenuItem_C.GetVisibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_MainMenuItem_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MainMenuItem.Widget_MainMenuItem_C.GetVisibility_1");

	UWidget_MainMenuItem_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_MainMenuItem.Widget_MainMenuItem_C.Get_BG_ColorAndOpacity_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UWidget_MainMenuItem_C::Get_BG_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MainMenuItem.Widget_MainMenuItem_C.Get_BG_ColorAndOpacity_1");

	UWidget_MainMenuItem_C_Get_BG_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_MainMenuItem.Widget_MainMenuItem_C.GetInspectInfo
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInspectInfo            InspectInfo                    (Parm, OutParm)

void UWidget_MainMenuItem_C::GetInspectInfo(struct FInspectInfo* InspectInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MainMenuItem.Widget_MainMenuItem_C.GetInspectInfo");

	UWidget_MainMenuItem_C_GetInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InspectInfo != nullptr)
		*InspectInfo = params.InspectInfo;
}


// Function Widget_MainMenuItem.Widget_MainMenuItem_C.SetInspectInfo
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInspectInfo*           InspectInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)
// unsigned char*                 Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MainMenuItem_C::SetInspectInfo(struct FInspectInfo* InspectInfo, unsigned char* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MainMenuItem.Widget_MainMenuItem_C.SetInspectInfo");

	UWidget_MainMenuItem_C_SetInspectInfo_Params params;
	params.InspectInfo = InspectInfo;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MainMenuItem.Widget_MainMenuItem_C.GetPrimaryStat
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInspectInfo*           InspectInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FInspectStat            InspectStat                    (Parm, OutParm)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_MainMenuItem_C::GetPrimaryStat(struct FInspectInfo* InspectInfo, struct FInspectStat* InspectStat, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MainMenuItem.Widget_MainMenuItem_C.GetPrimaryStat");

	UWidget_MainMenuItem_C_GetPrimaryStat_Params params;
	params.InspectInfo = InspectInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InspectStat != nullptr)
		*InspectStat = params.InspectStat;
	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_MainMenuItem.Widget_MainMenuItem_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_MainMenuItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MainMenuItem.Widget_MainMenuItem_C.Construct");

	UWidget_MainMenuItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MainMenuItem.Widget_MainMenuItem_C.ExecuteUbergraph_Widget_MainMenuItem
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MainMenuItem_C::ExecuteUbergraph_Widget_MainMenuItem(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MainMenuItem.Widget_MainMenuItem_C.ExecuteUbergraph_Widget_MainMenuItem");

	UWidget_MainMenuItem_C_ExecuteUbergraph_Widget_MainMenuItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

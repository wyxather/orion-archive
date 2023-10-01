// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_TraitStat_Minor_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_TraitStat_Minor.Widget_TraitStat_Minor_C.Refresh
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_TraitStat_Minor_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitStat_Minor.Widget_TraitStat_Minor_C.Refresh");

	UWidget_TraitStat_Minor_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TraitStat_Minor.Widget_TraitStat_Minor_C.Init
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInspectStat*           Stat                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FInspectStat*           CompareState                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          Comparing                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_TraitStat_Minor_C::Init(struct FInspectStat* Stat, struct FInspectStat* CompareState, bool* Comparing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitStat_Minor.Widget_TraitStat_Minor_C.Init");

	UWidget_TraitStat_Minor_C_Init_Params params;
	params.Stat = Stat;
	params.CompareState = CompareState;
	params.Comparing = Comparing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TraitStat_Minor.Widget_TraitStat_Minor_C.GetPostfix
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Out                            (Parm, OutParm)

void UWidget_TraitStat_Minor_C::GetPostfix(struct FText* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitStat_Minor.Widget_TraitStat_Minor_C.GetPostfix");

	UWidget_TraitStat_Minor_C_GetPostfix_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_TraitStat_Minor.Widget_TraitStat_Minor_C.GetPrefix
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Out                            (Parm, OutParm)

void UWidget_TraitStat_Minor_C::GetPrefix(struct FText* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitStat_Minor.Widget_TraitStat_Minor_C.GetPrefix");

	UWidget_TraitStat_Minor_C_GetPrefix_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_TraitStat_Minor.Widget_TraitStat_Minor_C.GetPrevStatValueLabel
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_TraitStat_Minor_C::GetPrevStatValueLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitStat_Minor.Widget_TraitStat_Minor_C.GetPrevStatValueLabel");

	UWidget_TraitStat_Minor_C_GetPrevStatValueLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_TraitStat_Minor.Widget_TraitStat_Minor_C.GetStatValueLabel
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_TraitStat_Minor_C::GetStatValueLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitStat_Minor.Widget_TraitStat_Minor_C.GetStatValueLabel");

	UWidget_TraitStat_Minor_C_GetStatValueLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_TraitStat_Minor.Widget_TraitStat_Minor_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_TraitStat_Minor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitStat_Minor.Widget_TraitStat_Minor_C.Construct");

	UWidget_TraitStat_Minor_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TraitStat_Minor.Widget_TraitStat_Minor_C.ExecuteUbergraph_Widget_TraitStat_Minor
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_TraitStat_Minor_C::ExecuteUbergraph_Widget_TraitStat_Minor(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitStat_Minor.Widget_TraitStat_Minor_C.ExecuteUbergraph_Widget_TraitStat_Minor");

	UWidget_TraitStat_Minor_C_ExecuteUbergraph_Widget_TraitStat_Minor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

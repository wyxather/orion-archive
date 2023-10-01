// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_AIDirector_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_AIDirector.Widget_AIDirector_C.Get_IntensityState_Text_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_AIDirector_C::Get_IntensityState_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_AIDirector.Widget_AIDirector_C.Get_IntensityState_Text_1");

	UWidget_AIDirector_C_Get_IntensityState_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_AIDirector.Widget_AIDirector_C.RefreshEncounterGroupList
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_AIDirector_C::RefreshEncounterGroupList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_AIDirector.Widget_AIDirector_C.RefreshEncounterGroupList");

	UWidget_AIDirector_C_RefreshEncounterGroupList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_AIDirector.Widget_AIDirector_C.GetCurrentAIDirector
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAIDirector*             Director                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_AIDirector_C::GetCurrentAIDirector(class UAIDirector** Director)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_AIDirector.Widget_AIDirector_C.GetCurrentAIDirector");

	UWidget_AIDirector_C_GetCurrentAIDirector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Director != nullptr)
		*Director = params.Director;
}


// Function Widget_AIDirector.Widget_AIDirector_C.GetVisibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_AIDirector_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_AIDirector.Widget_AIDirector_C.GetVisibility_1");

	UWidget_AIDirector_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_AIDirector.Widget_AIDirector_C.OnGroupAdded_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEncounterGroupInstance** EncounterGroup                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_AIDirector_C::OnGroupAdded_Event_1(class UEncounterGroupInstance** EncounterGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_AIDirector.Widget_AIDirector_C.OnGroupAdded_Event_1");

	UWidget_AIDirector_C_OnGroupAdded_Event_1_Params params;
	params.EncounterGroup = EncounterGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_AIDirector.Widget_AIDirector_C.OnGroupRemoved_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEncounterGroupInstance** EncounterGroup                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_AIDirector_C::OnGroupRemoved_Event_1(class UEncounterGroupInstance** EncounterGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_AIDirector.Widget_AIDirector_C.OnGroupRemoved_Event_1");

	UWidget_AIDirector_C_OnGroupRemoved_Event_1_Params params;
	params.EncounterGroup = EncounterGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_AIDirector.Widget_AIDirector_C.SetAIDirector
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAIDirector**            Director                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_AIDirector_C::SetAIDirector(class UAIDirector** Director)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_AIDirector.Widget_AIDirector_C.SetAIDirector");

	UWidget_AIDirector_C_SetAIDirector_Params params;
	params.Director = Director;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_AIDirector.Widget_AIDirector_C.Tick
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_AIDirector_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_AIDirector.Widget_AIDirector_C.Tick");

	UWidget_AIDirector_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_AIDirector.Widget_AIDirector_C.ExecuteUbergraph_Widget_AIDirector
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_AIDirector_C::ExecuteUbergraph_Widget_AIDirector(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_AIDirector.Widget_AIDirector_C.ExecuteUbergraph_Widget_AIDirector");

	UWidget_AIDirector_C_ExecuteUbergraph_Widget_AIDirector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

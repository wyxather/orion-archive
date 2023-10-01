// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_QuestAndMap_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_QuestAndMap.Widget_QuestAndMap_C.Refresh
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_QuestAndMap_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestAndMap.Widget_QuestAndMap_C.Refresh");

	UWidget_QuestAndMap_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_QuestAndMap.Widget_QuestAndMap_C.InitMiniMap
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_QuestAndMap_C::InitMiniMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestAndMap.Widget_QuestAndMap_C.InitMiniMap");

	UWidget_QuestAndMap_C_InitMiniMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_QuestAndMap.Widget_QuestAndMap_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_QuestAndMap_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestAndMap.Widget_QuestAndMap_C.Construct");

	UWidget_QuestAndMap_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_QuestAndMap.Widget_QuestAndMap_C.OnQuestLoaded_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQuest**                 Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_QuestAndMap_C::OnQuestLoaded_Event_1(class AQuest** Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestAndMap.Widget_QuestAndMap_C.OnQuestLoaded_Event_1");

	UWidget_QuestAndMap_C_OnQuestLoaded_Event_1_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_QuestAndMap.Widget_QuestAndMap_C.OnQuestObjectivesUpdated_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQuest**                 Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_QuestAndMap_C::OnQuestObjectivesUpdated_Event_1(class AQuest** Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestAndMap.Widget_QuestAndMap_C.OnQuestObjectivesUpdated_Event_1");

	UWidget_QuestAndMap_C_OnQuestObjectivesUpdated_Event_1_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_QuestAndMap.Widget_QuestAndMap_C.Destruct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_QuestAndMap_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestAndMap.Widget_QuestAndMap_C.Destruct");

	UWidget_QuestAndMap_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_QuestAndMap.Widget_QuestAndMap_C.BndEvt__ExitBtn_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_QuestAndMap_C::BndEvt__ExitBtn_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestAndMap.Widget_QuestAndMap_C.BndEvt__ExitBtn_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_QuestAndMap_C_BndEvt__ExitBtn_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_QuestAndMap.Widget_QuestAndMap_C.ExecuteUbergraph_Widget_QuestAndMap
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_QuestAndMap_C::ExecuteUbergraph_Widget_QuestAndMap(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestAndMap.Widget_QuestAndMap_C.ExecuteUbergraph_Widget_QuestAndMap");

	UWidget_QuestAndMap_C_ExecuteUbergraph_Widget_QuestAndMap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

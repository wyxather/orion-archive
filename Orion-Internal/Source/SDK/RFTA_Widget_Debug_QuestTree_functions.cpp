// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Debug_QuestTree_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Debug_QuestTree.Widget_Debug_QuestTree_C.AddChildren
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent**        Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Indent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Debug_QuestTree_C::AddChildren(class USceneComponent** Component, int* Indent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Debug_QuestTree.Widget_Debug_QuestTree_C.AddChildren");

	UWidget_Debug_QuestTree_C_AddChildren_Params params;
	params.Component = Component;
	params.Indent = Indent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Debug_QuestTree.Widget_Debug_QuestTree_C.BuildTree
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestComponent**        QuestComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Indent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Debug_QuestTree_C::BuildTree(class UQuestComponent** QuestComponent, int* Indent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Debug_QuestTree.Widget_Debug_QuestTree_C.BuildTree");

	UWidget_Debug_QuestTree_C_BuildTree_Params params;
	params.QuestComponent = QuestComponent;
	params.Indent = Indent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Debug_QuestTree.Widget_Debug_QuestTree_C.Init
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARemnantQuest**          Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Debug_QuestTree_C::Init(class ARemnantQuest** Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Debug_QuestTree.Widget_Debug_QuestTree_C.Init");

	UWidget_Debug_QuestTree_C_Init_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Debug_QuestTree.Widget_Debug_QuestTree_C.OnComponentClick__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestComponent**        QuestComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Debug_QuestTree_C::OnComponentClick__DelegateSignature(class UQuestComponent** QuestComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Debug_QuestTree.Widget_Debug_QuestTree_C.OnComponentClick__DelegateSignature");

	UWidget_Debug_QuestTree_C_OnComponentClick__DelegateSignature_Params params;
	params.QuestComponent = QuestComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Debug_QuestTree.Widget_Debug_QuestTree_C.OnComponentSelected__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestComponent**        QuestComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Debug_QuestTree_C::OnComponentSelected__DelegateSignature(class UQuestComponent** QuestComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Debug_QuestTree.Widget_Debug_QuestTree_C.OnComponentSelected__DelegateSignature");

	UWidget_Debug_QuestTree_C_OnComponentSelected__DelegateSignature_Params params;
	params.QuestComponent = QuestComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

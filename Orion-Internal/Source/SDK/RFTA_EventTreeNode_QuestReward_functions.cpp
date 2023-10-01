// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_EventTreeNode_QuestReward_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EventTreeNode_QuestReward.EventTreeNode_QuestReward_C.Begin
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// class UEventTreeComponent**    Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventTreeNode_QuestReward_C::Begin(class UEventTreeComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTreeNode_QuestReward.EventTreeNode_QuestReward_C.Begin");

	UEventTreeNode_QuestReward_C_Begin_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventTreeNode_QuestReward.EventTreeNode_QuestReward_C.ExecuteUbergraph_EventTreeNode_QuestReward
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventTreeNode_QuestReward_C::ExecuteUbergraph_EventTreeNode_QuestReward(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTreeNode_QuestReward.EventTreeNode_QuestReward_C.ExecuteUbergraph_EventTreeNode_QuestReward");

	UEventTreeNode_QuestReward_C_ExecuteUbergraph_EventTreeNode_QuestReward_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

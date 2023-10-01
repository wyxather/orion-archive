// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_QuestDebug_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dialog_QuestDebug.Dialog_QuestDebug_C.InpActEvt_Menu_K2Node_InputActionEvent_1
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ADialog_QuestDebug_C::InpActEvt_Menu_K2Node_InputActionEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_QuestDebug.Dialog_QuestDebug_C.InpActEvt_Menu_K2Node_InputActionEvent_1");

	ADialog_QuestDebug_C_InpActEvt_Menu_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_QuestDebug.Dialog_QuestDebug_C.InpActEvt_Shift_F12_K2Node_InputKeyEvent_1
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ADialog_QuestDebug_C::InpActEvt_Shift_F12_K2Node_InputKeyEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_QuestDebug.Dialog_QuestDebug_C.InpActEvt_Shift_F12_K2Node_InputKeyEvent_1");

	ADialog_QuestDebug_C_InpActEvt_Shift_F12_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_QuestDebug.Dialog_QuestDebug_C.ExecuteUbergraph_Dialog_QuestDebug
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADialog_QuestDebug_C::ExecuteUbergraph_Dialog_QuestDebug(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_QuestDebug.Dialog_QuestDebug_C.ExecuteUbergraph_Dialog_QuestDebug");

	ADialog_QuestDebug_C_ExecuteUbergraph_Dialog_QuestDebug_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

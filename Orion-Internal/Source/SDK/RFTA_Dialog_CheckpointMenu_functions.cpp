// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_CheckpointMenu_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dialog_CheckpointMenu.Dialog_CheckpointMenu_C.SetContext
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADialog_CheckpointMenu_C::SetContext(class AActor** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_CheckpointMenu.Dialog_CheckpointMenu_C.SetContext");

	ADialog_CheckpointMenu_C_SetContext_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_CheckpointMenu.Dialog_CheckpointMenu_C.InpActEvt_Menu_K2Node_InputActionEvent_1
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ADialog_CheckpointMenu_C::InpActEvt_Menu_K2Node_InputActionEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_CheckpointMenu.Dialog_CheckpointMenu_C.InpActEvt_Menu_K2Node_InputActionEvent_1");

	ADialog_CheckpointMenu_C_InpActEvt_Menu_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_CheckpointMenu.Dialog_CheckpointMenu_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ADialog_CheckpointMenu_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_CheckpointMenu.Dialog_CheckpointMenu_C.ReceiveBeginPlay");

	ADialog_CheckpointMenu_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_CheckpointMenu.Dialog_CheckpointMenu_C.OnNotifyTakeDamage_Event_1
// 00007FF6F8B35350
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ADialog_CheckpointMenu_C::OnNotifyTakeDamage_Event_1(struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_CheckpointMenu.Dialog_CheckpointMenu_C.OnNotifyTakeDamage_Event_1");

	ADialog_CheckpointMenu_C_OnNotifyTakeDamage_Event_1_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_CheckpointMenu.Dialog_CheckpointMenu_C.OnEndDialog
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ADialog_CheckpointMenu_C::OnEndDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_CheckpointMenu.Dialog_CheckpointMenu_C.OnEndDialog");

	ADialog_CheckpointMenu_C_OnEndDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_CheckpointMenu.Dialog_CheckpointMenu_C.OnBeginDialog
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ADialog_CheckpointMenu_C::OnBeginDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_CheckpointMenu.Dialog_CheckpointMenu_C.OnBeginDialog");

	ADialog_CheckpointMenu_C_OnBeginDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_CheckpointMenu.Dialog_CheckpointMenu_C.ExecuteUbergraph_Dialog_CheckpointMenu
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADialog_CheckpointMenu_C::ExecuteUbergraph_Dialog_CheckpointMenu(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_CheckpointMenu.Dialog_CheckpointMenu_C.ExecuteUbergraph_Dialog_CheckpointMenu");

	ADialog_CheckpointMenu_C_ExecuteUbergraph_Dialog_CheckpointMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

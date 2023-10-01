// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_SelectArchetype_Intro_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.ToggleIncreaseShadowResolution
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Increase                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADialog_SelectArchetype_Intro_C::ToggleIncreaseShadowResolution(bool* Increase)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.ToggleIncreaseShadowResolution");

	ADialog_SelectArchetype_Intro_C_ToggleIncreaseShadowResolution_Params params;
	params.Increase = Increase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.FetchVisuals
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVisualSlot>     Out                            (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)

void ADialog_SelectArchetype_Intro_C::FetchVisuals(TArray<struct FVisualSlot>* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.FetchVisuals");

	ADialog_SelectArchetype_Intro_C_FetchVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.FetchGender
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGender                        Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADialog_SelectArchetype_Intro_C::FetchGender(EGender* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.FetchGender");

	ADialog_SelectArchetype_Intro_C_FetchGender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.RemoveEquipment
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADialog_SelectArchetype_Intro_C::RemoveEquipment()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.RemoveEquipment");

	ADialog_SelectArchetype_Intro_C_RemoveEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.ToggleInfoCards
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ADialog_SelectArchetype_Intro_C::ToggleInfoCards()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.ToggleInfoCards");

	ADialog_SelectArchetype_Intro_C_ToggleInfoCards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.GetPreviousArchetype
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  Archetype                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADialog_SelectArchetype_Intro_C::GetPreviousArchetype(class UClass** Archetype)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.GetPreviousArchetype");

	ADialog_SelectArchetype_Intro_C_GetPreviousArchetype_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Archetype != nullptr)
		*Archetype = params.Archetype;
}


// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.GetNextArchetype
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  Archetype                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADialog_SelectArchetype_Intro_C::GetNextArchetype(class UClass** Archetype)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.GetNextArchetype");

	ADialog_SelectArchetype_Intro_C_GetNextArchetype_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Archetype != nullptr)
		*Archetype = params.Archetype;
}


// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.GetCharacterForArchetype
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass**                 Archetype                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACustomizable_Create_Character_Base_C* Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADialog_SelectArchetype_Intro_C::GetCharacterForArchetype(class UClass** Archetype, class ACustomizable_Create_Character_Base_C** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.GetCharacterForArchetype");

	ADialog_SelectArchetype_Intro_C_GetCharacterForArchetype_Params params;
	params.Archetype = Archetype;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;
}


// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.SelectArchetype
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Archetype                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADialog_SelectArchetype_Intro_C::SelectArchetype(class UClass** Archetype)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.SelectArchetype");

	ADialog_SelectArchetype_Intro_C_SelectArchetype_Params params;
	params.Archetype = Archetype;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.ConfirmArchetype
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ADialog_SelectArchetype_Intro_C::ConfirmArchetype()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.ConfirmArchetype");

	ADialog_SelectArchetype_Intro_C_ConfirmArchetype_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.InitializerCharacter
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACustomizable_Create_Character_Base_C** Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass**                 Archetype                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADialog_SelectArchetype_Intro_C::InitializerCharacter(class ACustomizable_Create_Character_Base_C** Character, class UClass** Archetype)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.InitializerCharacter");

	ADialog_SelectArchetype_Intro_C_InitializerCharacter_Params params;
	params.Character = Character;
	params.Archetype = Archetype;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.DeInitialize
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ADialog_SelectArchetype_Intro_C::DeInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.DeInitialize");

	ADialog_SelectArchetype_Intro_C_DeInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.Initialize
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADialog_SelectArchetype_Intro_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.Initialize");

	ADialog_SelectArchetype_Intro_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.Cheat
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ADialog_SelectArchetype_Intro_C::Cheat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.Cheat");

	ADialog_SelectArchetype_Intro_C_Cheat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ADialog_SelectArchetype_Intro_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1");

	ADialog_SelectArchetype_Intro_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.InpActEvt_UI_CursorRight_K2Node_InputActionEvent_3
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ADialog_SelectArchetype_Intro_C::InpActEvt_UI_CursorRight_K2Node_InputActionEvent_3(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.InpActEvt_UI_CursorRight_K2Node_InputActionEvent_3");

	ADialog_SelectArchetype_Intro_C_InpActEvt_UI_CursorRight_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.InpActEvt_UI_CursorLeft_K2Node_InputActionEvent_2
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ADialog_SelectArchetype_Intro_C::InpActEvt_UI_CursorLeft_K2Node_InputActionEvent_2(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.InpActEvt_UI_CursorLeft_K2Node_InputActionEvent_2");

	ADialog_SelectArchetype_Intro_C_InpActEvt_UI_CursorLeft_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.InpActEvt_UI_Y_K2Node_InputActionEvent_1
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ADialog_SelectArchetype_Intro_C::InpActEvt_UI_Y_K2Node_InputActionEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.InpActEvt_UI_Y_K2Node_InputActionEvent_1");

	ADialog_SelectArchetype_Intro_C_InpActEvt_UI_Y_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.OnEndDialog
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ADialog_SelectArchetype_Intro_C::OnEndDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.OnEndDialog");

	ADialog_SelectArchetype_Intro_C_OnEndDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.UnhideCharacters
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ADialog_SelectArchetype_Intro_C::UnhideCharacters()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.UnhideCharacters");

	ADialog_SelectArchetype_Intro_C_UnhideCharacters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.OnBeginDialog
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ADialog_SelectArchetype_Intro_C::OnBeginDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.OnBeginDialog");

	ADialog_SelectArchetype_Intro_C_OnBeginDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.ExecuteUbergraph_Dialog_SelectArchetype_Intro
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADialog_SelectArchetype_Intro_C::ExecuteUbergraph_Dialog_SelectArchetype_Intro(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.ExecuteUbergraph_Dialog_SelectArchetype_Intro");

	ADialog_SelectArchetype_Intro_C_ExecuteUbergraph_Dialog_SelectArchetype_Intro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.Archetype Selected__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URemnantArchetype**      Archetype                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADialog_SelectArchetype_Intro_C::Archetype_Selected__DelegateSignature(class URemnantArchetype** Archetype)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.Archetype Selected__DelegateSignature");

	ADialog_SelectArchetype_Intro_C_Archetype_Selected__DelegateSignature_Params params;
	params.Archetype = Archetype;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

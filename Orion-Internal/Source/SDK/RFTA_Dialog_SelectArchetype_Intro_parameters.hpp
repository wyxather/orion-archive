#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_SelectArchetype_Intro_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.ToggleIncreaseShadowResolution
struct ADialog_SelectArchetype_Intro_C_ToggleIncreaseShadowResolution_Params
{
	bool*                                              Increase;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.FetchVisuals
struct ADialog_SelectArchetype_Intro_C_FetchVisuals_Params
{
	TArray<struct FVisualSlot>                         Out;                                                      // (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
};

// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.FetchGender
struct ADialog_SelectArchetype_Intro_C_FetchGender_Params
{
	EGender                                            Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.RemoveEquipment
struct ADialog_SelectArchetype_Intro_C_RemoveEquipment_Params
{
};

// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.ToggleInfoCards
struct ADialog_SelectArchetype_Intro_C_ToggleInfoCards_Params
{
};

// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.GetPreviousArchetype
struct ADialog_SelectArchetype_Intro_C_GetPreviousArchetype_Params
{
	class UClass*                                      Archetype;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.GetNextArchetype
struct ADialog_SelectArchetype_Intro_C_GetNextArchetype_Params
{
	class UClass*                                      Archetype;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.GetCharacterForArchetype
struct ADialog_SelectArchetype_Intro_C_GetCharacterForArchetype_Params
{
	class UClass**                                     Archetype;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACustomizable_Create_Character_Base_C*       Character;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.SelectArchetype
struct ADialog_SelectArchetype_Intro_C_SelectArchetype_Params
{
	class UClass**                                     Archetype;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.ConfirmArchetype
struct ADialog_SelectArchetype_Intro_C_ConfirmArchetype_Params
{
};

// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.InitializerCharacter
struct ADialog_SelectArchetype_Intro_C_InitializerCharacter_Params
{
	class ACustomizable_Create_Character_Base_C**      Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass**                                     Archetype;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.DeInitialize
struct ADialog_SelectArchetype_Intro_C_DeInitialize_Params
{
};

// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.Initialize
struct ADialog_SelectArchetype_Intro_C_Initialize_Params
{
};

// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.Cheat
struct ADialog_SelectArchetype_Intro_C_Cheat_Params
{
};

// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1
struct ADialog_SelectArchetype_Intro_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.InpActEvt_UI_CursorRight_K2Node_InputActionEvent_3
struct ADialog_SelectArchetype_Intro_C_InpActEvt_UI_CursorRight_K2Node_InputActionEvent_3_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.InpActEvt_UI_CursorLeft_K2Node_InputActionEvent_2
struct ADialog_SelectArchetype_Intro_C_InpActEvt_UI_CursorLeft_K2Node_InputActionEvent_2_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.InpActEvt_UI_Y_K2Node_InputActionEvent_1
struct ADialog_SelectArchetype_Intro_C_InpActEvt_UI_Y_K2Node_InputActionEvent_1_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.OnEndDialog
struct ADialog_SelectArchetype_Intro_C_OnEndDialog_Params
{
};

// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.UnhideCharacters
struct ADialog_SelectArchetype_Intro_C_UnhideCharacters_Params
{
};

// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.OnBeginDialog
struct ADialog_SelectArchetype_Intro_C_OnBeginDialog_Params
{
};

// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.ExecuteUbergraph_Dialog_SelectArchetype_Intro
struct ADialog_SelectArchetype_Intro_C_ExecuteUbergraph_Dialog_SelectArchetype_Intro_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Dialog_SelectArchetype_Intro.Dialog_SelectArchetype_Intro_C.Archetype Selected__DelegateSignature
struct ADialog_SelectArchetype_Intro_C_Archetype_Selected__DelegateSignature_Params
{
	class URemnantArchetype**                          Archetype;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

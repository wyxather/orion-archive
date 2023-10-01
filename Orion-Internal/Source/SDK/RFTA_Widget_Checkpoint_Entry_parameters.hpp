#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Checkpoint_Entry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.ReturnToSurvivalLabyrinth
struct UWidget_Checkpoint_Entry_C_ReturnToSurvivalLabyrinth_Params
{
};

// Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.DoActionConfirmed
struct UWidget_Checkpoint_Entry_C_DoActionConfirmed_Params
{
};

// Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.ShowConfirmDialog
struct UWidget_Checkpoint_Entry_C_ShowConfirmDialog_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      Caoption;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.TravelToLastCheckpoint
struct UWidget_Checkpoint_Entry_C_TravelToLastCheckpoint_Params
{
};

// Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.IsFocusedVisibility
struct UWidget_Checkpoint_Entry_C_IsFocusedVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.CanTravel
struct UWidget_Checkpoint_Entry_C_CanTravel_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.LeaveDungeon
struct UWidget_Checkpoint_Entry_C_LeaveDungeon_Params
{
};

// Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.ReturnToTown
struct UWidget_Checkpoint_Entry_C_ReturnToTown_Params
{
};

// Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.FastTravel
struct UWidget_Checkpoint_Entry_C_FastTravel_Params
{
};

// Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.DoAction
struct UWidget_Checkpoint_Entry_C_DoAction_Params
{
};

// Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.OnLoaded_74207D154806E394FF9607BD3C1D42DE
struct UWidget_Checkpoint_Entry_C_OnLoaded_74207D154806E394FF9607BD3C1D42DE_Params
{
	class UObject**                                    Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1278_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Checkpoint_Entry_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_1278_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1315_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Checkpoint_Entry_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_1315_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.Construct
struct UWidget_Checkpoint_Entry_C_Construct_Params
{
};

// Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Checkpoint_Entry_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.OnDialogResult
struct UWidget_Checkpoint_Entry_C_OnDialogResult_Params
{
	struct FName*                                      Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C.ExecuteUbergraph_Widget_Checkpoint_Entry
struct UWidget_Checkpoint_Entry_C_ExecuteUbergraph_Widget_Checkpoint_Entry_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
